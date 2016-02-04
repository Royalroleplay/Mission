#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Sends specific information to the server to update on the player,
	meant to keep the network traffic down with large sums of data flowing
	through life_fnc_MP
*/
private["_mode","_packet","_array","_flag"];
_mode = param [0,0,[0]];
_packet = [getPlayerUID player,playerSide,nil,_mode];
_array = [];
_flag = switch(playerSide) do {case west: {"cop"}; case civilian: {"civ"}; case independent: {"med"};};

switch(_mode) do {
	case 0: {
		_packet set[2,life_cash];
	};
	
	case 1: {
		_packet set[2,life_atmbank];
	};
	
	case 2: {
		{
			_varName = LICENSE_VARNAME(configName _x,_flag);
			_array pushBack [_varName,LICENSE_VALUE(configName _x,_flag)];
		} foreach (format["getText(_x >> 'side') isEqualTo '%1'",_flag] configClasses (missionConfigFile >> "Licenses"));
		
		_packet set[2,_array];
	};
	
	case 3: {
		[] call life_fnc_saveGear;
		_packet set[2,life_gear];
	};
	
	case 4: {
		//Not yet implemented
	};
	
	case 5: {
		_packet set[2,life_is_arrested];
		_packet set[4,life_jailtime];
	};
	
	case 6: {
		_packet set[2,life_cash];
		_packet set[4,life_atmbank];
	};
};

if(!isNil "hc_1" && {!isNull hc_1}) then {
	_packet remoteExecCall ["DB_fnc_updatePartial",hc_1];
}else{
	_packet remoteExecCall ["DB_fnc_updatePartial",RSERV];
};