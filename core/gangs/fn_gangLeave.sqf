#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	32 hours later...
*/
private["_grp","_grpMembers"];
if((getPlayerUID player) isEqualTo (group player getVariable "gang_owner")) exitWith {hint localize "STR_GNOTF_LeaderLeave"};

_grp = group player;
_grpMembers = group player getVariable "gang_members";
FNC_SUB(_grpMembers,[getPlayerUID player]);
_grp setVariable ["gang_members",_grpMembers,true];
[player] joinSilent (createGroup civilian);

[4,_grp] remoteExec ["TON_fnc_updateGang",RSERV];
closeDialog 0;