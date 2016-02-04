/*
    File: fn_fetch_uid_from_name.sqf
    Author: Bad^^Eye
*/
private ["_name","_return"];

_name = param [0,"",[""]];

_return = false;

{
	if(_name isEqualTo profileName _x) exitWith
	{
		_return = getPlayerUID _x;
	};
} foreach playableUnits;

_return