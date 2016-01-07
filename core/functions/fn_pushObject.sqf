/*
      New simple way to handle to push vehicles
      By Von

*/

if (isDedicated) exitwith {};
private ["_Object","_unit","_isWater"];
_Object = _this select 0; // This part might need to change to _Object = cursorTarget
_unit = _this select 1; // This might also may need to be change to _unit = player
_isWater = surfaceIsWater position _unit;
if (_isWater) exitwith {titleText ["You can't push from in the water","PLAIN DOWN",1];};
if (_unit in _Object) exitwith {titleText ["You can't push from inside the vehicle","PLAIN DOWN",1];};
_Object setOwner (owner _unit);
_unit playMove "AmovPercMstpSnonWnonDnon_AinvPercMstpSnonWnonDnon_Putdown";
if (currentWeapon _unit == "") then {sleep 1;} else {sleep 2;};
_Object setVelocity [(sin(direction _unit))*3, (cos(direction _unit))*3, 0];