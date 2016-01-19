#include "..\..\script_macros.hpp"
/*
	Author Bryan "Tonic" Boardwine
	
	Description:
	Once word is received by the server the rest of the jail execution is completed.
*/
private["_time","_bail","_esc","_countDown"];

params [
	["_ret",[],[[]]],
	["_bad",false,[false]],
	["_time",0,[0]]
];

if(life_jailtime != _time) then {
	life_jailtime = _time;
};

if(count _ret > 0) then { life_bail_amount = SEL(_ret,3); } else { life_bail_amount = 1500; };
_esc = false;
_bail = false;

[_bad] spawn {
	life_canpay_bail = false;
	if(_this select 0) then {
		sleep (10 * 60);
	} else {
		sleep (5 * 60);
	};
	life_canpay_bail = nil;
};

while {true} do {


	if(life_jailtime > 0) then {
		hintSilent parseText format[(localize "STR_Jail_Time")+ "<br/> <t size='2'><t color='#FF0000'>%1 Months</t></t><br/><br/>" +(localize "STR_Jail_Pay")+ " %3<br/>" +(localize "STR_Jail_Price")+ " $%2",life_jailtime,[life_bail_amount] call life_fnc_numberText,if(isNil "life_canpay_bail") then {"Yes"} else {"No"}];
	};
	
	if(player distance (getMarkerPos "jail_marker") > 60) exitWith {
		_esc = true;
	};
	
	if(life_bail_paid) exitWith {
		_bail = true;
	};
	
	if(life_jailtime < 1) exitWith {hint ""};
	if(!alive player && (life_jailtime > 0)) exitWith {}; //Died in prison - let them respawn

	uiSleep 60;
	life_jailtime = life_jailtime - 1;
};


switch (true) do {
	case (_bail): {
		life_is_arrested = false;
		life_bail_paid = false;
		life_jailtime = 0;
		hint localize "STR_Jail_Paid";
		serv_wanted_remove = [player];
		player setPos (getMarkerPos "jail_release");
		[getPlayerUID player] remoteExecCall ["life_fnc_wantedRemove",RSERV];
		[5] call SOCK_fnc_updatePartial;
	};
	
	case (_esc): {
		life_is_arrested = false;
		life_jailtime = 0;
		hint localize "STR_Jail_EscapeSelf";
//		[0,"STR_Jail_EscapeNOTF",true,[profileName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		[getPlayerUID player,profileName,"901"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
		[5] call SOCK_fnc_updatePartial;
	};
	
	case (alive player && !_esc && !_bail): {
		life_is_arrested = false;
		life_jailtime = 0;
		hint localize "STR_Jail_Released";
		[getPlayerUID player] remoteExecCall ["life_fnc_wantedRemove",RSERV];
		player setPos (getMarkerPos "jail_release");
		[5] call SOCK_fnc_updatePartial;
	};
};