#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleShopBuy.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Does something with vehicle purchasing.
*/
private["_mode","_spawnPoints","_className","_basePrice","_colorIndex","_spawnPoint","_vehicle","_shopSide","_license", "_color"];
_mode = SEL(_this,0);
if((lbCurSel 2302) == -1) exitWith {hint localize "STR_Shop_Veh_DidntPick"};
_className = lbData[2302,(lbCurSel 2302)];
_vIndex = lbValue[2302,(lbCurSel 2302)];

_vehicleList = M_CONFIG(getArray,"CarShops",SEL(life_veh_shop,0),"vehicles");
_shopSide = M_CONFIG(getText,"CarShops",SEL(life_veh_shop,0),"side");
_basePrice = SEL(SEL(_vehicleList,_vIndex),1);

 if(_mode) then {_basePrice = round(_basePrice * 1.5)};
_colorIndex = lbValue[2304,(lbCurSel 2304)];

//Series of checks (YAY!)
if(_basePrice < 0) exitWith {}; //Bad price entry
if(CASH < _basePrice) exitWith {hint format[localize "STR_Shop_Veh_NotEnough",[_basePrice - CASH] call life_fnc_numberText];};

_license = SEL(SEL(_vehicleList,_vIndex),2);
if(!(EQUAL(_license,"")) && {!(LICENSE_VALUE(_license,_shopSide))}) exitWith {hint localize "STR_Shop_Veh_NoLicense"};

_spawnPoints = SEL(life_veh_shop,1);
_spawnPoint = "";

if((SEL(life_veh_shop,0) == "med_air_hs")) then {
	if(count(nearestObjects[(getMarkerPos _spawnPoints),["Air"],35]) == 0) exitWith {_spawnPoint = _spawnPoints};
} else {
	//Check if there is multiple spawn points and find a suitable spawnpoint.
	if(EQUAL(typeName _spawnPoints,typeName [])) then {
		//Find an available spawn point.
		{if(count(nearestObjects[(getMarkerPos _x),["Car","Motorbike","Motorcycle","Ship","Bicycle","Air"],5]) == 0) exitWith {_spawnPoint = _x};} foreach _spawnPoints;
	} else {
		if(count(nearestObjects[(getMarkerPos _spawnPoints),["Car","Motorbike","Motorcycle","Bicycle","Ship","Air"],5]) == 0) exitWith {_spawnPoint = _spawnPoints};
	};
};


if(EQUAL(_spawnPoint,"")) exitWith {hint localize "STR_Shop_Veh_Block";};
SUB(CASH,_basePrice);
hint format[localize "STR_Shop_Veh_Bought",getText(configFile >> "CfgVehicles" >> _className >> "displayName"),[_basePrice] call life_fnc_numberText];

//Spawn the vehicle and prep it.
if((life_veh_shop select 0) == "med_air_hs") then {
	
	_loc = getMarkerPos _spawnPoint;
	_loc = [_loc select 0, _loc select 1, (_loc select 2)+11.5];

	_vehicle = createVehicle [_className,[0,0,999],[], 0, "NONE"];
	waitUntil {!isNil "_vehicle"}; //Wait?
	_vehicle allowDamage false;
	_vehicle lock 2;
	_vehicle setVectorUp (surfaceNormal _loc);
	_vehicle setDir (markerDir _spawnPoint);
	_vehicle setPosATL _loc;
	[_vehicle,_colorIndex] remoteExecCall ["life_fnc_colorVehicle",RCLIENT];
	[_vehicle] call life_fnc_clearVehicleAmmo;
	[_vehicle,"trunk_in_use",false,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	[_vehicle,"vehicle_info_owners",[[getPlayerUID player,profileName]],true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	_vehicle disableTIEquipment true; //No Thermals.. They're cheap but addictive.
};

if((typeOf _vehicle) find "Mrshounka" >= 0) then {

	_loc = getMarkerPos _spawnPoint;
	_loc = [_loc select 0, _loc select 1, (_loc select 2)+1.5];

	call 
	{
		if (_colorIndex isEqualTo "Red") exitWith {_color = "_rouge"};
		if (_colorIndex isEqualTo "Black") exitWith {_color = "_noir"};
		if (_colorIndex isEqualTo "Dark Blue") exitWith {_color = "_bleufonce"};
		if (_colorIndex isEqualTo "Yellow") exitWith {_color = "_jaune"};
		if (_colorIndex isEqualTo "Pink") exitWith {_color = "_rose"};
		if (_colorIndex isEqualTo "Grey") exitWith {_color = "_gris"};
		if (_colorIndex isEqualTo "Purple") exitWith {_color = "_violet"};
		if (_colorIndex isEqualTo "Orange") exitWith {_color = "_orange"};
	};

	_className = format ["%1%2", _className, _color];

	_vehicle = createVehicle [_className, _loc, [], 0, "NONE"];
	waitUntil {!isNil "_vehicle"}; //Wait?
	_vehicle allowDamage false; //Temp disable damage handling..
	_vehicle lock 2;
	_vehicle setVectorUp (surfaceNormal _loc);
	_vehicle setDir (markerDir _spawnPoint);
	_vehicle setPos _loc;
	//[_vehicle,_colorIndex] remoteExecCall ["life_fnc_colorVehicle",RCLIENT];
	[_vehicle] call life_fnc_clearVehicleAmmo;
	[_vehicle,"trunk_in_use",false,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	[_vehicle,"vehicle_info_owners",[[getPlayerUID player,profileName]],true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	_vehicle disableTIEquipment true; //No Thermals.. They're cheap but addictive.
};

if((typeOf _vehicle) find "Jonzie" >= 0 OR (typeOf _vehicle) find "ADM" >= 0 || (typeOf _vehicle) find "DRPG" >= 0) then {

	_loc = getMarkerPos _spawnPoint;
	_loc = [_loc select 0, _loc select 1, (_loc select 2)+1.5];

	call 
	{
		if (_colorIndex isEqualTo "Red") exitWith {_color = "#(argb,8,8,3)color(1,0,0,1)"};
		if (_colorIndex isEqualTo "Black") exitWith {_color = "#(argb,8,8,3)color(0,0,0,1)"};
		if (_colorIndex isEqualTo "Dark Blue") exitWith {_color = "#(argb,8,8,3)color(0,0,0.627451,1)"};
		if (_colorIndex isEqualTo "Yellow") exitWith {_color = "#(argb,8,8,3)color(1,1,0,1)"};
		if (_colorIndex isEqualTo "Pink") exitWith {_color = "#(argb,8,8,3)color(1,0,1,1)"};
		if (_colorIndex isEqualTo "Grey") exitWith {_color = "#(argb,8,8,3)color(0.5,0.5,0.5,1)"};
		if (_colorIndex isEqualTo "Purple") exitWith {_color = "#(argb,8,8,3)color(0.501961,0,0.501961,1)"};
		if (_colorIndex isEqualTo "Orange") exitWith {_color = "#(argb,8,8,3)color(1,0.501961,0,1)"};
	};

	_vehicle = createVehicle [_className, _loc, [], 0, "NONE"];
	_vehicle setVariable ["skin", _color];
	waitUntil {!isNil "_vehicle"}; //Wait?
	_vehicle allowDamage false; //Temp disable damage handling..
	_vehicle lock 2;
	_vehicle setVectorUp (surfaceNormal _loc);
	_vehicle setDir (markerDir _spawnPoint);
	_vehicle setPos _loc;
	//[_vehicle,_colorIndex] remoteExecCall ["life_fnc_colorVehicle",RCLIENT];
	[_vehicle] call life_fnc_clearVehicleAmmo;
	[_vehicle,"trunk_in_use",false,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	[_vehicle,"vehicle_info_owners",[[getPlayerUID player,profileName]],true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	_vehicle disableTIEquipment true; //No Thermals.. They're cheap but addictive.
};

if((typeOf _vehicle) find "C_" >= 0 OR (typeOf _vehicle) find "B_" >= 0 OR (typeOf _vehicle) find "I_" >= 0 OR OR (typeOf _vehicle) find "O_" >= 0) then {

	_loc = getMarkerPos _spawnPoint;
	_loc = [_loc select 0, _loc select 1, (_loc select 2)+1.5];

	_color = "";

	_vehicle = createVehicle [_className, _loc, [], 0, "NONE"];
	_vehicle setVariable ["skin", _color];
	waitUntil {!isNil "_vehicle"}; //Wait?
	_vehicle allowDamage false; //Temp disable damage handling..
	_vehicle lock 2;
	_vehicle setVectorUp (surfaceNormal _loc);
	_vehicle setDir (markerDir _spawnPoint);
	_vehicle setPos _loc;

	if(playerSide == civilian) then {
		_textures = SEL(SEL(M_CONFIG(getArray,CONFIG_VEHICLES,(typeOf _vehicle),"textures"),_colorIndex),2);
		if((!isNil "_textures") OR {!(EQUAL(count _textures,0))}) then {
			{_vehicle setObjectTextureGlobal [_forEachIndex,_x];} foreach _textures;
		};
	};
	
	[_vehicle,_colorIndex] remoteExecCall ["life_fnc_colorVehicle",RCLIENT];
	[_vehicle] call life_fnc_clearVehicleAmmo;
	[_vehicle,"trunk_in_use",false,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	[_vehicle,"vehicle_info_owners",[[getPlayerUID player,profileName]],true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
	_vehicle disableTIEquipment true; //No Thermals.. They're cheap but addictive.
};

//Side Specific actions.
switch(playerSide) do {
	case west: {
		[_vehicle,"cop_offroad",true] spawn life_fnc_vehicleAnimate;
	};

	case civilian: {
		if(EQUAL(SEL(life_veh_shop,2),"civ") && {_className == "B_Heli_Light_01_F"}) then {
			[_vehicle,"civ_littlebird",true] spawn life_fnc_vehicleAnimate;
		};
	};

	case independent: {
		[_vehicle,"med_offroad",true] spawn life_fnc_vehicleAnimate;
	};
};

if(_className == "IVORY_REV") then {
	if(_colorIndex in [11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29]) then {
		[_vehicle,"cop_rev",true] spawn life_fnc_vehicleAnimate;
	};
};

if(_className == "IVORY_PRIUS") then {
	if(_colorIndex in [14]) then {
		[_vehicle,"med_prius",true] spawn life_fnc_vehicleAnimate;
	};

     if(playerside == "civilian" && _colorIndex in [14]) then {
		[_vehicle,"sports_prius",true] spawn life_fnc_vehicleAnimate;
     };

    if(_colorIndex in [14] && playerside != "civilian") then {
		[_vehicle,"med_prius",true] spawn life_fnc_vehicleAnimate;
	};


	if(_colorIndex in [7,8,9,10,22,23,24,25]) then {
		[_vehicle,"sports_prius",true] spawn life_fnc_vehicleAnimate;
	};
	if(_colorIndex in [11,26]) then {
		[_vehicle,"taxi_prius",true] spawn life_fnc_vehicleAnimate;
	};
	if(_colorIndex in [12,13]) then {
		[_vehicle,"cop_prius",true] spawn life_fnc_vehicleAnimate;
	};
	if(_colorIndex in [15,16,17,18,19,20,21,22,23,24,25,26]) then {
		[_vehicle,"uc_prius",true] spawn life_fnc_vehicleAnimate;
	};
};

if(_className == "A3L_M3") then {
	if(_colorIndex in [1,2,3,4,7,8,9,10,11,12,13,16,17]) then {
		[_vehicle,"m3_glossy",true] spawn life_fnc_vehicleAnimate;
	};
	if(_colorIndex in [5,14]) then {
		[_vehicle,"m3_matte",true] spawn life_fnc_vehicleAnimate;
	};
	if(_colorIndex in [6,15]) then {
		[_vehicle,"m3_chrome",true] spawn life_fnc_vehicleAnimate;
	};
	if(_colorIndex in [6,7,15,16]) then {
		[_vehicle,"m3_spoiler",true] spawn life_fnc_vehicleAnimate;
	};
	if(_colorIndex in [9,10,11,12,13,14,15,16,17]) then {
		[_vehicle,"m3_police",true] spawn life_fnc_vehicleAnimate;
	};
};

_vehicle allowDamage true;

//life_vehicles set[count life_vehicles,_vehicle]; //Add err to the chain.
life_vehicles pushBack _vehicle;
[[getPlayerUID player,playerSide,_vehicle,1],"TON_fnc_keyManagement",RSERV];

if(_mode) then {
	if(!(_className in ["B_G_Offroad_01_armed_F","B_MRAP_01_hmg_F"])) then {
		[(getPlayerUID player),playerSide,_vehicle,_colorIndex, _color] remoteExecCall ["TON_fnc_vehicleCreate",RSERV];
	};
};

[0] call SOCK_fnc_updatePartial;
closeDialog 0; //Exit the menu.
true;