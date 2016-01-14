#include "..\..\script_macros.hpp"
/*
	File: fn_pulloutAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Pulls civilians out of a car if it's stopped.
*/
private["_crew", "_remove"];
_crew = crew cursorTarget;

{
	if(side player in [west,independent]) then
	{
		_remove = (_x getVariable ["restrained", false] || _x getVariable ["tiedup", false]);
	}
	else
	{
		_remove = (_x getVariable ["tiedup", false]);
	};

	if(_remove) then {
		_x setVariable ["transporting",false,true]; _x setVariable ["Escorting",false,true];
		[_x] remoteExecCall ["life_fnc_pulloutVeh",_x];
	};
} forEach _crew;