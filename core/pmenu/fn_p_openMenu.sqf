#include "..\..\script_macros.hpp"
/*
	File: fn_p_openMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Opens the players virtual inventory menu
*/
disableSerialization;
if(!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
closeDialog 0;

createDialog 'rr_phone_welcome'; uiSleep 0.5;
closeDialog 0;
createDialog 'rr_phone_home';

/*
createDialog "playerSettings";

switch(playerSide) do {
	case west: {
		ctrlShow[2011,false];
	};
	
	case civilian: {
		ctrlShow[2012,false];
	};
};

if(FETCH_CONST(life_adminlevel) < 1) then {
	ctrlShow[2020,false];
	ctrlShow[2021,false];
};

[] call life_fnc_p_updateMenu;

if(FETCH_CONST(life_adminlevel) < 1) then {
	ctrlShow[2020,false];
	ctrlShow[2021,false];
};
*/