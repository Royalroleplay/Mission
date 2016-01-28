/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

if(life_thirst < 2) exitWith {
	[player, 0.25, "body", "water"] call ace_medical_fnc_addDamageToUnit;
	hint localize "STR_NOTF_DrinkMSG_Death";
};

if(!life_is_arrested) then { 
	
	life_thirst = life_thirst - 10;

	if(life_thirst < 2) exitWith {
		[player, 0.25, "body", "water"] call ace_medical_fnc_addDamageToUnit;
		hint localize "STR_NOTF_DrinkMSG_Death";
	};
	
	switch(life_thirst) do {
		case 30: {
			hint localize "STR_NOTF_DrinkMSG_1";
		};
		case 20: {
			hint localize "STR_NOTF_DrinkMSG_2";
			player setFatigue 1;
		};
		case 10: {
			hint localize "STR_NOTF_DrinkMSG_3";
			player setFatigue 1;
		};
	};
};