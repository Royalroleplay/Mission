#include <macro.h>
/*
	File: fn_pickupItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master handling for picking up an item.
*/
private ["_itemInfo","_itemName","_illegal","_diff"];
if((time - life_action_delay) < 2) exitWith {hint localize "STR_NOTF_ActionDelay"; _this getVariable ["inUse",false,true];};
if(isNull _this OR {player distance _this > 3}) exitWith {_this setVariable ["inUse",false,true];};

_itemInfo = _this getVariable ["item",[]]; if((count _itemInfo isEqualTo 0)) exitWith {deleteVehicle _this;};
_itemName = ITEM_NAME(_itemInfo select 0);
_illegal = ITEM_ILLEGAL(_itemInfo select 0);

if(playerSide == west && (_illegal isEqualTo 1)) exitWith {
	titleText[format[localize "STR_NOTF_PickedEvidence",_itemName,[round(ITEM_SELLPRICE(_itemInfo select 0) / 2)] call life_fnc_numberText],"PLAIN"];
	FNC_ADD(life_atmbank,round(ITEM_SELLPRICE(_itemInfo select 0) / 2));
	deleteVehicle _this;
	life_action_delay = time;
};

life_action_delay = time;
_diff = [(_itemInfo select 0),(_itemInfo select 1),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(_diff <= 0) exitWith {hint localize "STR_NOTF_InvFull"; _this setVariable ["inUse",false,true];};

if(!(_diff isEqualTo (_itemInfo select 1))) then {
	if(([true,(_itemInfo select 0),_diff] call life_fnc_handleInv)) then {
		player playMove "AinvPknlMstpSlayWrflDnon";
		
		_this setVariable ["item",[(_itemInfo select 0),(_itemInfo select 1) - _diff],true];
		titleText[format[localize "STR_NOTF_Picked",_diff,localize _itemName],"PLAIN"];
		_this setVariable ["inUse",false,true];
	} else {
		_this setVariable ["inUse",false,true];
	};
} else {
	if(([true,(_itemInfo select 0),(_itemInfo select 1)] call life_fnc_handleInv)) then {
		deleteVehicle _this;
		//waitUntil{isNull _this};
		player playMove "AinvPknlMstpSlayWrflDnon";
		
		titleText[format[localize "STR_NOTF_Picked",_diff,localize _itemName],"PLAIN"];
	} else {
		_this setVariable ["inUse",false,true];
	};
};