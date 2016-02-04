#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Tells the player that the gang is created and throws him into it.
*/
private "_group";
life_action_gangInUse = nil;

if(life_atmbank < (LIFE_SETTINGS(getNumber,"gang_price"))) exitWith {
	hint format[localize "STR_GNOTF_NotEnoughMoney",[((LIFE_SETTINGS(getNumber,"gang_price"))-life_atmbank)] call life_fnc_numberText];
	{group player setVariable [_x,nil,true];} foreach ["gang_id","gang_owner","gang_name","gang_members","gang_maxmembers","gang_bank"];
};

FNC_SUB(life_atmbank,(LIFE_SETTINGS(getNumber,"gang_price")));

hint format[localize "STR_GNOTF_CreateSuccess",(group player) getVariable "gang_name",[(LIFE_SETTINGS(getNumber,"gang_price"))] call life_fnc_numberText];