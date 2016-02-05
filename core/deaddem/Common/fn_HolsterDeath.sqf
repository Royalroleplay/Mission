/*---------------------------------------------------------------------------
	Title:
		Holster Death Handling

	Intent:
		Takes care of the death aspect of things..

	Author:
		DEADdem

	Performance Profile:
		RESULT 1: 0.039209, Suspension: N
		RESULT 2: 0.041308, Suspension: N
		RESULT 3: 0.041992, Suspension: N
---------------------------------------------------------------------------*/

_slot = _this select 0;

if(count(DD_Holster select _slot) > 0)then{
	_holder = "GroundWeaponHolder" createVehicle (Getpos player);

	_gun = (DD_Holster select _slot) select 0;
	_attachments = (DD_Holster select _slot) select 1;
	_magazine = (DD_Holster select _slot) select 2;


	_holder addWeaponCargo [_gun, 1];
	{
		_holder addItemCargo[_x, 1];
	}forEach _attachments;


	if(count(_magazine) > 0)then{
		_holder addMagazineCargo[_magazine select 0, 1];
	};

	DD_Holster set[_slot, []];
};