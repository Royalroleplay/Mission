#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Switching it up and making it prettier..
*/
private["_option","_state"];
_option = (_this select 0);
_state = (_this select 1);

switch(_option) do {
	case "tags": {
		if(_state isEqualTo 1) then {
			life_tagson = true;
			LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
		} else {
			life_tagson = !true;
			[LIFE_ID_PlayerTags,"onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
	};
	
	case "objects": {
		if(_state isEqualTo 1) then {
			life_revealObjects = true;
			LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;
		} else {
			life_revealObjects = !true;
			[LIFE_ID_RevealObjects,"onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
	};
	
	case "sidechat": {
		life_sidechat = false;
		[player,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];
	};
};