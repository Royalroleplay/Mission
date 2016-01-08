#include <macro.h>
/*
	File: fn_restrain.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the client.
*/
private["_restrainer","_type"];
_restrainer = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_type = [_this,0,"",[""]] call BIS_fnc_param;

systemChat str _this;

if(isNull _restrainer) exitWith {};

systemChat "1";

//Monitor excessive restrainment
[_restrainer, _type] spawn {
	_restrainer = _this select 0;
	_type = _this select 1;

	systemChat "2";
	while {true} do {
		
		sleep 300;
		
		if(!(player GVAR [_type,FALSE])) exitWith {};
		if(!([side _restrainer,getPos player,30] call life_fnc_nearUnits) && (player GVAR [_type,FALSE]) && vehicle player == player) exitWith {
			player SVAR [_type,FALSE,TRUE];
			player SVAR ["Escorting",FALSE,TRUE];
			player SVAR ["transporting",false,true];
			detach player;
		};
	};
};

systemChat "3";

player SVAR ["surrender", false, true];
player SVAR ["knockedout", false, true];

while {player GVAR [_type, false]} do
{
	if(vehicle player == player) then {
		player playMove "AmovPercMstpSnonWnonDnon_Ease";
	};

	_state = vehicle player;
	waitUntil {animationState player != "AmovPercMstpSnonWnonDnon_Ease" || !(player GVAR [_type, false]) || vehicle player != _state};

	if(!alive player) exitWith {};

	if(vehicle player != player) then
	{
		if(driver (vehicle player) == player) then {player action["eject", vehicle player];};
	};
};

systemChat "5";

if(alive player) then
{
	player playMoveNow "AmovPercMstpSlowWrflDnon";
};

player SVAR [_type, false, true];
player SVAR ["Escorting", false, true];
player SVAR ["transporting", false, true];
detach player;

systemChat "6";