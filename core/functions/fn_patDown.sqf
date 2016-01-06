/*
    File: fn_actionPatDown.sqf
    Author: Bad^^Eye

    Description:
    Action to drop all weapons from a player on the ground
*/
private ["_caller", "_mags", "_items", "_weapons", "_container", "_holder"];

_caller = param [0,objNull,[objNull]];

_mags = [];
_items = [];
_weapons = [];

_mags pushBack [magazinesAmmoFull player];

{player removeMagazine _x} foreach (magazines player);

{
	_container = _x;
	{
		_items pushBack _x;
		player unassignItem _x;
		player removeItem _x;
	} forEach _container;
} forEach [primaryWeaponItems player, secondaryWeaponItems player, handGunItems player];

{		
	if(_x != "") then
	{
		_weapons pushBack _x;
		player removeWeapon _x;
	};
} foreach [primaryWeapon player, secondaryWeapon player, handgunWeapon player];

{
	if (!(_x in ["Rangefinder", "Laserdesignator", "Laserdesignator_02", "Laserdesignator_03", "Binocular"])) then
	{
		player removeItem _x;
		_weapons pushBack _x;
	};
}forEach (weapons player);

_holder = createVehicle [ "GroundWeaponHolder", getPosATL player, [], 0, "CAN_COLLIDE" ];

{
	_holder addItemCargoGlobal [_x,1];
}forEach _items; 

{
	_holder addMagazineCargoGlobal [_x select 0,1];
}forEach _mags;

{
	_holder addWeaponCargoGlobal [_x,1];
}forEach _weapons;

_caller reveal _holder;
