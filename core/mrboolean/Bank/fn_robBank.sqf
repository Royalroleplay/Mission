#include "..\..\..\script_macros.hpp"
/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

if(life_inv_hacking_device < 1) exitWith {hint "You require a hacking device!";};
if(((bank_building getVariable ["time",0])+1800) >= time) exitWith {hint "The bank was robbed too recently!";};
if(bank_building getVariable ["hacking_active",false]) exitWith {hint "Hacking Device Already Active!";};
if(!([false,"hacking_device",1] call life_fnc_handleInv)) exitWith {}; //Error?

bank_building setVariable ["hacking_active",true,true];
[0,"The Lakeside Bank is being robbed!",false] remoteExecCall ["life_fnc_broadcast",west];
[2,"The Lakeside Bank is being robbed!",false] remoteExecCall ["life_fnc_broadcast",west];


//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%","Hacking Bank..."];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do {
	uiSleep 0.5;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%","Hacking Bank..."];
	if(_cP >= 1) exitWith {};
};

5 cutText ["","PLAIN"];

//Hacking not active
bank_building setVariable ["hacking_active",false,true];

//Start Robbery
[] remoteExec ["MBF_Bank_fnc_startRobbery",2];