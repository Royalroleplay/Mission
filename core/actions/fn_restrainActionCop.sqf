#include "..\..\script_macros.hpp"
/*
	File: fn_restrainActionCop.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the target.
*/
private["_unit"];

hint "restrain action ran";

_unit = cursorTarget;

if(isNull _unit) exitWith {}; //Not valid
hint "restrain action ran 1";
if(!alive _unit) exitWith {};
hint "restrain action ran 2";
if(!(_unit isKindOf "Man")) exitWith {};
hint "restrain action ran 3";
if((player distance _unit > 3)) exitWith {};
hint "restrain action ran 4";
if((_unit getVariable ["restrained",false]) || (_unit getVariable ["tiedup",false]) || (_unit getVariable ["Escorting",false])) exitWith {};
hint "restrain action ran 5";
if(player == _unit) exitWith {};
hint "restrain action ran 6";
if(!isPlayer _unit) exitWith {};
hint "restrain action ran 7";
//Broadcast!

_unit SVAR["restrained",true,false];
[player, "restrained"] remoteExec ["life_fnc_restrain",_unit];

hint "restrain action Finished";