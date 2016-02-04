#include <macro.h>
/*
    File: fn_saveGear.sqf
    Author: Bryan "Tonic" Boardwine
    Full Gear/Y-Menu Save by Vampire
    Edited: Itsyuka
    
    Description:
    Saves the players gear for syncing to the database for persistence..
*/
private["_return","_uItems","_bItems","_vItems","_pItems","_hItems","_yItems","_uMags","_vMags","_bMags","_pMag","_hMag","_uni","_ves","_bag","_handled"];
_return = [];

_return pushBack uniform player;
_return pushBack vest player;
_return pushBack backpack player;
_return pushBack goggles player;
_return pushBack headgear player;
_return pushBack assignedITems player;
if(playerSide == west || playerSide == civilian && {(LIFE_SETTINGS(getNumber,"save_civ_weapons") isEqualTo 1)}) then {
    _return pushBack primaryWeapon player;
    _return pushBack handgunWeapon player;
} else {
    _return pushBack [];
    _return pushBack [];
};

_uItems = [];
_uMags  = [];
_bItems = [];
_bMags  = [];
_vItems = [];
_vMags  = [];
_pItems = [];
_hItems = [];
_yItems = [];
_uni = [];
_ves = [];
_bag = [];

if(!(uniform player isEqualTo "")) then {
    {
        if (_x in (magazines player)) then {
			FNC_ADD(_uMags,[_x]);
        } else {
            FNC_ADD(_uItems,[_x]);
        };
    } forEach (uniformItems player);
};

if(!(backpack player isEqualTo "")) then {
    {
        if (_x in (magazines player)) then {
			FNC_ADD(_bMags,[_x]);
        } else {
			FNC_ADD(_bItems,[_x]);
        };
    } forEach (backpackItems player);
};

if(!(vest player isEqualTo "")) then {
    {
        if (_x in (magazines player)) then {
			FNC_ADD(_vMags,[_x]);
        } else {
			FNC_ADD(_vItems,[_x]);
        };
    } forEach (vestItems player);
};

if(count (primaryWeaponMagazine player) > 0 && alive player) then {
    _pMag = ((primaryWeaponMagazine player) select 0);
	
    if(!(_pMag isEqualTo "")) then {
        _uni = player canAddItemToUniform _pMag;
        _ves = player canAddItemToVest _pMag;
        _bag = player canAddItemToBackpack _pMag;
        _handled = false;
		
        if(_ves) then {
			FNC_ADD(_vMags,[_pMag]);
            _handled = true;
        };
		
        if(_uni && !_handled) then {
			FNC_ADD(_uMags,[_pMag]);
            _handled = true;
        };
		
        if(_bag && !_handled) then {
			FNC_ADD(_bMags,[_pMag]);
            _handled = true;
        };
    };
};

if(count (handgunMagazine player) > 0 && alive player) then {
    _hMag = ((handgunMagazine player) select 0);
	
    if(!(_hMag isEqualTo "")) then {
        _uni = player canAddItemToUniform _hMag;
        _ves = player canAddItemToVest _hMag;
        _bag = player canAddItemToBackpack _hMag;
        _handled = false;
		
        if(_ves) then {
			FNC_ADD(_vMags,[_hMag]);
            _handled = true;
        };
		
        if(_uni && !_handled) then {
			FNC_ADD(_uMags,[_hMag]);
            _handled = true;
        };
		
        if(_bag && !_handled) then {
            FNC_ADD(_uMags,[_hMag]);
            _handled = true;
        };
    };
};

if(count (primaryWeaponItems player) > 0) then {
    {
		FNC_ADD(_pItems,[_x]);
    } forEach (primaryWeaponItems player);
};

if(count (handgunItems player) > 0) then {
    {
		FNC_ADD(_hItems,[_x]);
    } forEach (handGunItems player);
};

{
    _val = ITEM_VALUE(_x);
    if (_val > 0) then {
		_yItems pushBack [_x,_val];
    };
} forEach ["pickaxe","boltcutter","hacking_device","fuelEmpty","fuelFull","spikeStrip", "lockpick", "defuseKit","storageSmall","storageBig","redgull","coffee","waterBottle","rope","apple","peach","tbacon","donut","rabbit_raw","rabbit_grilled","salema_raw","salema_grilled","ornate_raw","ornate_grilled","mackerel_raw","mackerel_grilled","tuna_raw","tuna_grilled","mullet_raw","mullet_fried","catshark_raw","catshark_fried","turtle_raw","turtle_soup","hen_raw","hen_fried","rooster_raw","rooster_grilled","sheep_raw","sheep_grilled","goat_raw","goat_grilled"];

_return pushBack _uItems;
_return pushBack _uMags;
_return pushBack _bItems;
_return pushBack _bMags;
_return pushBack _vItems;
_return pushBack _vMags;
_return pushBack _pItems;
_return pushBack _hItems;

if(LIFE_SETTINGS(getNumber,"save_virtualItems") isEqualTo 1) then {
    _return pushBack _yItems;
} else {
    _return pushBack [];
};

life_gear = _return;