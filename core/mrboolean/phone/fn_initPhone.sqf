/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

MB_Phone_Incoming_Active = false;
MB_Phone_Outgoing_Active = false;
mb_phone_incoming_contact = [];

[(call TFAR_fnc_ActiveSWRadio), 0] call TFAR_fnc_setSwVolume;
[2, MBF_Phone_fnc_monitorPhone, [], true] call MBF_GameLoop_fnc_addEvent;