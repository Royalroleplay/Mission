#include "..\..\script_macros.hpp"
/*
	File: fn_giveMoney.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gives the selected amount of money to the selected player.
*/

params["_amount","_curSel"];

_display = (findDisplay 20055);
if(_curSel == -1) exitWith {hint "No one was selected!";};
_unit = call compile format["%1",((_display displayCtrl 2100) lbData _curSel)];

hint format["%1  :  %2  :  %3",_amount,_curSel,_unit];

if(isNil "_unit") exitWith {};
if(_unit == player) exitWith {};
if(isNull _unit) exitWith {};

closeDialog 0;

//A series of checks *ugh*
if(!life_use_atm) exitWith {hint "You recently robbed the bank! You can't give money away just yet.";};
if(!([_amount] call TON_fnc_isnumber)) exitWith {hint "You didn't enter an actual number format.";};
if(parseNumber(_amount) <= 0) exitWith {hint "You need to enter an actual amount you want to give.";};
if(parseNumber(_amount) > life_cash) exitWith {hint "You don't have that much to give!";};
if(isNull _unit) exitWith {};
if(isNil "_unit") exitWith {hint "The selected player is not within range";};

hint format["You gave $%1 to %2",[(parseNumber(_amount))] call life_fnc_numberText,_unit getVariable["realname",name _unit]];
life_cash = life_cash - (parseNumber(_amount));

[0] call SOCK_fnc_updatePartial;
[_unit,_amount,player] remoteExec ["life_fnc_receiveMoney",_unit];

closeDialog 0;
[] call life_fnc_openTransfer;