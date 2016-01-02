/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

//1,_target,(owner _target),_number

params[["_status",0,[0]],["_target",objNull,[objNull]],["_owner",0,[0]],["_num","",[""]]];

mb_phone_active_call = _target;

closeDialog 0;
createDialog "mb_phone_active";

_tuid = format["%1",getPlayerUID _target];
_name = [_tuid] call MBF_Phone_fnc_inContacts;

if(_name == "") then {
	_name = _num;
};

ctrlSetText[1014,_name];