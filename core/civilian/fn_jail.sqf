#include "..\..\script_macros.hpp"
/*
	File: fn_jail.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the initial process of jailing.
*/
_unit = _this select 0;
_bad = _this select 1;
_time = [_this, 2, 0, [0]] call BIS_fnc_param;

if(isNull _unit) exitWith {}; //Dafuq?
if(_unit != player) exitWith {}; //Dafuq?
if(life_is_arrested) exitWith {}; //Dafuq i'm already arrested
if(_time < 1) exitWith {};

player setVariable ["restrained",false,true];
player setVariable ["Escorting",false,true];
player setVariable ["transporting",false,true];

life_jailtime = _time;

titleText[localize "STR_Jail_Warn","PLAIN"];
hint localize "STR_Jail_LicenseNOTF";

if(_bad) then {
	waitUntil {alive player};
	uiSleep 1;
};

player forceAddUniform "RR_Clothing_Prisoner_obj";

[1] call life_fnc_removeLicenses;

{
	_amount = ITEM_VALUE(_x);
	if(_amount > 0) then {
		[false,_x,_amount] call life_fnc_handleInv;
	};
} forEach ["heroin_unprocessed","heroin_processed","cannabis","marijuana","cocaine_unprocessed","cocaine_processed","turtle_raw","hacking_device"];

life_is_arrested = true;

removeAllWeapons player;
{player removeMagazine _x} forEach (magazines player);

[player,_bad,_time] remoteExecCall ["life_fnc_jailSys",RSERV];
[5] call SOCK_fnc_updatePartial;