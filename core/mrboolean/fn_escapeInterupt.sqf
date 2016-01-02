/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

//disable for editor
if(isServer) exitWith {};

private["_display","_respawn","_manual","_title","_abort","_version"];
disableSerialization;

_display = _this select 0;
_respawn = _display displayCtrl 1010;
_manual = _display displayCtrl 122;
_title = _display displayCtrl 523;
_abort = _display displayCtrl 104;
_version = _display displayCtrl 1005;

_respawn ctrlEnable false; //Disable Respawn
_manual ctrlEnable false; //Stops a RE Bug

_version ctrlSetText format["[RoyalRoleplay.com]  %1",getPlayerUID player];
_title ctrlSetText "[Royal]";
_abort ctrlSetText "Leave Royal Roleplay";
_abort ctrlSetEventHandler ["ButtonClick", "[] call life_fnc_manageAbort; (uiNamespace getVariable 'RscDisplayMPInterrupt') closeDisplay 2;true"];

true