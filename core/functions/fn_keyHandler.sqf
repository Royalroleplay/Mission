#include "..\..\script_macros.hpp"
/*
	File: fn_keyHandler.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Main key handler for event 'keyDown'
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_mapKey","_interruptionKeys"];
_ctrl = (_this select 0);
_code = (_this select 1);
_shift = (_this select 2);
_ctrlKey = (_this select 3);
_alt = (_this select 4);
_speed = speed cursorTarget;
_handled = false;

//systemChat format["Ctrl: %1 Code: %2 Shift: %3 CtrlKey: %4 Alt: %5 Speed: %6",_ctrl,_code,_shift,_ctrlKey,_alt,_speed];

_interactionKey = if(count (actionKeys "User10") isEqualTo 0) then {219} else {(actionKeys "User10") select 0};
_mapKey = (actionKeys "ShowMap" select 0);
//hint str _code;
_interruptionKeys = [17,30,31,32]; //A,S,W,D

//Vault handling...
if((_code in (actionKeys "GetOver") || _code in (actionKeys "salute")) && {(player getVariable ["restrained",false])}) exitWith {
	true;
};

if(life_action_inUse) exitWith {
	if(!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
	_handled;
};

//Hotfix for Interaction key not being able to be bound on some operation systems.
if(!(count (actionKeys "User10") isEqualTo 0) && {(inputAction "User10" > 0)}) exitWith {
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	if(!life_action_inUse) then {
		[] spawn {
			private "_handle";
			_handle = [] spawn life_fnc_actionKeyHandler;
			waitUntil {scriptDone _handle};
			life_action_inUse = false;
		};
	};
	true;
};

switch (_code) do {
	//Space key for Jumping
	case 57:
	{
		if(isNil "jumpActionTime") then {jumpActionTime = 0;};
		if(_shift && {animationState player != "AovrPercMrunSrasWrflDf"} && {isTouchingGround player} && {stance player == "STAND"} && {speed player > 2} && {!life_is_arrested} && {(velocity player) select 2 < 2.5} && {time - jumpActionTime > 1.5}) then {
			jumpActionTime = time; //Update the time.
			[player,true] spawn life_fnc_jumpFnc; //Local execution
			[player,false] remoteExec ["life_fnc_jumpFnc",RANY]; //Global execution
			_handled = true;
		};
	};

	case 59: {
		if(_shift) then {_handled = true;};
		if (_shift) then {
			if (vehicle player == player && !(player getVariable ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed) then {
				if (player getVariable ["surrender", false]) then {
					player setVariable ["surrender", false, true];
				} else {
					[] spawn life_fnc_surrender;
				};
			};
		};
	};

	//Map Key
	case _mapKey: {
		switch (playerSide) do {
			case west: {if(!visibleMap) then {[] spawn life_fnc_copMarkers;}};
			case independent: {if(!visibleMap) then {[] spawn life_fnc_medicMarkers;}};
		};
	};

	//Holster / recall weapon.
	case 35: {
		if(_shift && !_ctrlKey && (!(currentWeapon player isEqualTo ""))) then {
			player setVariable ["holstered",true,true];
			life_curWep_h = currentWeapon player;
			player action ["SwitchWeapon", player, player, 100];
			player switchCamera cameraView;
		};

		if(!_shift && _ctrlKey && {!isNil "life_curWep_h"} && {(!(life_curWep_h isEqualTo ""))}) then {
			if(life_curWep_h in [primaryWeapon player,secondaryWeapon player,handgunWeapon player]) then {
				player setVariable ["holstered",false,true];
				player selectWeapon life_curWep_h;
			};
		};
	};

	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	case _interactionKey: {
		if(!life_action_inUse) then {
			[] spawn  {
				private "_handle";
				_handle = [] spawn life_fnc_actionKeyHandler;
				waitUntil {scriptDone _handle};
				life_action_inUse = false;
			};
		};
	};

	//Restraining (Shift + R)
	case 19: {
		if(_shift) then {
			if(playerSide == west) then	
			{

				hint "running restrain action";
				[] call life_fnc_restrainActionCop;
			};

			if(playerSide == civilian) then	{

				[] call life_fnc_restrainAction;
			};

			_handled = true;
		};
	};

	//Knock out, this is experimental and yeah...
	case 34: {
		if(_shift) then {_handled = true;};
		if(_shift && playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget && alive cursorTarget && cursorTarget distance player < 4 && speed cursorTarget < 1) then {
			if((animationState cursorTarget) != "Incapacitated" && (currentWeapon player == primaryWeapon player OR currentWeapon player == handgunWeapon player) && currentWeapon player != "" && !life_knockout && !(player getVariable["restrained",false]) && !life_istazed) then {
				[cursorTarget] spawn life_fnc_knockoutAction;
			};
		};
	};

	//T Key (Trunk)
	case 20: {
		if(!_alt && !_ctrlKey && !dialog && {!life_action_inUse}) then {
			if(vehicle player != player && alive vehicle player) then {
				if((vehicle player) in life_vehicles) then {
					[vehicle player] call life_fnc_openInventory;
				};
			} else {
				private "_list";
				_list = ["landVehicle","Air","Ship","House_F"];
				if(FNC_ISKINDOF(cursorTarget,_list) && {player distance cursorTarget < 7} && {vehicle player == player} && {alive cursorTarget} && {!life_action_inUse}) then {
					if(cursorTarget in life_vehicles OR {!(cursorTarget getVariable ["locked",true])}) then {
						[cursorTarget] call life_fnc_openInventory;
					};
				};
			};
		};
	};

	//L Key?
	case 38: {

		//Radar
		if(!_alt && !_ctrlKey && playerSide == west) then { [] call life_fnc_radar; };

/* Disable mission based cop lights
		//If cop run checks for turning lights on.
		if(_shift && playerSide in [west,independent]) then {
			if(vehicle player != player && (typeOf vehicle player) in ["C_Offroad_01_F","B_MRAP_01_F","C_SUV_01_F"]) then {
				if(!isNil {vehicle player getVariable "lights"}) then {
					if(playerSide == west) then {
						[vehicle player] call life_fnc_sirenLights;
					} else {
						[vehicle player] call life_fnc_medicSirenLights;
					};
					_handled = true;
				};
			};
		};

*/
	};

	//Y Player Menu
	case 21: {
		if(_ctrlKey) then {
			[] call life_fnc_openInv;
		};
		if(!_alt && !_ctrlKey && !dialog && {!life_action_inUse}) then {
			[] spawn life_fnc_p_openMenu;
		};
	};

	//5 - Thumbs Up
	case 6:
	{	
		if(_ctrlKey) then {
			if (isNull objectParent player && !(player getVariable ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed && !life_action_inuse) then
			{
				if (vehicle player == player) then {
					player playActionNow "GestureThumbs";
				};
				_handled = true;
			};
	    };
	};

	//6 - Flip Off
	case 7:
	{	
		if(_ctrlKey) then {
			if (isNull objectParent player && !(player getVariable ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed && !life_action_inuse) then
			{
				if (vehicle player == player) then {
					player playActionNow "gesturefinger";
				};
				_handled = true;
			};
	    };
	};

	//7 - Threaten
	case 8:
	{	
		if(_ctrlKey) then {
			if (isNull objectParent player && !(player getVariable ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed && !life_action_inuse) then
			{
				if (vehicle player == player) then {
					player playActionNow "GestureThreat";
				};
				_handled = true;
			};
	    };
	};

	//8 - Facepalm
	case 9:
	{	
		if(_ctrlKey) then {
			if (isNull objectParent player && !(player getVariable ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed && !life_action_inuse) then
			{
				if (vehicle player == player) then {
					player playActionNow "GestureFacepalm";
				};
				_handled = true;
			};
	    };
	};

	//9 - Dancing
	case 10:
	{	
		if(_ctrlKey) then {
			if (isNull objectParent player && !(player getVariable ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed && !life_action_inuse) then
			{
				if (vehicle player == player) then {
					player playActionNow "GestureDancing";
				};
				_handled = true;
			};
	    };
	};

	//O Key
	case 24: {
		if(_shift) then {
			if (soundVolume != 1) then {
				1 fadeSound 1;
				systemChat localize "STR_MISC_soundnormal";
			} else {
				1 fadeSound 0.1;
				systemChat localize "STR_MISC_soundfade";
			};
		};
	};

	//U Key
	case 22: {
		if(!_alt && !_ctrlKey) then {
			if(vehicle player == player) then {
				_veh = cursorTarget;
			} else {
				_veh = vehicle player;
			};

			if(_veh isKindOf "House_F" && {playerSide == civilian}) then {
				if(_veh in life_vehicles && player distance _veh < 8) then {
					_door = [_veh] call life_fnc_nearestDoor;
					if(_door isEqualTo 0) exitWith {hint localize "STR_House_Door_NotNear"};
					_locked = _veh getVariable [format["bis_disabled_Door_%1",_door],0];

					if(_locked isEqualTo 0) then {
						_veh setVariable [format["bis_disabled_Door_%1",_door],1,true];
						_veh animate [format["door_%1_rot",_door],0];
						systemChat localize "STR_House_Door_Lock";
					} else {
						_veh setVariable [format["bis_disabled_Door_%1",_door],0,true];
						_veh animate [format["door_%1_rot",_door],1];
						systemChat localize "STR_House_Door_Unlock";
					};
				};
			} else {
				_locked = locked _veh;
				if(_veh in life_vehicles && player distance _veh < 8) then {
					if(_locked isEqualTo 2) then {
						if(local _veh) then {
							_veh lock 0;
						} else {
							[_veh,0] remoteExecCall ["life_fnc_lockVehicle",_veh];
						};
						systemChat localize "STR_MISC_VehUnlock";
					} else {
						if(local _veh) then {
							_veh lock 2;
						} else {
							[_veh,2] remoteExecCall ["life_fnc_lockVehicle",_veh];
						};
						systemChat localize "STR_MISC_VehLock";
					};
				};
			};
		};
	};
};

_handled;