#include "..\..\script_macros.hpp"
/*
	File: fn_questionDealer.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Questions the drug dealer and sets the sellers wanted.
*/
private["_sellers","_names"];
_sellers = ((_this select 0)) getVariable ["sellers",[]];
if((count _sellers) isEqualTo 0) exitWith {hint localize "STR_Cop_DealerQuestion"}; //No data.
life_action_inUse = true;

_names = "";
{
	if((_x select 2) > 150000) then {
		_val = round(((_x select 2)) / 16);
	};
	[(_x select 0),(_x select 1),"483",_val] remoteExecCall ["life_fnc_wantedAdd",RSERV];
	FNC_ADD(_names,format["%1<br/>",(_x select 1)]);
} foreach _sellers;

hint parseText format[(localize "STR_Cop_DealerMSG")+ "<br/><br/>%1",_names];
(_this select 0) setVariable ["sellers",[],true];
life_action_inUse = false;

/*

	todo: Spawn this on the dealer

[] spawn {
	systemChat "pausing dealer";
	drug_dealer disableAI "MOVE";
	uiSleep 30;
	drug_dealer enableAI "MOVE";
};

*/