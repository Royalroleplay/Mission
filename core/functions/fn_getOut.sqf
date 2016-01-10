#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Used for syncing house container data but when the inventory menu
	is closed a sync request is sent off to the server.

	vehicle: Object - Vehicle the event handler is assigned to
		position: String - Can be either "driver", "gunner", "commander" or "cargo"
		unit: Object - Unit that left the vehicle
*/
private "_unit";
_unit = param [2,ObjNull,[ObjNull]];
if(isNull _unit) exitWith {}; //MEH

life_curWep_h = currentWeapon _unit;
_unit action ["SwitchWeapon", _unit, _unit, 100];
_unit switchCamera cameraView;