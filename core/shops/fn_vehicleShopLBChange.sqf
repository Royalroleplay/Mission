#include <macro.h>
/*
	File: fn_vehicleShopLBChange.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Called when a new selection is made in the list box and
	displays various bits of information about the vehicle.
*/
disableSerialization;
private["_control","_index","_className","_basePrice","_vehicleInfo","_colorArray","_ctrl"];
_control = _this select 0;
_index = _this select 1;

//Fetch some information.
_className = _control lbData _index;
_vIndex = _control lbValue _index;

_vehicleList = M_CONFIG(getArray,"CarShops",(life_veh_shop select 0),"vehicles");
_basePrice = ((_vehicleList select _vIndex) select 1);

_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
_trunkSpace = [_className] call life_fnc_vehicleWeightCfg;

ctrlShow [2330,true];
(CONTROL(2300,2303)) ctrlSetStructuredText parseText format[
(localize "STR_Shop_Veh_UI_Rental")+ " <t color='#8cff9b'>$%1</t><br/>" +
(localize "STR_Shop_Veh_UI_Ownership")+ " <t color='#8cff9b'>$%2</t><br/>" +
(localize "STR_Shop_Veh_UI_MaxSpeed")+ " %3 km/h<br/>" +
(localize "STR_Shop_Veh_UI_HPower")+ " %4<br/>" +
(localize "STR_Shop_Veh_UI_PSeats")+ " %5<br/>" +
(localize "STR_Shop_Veh_UI_Trunk")+ " %6<br/>" +
(localize "STR_Shop_Veh_UI_Fuel")+ " %7<br/>" +
(localize "STR_Shop_Veh_UI_Armor")+ " %8",
[_basePrice] call life_fnc_numberText,
[round(_basePrice * 1.5)] call life_fnc_numberText,
_vehicleInfo select 8,
_vehicleInfo select 11,
_vehicleInfo select 10,
if(_trunkSpace == -1) then {"None"} else {_trunkSpace},
_vehicleInfo select 12,
_vehicleInfo select 9
];

_ctrl = CONTROL(2300,2304);
lbClear _ctrl;
_colorArray = M_CONFIG(getArray,"CfgVehicles",_className,"textures");

{
	_flag = (_x select 1);
	_textureName = (_x select 0);
	if((life_veh_shop select 2) == _flag) then {
		_ctrl lbAdd _textureName;
		_ctrl lbSetValue [(lbSize _ctrl)-1,_forEachIndex];
	};
} foreach _colorArray;

if(_className in (LIFE_SETTINGS(getArray,"vehicleShop_rentalOnly"))) then {
	ctrlEnable [2309,false];
} else {
	if(!(life_veh_shop select 3)) then {
		ctrlEnable [2309,true];
	};
};

lbSetCurSel[2304,0];
if((lbSize _ctrl)-1 != -1) then {
	ctrlShow[2304,true];
} else {
	ctrlShow[2304,false];
};
true;