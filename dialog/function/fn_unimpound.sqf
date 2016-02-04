#include "..\..\script_macros.hpp"
/*
	File: fn_unimpound.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Yeah... Gets the vehicle from the garage.
*/
private["_vehicle","_vid","_pid","_unit","_price"];
disableSerialization;
if(lbCurSel 2802 isEqualTo -1) exitWith {hint localize "STR_Global_NoSelection"};
_vehicle = lbData[2802,(lbCurSel 2802)];
_vehicle = (call compile format["%1",_vehicle]) select 0;
_vid = lbValue[2802,(lbCurSel 2802)];
_pid = getPlayerUID player;
_unit = player;

if(isNil "_vehicle") exitWith {hint localize "STR_Garage_Selection_Error"};

_price = switch(playerSide) do {
	case civilian: {(M_CONFIG(getArray,"CfgVehicles",_vehicle,"storageFee") select 0)};
	case west: {(M_CONFIG(getArray,"CfgVehicles",_vehicle,"storageFee") select 1)};
	case independent: {(M_CONFIG(getArray,"CfgVehicles",_vehicle,"storageFee") select 2)};
	case east: {(M_CONFIG(getArray,"CfgVehicles",_vehicle,"storageFee") select 4)};
};

if(!(typeName _price isEqualTo typeName 0) OR _price < 1) then {_price = 1000};
if(life_atmbank < _price) exitWith {hint format[(localize "STR_Garage_CashError"),[_price] call life_fnc_numberText];};

if(typeName life_garage_sp isEqualTo typeName []) then {
	[_vid,_pid,(life_garage_sp select 0),_unit,_price,(life_garage_sp select 1)] remoteExec ["TON_fnc_spawnVehicle",RSERV];
} else {
	if(life_garage_sp in ["medic_spawn_1","medic_spawn_2","medic_spawn_3","ems_heli"]) then {
		[_vid,_pid,life_garage_sp,_unit,_price] remoteExec ["TON_fnc_spawnVehicle",RSERV];
	} else {
		[_vid,_pid,(getMarkerPos life_garage_sp),_unit,_price,markerDir life_garage_sp] remoteExec ["TON_fnc_spawnVehicle",RSERV];
	};
};

hint localize "STR_Garage_SpawningVeh";
FNC_SUB(life_atmbank,_price);