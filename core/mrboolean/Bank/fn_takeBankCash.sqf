#include "..\..\..\script_macros.hpp"
/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

_cash_left = (bank_cash getVariable ["cash_amount",0]);
if(_cash_left <= 0) exitWith {hint "There is no money left! Get out of here!"};
if(life_action_gathering) exitWith {};

life_action_gathering = true;
//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%","Collecting Cash..."];
_progress progressSetPosition 0.01;
_cP = 0.01;

[] spawn {
	for "_i" from 0 to 3 do {
		player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
		waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
		sleep 2.5;
	};
};

while{true} do {
	uiSleep 0.1;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%","Collecting Cash..."];
	if(_cP >= 1) exitWith {};
	if(player distance bank_cash > 8) exitWith {};
};

5 cutText ["","PLAIN"];
life_action_gathering = false;

//Make sure he's within 8m
if(player distance bank_cash > 8) exitWith { hint "You moved too far from the money!"; };

//Check to make sure there is cash left.
_cash_left = bank_cash getVariable ["cash_amount",0];
if(_cash_left <= 0) exitWith {hint "There is no money left! Get out of here!"};


if(_cash_left >= 10000) then {
	
	//There is atleast 10,000, give them 10k
	bank_cash setVariable ["cash_amount",((bank_cash getVariable ["cash_amount",0])-10000),true];
	life_cash = life_cash + 10000;
} else {
	
	//less than $10000 left, give them whats left and set to 0
	life_cash = life_cash + (bank_cash getVariable ["cash_amount",0]);
	bank_cash setVariable ["cash_amount",0,true];
};

if((bank_cash getVariable ["cash_amount",0]) < 1) then {
	deleteVehicle bank_cash;
};