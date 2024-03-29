#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Lights up the house.
*/
private "_house";
_house = param [0,ObjNull,[ObjNull]];
if(isNull _house) exitWith {};
if(!(_house isKindOf "House_F")) exitWith {};

if(isNull (_house getVariable ["lightSource",ObjNull])) then {
	[_house,true] remoteExecCall ["life_fnc_lightHouse",RCLIENT];
} else {
	[_house,false] remoteExecCall ["life_fnc_lightHouse",RCLIENT];
};