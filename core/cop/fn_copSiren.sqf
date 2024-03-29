#include "..\..\script_macros.hpp"
/*
	File: fn_copSiren.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the cop siren sound for other players
*/
private["_vehicle"];
_vehicle = param [0,ObjNull,[ObjNull]];

if(isNull _vehicle) exitWith {};
if(isNil {_vehicle getVariable "siren"}) exitWith {};

while {true} do {
	if(!(_vehicle getVariable "siren")) exitWith {};
	if((count (crew _vehicle)) isEqualTo 0) then {_vehicle setVariable ["siren",false,true]};
	if(!alive _vehicle) exitWith {};
	if(isNull _vehicle) exitWith {};
	_vehicle say3D "RoyalFire";
	uiSleep 18.5;
	if(!(_vehicle getVariable "siren")) exitWith {};
};