#include <macro.h>
/*
	File: fn_weaponShopCfg.sqf
*/
private["_shop","_rank","_license","_item","_items","_weaponlist","_items","_return"];

_weaponlist = [];

if(playerside isEqualTo civilian) then
{
	_shop = [_this,0,"",[""]] call BIS_fnc_param;
	if(_shop == "") exitWith {closeDialog 0}; //Bad shop type passed.

	_weaponlist = M_CONFIG(getArray,"WeaponShops",str(playerside),_shop);

	_license = call compile (_weaponlist deleteAt 1);
	
	if(!_license) exitWith 
	{
		_return = "You dont have the appropriate license";
	};

	_return pushBack [_shop,_weaponlist];
}
else
{	 
	_shop = M_CONFIG(getText,"WeaponShops",str(playerside),"name");

	{
		_rank = getNumber(_x >> "rank");
		_license = call compile (getText(_x >> "license"));
		_items = getArray(_x >> "items");

		if(!(FETCH_CONST(life_coplevel) >= _rank)) exitWith {};
		if(!(_license isEqualTo "") && !_license) exitWith {};

		
		if(!(_weaponlist isEqualTo [])) then
		{
			{
				_item = _x select 0;

				{

					if(!(_item in _x)) then
					{
						_weaponlist pushBack _x;
					};

				} foreach _items;

			} foreach _weaponlist;
		}
		else
		{
			_weaponlist pushBack _items;
		};
		
	} foreach ("true" configClasses (missionConfigFile >> "WeaponShops" >> str(playerSide)));

	_return pushBack [_shop,_weaponlist];
};

_return;




