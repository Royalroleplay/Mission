#include "..\..\script_macros.hpp"
/*
	File: fn_impoundAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Impounds the
*/
private["_vehicle","_type","_time","_price","_vehicleData","_upp","_ui","_progress","_pgText","_cP","_filters"];
_vehicle = param [0,ObjNull,[ObjNull]];
_filters = ["Car","Air","Ship"];
if(!(FNC_ISKINDOF(_vehicle,_filters))) exitWith {};
if(player distance cursorTarget > 10) exitWith {};

_vehicleData = _vehicle getVariable ["vehicle_info_owners",[]];
if((count _vehicleData) isEqualTo 0) exitWith {deleteVehicle _vehicle}; //Bad vehicle.
_vehicleName = FETCH_CONFIG2(getText,"CfgVehicles",(typeOf _vehicle),"displayName");
//[0,"STR_NOTF_BeingImpounded",true,[SEL(SEL(_vehicleData,0),1),_vehicleName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
life_action_inUse = true;

_upp = localize "STR_NOTF_Impounding";
//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
	
while{true} do {
	uiSleep 0.01;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(player distance _vehicle > 10) exitWith {};
	if(!alive player) exitWith {};
};

5 cutText ["","PLAIN"];
	
if(player distance _vehicle > 10) exitWith {hint localize "STR_NOTF_ImpoundingCancelled"; life_action_inUse = false;};
if(!alive player) exitWith {life_action_inUse = false;};


if(!(FNC_ISKINDOF(_vehicle,_filters))) exitWith {life_action_inUse = false;};
_type = FETCH_CONFIG2(getText,"CfgVehicles",(typeOf _vehicle),"displayName");
switch (true) do {
	case (_vehicle isKindOf "Car"): {_price = LIFE_SETTINGS(getNumber,"impound_car");};
	case (_vehicle isKindOf "Ship"): {_price = LIFE_SETTINGS(getNumber,"impound_boat");};
	case (_vehicle isKindOf "Air"): {_price = LIFE_SETTINGS(getNumber,"impound_air");};
};

life_impound_inuse = true;
[_vehicle,true,player] remoteExecCall ["TON_fnc_vehicleStore",RSERV];
waitUntil {!life_impound_inuse};
hint format[localize "STR_NOTF_Impounded",_type,_price];
//[0,"STR_NOTF_HasImpounded",true,[profileName,SEL(SEL(_vehicleData,0),1),_vehicleName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
FNC_ADD(life_atmbank,_price);
hint format ["You have been rewarded with $%1 for your efforts to clean up the streets.", _price];

life_action_inUse = false;