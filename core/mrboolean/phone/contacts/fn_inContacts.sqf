/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

params[["_uid","",[""]]];

_name = "";

{
	_x_uid = _x select 0;

	if(_x_uid == _uid) exitWith {
		_name = _x select 1;
	};
} forEach (profileNamespace getVariable ["MrBoolean_Phone_Contacts", []]);

_name;