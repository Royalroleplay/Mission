#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Reskins the vehicle
*/
private "_textures";
params [
	["_vehicle",objNull,[objNull]],
	["_index",-1,[0]]
];

if(isNull _vehicle OR !alive _vehicle OR (_index isEqualTo -1)) exitWith {};
//Does the vehicle already have random styles? Halt till it's set.

if(local _vehicle) then {
	switch (typeOf _vehicle) do {
		case "C_Offroad_01_F": {[_vehicle,"color",3,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
		case "C_Hatchback_01_F": {[_vehicle,"color",1,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
		case "C_Hatchback_01_sport_F": {[_vehicle,"color",1,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
		case "C_SUV_01_F": {[_vehicle,"color",1,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
		case "C_Van_01_box_F": {[_vehicle,"color",1,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
		case "C_Van_01_transport_F": {[_vehicle,"color",1,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];};
	};
};

_textures = ((M_CONFIG(getArray,"CfgVehicles",(typeOf _vehicle),"textures") select _index) select 2);
if(isNil "_textures" OR {(count _textures isEqualTo 0)}) exitWith {};

//Local to us? Set it's color.
if(local _vehicle) then {
	_vehicle setVariable["Life_VEH_color",_index,true];
};

if(local _vehicle && (playerSide isEqualTo civilian) && {(typeOf _vehicle) find "Jonzie" >= 0} OR {(typeOf _vehicle) find "ADM" >= 0} OR {(typeOf _vehicle) find "DRPG" >= 0}) exitWith
{
	_vehicle setVariable["skin",_index,true];
};

[] spawn {
	waitUntil{!isNil {_vehicle getVariable "Life_VEH_color"}};
	{_vehicle setObjectTexture [_forEachIndex,_x];} foreach _textures;
};