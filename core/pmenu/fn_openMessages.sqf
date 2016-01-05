#include "..\..\script_macros.hpp"
/*
	File: fn_openMessages.sqf
	Author: Adam Duke
	
	Description:
	Opens the message dialog
*/
private["_display", "_name"];
disableSerialization;

closeDialog 0;
createDialog "rr_phone_message";

ctrlSetText [1000, format ["%1", name player]];

{
	if(alive _x && _x != player) then {
		switch (side _x) do {
			case west: {_type = "Cop"};
			case civilian: {_type = "Civ"};
			case independent: {_type = "Med"};
		};
		lbAdd [3004, format["%1 (%2)",_x GVAR ["realname",name _x],_type]];
		lbSetData [3004, (lbSize 3004)-1,str(_x)];
	};
} foreach playableUnits;

if (count playableUnits <= 1) then {
	lbAdd [3004, "No other players online"];
};