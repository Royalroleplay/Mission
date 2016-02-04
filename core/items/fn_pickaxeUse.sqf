#include "..\..\script_macros.hpp"
/*
	File: fn_pickaxeUse.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main functionality for pickaxe in mining.
*/
closeDialog 0;
private["_mine","_itemWeight","_diff","_itemName"];
_mine = "";

switch (true) do {
	case (player distance (getMarkerPos "lead_1") < 30): {_mine = ["copper_unrefined",2];};
	case (player distance (getMarkerPos "iron_1") < 30): {_mine = ["iron_unrefined",2];};
	case (player distance (getMarkerPos "salt_1") < 120) : {_mine = ["salt_unrefined",4];};
	case (player distance (getMarkerPos "sand_1") < 75) : {_mine = ["sand",5];};
	case (player distance (getMarkerPos "diamond_1") < 50): {_mine = ["diamond_uncut",1];};
	case (player distance (getMarkerPos "oil_1") < 40) : {_mine = ["oil_unprocessed",1];};
	case (player distance (getMarkerPos "oil_2") < 40) : {_mine = ["oil_unprocessed",1];};
	case (player distance (getMarkerPos "rock_1") < 50): {_mine = ["rock",2];};
	default {""};
};
//Mine check
if(_mine isEqualTo "") exitWith {hint localize "STR_ISTR_Pick_NotNear"};
if(vehicle player != player) exitWith {hint localize "STR_ISTR_Pick_MineVeh";};

_diff = [(_mine select 0),(_mine select 1),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if(_diff isEqualTo 0) exitWith {hint localize "STR_NOTF_InvFull"};

life_action_inUse = true;
for "_i" from 0 to 2 do {
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	uiSleep 2.5;
};

if(([true,(_mine select 0),_diff] call life_fnc_handleInv)) then {
	_itemName = M_CONFIG(getText,"VirtualItems",(_mine select 0),"displayName");
	titleText[format[localize "STR_ISTR_Pick_Success",(localize _itemName),_diff],"PLAIN"];
};

life_action_inUse = false;