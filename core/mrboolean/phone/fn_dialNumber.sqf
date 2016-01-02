#include "..\..\..\script_macros.hpp"
/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

params[["_cur","",["",0]]];

createDialog "mb_phone_active";

[_cur,player] remoteExecCall ["MBSF_Phone_fnc_initPhoneCall",RSERV];