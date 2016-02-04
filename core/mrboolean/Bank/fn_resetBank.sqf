#include "..\..\..\script_macros.hpp"
/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

//Make sure they're a cop
if(playerSide != west) exitWith {};

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%","Resetting Bank..."];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do {
	uiSleep 0.25;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%","Resetting Bank..."];
	if(_cP >= 1) exitWith {};
};

5 cutText ["","PLAIN"];

[] remoteExec ["MBF_Bank_fnc_resetBank",2];