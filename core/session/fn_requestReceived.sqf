#include "..\..\script_macros.hpp"
/*
	File: fn_requestReceived.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Called by the server saying that we have a response so let's 
	sort through the information, validate it and if all valid 
	set the client up.
*/
if(!hasInterface && {!isDedicated}) exitWith {};
	
life_session_tries = life_session_tries + 1;
if(life_session_completed) exitWith {}; //Why did this get executed when the client already initialized? Fucking arma...
if(life_session_tries > 3) exitWith {cutText[localize "STR_Session_Error","BLACK FADED"]; 0 cutFadeOut 999999999;};

0 cutText [localize "STR_Session_Received","BLACK FADED"];
0 cutFadeOut 9999999;

//Error handling and junk..
if(isNil "_this") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if((typeName _this) isEqualTo "STRING") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if((count _this) isEqualTo 0) exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if((_this select 0) isEqualTo "Error") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if(!((getPlayerUID player) isEqualTo (_this select 0))) exitWith {[] call SOCK_fnc_dataQuery;};

//Parse basic player information.
life_cash = parseNumber (_this select 2);
life_atmbank = parseNumber (_this select 3);
CONST(life_adminlevel,parseNumber (_this select 4));
CONST(life_donator,0);

//Loop through licenses
if(count (_this select 6) > 0) then {
	{missionNamespace setVariable [(_x select 0),(_x select 1)];} foreach ((_this select 6));
};

life_gear = (_this select 8);
[true] call life_fnc_loadGear;

//Parse side specific information.
switch(playerSide) do {
	case west: {
		CONST(life_coplevel, parseNumber(_this select 7));
		CONST(life_medicLevel,0);
		life_blacklisted = (_this select 9);
	};
	
	case civilian: {
		life_is_arrested = (_this select 7);
		life_jailtime = (_this select 9);

		CONST(life_coplevel, 0);
		CONST(life_medicLevel, 0);
		life_houses = (_this select 10);
		{
			_house = nearestObject (call compile format["%1", (_x select 0)]);
			life_vehicles pushBack _house;
		} foreach life_houses;
		
		life_gangData = (_this select 11);
		if(!((count life_gangData) isEqualTo 0)) then {
			[] spawn life_fnc_initGang;
		};
		[] spawn life_fnc_initHouses;
	};
	
	case independent: {
		CONST(life_medicLevel, parseNumber(_this select 7));
		CONST(life_coplevel,0);
	};
};

if(count (_this select 12) > 0) then {
	{life_vehicles pushBack _x;} foreach (_this select 12);
};

life_session_completed = true;