#include "..\..\script_macros.hpp"
/*
	File: fn_medicLoadout.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Loads the medic out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player forceAddUniform "emtrm_uni";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";

//[player,0,"\rr_textures\textures\medic_uniform.jpg"] remoteExecCall ["life_fnc_setTexture",RCLIENT]; Not Need anymore - Von

[] call life_fnc_saveGear;