#include "..\..\script_macros.hpp"
/*
	File: fn_receiveMoney.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Receives money
*/

params [
	["_unit",objNull,[objNull]],
	["_val","",[""]],
	["_from",objNull,[objNull]]
];

if(isNull _unit OR isNull _from OR (_val isEqualTo "")) exitWith {};
if(player != _unit) exitWith {};
if(!([_val] call TON_fnc_isnumber)) exitWith {};
if(_unit == _from) exitWith {}; //Bad boy, trying to exploit his way to riches.

hint format[localize "STR_NOTF_GivenMoney",_from getVariable ["realname",name _from],[(parseNumber (_val))] call life_fnc_numberText];

/* Log That Shit! */
[getPlayerUID player,life_cash,life_atmbank,(parseNumber(_val)),"Received Money",format["Recieved $%1 to %2",(parseNumber(_val)),(_from getVariable ["realname",name _from])]] remoteExec ["MBF_fnc_logTrans",hc_1];

FNC_ADD(life_cash,parseNumber(_val));