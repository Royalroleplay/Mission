#include "..\..\script_macros.hpp"
/*
	File: fn_robReceive.sqf
	Author: Bryan "Tonic" Boardwine
*/
params [
	["_cash",0,[0]],
	["_victim",objNull,[objNull]],
	["_robber",objNull,[objNull]]
];

if(_robber == _victim) exitWith {};
if(_cash isEqualTo 0) exitWith {titleText[localize "STR_Civ_RobFail","PLAIN"]};

FNC_ADD(life_cash,_cash);
titleText[format[localize "STR_Civ_Robbed",[_cash] call life_fnc_numberText],"PLAIN"];