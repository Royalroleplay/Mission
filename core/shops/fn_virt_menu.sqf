/*
	File: fn_virt_menu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initialize the virtual shop menu.
*/
private["_shop"];
_shop = _this select 3;
if(isNil {_shop}) exitWith {};
life_shop_type = _shop;
life_shop_npc = _this select 0;
if(_shop == "cop" && playerSide != west) exitWith {hint localize "STR_NOTF_NotACop"};

/*

	todo: Spawn this on the dealer

[] spawn {
	systemChat "pausing dealer";
	drug_dealer disableAI "MOVE";
	uiSleep 30;
	drug_dealer enableAI "MOVE";
};

*/

createDialog "shops_menu";

[] call life_fnc_virt_update;