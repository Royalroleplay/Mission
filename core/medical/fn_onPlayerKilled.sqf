#include "..\..\script_macros.hpp"
/*
	File: fn_onPlayerKilled.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	When the player dies collect various information about that player
	and pull up the death dialog / camera functionality.
*/
params [
	["_unit",objNull,[objNull]],
	["_killer",objNull,[objNull]]
];

disableSerialization;

//Set some vars

if(!isNull _killer && {_killer != _unit} ) then {
	_unit setVariable["shot",true,true];
};

_unit setVariable ["Revive",FALSE,TRUE]; //Set the corpse to a revivable state.
_unit setVariable ["name",profileName,TRUE]; //Set my name so they can say my name.
_unit setVariable ["restrained",FALSE,TRUE];
_unit setVariable ["Escorting",FALSE,TRUE];
_unit setVariable ["transporting",FALSE,TRUE]; //Why the fuck do I have this? Is it used?
_unit setVariable ["steam64id",(getPlayerUID player),true]; //Set the UID.
_unit removeWeapon (primaryWeapon _unit);

//Setup our camera view
life_deathCamera  = "CAMERA" camCreate (getPosATL _unit);
showCinemaBorder TRUE;
life_deathCamera cameraEffect ["Internal","Back"];
createDialog "DeathScreen";
life_deathCamera camSetTarget _unit;
life_deathCamera camSetRelPos [0,3.5,4.5];
life_deathCamera camSetFOV .5;
life_deathCamera camSetFocus [50,0];
life_deathCamera camCommit 0;

(findDisplay 7300) displaySetEventHandler ["KeyDown","if((_this select 1) == 1) then {true}"]; //Block the ESC menu

//Create a thread for something?
_unit spawn {
	private["_maxTime","_RespawnBtn","_Timer"];
	disableSerialization;
	_RespawnBtn = ((findDisplay 7300) displayCtrl 7302);
	_Timer = ((findDisplay 7300) displayCtrl 7301);
	
	_maxTime = time + (life_respawn_timer * 60);
	_RespawnBtn ctrlEnable false;
	waitUntil {_Timer ctrlSetText format[localize "STR_Medic_Respawn",[(_maxTime - time),"MM:SS.MS"] call BIS_fnc_secondsToString]; 
	round(_maxTime - time) <= 0 OR isNull _this};
	_RespawnBtn ctrlEnable true;
	_Timer ctrlSetText localize "STR_Medic_Respawn_2";
};

[] spawn life_fnc_deathScreen;

//Create a thread to follow with some what precision view of the corpse.
[_unit] spawn {
	private["_unit"];
	_unit = _this select 0;
	waitUntil {if(speed _unit == 0) exitWith {true}; life_deathCamera camSetTarget _unit; life_deathCamera camSetRelPos [0,3.5,4.5]; life_deathCamera camCommit 0;};
};

//Make the killer wanted
if(!isNull _killer && {_killer != _unit} && {side _killer != west} && {alive _killer}) then {
	if(vehicle _killer isKindOf "LandVehicle") then {
		[getPlayerUID _killer,_killer getVariable ["realname",name _killer],"187V"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
		//Get rid of this if you don't want automatic vehicle license removal.
		if(!local _killer) then {
			[2] remoteExecCall ["life_fnc_removeLicenses",_killer];
		};
	} else {
		[getPlayerUID _killer,_killer getVariable ["realname",name _killer],"187"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
		
		if(!local _killer) then {
			[3] remoteExecCall ["life_fnc_removeLicenses",_killer];
		};
	};
};

life_save_gear = [_unit] call life_fnc_fetchDeadGear;

//Killed by cop stuff...
if(side _killer == west && playerSide != west) then {
	life_copRecieve = _killer;
	//Did I rob the federal reserve?
	if(!life_use_atm && {life_cash > 0}) then {
		[format[localize "STR_Cop_RobberDead",[life_cash] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		life_cash = 0;
	};
};

if(!isNull _killer && {_killer != _unit}) then {
	life_removeWanted = true;
};

_handle = [_unit] spawn life_fnc_dropItems;
waitUntil {scriptDone _handle};

life_hunger = 100;
life_thirst = 100;
life_carryWeight = 0;
life_cash = 0;

[] call life_fnc_hudUpdate; //Get our HUD updated.
[player,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;

[_killer] spawn {
	_killer = _this select 0;	
	cutText[format["You were killed by %1",(_killer getVariable ["realname",name _killer])],"PLAIN",2];
	uiSleep 20;
	cutText["","PLAIN"];
};