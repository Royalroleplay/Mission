#include "..\..\script_macros.hpp"
/*
	File: fn_removeItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Removes the selected item & amount to remove from the players
	virtual inventory.
*/
private["_data","_value"];
disableSerialization;
_data = lbData[1500,(lbCurSel 1500)];
_value = ctrlText 3004;

if(!([_value] call life_fnc_isnumeric)) exitWith {hint "Please enter a valid quantity.";};
if(EQUAL(_data,"")) exitWith {hint "You didn't select anything to remove.";};
if((parseNumber(_value)) <= 0) exitWith {hint "You need to enter an actual amount you want to remove."};
if(player != vehicle player) exitWith {titleText["You cannot remove an item when you are in a vehicle.","PLAIN"]};
if(EQUAL(ITEM_ILLEGAL(_data),1) && ([west,visiblePosition player,100] call life_fnc_nearUnits)) exitWith {titleText["This is an illegal item and cops are near by, you cannot dispose of the evidence","PLAIN"]};
if(!([false,_data,(parseNumber(_value))] call life_fnc_handleInv)) exitWith {hint "Couldn't remove that much of that item, maybe you don't have that amount?"};
hint format["You have successfully removed %1 %2 from your inventory.", _value,(localize ITEM_NAME(_data))];
closeDialog 0;