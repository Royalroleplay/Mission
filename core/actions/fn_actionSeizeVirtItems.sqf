/*
	File: fn_actionSeizeVirtItems.sqf

	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the searching process.
*/
params [["_unit",objNull,[objNull]]];
if(isNull _unit) exitWith {};
hint localize "STR_NOTF_Searching";
uiSleep 2;
if(player distance _unit > 5 || !alive player || !alive _unit) exitWith {hint localize "STR_NOTF_CannotSearchPerson"};
[player] remoteExec ["life_fnc_seizeVirtItems",_unit];
life_action_inUse = true;