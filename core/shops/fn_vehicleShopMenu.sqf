#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleShopMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Blah
*/
private["_shop","_sideCheck","_spawnPoints","_shopFlag","_shopTitle","_disableBuy"];
(_this select 3) params [
	["_shop","",[""]],
	["_sideCheck",sideUnknown,[civilian]],
	["_spawnPoints","",["",[]]],
	["_shopFlag","",[""]],
	["_shopTitle","",[""]],
	["_disableBuy",false,[true]]
];

disableSerialization;
//Long boring series of checks
if(dialog) exitWith {};
if(_shop == "") exitWith {};
if(_sideCheck != sideUnknown && {playerSide != _sideCheck}) exitWith {hint localize "STR_Shop_Veh_NotAllowed"};
if(!createDialog "Life_Vehicle_Shop_v2") exitWith {};

life_veh_shop = [_shop,_spawnpoints,_shopFlag,_disableBuy]; //Store it so so other parts of the system can access it.

ctrlSetText [2301,_shopTitle];

if(_disableBuy) then {
	//Disable the buy button.
	ctrlEnable [2309,false];
};

//Fetch the shop config.
_vehicleList = M_CONFIG(getArray,"CarShops",_shop,"vehicles");

_control = CONTROL(2300,2302);
lbClear _control; //Flush the list.
ctrlShow [2330,false];
ctrlShow [2304,false];

//Loop through
{
	_className = (_x select 0);
	_basePrice = (_x select 1);
	_levelData = (_x select 3);
	_passOver = false;
	
	if(!isNil "_levelData" && {_var = missionNamespace getVariable (_levelData select 0); !(FETCH_CONST(_var) >= (_levelData select 1))}) then {_passOver = true;};
	
	if(!_passOver) then {
		_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
		
		if(count _vehicleInfo > 0) then {
			_control lbAdd (_vehicleInfo select 3);
			_control lbSetPicture [(lbSize _control)-1,(_vehicleInfo select 2)];
			_control lbSetData [(lbSize _control)-1,_className];
			_control lbSetValue [(lbSize _control)-1,_ForEachIndex];
		};

	};
} foreach _vehicleList;