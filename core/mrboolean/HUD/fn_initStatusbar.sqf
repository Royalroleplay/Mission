/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

4 cutRsc ["osefStatusBar","PLAIN"]; 

[1, life_fnc_updateStatusbar, [], true] call MBF_GameLoop_fnc_addEvent;