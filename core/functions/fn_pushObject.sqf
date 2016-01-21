/*
      New simple way to handle to push vehicles
      By Von

*/

if (isDedicated) exitwith {};
private ["_Object","_unit","_isWater"];
_Object = _this select 0; // This part might need to change to _Object = cursorTarget
_unit = _this select 1; // This might also may need to be change to _unit = player

if (_unit in _Object) exitwith {titleText ["You can't push from inside the vehicle","PLAIN DOWN",1];};

//Won't work? setOwner is server only?
//_Object setOwner (owner _unit);

_Object setVelocity [(sin(direction _unit))*10, (cos(direction _unit))*10, 0];