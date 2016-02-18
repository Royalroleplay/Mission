/**
*
*	Author: MrBoolean
*	Website: http://mrboolean.io
*	Name: fn_encryptRadio.sqf
*	Description: Encrypts radios
*
**/

if(playerSide == west or playerside == independent) then {

	[call TFAR_fnc_activeSwRadio, "S87DBFSD87BFSD87FBSDF78BSD78FBSDDF789BAS"] call TFAR_fnc_setSwRadioCode;
};