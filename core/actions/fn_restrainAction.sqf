#include "..\..\script_macros.hpp"
/*
	File: fn_restrainAction.sqf
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
if((_unit getVariable ["restrained",false]) || (_unit getVariable ["tiedup",false]) || (_unit getVariable ["Escorting",false])) exitWith {};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};
if((animationState _unit) != "Incapacitated") exitWith {};
if(life_inv_rope == 0) exitWith { titleText ["You do not have any rope", "PLAIN"]; };

_unit SVAR["tiedup",true,false];

[player, "tiedup"] remoteExec ["life_fnc_restrain",_unit];

[false,"rope",1] call life_fnc_handleInv;