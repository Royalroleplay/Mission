#include "..\..\script_macros.hpp"
/*
	File: fn_settingsMenu
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Setup the settings menu.
*/
disableSerialization;

closeDialog 0;
createDialog 'rr_phone_settings';

/* Set up the sliders */
{
	slidersetRange [SEL(_x,0),100,12000];
	CONTROL(20062,SEL(_x,0)) sliderSetSpeed [100,100,100];
	sliderSetPosition [SEL(_x,0),SEL(_x,1)];
} foreach [[1900,life_vdFoot],[1901,life_vdCar],[1902,life_vdAir]];

if(isNil "life_tagson") then {
	life_sidechat = true;
	life_tagson = true;
	life_revealObjects = true;
};

CONTROL(20062,2801) cbSetChecked life_sidechat;
CONTROL(20062,2800) cbSetChecked life_tagson;
CONTROL(20062,2802) cbSetChecked life_revealObjects;
