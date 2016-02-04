#include <macro.h>
/*
	File: fn_restrain.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the client.
*/
private["_restrainer","_type"];
_restrainer = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_type = [_this,1,"",[""]] call BIS_fnc_param;

if(isNull _restrainer) exitWith {};

player setVariable [_type, true, true];

titleText[format["You have been %1 by %2", _type, _restrainer getVariable ["realname", name _restrainer]], "PLAIN"];

//Monitor excessive restrainment
[_restrainer, _type] spawn {
	_restrainer = _this select 0;
	_type = _this select 1;

	while {true} do {
		
		uiSleep 300;
		
		if(!(player getVariable [_type,FALSE])) exitWith {};
		if(!([side _restrainer,getPos player,30] call life_fnc_nearUnits) && (player getVariable [_type,FALSE]) && vehicle player == player) exitWith {
			player setVariable [_type,FALSE,TRUE];
			player setVariable ["Escorting",FALSE,TRUE];
			player setVariable ["transporting",false,true];
			detach player;
		};
	};
};

player setVariable ["surrender", false, true];
player setVariable ["knockedout", false, true];

while {player getVariable [_type, false]} do
{
	if(vehicle player == player) then {
		player playMove "AmovPercMstpSnonWnonDnon_Ease";
	};

	_state = vehicle player;
	waitUntil {animationState player != "AmovPercMstpSnonWnonDnon_Ease" || !(player getVariable [_type, false]) || vehicle player != _state};

	if(!alive player) exitWith {};

	if(vehicle player != player) then
	{
		if(driver (vehicle player) == player) then {player action["eject", vehicle player];};
	};
};

if(alive player) then
{
	player playMoveNow "AmovPercMstpSlowWrflDnon";
};

player setVariable [_type, false, true];
player setVariable ["Escorting", false, true];
player setVariable ["transporting", false, true];
detach player;
