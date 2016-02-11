#include "..\script_macros.hpp"
/*
	Master client initialization file
*/
if(!hasInterface) exitWith {};
	
enableRadio false;
life_firstSpawn = true;
life_session_completed = false;
life_session_tries = 0;
private["_handle","_timeStamp"];
0 cutText["Setting up client, please wait...","BLACK FADED"];
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log "------------------------------------------------------------------------------------------------------";
waitUntil {!isNull player && player == player}; //Wait till the player is ready
[] call compile PreprocessFileLineNumbers "core\clientValidator.sqf";

//Set bank amount for new players
switch (playerSide) do {
	case west: {
		life_atmbank = LIFE_SETTINGS(getNumber,"bank_cop");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
	};
	case civilian: {
		life_atmbank = LIFE_SETTINGS(getNumber,"bank_civ");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
	};
	case independent: {
		life_atmbank = LIFE_SETTINGS(getNumber,"bank_med");
		life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
	};
};

//Setup initial client core functions
diag_log "::Life Client:: Initialization Variables";
[] call compile PreprocessFileLineNumbers "core\configuration.sqf";

diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil {TON_fnc_clientGangLeader})};

diag_log "::Life Client:: Received server functions.";
0 cutText ["Waiting for the server to be ready...","BLACK FADED"];
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil{!isNil "life_server_isReady"};

if(!isNil "life_server_extDB_notLoaded" && {life_server_extDB_notLoaded != ""}) exitWith {
	diag_log life_server_extDB_notLoaded;
	999999 cutText [life_server_extDB_notLoaded,"BLACK FADED"];
	999999 cutFadeOut 99999999;
};

[] call MBF_GameLoop_fnc_init;
[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText["Finishing client setup procedure","BLACK FADED"];
0 cutFadeOut 9999999;

switch (playerSide) do {
	case west: {
		_handle = [] spawn life_fnc_initCop;
		waitUntil {scriptDone _handle};
	};
	case civilian: {
		//Initialize Civilian Settings
		_handle = [] spawn life_fnc_initCiv;
		waitUntil {scriptDone _handle};
	};
	case independent: {
		//Initialize Medics and blah
		_handle = [] spawn life_fnc_initMedic;
		waitUntil {scriptDone _handle};
	};
};

player setVariable ["restrained",false,true];
player setVariable ["tiedup",false,true];
player setVariable ["Escorting",false,true];
player setVariable ["transporting",false,true];

diag_log "Past Settings Init";
[] execFSM "core\fsm\client.fsm";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
player addRating 99999999;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log format["                End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "------------------------------------------------------------------------------------------------------";

//life_sidechat = false;
//[player,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];
0 cutText ["","BLACK IN"];
[] call life_fnc_hudSetup;

/* Sync Data every 5 Minutes */
[(60*5), SOCK_fnc_updateRequest, [], true] call MBF_GameLoop_fnc_addEvent;

/* Set up frame-by-frame handlers */
LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player setVariable ["steam64ID",getPlayerUID player];
player setVariable ["realname",profileName,true];

life_fnc_moveIn = compileFinal
"
	player moveInCargo (_this select 0);
";

[] spawn life_fnc_survival;

//execVM "core\tfr_channellock.sqf";

[] spawn life_fnc_playerVehicleKeys;

CONSTVAR(life_paycheck); //Make the paycheck static.
if(LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};

//[] call MBF_Phone_fnc_initPhone;

[] spawn {
	prison_building = (nearestObjects [[9643,10082,0], ["Land_MainSection"], 200]) select 0;
	waitUntil {!isNil "prison_break_obj"};
	prison_break_obj addAction ["Hack Prison", { [] call life_fnc_jailBreak; }];	
};

[] spawn {
	bank_building = (nearestObjects [[8608,6601,0], ["Land_CommonwealthBank"], 200]) select 0;
	
	if(playerSide == civilian) then {
	
		waitUntil {!isNil "bank_obj"};
		bank_obj addAction ["Hack Bank Vault", { [] spawn life_fnc_robBank; }];
		waitUntil {!isNil "bank_cash"};
		bank_cash addAction ["Take Cash", { [] spawn life_fnc_takeBankCash; }];	
	} else {
	
		waitUntil {!isNil "bank_obj"};
		bank_obj addAction ["Reset Bank", { [] spawn life_fnc_resetBank; }];
	};
};

[] spawn {
	waitUntil {!isNil "life_atmbank"};

	life_bankCache = life_atmbank;
	uiSleep 0.5;
	while {true} do {
		if((typeName life_atmbank) != "SCALAR") then {
			life_atmbank = 0;
			life_atmbank = life_bankCache;
			hint "Fixed Bank Cash Error";
		};
		if(isNil "life_atmbank") then {
			life_atmbank = 0;
			life_atmbank = life_bankCache;
			hint "Fixed Bank Cash Error";
		};
		if(life_bankCache != life_atmbank) then {
			life_bankCache = life_atmbank
		};
		uiSleep 0.5;
	};
};

[] spawn {
	while {true} do {
		if(player getVariable ["holstered",false]) then {
			if(player != vehicle player) then {
				waitUntil{player == vehicle player};
				if(currentWeapon player == life_curWep_h) then {
					life_curWep_h = currentWeapon player;
					player action ["SwitchWeapon", player, player, 100];
					player switchCamera cameraView;
					[player,"AmovPercMstpSnonWnonDnon"] remoteExecCall ["life_fnc_animSync"];
					player switchMove "AmovPercMstpSnonWnonDnon"; 
				};
			} else {
				waitUntil{player != vehicle player};
			};
		};
	};

	sleep 0.1;
};