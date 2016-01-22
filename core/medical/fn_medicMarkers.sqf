/*
	File: fn_medicMarkers.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Marks downed players on the map when it's open.
*/
private["_markers","_units"];

uiSleep 0.25;

[] spawn {
	_markers = [];
	_units = [];
	if(visibleMap) then {

		{
			_name = _x getVariable "name";
			_down = _x getVariable ["Revive",false];
			if(!isNil "_name" && !_down) then {
				_units pushBack _x;
			};
		} foreach allDeadMen;
		
		//Loop through and create markers.
		{
			_marker = createMarkerLocal [format["%1_dead_marker",_x],visiblePosition _x];
			_marker setMarkerTypeLocal "loc_Hospital";

			if(_x getVariable ["shot",false]) then {
				_marker setMarkerTextLocal format["%1 : Gunshot Victim",(_x getVariable["name","Unknown Player"])];
				_marker setMarkerColorLocal "ColorRed";
			} else {
				_marker setMarkerColorLocal "ColorOrange";
				_marker setMarkerTextLocal format["%1",(_x getVariable["name","Unknown Player"])];
			};

			_markers pushBack _marker;
		} foreach _units;
		
		waitUntil {!visibleMap};
		{deleteMarkerLocal _x;} foreach _markers;
	};
};

[] spawn {
	_markers = [];
	_ems = [];
	{if(side _x == independent) then {_ems pushBack _x;}} foreach playableUnits;
	
	//Create markers
	{
		_marker = createMarkerLocal [format["%1_marker",_x],visiblePosition _x];
		_marker setMarkerColorLocal "ColorBlue";
		_marker setMarkerTypeLocal "Mil_dot";
		_marker setMarkerTextLocal format["%1", _x getVariable["realname",name _x]];
	
		_markers pushBack [_marker,_x];
	} foreach _ems;	

	
	while {visibleMap} do {
		{
			private["_marker","_unit"];
			_marker = _x select 0;
			_unit = _x select 1;
			if(!isNil "_unit") then {
				if(!isNull _unit) then {
					_marker setMarkerPosLocal (visiblePosition _unit);
				};
			};
		} foreach _markers;
		if(!visibleMap) exitWith {};
		uiSleep 0.02;
	};

	{deleteMarkerLocal (_x select 0);} foreach _markers;
	_markers = [];
	_ems = [];
};