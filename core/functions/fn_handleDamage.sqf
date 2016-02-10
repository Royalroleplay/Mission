#include <macro.h>
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Handles damage, specifically for handling the 'tazer' handgunWeapon player and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = (_this select 0);
_part = (_this select 1);
_damage = (_this select 2);
_source = (_this select 3);
_projectile = (_this select 4);

if(_part == "") then {
	_damage = 0;
};

//systemChat format["Damage Handler Fired: %1",_this];

//Handle the tazer first (Top-Priority).
if(!isNull _source) then {
	if(_source != _unit) then {
		if(_projectile == "26_taser") then {
			if(side _source == west) then {
				private["_distance","_isVehicle","_isQuad"];
				_isVehicle = if(vehicle player != player) then {true} else {false};
				_isQuad = if(_isVehicle) then {if(typeOf (vehicle player) == "B_Quadbike_01_F") then {true} else {false}} else {false};
				
				_damage = 0;
				if(_unit distance _source < 40) then {
					if(!life_istazed && !(_unit getVariable ["restrained",false])) then {
						if(_isVehicle && _isQuad) then {
							player action ["Eject",vehicle player];
							[_unit,_source] spawn life_fnc_tazed;
						} else {
							[_unit,_source] spawn life_fnc_tazed;
						};
					};
				};
			};
			
			//Temp fix for super tasers on cops.
			if(playerSide == west && side _source == west) then {
				_damage = 0;
			};
		};

		if(_projectile == "jackhammer_ammo") then {
			_damage = 0;
		};
	};
};

if(vehicle _source isKindOf "LandVehicle") then {
	if(_source != _unit AND {alive _unit} AND {isPlayer _source}) then {
		_damage = 0;
	};
};

/*
if(isPlayer _unit) then 
{
	if(alive _unit) then 
	{
		_damage_clone = round((1 - _damage * 100)
		if(_damage_clone >= life_health) then {life_health = 0}; 
		life_health = life_health - _damage_clone;
	}
	else
	{
		life_health = 0;
	};
};
*/

[] call life_fnc_hudUpdate;

_damage