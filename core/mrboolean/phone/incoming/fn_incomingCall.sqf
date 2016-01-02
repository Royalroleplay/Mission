/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

params[["_status",0,[0]],["_req",objNull,[objNull]],["_owner",0,[0]],["_num","",[""]]];

createDialog "mb_phone_incoming";

mb_phone_active_call = _req;

_ruid = format["%1",getPlayerUID _req];
_name = [_ruid] call MBF_Phone_fnc_inContacts;

if(_name == "") then {
	_name = _num;
};

ctrlSetText[1001,_name];

MB_Phone_Incoming_Active = true;