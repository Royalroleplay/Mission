#include "..\..\script_macros.hpp"
/*
	File: fn_revived.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	THANK YOU JESUS I WAS SAVED!
*/
private["_medic","_dir"];
_medic = param [0,"Unknown Medic",[""]];

_oldGear = [life_corpse] call life_fnc_fetchDeadGear;
[_oldGear] spawn life_fnc_loadDeadGear;
life_corpse SVAR ["realname",nil,true]; //Should correct the double name sinking into the ground.
[life_corpse] remoteExecCall ["life_fnc_corpse",RANY];

_dir = getDir life_corpse;
hint format[localize "STR_Medic_RevivePay",_medic,[LIFE_SETTINGS(getNumber,"revive_fee")] call life_fnc_numberText];

closeDialog 0;
life_deathCamera cameraEffect ["TERMINATE","BACK"];
camDestroy life_deathCamera;

//Take fee for services.
if(BANK > (LIFE_SETTINGS(getNumber,"revive_fee"))) then {
	SUB(BANK,(LIFE_SETTINGS(getNumber,"revive_fee")));
} else {
	BANK = 0;
};

if((!isNil "life_death_primary") && life_death_primary != "") then {
	player addWeapon life_death_primary;
};

if((!isNil "life_death_primary_items") && (count life_death_primary_items > 0)) then {
	{
		player addPrimaryWeaponItem _x;
	} forEach life_death_primary_items;
};

if((!isNil "life_death_secondary") && life_death_secondary != "") then {
	player addWeapon life_death_secondary;
};

if((!isNil "life_death_primary_items") && (count life_death_primary_items > 0)) then {
	{
		player addSecondaryWeaponItem _x;
	} forEach life_death_primary_items;
};

if((!isNil "life_death_glasses") && life_death_glasses != "") then {
	player addGoggles life_death_glasses;
};

//Bring me back to life.
player setDir _dir;
player setPosASL (visiblePositionASL life_corpse);

deleteVehicle life_corpse;
//life_corpse SVAR ["Revive",nil,TRUE];
//life_corpse SVAR ["name",nil,TRUE];
//[life_corpse] remoteExecCall ["life_fnc_corpse",RANY];
//hideBody life_corpse;

player SVAR ["Revive",nil,TRUE];
player SVAR ["name",nil,TRUE];
player SVAR ["Reviving",nil,TRUE];
player SVAR ["tf_unable_to_use_radio", false, true];
player SVAR["shot",false,true];
showChat true;
[] call life_fnc_hudUpdate; //Request update of hud.