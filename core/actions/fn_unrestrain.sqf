#include "..\..\script_macros.hpp"
/*
	File: fn_unrestrain.sqf
*/
private["_unit"];
_unit = param [0,ObjNull,[ObjNull]];

if(isNull _unit) exitWith {}; //Error check?
if(!(_unit getVariable ["tiedup",FALSE])) exitWith {};

_unit setVariable ["tiedup",FALSE,TRUE];
_unit setVariable ["Escorting",FALSE,TRUE];
_unit setVariable ["transporting",FALSE,TRUE];
detach _unit;
