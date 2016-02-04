#include "..\..\script_macros.hpp"
/*
	File: fn_useItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if(lbCurSel 1500 isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(1500);

switch (true) do {
	case (_item in ["waterBottle","coffee","redgull"]): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			life_thirst = 100;
			if((LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1)) then {player setFatigue 0;};
			if((_item isEqualTo "redgull") && {(LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1)}) then {
				[] spawn { //TODO: Port this to event handler system
					life_redgull_effect = time;
					titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
					player setFatigue 0;
					player enableFatigue false;
					waitUntil {!alive player OR ((time - life_redgull_effect) > (3 * 60))};
					player enableFatigue true;
				};
			};
		};
	};
	
	case (_item isEqualTo "boltcutter"): {
		[cursorTarget] spawn life_fnc_boltcutter;
		closeDialog 0;
	};
	
	case (_item isEqualTo "defusekit"): {
		[cursorTarget] spawn life_fnc_defuseKit;
	};
	
	case (_item in ["storagesmall","storagebig"]): {
		[_item] call life_fnc_storageBox;
	};
	
	case (_item isEqualTo "spikeStrip"): {
		if(!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_spikeStrip;
		};
	};
	
	case (_item isEqualTo "fuelFull"): {
		if(vehicle player != player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
		[] spawn life_fnc_jerryRefuel;
	};
	
	case (_item isEqualTo "lockpick"): {
		[] spawn life_fnc_lockpick;
	};
	
	case (_item in ["apple","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtlesoup","hen","rooster","sheep","goat","donut","tbacon","peach","rabbit_grilled"]): {
		if(!(M_CONFIG(getNumber,"VirtualItems",_item,"edible") isEqualTo -1)) then {
			if([false,_item,1] call life_fnc_handleInv) then {
				_val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
				_sum = life_hunger + _val;
				switch (true) do {
					case (_val < 0 && _sum < 1): {life_hunger = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
					case (_sum > 100): {life_hunger = 100;};
					default {life_hunger = _sum;};
				};
			};
		};
	};
	
	case (_item isEqualTo "pickaxe"): {
		[] spawn life_fnc_pickAxeUse;
	};
	
	default {
		hint localize "STR_ISTR_NotUsable";
	};
};

closeDialog 0;
[] call life_fnc_hudUpdate;