/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

params[["_digit",0,[0]]];

_number = ctrlText 1500;
_final = "";

if(count _number >= 7) exitWith {};

if(_digit == -1) then {
	_final = _number select [0, ((count _number)-1)];
} else {
	_final = format["%1%2",_number,_digit];
};

ctrlSetText [1500, _final];