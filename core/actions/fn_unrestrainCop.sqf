#include "..\..\script_macros.hpp"
/*
	File: fn_unrestrain.sqf
*/
private["_unit"];
_unit = param [0,ObjNull,[ObjNull]];

if(isNull _unit) exitWith {}; //Error check?
if(!(_unit getVariable ["restrained", false] || _unit getVariable ["tiedup", false])) exitWith {};

_unit setVariable ["restrained",FALSE,TRUE];
_unit setVariable ["tiedup",FALSE,TRUE];
_unit setVariable ["Escorting",FALSE,TRUE];
_unit setVariable ["transporting",FALSE,TRUE];
detach _unit;
