/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

MB_Phone_Incoming_Active = false;
MB_Phone_Outgoing_Active = false;

closeDialog 0;

[mb_phone_active_call] remoteExecCall ["MBSF_Phone_declinePhoneCall", 2];

mb_phone_active_call = objNull;