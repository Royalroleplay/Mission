#include "..\..\script_macros.hpp"
/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
private["_position","_spikeStrip"];
_spikeStrip = "A3L_SpikeStrip" createVehicle [0,0,0];
_spikeStrip attachTo[player,[0,5.5,0]];
_spikeStrip setDir 90;
_spikeStrip setVariable["item","spikeDeployed",true];
_spikeStrip setVariable["owner",player,true];

life_action_spikeStripDeploy = player addAction[localize "STR_ISTR_Spike_Place",{if(!isNull life_spikestrip) then {detach life_spikeStrip; life_spikeStrip = ObjNull;}; player removeAction life_action_spikeStripDeploy; life_action_spikeStripDeploy = nil;},"",999,false,false,"",'!isNull life_spikestrip'];
life_spikestrip = _spikeStrip;
waitUntil {isNull life_spikeStrip};

if(!isNil "life_action_spikeStripDeploy") then {player removeAction life_action_spikeStripDeploy;};
if(isNull _spikeStrip) exitWith {life_spikestrip = ObjNull;};

_spikeStrip setPos [(getPos _spikeStrip select 0),(getPos _spikeStrip select 1),0.01];
_spikeStrip addAction ["<t color='#FF0000'>Pack Spikestrip</t>", "if ([true,'spikeStrip',1] call life_fnc_handleInv) then {deleteVehicle (_this select 3)};", _spikeStrip, 1.5, true, true, "", "side _this == west && (_target getVariable 'owner') == _this"];

[_spikeStrip] remoteExec ["TON_fnc_spikeStrip",RSERV]; //Send it to the server for monitoring.