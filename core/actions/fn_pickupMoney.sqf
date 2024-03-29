#include <macro.h>
/*
	File: fn_pickupMoney.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Picks up money
*/
private "_value";
if((time - life_action_delay) < 1.5) exitWith {hint localize "STR_NOTF_ActionDelay"; _this setVariable ["inUse",false,true];};
if(isNull _this OR {player distance _this > 3}) exitWith {_this setVariable ["inUse",false,true];};

_value = ((_this getVariable "item") select 1);
if(!isNil "_value") exitWith {
	deleteVehicle _this;
	
	switch (true) do {
		case (_value > 20000000) : {_value = 100000;}; //VAL>20mil->100k
		case (_value > 5000000) : {_value = 250000;}; //VAL>5mil->250k
		default {};
	};
	
	player playMove "AinvPknlMstpSlayWrflDnon";
	titleText[format[localize "STR_NOTF_PickedMoney",[_value] call life_fnc_numberText],"PLAIN"];

	/* Log That Shit! */
	//[getPlayerUID player,life_cash,life_atmbank,_value,"Picked Up Money",format["Picked Up $%1",_value]] remoteExec ["MBF_fnc_logTrans",hc_1];

	FNC_ADD(life_cash,_value);
	life_action_delay = time;
};