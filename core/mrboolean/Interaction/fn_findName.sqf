/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

params["_uid"];

_name = "";
_name = {if (_uid == (_x select 0)) exitWith {_x select 1;};} forEach MB_Saved_Names;
_name;