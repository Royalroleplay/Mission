#include "..\..\script_macros.hpp"
/*
	File: fn_vInteractionMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Replaces the mass addactions for various vehicle actions
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
private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6"];
if(!dialog) then {
	createDialog "vInteraction_Menu";
};
disableSerialization;

_curTarget = param [0,ObjNull,[ObjNull]];
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
_isVehicle = if((_curTarget isKindOf "landVehicle") OR (_curTarget isKindOf "Ship") OR (_curTarget isKindOf "Air")) then {true} else {false};
if(!_isVehicle) exitWith {closeDialog 0;};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
life_vInact_curTarget = _curTarget;

//Set Repair Action
_Btn1 ctrlSetText localize "STR_vInAct_Repair";
_Btn1 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_repairTruck;";
//if("ToolKit" in (items player) && (damage _curTarget < 1)) then {_Btn1 ctrlEnable true;} else {_Btn1 ctrlEnable false;};

_Btn2 ctrlSetText localize "STR_vInAct_Unflip";
_Btn2 buttonSetAction "life_vInact_curTarget setPos [getPos life_vInact_curTarget select 0, getPos life_vInact_curTarget select 1, (getPos life_vInact_curTarget select 2)+0.5]; closeDialog 0;";
if(cursorTarget in life_vehicles) then { _Btn2 ctrlEnable true;} else {_Btn2 ctrlEnable false;};

_Btn3 ctrlSetText "Push";
_Btn3 buttonSetAction "[life_vInact_curTarget, player] spawn life_fnc_pushObject; closeDialog 0;";

_Btn4 ctrlSetText localize "STR_vInAct_PullOut";
_Btn4 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_pulloutAction;";
if(count crew _curTarget == 0) then {_Btn4 ctrlEnable false;};

if(playerside == west) then {

	_Btn5 ctrlSetText localize "STR_vInAct_Registration";
	_Btn5 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_searchVehAction;";
	
	_Btn6 ctrlSetText localize "STR_vInAct_SearchVehicle";
	_Btn6 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_vehInvSearch;";
	
	_Btn7 ctrlSetText localize "STR_vInAct_Impound";
	_Btn7 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_impoundAction;";
};

if(playerside == independent) then {
	
	_Btn5 ctrlSetText localize "STR_vInAct_Impound";
	_Btn5 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_impoundAction;";

	_Btn6 ctrlEnable false;
	_Btn6 ctrlShow false;

	_Btn7 ctrlEnable false;
	_Btn7 ctrlShow false;
};

if(playerside == civilian) then {
	
	_Btn5 ctrlEnable false;
	_Btn5 ctrlShow false;

	_Btn6 ctrlEnable false;
	_Btn6 ctrlShow false;

	_Btn7 ctrlEnable false;
	_Btn7 ctrlShow false;
};

_Btn8 ctrlEnable false;
_Btn8 ctrlShow false;