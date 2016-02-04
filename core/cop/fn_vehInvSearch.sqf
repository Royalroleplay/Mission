#include "..\..\script_macros.hpp"
/*
	File: fn_vehInvSearch.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Searches the vehicle for illegal items.
*/
private["_vehicle","_vehicleInfo","_value","_list"];
_vehicle = cursorTarget;
_list = ["Air","Ship","LandVehicle"];
if(isNull _vehicle OR {!(FNC_ISKINDOF(_vehicle,_list))}) exitWith {};

_vehicleInfo = _vehicle getVariable ["Trunk",[]];
if((count _vehicleInfo) isEqualTo 0) exitWith {hint localize "STR_Cop_VehEmpty"};

_value = 0;
{
	_var = (_x select 0);
	_val = (_x select 1);
	
	if((ITEM_ILLEGAL(_var)) isEqualTo 1) then {
		if(!(ITEM_SELLPRICE(_var)) isEqualTo -1) then {
			FNC_ADD(_value,(round(_val * ITEM_SELLPRICE(_var) / 2)));
		};
	};
} foreach (_vehicleInfo select 0);

if(_value > 0) then {
//	[0,"STR_NOTF_VehContraband",true,[[_value] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
	FNC_ADD(life_atmbank,_value);
	_vehicle setVariable ["Trunk",[],true];
} else {
	hint localize "STR_Cop_NoIllegalVeh";
};