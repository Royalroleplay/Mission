#include <macro.h>
/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

if(isNil "life_lastState") then {life_lastState = vehicle player;};
if(isNil "life_bp") then {life_bp = "";};

if(backpack player == "") then {
	life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight");
	life_bp = backpack player;
} else {
	if(!(EQUAL(backpack player,"")) && {!(EQUAL(backpack player,life_bp))}) then {
		life_bp = backpack player;
		life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight") + round(FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,life_bp,"maximumload") / 4);
	};
};

/* Check if the weight has changed and the player is carrying to much */
if(life_carryWeight > life_maxWeight && {!isForcedWalk player}) then {
	player forceWalk true;
	player setFatigue 1;
	hint localize "STR_NOTF_MaxWeight";
} else {
	if(isForcedWalk player) then {
		player forceWalk false;
	};
};

//Update view distance on state change
if(vehicle player != life_lastState OR {!alive player}) then {
	[] call life_fnc_updateViewDistance;
	life_lastState = vehicle player;
};