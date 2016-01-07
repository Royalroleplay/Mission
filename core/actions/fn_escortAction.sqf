#include <macro.h>
/*
	File: fn_escortAction.sqf
*/
private ["_unit","_check"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

_check = true;

if(isNil "_unit" OR isNull _unit OR !isPlayer _unit) exitWith {};
//if(!(side _unit in [civilian,independent])) exitWith {}; //Disable side check, anyone can escort
if(playerSide isEqualTo independent) then
{
	if((player distance _unit > 10)) exitWith {_check = false};
}
else
{
	if((player distance _unit > 3)) exitWith {_check = false};
};

if(!_check) exitWith {};

_unit attachTo [player,[0.1,1.1,0]];
_unit SVAR ["transporting",false,true];
_unit SVAR ["Escorting",true,true];
player reveal _unit;