
_restrainer = _this select 0;
_type = _this select 1;

if(!(player getVariable [_type,FALSE])) exitWith {};
if(!([side _restrainer,getPos player,30] call life_fnc_nearUnits) && (player getVariable [_type,FALSE]) && vehicle player == player) exitWith {
	player setVariable [_type,FALSE,TRUE];
	player setVariable ["Escorting",FALSE,TRUE];
	player setVariable ["transporting",false,true];
	detach player;
};