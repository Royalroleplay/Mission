#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Buys the house?
*/
private["_house","_uid","_action","_houseCfg"];
_house = param [0,ObjNull,[ObjNull]];
_uid = getPlayerUID player;

if(isNull _house) exitWith {};
if(!(_house isKindOf "House_F") OR (typeOf _house in ["Land_HouseDoubleAL2","Land_HouseDoubleAL","Land_HouseA","Land_HouseA1","Land_HouseB","Land_HouseB1","Land_HouseC_R","Land_HouseC1_L","Land_HouseA1_L","Land_HouseB1_L"])) exitWith {};
if((_house getVariable ["house_owned",false])) exitWith {hint "This house is already owned even though you shouldn't be seeing this hint..."};
if(!isNil {(_house getVariable "house_sold")}) exitWith {hint localize "STR_House_Sell_Process"};
if(!license_civ_home) exitWith {hint localize "STR_House_License"};
if(count life_houses >= (LIFE_SETTINGS(getNumber,"house_limit"))) exitWith {hint format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit")]};
closeDialog 0;

_houseCfg = [(typeOf _house)] call life_fnc_houseConfig;
if((count _houseCfg) isEqualTo 0) exitWith {};

_action = [
	format[localize "STR_House_BuyMSG",
	[(_houseCfg select 0)] call life_fnc_numberText,
	(_houseCfg select 1)],localize "STR_House_Purchase",localize "STR_Global_Buy",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if(_action) then {
	if(life_atmbank < (_houseCfg select 0)) exitWith {hint format [localize "STR_House_NotEnough"]};
	[_uid,_house] remoteExec ["TON_fnc_addHouse",RSERV];
	_house setVariable ["house_owner",[_uid,profileName],true];
	_house setVariable ["locked",true,true];
	_house setVariable ["Trunk",[[],0],true];
	_house setVariable ["containers",[],true];
	_house setVariable ["uid",floor(random 99999),true];
	FNC_SUB(life_atmbank,(_houseCfg select 0));

	life_vehicles pushBack _house;
	life_houses pushBack [str(getPosATL _house),[]];
	_marker = createMarkerLocal [format["house_%1",(_house getVariable "uid")],getPosATL _house];
	_houseName = FETCH_CONFIG2(getText,"CfgVehicles",(typeOf _house), "displayName");
	_marker setMarkerTextLocal _houseName;
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerTypeLocal "loc_Lighthouse";
	_numOfDoors = FETCH_CONFIG2(getNumber,"CfgVehicles",(typeOf _house),"numberOfDoors");
	for "_i" from 1 to _numOfDoors do {
		_house setVariable [format["bis_disabled_Door_%1",_i],1,true];
	};
};