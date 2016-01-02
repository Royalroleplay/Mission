/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

params[["_local",0,[0]]];

if (_local == 1) then {
	[0] remoteExec ["MBF_Phone_fnc_hangUpActive",mb_phone_active_call];
};

closeDialog 0;
mb_phone_active_call = objNull;
[(call TFAR_fnc_activeSwRadio), 0] call TFAR_fnc_setSwFrequency;
[(call TFAR_fnc_ActiveSWRadio), 0] call TFAR_fnc_setSwVolume;