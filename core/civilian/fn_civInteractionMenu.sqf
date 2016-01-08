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
if(!isPlayer _curTarget && side _curTarget == civilian) exitWith {closeDialog 0;}; //Bad side check?

if(!dialog) then {
	createDialog "pInteraction_Menu";
};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
life_pInact_curTarget = _curTarget;

//_rope = life_pInact_curTarget getVariable["rope",false]; this doesnt get changed or as i can see exist!
_escorting = life_pInact_curTarget getVariable["Escorting",false];
_blindfold = life_pInact_curTarget getVariable["blindfold",false];
_restrained = life_pInact_curTarget getVariable["tiedup",false];

if(!_restrained) exitWith {closeDialog 0;}; //Bad side check?


if(_restrained) then {
	_Btn1 ctrlSetText "UnRestrain";
	_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

	if(_blindfold) then {
		_Btn2 ctrlSetText "UnBlindfold";
		_Btn2 buttonSetAction "[false] remoteExec [""life_fnc_blindfold"",life_pInact_curTarget];";
	} else {
		_Btn2 ctrlSetText "Blindfold";
		_Btn2 buttonSetAction "if([false,""blindfold"",1] call life_fnc_handleInv) then { [true] remoteExec [""life_fnc_blindfold"",life_pInact_curTarget]; hint ""Successfully Blindfolded""; }; closeDialog 0;";
	};

	_Btn3 ctrlSetText "Pat Down";
	_Btn3 buttonSetAction "[player] remoteExec [""life_fnc_patDown"",life_pInact_curTarget]; closeDialog 0;";

	//Player is being escorted and is restrained, give option to stop escorting
	if(_escorting) then {
		_Btn4 ctrlSetText "Stop Escorting";
		_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_stopEscorting; closeDialog 0;";
	}else{
		_Btn4 ctrlSetText "Escort";
		_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
	};

	_Btn5 ctrlSetText "Rob";
	_Btn5 buttonSetAction "[] call life_fnc_robAction; closeDialog 0;";

	_Btn6 ctrlSetText localize "STR_pInAct_PutInCar";
	_Btn6 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";

};


_Btn7 ctrlEnable false;
_Btn7 ctrlShow false;

_Btn8 ctrlEnable false;
_Btn8 ctrlShow false;


