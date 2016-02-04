#include "..\..\..\script_macros.hpp"
/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

//Start the jailbreak

//hacking_device

if(life_inv_hacking_device < 1) exitWith {hint "You require a hacking device!";};
if(prison_building getVariable ["hacking_active",false]) exitWith {hint "Hacking Device already active!";};
if(!([false,"hacking_device",1] call life_fnc_handleInv)) exitWith {}; //Error?

prison_building setVariable ["hacking_active",true,true];
[0,"STR_ISTR_Prison_Hack"] remoteExecCall ["life_fnc_broadcast",west];


//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%","Hacking Prison..."];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do {
	uiSleep 0.25;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%","Hacking Prison..."];
	if(_cP >= 1) exitWith {};
};

5 cutText ["","PLAIN"];

[prison_building] remoteExec ["MBF_fnc_startBreak",2];