/*
	File: initServer.sqf
	
	Description:
	Starts the initialization of the server.
*/
if(!(_this select 0)) exitWith {}; //Not server
[] call compile PreprocessFileLineNumbers "\life_server\init.sqf";

waitUntil {!isNil "MBF_GameLoop_fnc_addEvent"};
[6.75, life_fnc_prisonSiren, [], true] call MBF_GameLoop_fnc_addEvent;