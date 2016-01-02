#include "..\..\script_macros.hpp"
/*
	File: fn_civInteractionMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Original code take from copInteraction, reproduced as a civ interaction
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Title 37401

private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7"];

disableSerialization;
_curTarget = param [0,ObjNull,[ObjNull]];
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target

if(!dialog) then {
	createDialog "pInteraction_Menu";
};
if(!isPlayer _curTarget && side _curTarget == civilian) exitWith {closeDialog 0;}; //Bad side check?
_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
life_pInact_curTarget = _curTarget;

if(life_pInact_curTarget getVariable["restrained",false]) then {
	_Btn1 ctrlSetText "UnRestrain";
	_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; life_pInact_curTarget setVariable[""rope"",false,true]; closeDialog 0;";
	
	// player is restrained, but not by rope
	if(!(life_pInact_curTarget getVariable["rope",false])) then {
		_Btn1 ctrlEnable false;
		_Btn3 ctrlEnable false;
		_Btn4 ctrlEnable false;
		_Btn5 ctrlEnable false;
		_Btn6 ctrlEnable false;
	};

	//Player is being escorted and is restrained, give option to stop escorting
	if(life_pInact_curTarget getVariable["Escorting",false]) then {
		_Btn4 ctrlSetText "Stop Escorting";
		_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_stopEscorting; closeDialog 0;";
	};
} else {
	_Btn1 ctrlSetText "Restrain";
	_Btn1 buttonSetAction "if([false,""rope"",1] call life_fnc_handleInv) then { [] call life_fnc_restrainAction; life_pInact_curTarget setVariable[""rope"",true,true]; }; closeDialog 0;";
};

if(life_pInact_curTarget getVariable["blindfold",false]) then {
	_Btn2 ctrlSetText "UnBlindfold";
	_Btn2 buttonSetAction "[false] remoteExec [""life_fnc_blindfold"",life_pInact_curTarget];";
} else {
	_Btn2 ctrlSetText "Blindfold";
	_Btn2 buttonSetAction "if([false,""blindfold"",1] call life_fnc_handleInv) then { [true] remoteExec [""life_fnc_blindfold"",life_pInact_curTarget]; hint ""Successfully Blindfolded""; }; closeDialog 0;";

	if(!(life_pInact_curTarget getVariable["rope",false])) then {
		_Btn2 ctrlEnable false;
	};
};

_Btn3 ctrlSetText "Pat Down";
_Btn3 buttonSetAction "";

_Btn4 ctrlSetText "Escort";
_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";

_Btn5 ctrlSetText "Rob";
_Btn5 buttonSetAction "[] call life_fnc_robAction; closeDialog 0;";

_Btn6 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn6 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";

if(!(life_pInact_curTarget getVariable["restrained",false])) then {
	if(life_inv_rope < 1) then {
		_Btn1 ctrlEnable false;
	};
	
	_Btn2 ctrlEnable false;
	_Btn3 ctrlEnable false;
	_Btn4 ctrlEnable false;
	_Btn5 ctrlEnable false;
	_Btn6 ctrlEnable false;
};

_Btn7 ctrlEnable false;
_Btn7 ctrlShow false;