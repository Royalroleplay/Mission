/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

params[["_status",0,[0]]];

MB_Phone_Incoming_Active = false;
MB_Phone_Outgoing_Active = false;

_reason = "Something went wrong...";

switch (_status) do {
	case 1: {_reason = "Phone Currently Unavailable"};
	case 3: {_reason = "Phone Call Declined"};
};

closeDialog 0;
hint _reason;