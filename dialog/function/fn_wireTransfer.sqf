#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initiates the wire-transfer
*/
params [
	["_value",0,[0]],
	["_from","",[""]]
];

if((_value isEqualTo 0) OR (_from isEqualTo "") OR (_from isEqualTo profileName)) exitWith {}; //No
FNC_ADD(life_atmbank,_value);
hint format["%1 has wire transferred $%2 to you",_from,[_value] call life_fnc_numberText];