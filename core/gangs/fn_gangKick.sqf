#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	32 hours...
*/
private["_unit","_unitID","_members"];
disableSerialization;

if((lbCurSel 2621) isEqualTo -1) exitWith {hint localize "STR_GNOTF_SelectKick"};
_unit = call compile format["%1",CONTROL_DATA(2621)];

if(isNull _unit) exitWith {}; //Bad unit?
if(_unit == player) exitWith {hint localize "STR_GNOTF_KickSelf"};

_unitID = getPlayerUID _unit;
_members = group player getVariable "gang_members";
if(isNil "_members") exitWith {};
if(!(typeName _members isEqualTo "ARRAY")) exitWith {};

FNC_SUB(_members,[_unitID]);
group player setVariable ["gang_members",_members,true];

[_unit,group player] remoteExec ["TON_fnc_clientGangKick",_unit]; //Boot that bitch!
[4,group player] remoteExec ["TON_fnc_updateGang",RSERV]; //Update the database.
[] call life_fnc_gangMenu;