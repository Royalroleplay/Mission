#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Prompts the player about an invite.
*/
private ["_action","_grpMembers"];
params [
	["_name","",[""]],
	["_group",grpNull,[grpNull]]
];

if((_name isEqualTo "") OR isNull _group) exitWith {}; //Fail horn anyone?
if(!isNil {(group player) getVariable "gang_name"}) exitWith {hint "You are already in a gang"};

_gangName = _group getVariable "gang_name";
_action = [
	format[localize "STR_GNOTF_InviteMSG",_name,_gangName],
	localize "STR_Gang_Invitation",
	localize "STR_Global_Yes",
	localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if(_action) then {
	[player] join _group;
	[4,_group] remoteExecCall ["TON_fnc_updateGang",RSERV];
} else {
	_grpMembers = group player getVariable "gang_members";
	FNC_SUB(_grpMembers,[getPlayerUID player]);
	group player setVariable ["gang_members",_grpMembers,true];
	[4,_grpMembers] remoteExecCall ["TON_fnc_updateGang",RSERV];
};