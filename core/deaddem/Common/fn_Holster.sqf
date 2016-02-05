/*---------------------------------------------------------------------------
	Title:
		Holster Handling

	Intent:
		Make holsters accessable easier.

	Author:
		DEADdem

	Performance Profile:
		RESULT 1: 1.08815ms, Suspension: N
		RESULT 2: 1.10987ms, Suspension: N
		RESULT 3: 2.30221ms, Suspension: Y
---------------------------------------------------------------------------*/
_key = _this select 0;
if(_key == 59 || _key == 60)then{
	_pos = if(_key == 59)then{
		0;
	}else{
		1;
	};
	_slot = DD_Holster select _pos;
	// Nothing in that holster slot, nothing in hands. 
	if(count(_slot) == 0 && (handgunWeapon player == ""))exitWith{
		titleText[format["No action is available"], "PLAIN DOWN"];
	};
	// Weapon in hand, nothing in holster.
	if(count(_slot) == 0 && !(handgunWeapon player == ""))exitWith{
		DD_HOlster set[_pos, [(handgunWeapon player), (handgunItems player), (handgunMagazine player)]];
		titletext[format["%1 sent to %2 holster", (getText(configFile >> "cfgWeapons" >> (handgunWeapon player) >> "displayName")), (["Left", "Right"] select _pos)], "PLAIN DOWN"];
		player removeWeapon (handgunWeapon player);
	};
	// Weapon in holster, nothing in hand.
	if(!(count(_slot) == 0) && (handgunWeapon player == ""))exitWith{
		_weaponToAdd = _slot select 0;
		_items = _slot select 1;
		_Mag = _slot select 2;
		player addWeapon _weaponToAdd;
		if(count(_mag) > 0)then{
			player addMagazine (_mag select 0);
		};
		{
			player addHandgunItem _x;
		}forEach _items;
		
		DD_Holster set [_pos, []];
		titletext[format["You unholstered your %1", (getText(configFile >> "cfgWeapons" >> (handgunWeapon player) >> "displayName"))], "PLAIN DOWN"];
	};
	// Weapon in holster, weapon in hand. Switch!
	if(!(count(_slot) == 0) && !(handgunWeapon player == ""))exitWith{
		_drawGun = _slot select 0;
		_gunitems = _slot select 1;
		_gunmag = _slot select 2;
		DD_Holster set[_pos, [(handgunWeapon player), (handgunItems player), (handgunMagazine player)]];
		
		titletext[format["You switched your %1 for the %2 in your holster.", (getText(configFile >> "cfgWeapons" >> (handgunWeapon player) >> "displayName")), (getText(configFile >> "cfgWeapons" >> _drawGun >> "displayName"))], "PLAIN DOWN"];
		
		player removeWeapon (handgunWeapon player);	
		[_drawGun, _gunitems, _gunmag] spawn {
		
			sleep 1;
			player addWeapon (_this select 0);
			{
				player addHandgunItem _x;
			}forEach (_this select 1);
			if(count(_this select 2) > 0)then{
				player addMagazines [(_this select 2) select 0, 1];
			};
		};
	};
};
