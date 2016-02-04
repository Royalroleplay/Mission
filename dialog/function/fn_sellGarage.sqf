#include "..\..\script_macros.hpp"
/*
	File: fn_sellGarage.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Sells a vehicle from the garage.
*/
private["_vehicle","_vid","_pid","_unit","_sellPrice"];
disableSerialization;
if(lbCurSel 2802 isEqualTo -1) exitWith {hint localize "STR_Global_NoSelection"};
_vehicle = lbData[2802,(lbCurSel 2802)];
_vehicle = (call compile format["%1",_vehicle]) select 0;
_vid = lbValue[2802,(lbCurSel 2802)];
_pid = getPlayerUID player;
_unit = player;

if(isNil "_vehicle") exitWith {hint localize "STR_Garage_Selection_Error"};
if((time - life_action_delay) < 1.5) exitWith {hint localize "STR_NOTF_ActionDelay";};

_sellPrice = switch(playerSide) do {
	case civilian: {(M_CONFIG(getArray,"CfgVehicles",_vehicle,"garageSell") select 0)};
	case west: {(M_CONFIG(getArray,"CfgVehicles",_vehicle,"garageSell") select 1)};
	case independent: {(M_CONFIG(getArray,"CfgVehicles",_vehicle,"garageSell") select 2)};
	case east: {(M_CONFIG(getArray,"CfgVehicles",_vehicle,"garageSell") select 4)};
};

if(!(typeName _sellPrice isEqualTo typeName 0) OR _sellPrice < 1) then {_sellPrice = 1000};
[_vid,_pid,_sellPrice,player,life_garage_type] remoteExecCall ["TON_fnc_vehicleDelete",RSERV];
hint format[localize "STR_Garage_SoldCar",[_sellPrice] call life_fnc_numberText];
FNC_ADD(life_atmbank,_sellPrice);
life_action_delay = time;
closeDialog 0;