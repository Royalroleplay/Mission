#include "..\script_macros.hpp"
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the medic..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

player setvariable ["cse_sys_medical_enabled", true, true];

if((FETCH_CONST(life_medicLevel)) < 1 && (FETCH_CONST(life_adminlevel) == 0)) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	uiSleep 35;
};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

player setVariable ["ace_medical_medicClass",1,true];

/*

Custom Actions

~CREATE ACTION~

0: Action name <STRING>
1: Name of the action shown in the menu <STRING>
2: Icon <STRING>
3: Statement <CODE>
4: Condition <CODE>
5: Insert children code <CODE> (Optional)
6: Action parameters <ANY> (Optional)
7: Position (Position or Selection Name) <POSITION> or <STRING> (Optional)
8: Distance <NUMBER> (Optional)
9: Other parameters <ARRAY> (Optional)

~ADD ACTION~
0: TypeOf of the class <STRING>
1: Type of action, 0 for actions, 1 for self-actions <NUMBER>
2: Parent path of the new action <ARRAY>
3: Action <ARRAY>
*/

//start_revive = ["Start Revive","Start Revive","",{ cursorTarget setVariable["start_revive",true,true]; },{true},{}] call ace_interact_menu_fnc_createAction;
//[MyUnitClass, 0, ["ACE_MainActions"], start_revive] call ace_interact_menu_fnc_addActionToClass;