/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

createDialog "mb_phone_home";

/*************************
**		Calc time 		**
*************************/

_side = "AM";
_hour = floor daytime;
_min = floor ((daytime - _hour) * 60);

if(_hour > 12) then {
	_hour = _hour - 12;
	_side = "PM";
};

if(_min < 10) then {
	_min = format["0%1",_min];
};


/*************************
**	   Set Controls 	**
*************************/


ctrlSetText [1000, _side];
ctrlSetText [1001, format["%1:%2",_hour,_min]];