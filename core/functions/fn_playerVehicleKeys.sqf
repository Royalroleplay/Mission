/*
    File: fn_playerVehicleKeys.sqf
    Author: Metalstorm
    Modified : Bad^^Eye

    Description:
    Adds keys back to the player after relogging/death/disconnect
*/

private["_vehicles", "_uid", "_index"];

_vehicles = (allMissionObjects "Car" + allMissionObjects "Air" + allMissionObjects "Ship");

_uid = getPlayerUID player;

{
    if(alive _x) then
    {
        // Get the owners of the vehicle
        _vehicle = _x;
        _owners = _vehicle getVariable ["vehicle_info_owners", []];
        {
        	if((_x select 0) isEqualTo _uid) then
        	{
        		life_vehicles pushBack _vehicle;
        	};
    	} foreach _owners;
    };
} foreach _vehicles;

