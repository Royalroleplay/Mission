#include "..\..\script_macros.hpp"
/*
	File: fn_knockedOut.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts and monitors the knocked out state.
*/
private "_obj";
params [
	["_target",objNull,[objNull]],
	["_who","",[""]]
];

if(isNull _target) exitWith {};
if(_target != player) exitWith {};
if(_who isEqualTo "") exitWith {};

titleText[format[localize "STR_Civ_KnockedOut",_who],"PLAIN"];
player playMoveNow "Incapacitated";

_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
_obj setPosATL ASLTOATL(visiblePositionASL player);

player attachTo [_obj,[0,0,0]];
uiSleep 15;
player playMoveNow "amovppnemstpsraswrfldnon";
detach player;
deleteVehicle _obj;
player setVariable ["robbed",FALSE,TRUE];