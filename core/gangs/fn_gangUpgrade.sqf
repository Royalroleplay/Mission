#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Determinds the upgrade price and blah
*/
private["_maxMembers","_slotUpgrade","_upgradePrice"];
_maxMembers = group player getVariable ["gang_maxMembers",8];
_slotUpgrade = _maxMembers + 4;
_upgradePrice = round(_slotUpgrade * ((LIFE_SETTINGS(getNumber,"gang_upgradeBase"))) / ((LIFE_SETTINGS(getNumber,"gang_upgradeMultiplier"))));

_action = [
	format[(localize "STR_GNOTF_MaxMemberMSG")+ "<br/><br/>" +(localize "STR_GNOTF_CurrentMax")+ "<br/>" +(localize "STR_GNOTF_UpgradeMax")+ "<br/>" +(localize "STR_GNOTF_Price")+ " <t color='#8cff9b'>$%3</t>",_maxMembers,_slotUpgrade,[_upgradePrice] call life_fnc_numberText],
	localize "STR_Gang_UpgradeMax",
	localize "STR_Global_Buy",
	localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if(_action) then {
	if(life_atmbank < _upgradePrice) exitWith {
		hint parseText format[
			(localize "STR_GNOTF_NotEoughMoney_2")+ "<br/><br/>" +(localize "STR_GNOTF_Current")+ " <t color='#8cff9b'>$%1</t><br/>" +(localize "STR_GNOTF_Lacking")+ " <t color='#FF0000'>$%2</t>",
			[life_atmbank] call life_fnc_numberText,
			[_upgradePrice - life_atmbank] call life_fnc_numberText
		];
	};
	FNC_SUB(life_atmbank,_upgradePrice);
	group player setVariable ["gang_maxMembers",_slotUpgrade,true];
	hint parseText format[localize "STR_GNOTF_UpgradeSuccess",_maxMembers,_slotUpgrade,[_upgradePrice] call life_fnc_numberText];
	[2,group player] remoteExec ["TON_fnc_updateGang",RSERV];
} else {
	hint localize "STR_GNOTF_UpgradeCancel";
};