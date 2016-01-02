/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

params[["_req",objNull,[objNull]],["_freq",0,[0]]];

closeDialog 0;
mb_phone_active_call = _req;

[(call TFAR_fnc_activeSwRadio), _freq] call TFAR_fnc_setSwFrequency;
[(call TFAR_fnc_ActiveSWRadio), 7] call TFAR_fnc_setSwVolume;

createDialog "mb_phone_active";

_ruid = format["%1",getPlayerUID _req];
_name = [_ruid] call MBF_Phone_fnc_inContacts;

if(_name == "") then {
	_name = "Unknown";
};

ctrlSetText[1014,_name];