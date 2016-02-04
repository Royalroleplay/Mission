#include "..\..\script_macros.hpp"
/*
	File: fn_garageLBChange.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Can't be bothered to answer it.. Already deleted it by accident..
*/
disableSerialization;
private["_control","_index","_className","_dataArr","_vehicleColor","_vehicleInfo","_trunkSpace","_sellPrice","_retrievePrice"];
_control = (_this select 0);
_index = (_this select 1);

//Fetch some information.
_dataArr = CONTROL_DATAI(_control,_index);
_dataArr = call compile format["%1",_dataArr];
_className = (_dataArr select 0);

_vehicleColor = ((M_CONFIG(getArray,"CfgVehicles",_className,"textures") select (_dataArr select 1)) select 0);
if(isNil "_vehicleColor") then {_vehicleColor = "Default";};

_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
_trunkSpace = [_className] call life_fnc_vehicleWeightCfg;

_retrievePrice = switch(playerSide) do {
	case civilian: {(M_CONFIG(getArray,"CfgVehicles",_className,"storageFee") select 0)};
	case west: {(M_CONFIG(getArray,"CfgVehicles",_className,"storageFee") select 1)};
	case independent: {(M_CONFIG(getArray,"CfgVehicles",_className,"storageFee") select 2)};
	case east: {(M_CONFIG(getArray,"CfgVehicles",_className,"storageFee") select 4)};
};

_sellPrice = switch(playerSide) do {
	case civilian: {(M_CONFIG(getArray,"CfgVehicles",_className,"garageSell") select 0)};
	case west: {(M_CONFIG(getArray,"CfgVehicles",_className,"garageSell") select 1)};
	case independent: {(M_CONFIG(getArray,"CfgVehicles",_className,"garageSell") select 2)};
	case east: {(M_CONFIG(getArray,"CfgVehicles",_className,"garageSell") select 4)};
};

if(!(typeName _sellPrice isEqualTo typeName 0) OR _sellPrice < 1) then {_sellPrice = 1000};
if(!(typeName _retrievePrice isEqualTo typeName 0) OR _retrievePrice < 1) then {_retrievePrice = 1000};

(CONTROL(2800,2803)) ctrlSetStructuredText parseText format[
	(localize "STR_Shop_Veh_UI_RetrievalP")+ " <t color='#8cff9b'>$%1</t><br/>
	" +(localize "STR_Shop_Veh_UI_SellP")+ " <t color='#8cff9b'>$%2</t><br/>
	" +(localize "STR_Shop_Veh_UI_Color")+ " %8<br/>
	" +(localize "STR_Shop_Veh_UI_MaxSpeed")+ " %3 km/h<br/>
	" +(localize "STR_Shop_Veh_UI_HPower")+ " %4<br/>
	" +(localize "STR_Shop_Veh_UI_PSeats")+ " %5<br/>
	" +(localize "STR_Shop_Veh_UI_Trunk")+ " %6<br/>
	" +(localize "STR_Shop_Veh_UI_Fuel")+ " %7
	",
[_retrievePrice] call life_fnc_numberText,
[_sellPrice] call life_fnc_numberText,
(_vehicleInfo select 8),
(_vehicleInfo select 11),
(_vehicleInfo select 10),
if(_trunkSpace == -1) then {"None"} else {_trunkSpace},
(_vehicleInfo select 12),
_vehicleColor
];

ctrlShow [2803,true];
ctrlShow [2830,true];