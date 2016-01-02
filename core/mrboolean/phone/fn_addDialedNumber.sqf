/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

params[["_new",0,[0]]];

_cur = ctrlText 9001;

if(_new == -1) exitWith {
	_count = (count _cur)-1;
	_cur = _cur select [0,_count];
	ctrlSetText [9001, format["%1",_cur]]; 
};

if(count _cur >= 7) exitWith {};
ctrlSetText [9001, format["%1%2",_cur,_new]];