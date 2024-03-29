#include "..\..\script_macros.hpp"
/*
	File: fn_buyClothes.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Buys the current set of clothes and closes out of the shop interface.
*/
private["_price"];
if(((lbCurSel 3101) isEqualTo -1)) exitWith {titleText[localize "STR_Shop_NoClothes","PLAIN"];};

_price = 0;
{
	if(!(_x isEqualTo -1)) then {
		_price = _price + _x;
	};
} foreach life_clothing_purchase;

if(_price > life_cash) exitWith {titleText[localize "STR_Shop_NotEnoughClothes","PLAIN"];};

/* Log That Shit! */
//[getPlayerUID player,life_cash,life_atmbank,_price,life_clothing_purchase,"Clothing Purchase"] remoteExec ["MBF_fnc_logTrans",hc_1];

life_cash = life_cash - _price;

life_clothesPurchased = true;
closeDialog 0;