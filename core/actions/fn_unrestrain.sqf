#include "..\..\script_macros.hpp"
/*
	File: fn_unrestrain.sqf
*/
private["_unit"];
_unit = param [0,ObjNull,[ObjNull]];

if(isNull _unit) exitWith {}; //Error check?
if(!(_unit GVAR ["tiedup",FALSE])) exitWith {};

_unit SVAR ["tiedup",FALSE,TRUE];
_unit SVAR ["Escorting",FALSE,TRUE];
_unit SVAR ["transporting",FALSE,TRUE];
detach _unit;