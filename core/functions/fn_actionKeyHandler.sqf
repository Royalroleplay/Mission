#include "..\..\script_macros.hpp"
/*
	File: fn_actionKeyHandler.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Master action key handler, handles requests for picking up various items and
	interacting with other players (Cops = Cop Menu for unrestrain,escort,stop escort, arrest (if near cop hq), etc).
*/
private["_curTarget","_isWater"];
_curTarget = cursorTarget;
if(life_action_inUse) exitWith {}; //Action is in use, exit to prevent spamming.
if(life_interrupted) exitWith {life_interrupted = false;};
_isWater = surfaceIsWater (visiblePositionASL player);

//Check if the player is near an ATM.
if((call life_fnc_nearATM) && {!dialog}) exitWith {
	[] call life_fnc_atmMenu;
};

if(isNull _curTarget) exitWith {
	if(_isWater) then {
		private "_fish";
		_fish = (nearestObjects[visiblePosition player,["Fish_Base_F"],3]) select 0;
		if(!isNil "_fish") then {
			[_fish] call life_fnc_catchFish;
		};
	} else {
		if(playerSide == civilian && !life_action_gathering) then {
			_handle = [] spawn life_fnc_gather;
			waitUntil {scriptDone _handle};
			life_action_gathering = false;
		};
	};
};


if((!(alive _curTarget) && _curTarget isKindOf "Animal" && (!((typeOf _curTarget) isEqualTo "Turtle_F")))) exitWith {
	[_curTarget] call life_fnc_gutAnimal;
};

if(((_curTarget isKindOf "House_F") OR (typeOf _curTarget in ["Land_HouseDoubleAL2","Land_HouseDoubleAL","Land_HouseA","Land_HouseA1","Land_HouseB","Land_HouseB1","Land_HouseC_R","Land_HouseC1_L","Land_HouseA1_L","Land_HouseB1_L"])) && {player distance _curTarget < 12}) exitWith {
	[_curTarget] call life_fnc_houseMenu;
};

if(dialog) exitWith {}; //Don't bother when a dialog is open.
if(vehicle player != player) exitWith {}; //He's in a vehicle, cancel!
life_action_inUse = true;

//Temp fail safe.
[] spawn {
	uiSleep 60;
	life_action_inUse = false;
};

//Check if it's a dead body.
if(_curTarget isKindOf "Man" && {!alive _curTarget} && {playerSide in [west,independent]}) exitWith {
	//Hotfix code by ins0
	if(((playerSide == blufor && {(LIFE_SETTINGS(getNumber,"revive_cops") isEqualTo 1)}) || playerSide == independent) && {"Medikit" in (items player)}) then {
		[_curTarget] call life_fnc_revivePlayer;
	};
};


//If target is a player then check if we can use the cop menu.
if(isPlayer _curTarget && _curTarget isKindOf "Man") then {
	if(!dialog && {playerSide == independent}) then {
		[_curTarget] call life_fnc_emsInteractionMenu;
	};

	if(!dialog && playerSide == west) then {
		[_curTarget] call life_fnc_copInteractionMenu;
	};

	if(!dialog && {playerSide == civilian}) then {
		[_curTarget] call life_fnc_civInteractionMenu;
	};
} else {
	//OK, it wasn't a player so what is it?
	private["_isVehicle","_miscItems","_money","_list"];

	_list = ["landVehicle","Ship","Air"];
	_isVehicle = if(FNC_ISKINDOF(_curTarget,_list)) then {true} else {false};
	_miscItems = ["Land_BottlePlastic_V1_F","Land_TacticalBacon_F","Land_Can_V3_F","Land_CanisterFuel_F","Land_Suitcase_F"];
	_animalTypes = ["Salema_F","Ornate_random_F","Mackerel_F","Tuna_F","Mullet_F","CatShark_F","Turtle_F"];
	_money = "Land_Money_F";

	//It's a vehicle! open the vehicle interaction key!
	if(_isVehicle) then {
		if(!dialog) then {
			if(player distance _curTarget < ((boundingBox _curTarget select 1) select 0)+2) then {
				[_curTarget] call life_fnc_vInteractionMenu;
			};
		};
	} else {
		//Is it a animal type?
		if((typeOf _curTarget) in _animalTypes) then {
			if(((typeOf _curTarget) isEqualTo "Turtle_F") && !alive _curTarget) then {
				private "_handle";
				_handle = [_curTarget] spawn life_fnc_catchTurtle;
				waitUntil {scriptDone _handle};
			} else {
				private "_handle";
				_handle = [_curTarget] spawn life_fnc_catchFish;
				waitUntil {scriptDone _handle};
			};
		} else {
			//OK, it wasn't a vehicle so let's see what else it could be?
			if((typeOf _curTarget) in _miscItems) then {
				[_curTarget,player,false] remoteExecCall ["TON_fnc_pickupAction",RSERV];
			} else {
				//It wasn't a misc item so is it money?
				if(((typeOf _curTarget) isEqualTo _money) && {!(_curTarget getVariable ["inUse",false])}) then {
					[_curTarget,player,true] remoteExecCall ["TON_fnc_pickupAction",RSERV];
				};
			};
		};
	};
};