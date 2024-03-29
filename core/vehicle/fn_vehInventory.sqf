#include "..\..\script_macros.hpp"
/*
	File: fn_vehInventory.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Used a refresher for the vehicle inventory / trunk menu items.
*/
private["_veh","_tInv","_pInv","_veh_data"];
_veh = param [0,ObjNull,[ObjNull]];
if(isNull _veh OR !alive _veh) exitWith {closeDialog 0;}; //If null / dead exit menu
disableSerialization;

_tInv = CONTROL(3500,3502);
_pInv = CONTROL(3500,3503);
lbClear _tInv;
lbClear _pInv;

if(_veh isKindOf "House_F") then {
	private "_mWeight";
	_mWeight = 0;
	{_mWeight = _mWeight + ([(typeOf _x)] call life_fnc_vehicleWeightCfg);} foreach (_veh getVariable["containers",[]]);
	_veh_data = [_mWeight,(_veh getVariable["Trunk",[[],0]]) select 1];
} else {
	_veh_data = [_veh] call life_fnc_vehicleWeight;
};

if((_veh_data select 0) == -1) exitWith {closeDialog 0};

ctrlSetText[3504,format["Weight: %1/%2",_veh_data select 1,_veh_data select 0]];
_data = _veh getVariable ["Trunk",[]];
if((count _data) isEqualTo 0) then {_veh setVariable["Trunk",[[],0],true]; _data = [];} else {_data = _data select 0;};
//Player Inventory Items
{
	_val = ITEM_VALUE(configName _x);
	
	if(_val > 0) then {
		_pInv lbAdd format["[%1] - %2",_val,localize (getText(_x >> "displayName"))];
		_pInv lbSetData [(lbSize _pInv)-1,configName _x];
		_icon = (getText(_x >> "icon"));
		if(!(_icon isEqualTo "")) then {
			_pInv lbSetPicture [(lbSize _pInv)-1,_icon];
		};
	};
} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));

//Trunk Inventory Items
{
	_name = M_CONFIG(getText,"VirtualItems",(_x select 0),"displayName");
	_val = (_x select 1);
		
	if(_val > 0) then {
		_tInv lbAdd format["[%1] - %2",_val,localize _name];
		_tInv lbSetData [(lbSize _tInv)-1,(_x select 0)];
		_icon = M_CONFIG(getText,"VirtualItems",(_x select 0),"icon");
		if(!(_icon isEqualTo "")) then {
			_tInv lbSetPicture [(lbSize _tInv)-1,_icon];
		};
	};
} foreach _data;
