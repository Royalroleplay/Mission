#include "..\..\script_macros.hpp"
/*
	File: fn_insertPlayerInfo.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Read the file name... Explains it.
*/
if(!hasInterface && {!isDedicated}) exitWith {};
	
if(life_session_completed) exitWith {}; //Why did this get executed when the client already initialized? Fucking arma...
cutText[localize "STR_Session_QueryFail","BLACK FADED"];
0 cutFadeOut 9999999;

if(!isNil "hc_1" && {!isNull hc_1}) then {
	[getPlayerUID player,profileName,CASH,BANK,player] remoteExecCall ["DB_fnc_insertRequest",hc_1];
} else {
	[getPlayerUID player,profileName,CASH,BANK,player] remoteExecCall ["DB_fnc_insertRequest",RSERV];
};