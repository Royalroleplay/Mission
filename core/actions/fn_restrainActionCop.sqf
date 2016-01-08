#include "..\..\script_macros.hpp"
/*
	File: fn_restrainActionCop.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the target.
*/
private["_unit"];

_unit = cursorTarget;

if(isNull _unit) exitWith {}; //Not valid
if(!alive _unit) exitWith {};
if(!(_unit isKindOf "Man")) exitWith {};
if((player distance _unit > 3)) exitWith {};
if((speed _unit < 1)) exitWith {};
if((_unit GVAR "restrained") || (_unit GVAR "tiedup") || (_unit getVariable "Escorting")) exitWith {};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};
//Broadcast!

_unit SVAR["restrained",true,false];

[player, "restrained"] remoteExec ["life_fnc_restrain",_unit];

