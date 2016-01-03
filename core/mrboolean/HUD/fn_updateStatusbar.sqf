/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

if(alive player) then {

	_serverTime = [serverTime,"HH:MM:SS"] call BIS_fnc_secondsToString;
	_cop = west countSide playableUnits;
	_civ = civilian countSide playableUnits;
	_ems = independent countSide playableUnits;
	_cash = [KWEFookxWQOk] call life_fnc_numberText;
	_bank = [life_atmbank] call life_fnc_numberText;

	_text = parseText format["<img size='1' image='\rr_textures\icons\itime.paa'/><t size='1px'> %1</t> | <img size='1' image='\rr_textures\icons\icop.paa'/><t size='1px'> %2</t> | <img size='1' image='\rr_textures\icons\iciv.paa'/><t size='1px'> %3</t> | <img size='1' image='\rr_textures\icons\iems.paa'/><t size='1px'> %4</t> | <img size='1' image='\rr_textures\icons\icash.paa'/><t size='1px'> %5</t> | <img size='1' image='\rr_textures\icons\iatm.paa'/><t size='1px'> %6</t>",
	_serverTime, _cop, _civ, _ems, _cash, _bank];

	((uiNamespace getVariable "osefStatusBar") displayCtrl 1000) ctrlSetStructuredText _text;

};