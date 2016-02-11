#include "..\..\script_macros.hpp"
/*
	File: fn_onPlayerRespawn.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Does something but I won't know till I write it...
*/
private["_unit","_corpse","_containers"];
_unit = (_this select 0);
_corpse = (_this select 1);
life_corpse = _corpse;

//deleteVehicle life_corpse;

//Comment this code out if you want them to keep the weapon on the ground.
_containers = nearestObjects[getPosATL _corpse,["WeaponHolderSimulated"],5]; //Fetch list of containers (Simulated = weapons)
{deleteVehicle _x;} foreach _containers; //Delete the containers.

//Set some vars on our new body.
_unit setVariable ["restrained",FALSE,TRUE];
_unit setVariable ["Escorting",FALSE,TRUE];
_unit setVariable ["transporting",FALSE,TRUE]; //Again why the fuck am I setting this? Can anyone tell me?
_unit setVariable ["steam64id",getPlayerUID player,true]; //Reset the UID.
_unit setVariable ["realname",profileName,true]; //Reset the players name.
_unit setVariable["shot",false,true];

_unit addRating 1e12; //Set our rating to a high value, this is for a ARMA engine thing.
player playMoveNow "amovppnemstpsraswrfldnon";

[] call life_fnc_setupActions;
[_unit,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];
if(LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};