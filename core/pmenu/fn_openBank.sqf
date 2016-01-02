#include "..\..\script_macros.hpp"
/*
	File: fn_p_updateMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Updates the player menu (Virtual Interaction Menu)
*/
private["_inv","_lic","_licenses","_near","_near_units","_mstatus","_shrt","_side","_struct"];
disableSerialization;

closeDialog 0;
createDialog 'rr_phone_balance';

ctrlSetText[1000,(player getVariable ["realname",name player])];
ctrlSetText[1001,(format["$%1",[BANK] call life_fnc_numberText])];
ctrlSetText[1002,(format["$%1",[CASH] call life_fnc_numberText])];