#include <macro.h>
#define IDC_TEXT 1000

#define LIFEdisplay (GVAR_UINS ["playerHUD",displayNull])
#define LIFEctrl(ctrl) ((GVAR_UINS ["playerHUD",displayNull]) displayCtrl ctrl)
/*
	File: fn_hudUpdate.sqf
	Author: Dillon "Itsyuka" Modine-Thuen

	Description:
	Updates the HUD when it needs to.
*/
disableSerialization;

if(isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};

LIFEctrl(IDC_TEXT) ctrlsetText format["Health: %1  Thirst: %2  Hunger: %3", round((1 - (damage player)) * 100), life_thirst, life_hunger];