#include "..\..\script_macros.hpp"
/*
	File: fn_atmMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Opens and manages the bank menu.
*/
private["_units","_type"];

if(!life_use_atm) exitWith {
	hint localize "STR_Shop_ATMRobbed";
};

if(!dialog) then {
	if(!(createDialog "Life_atm_management")) exitWith {};
};

disableSerialization;
_units = CONTROL(2700,2703);

lbClear _units;
CONTROL(2700,2701) ctrlSetStructuredText parseText format["<img size='1.7' image='\rr_textures\icons\bank.paa'/> $%1<br/><img size='1.6' image='\rr_textures\icons\money.paa'/> $%2",[life_atmbank] call life_fnc_numberText,[life_cash] call life_fnc_numberText];

{
	_name = _x getVariable ["realname",name _x];
	if(alive _x && (!(_name isEqualTo profileName))) then {
		switch (side _x) do {
			case west: {_type = "Cop"};
			case civilian: {_type = "Civ"};
			case independent: {_type = "EMS"};
		};
		_units lbAdd format["%1 (%2)",_x getVariable ["realname",name _x],_type];
		_units lbSetData [(lbSize _units)-1,str(_x)];
	};
} foreach playableUnits;

lbSetCurSel [2703,0];

if(isNil {(group player getVariable "gang_bank")}) then {
	(CONTROL(2700,2705)) ctrlEnable false;
};