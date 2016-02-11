/*
	File: fn_robNPC.sqf
	Author: Bad^^Eye
	
	Description:
	Function to rob NPC

	//this addAction[""Rob Store"", life_fnc_robNPC, ""Market""];
*/
private["_shop", "_npc", "_shoptype", "_robberytime", "_nearestlocation", "_marker", "_markername", "_minutes", "_time", "_completed"];

_npc = param[0,objNull,[objNull]];
_id = param[2,0,[0]];
_shoptype = param[3,"",[""]];

if((west countSide allPlayers) < 4) exitWith {titleText["This store can not currently be robbed!", "PLAIN"];};
if(_npc in playableUnits) exitWith {};
if((currentWeapon player) in ["", "Binocular", "Rangefinder", "Laserdesignator"]) exitWith {titleText["You need to be more threatening!", "PLAIN"];};

_robberytime = _npc getVariable ["robberytime", -999999];
if(time - _robberytime < 600) exitWith { titleText["A recent robbery has taken place, try agen later", "PLAIN"]; };

/* Start the robbery */
_npc setVariable ["robberytime", time, true];


_nearestlocation = (nearestLocations [position player, ["FlatAreaCity", "FlatAreaCitySmall", "CityCenter", "Airport", "NameMarine", "NameCityCapital", "NameCity", "NameVillage"], 300]) select 0;
[[0, 2], format["The %1 shop is being robbed near %2", _shoptype, _nearestlocation]] remoteExec ["life_fnc_broadcast", west];

_markername = format["%1 Shop",_shoptype];
_marker = createMarker[_markername, getPos _npc];
_marker setMarkerColor "ColorRed";
_marker setMarkerText format["%1 Shop -ROBBERY IN PROGRESS-", _shoptype];

_completed = false;
_bounty = 5000 + (random(floor 5000));

_time = 240;
while {true} do {

	_minutes = 0;
	_seconds = 0;

	if(_time > 59) then {
		_minutes = (floor(_time/60));
		_seconds = (_time - (_minutes * 60));

		if(_seconds < 10) then {
		    hintSilent format ["Robbery sucessfull in %1:0%2", _minutes,_seconds];
		} else {
	    	hintSilent format ["Robbery sucessfull in %1:%2", _minutes,_seconds];
		};
	} else {
	   	hintSilent format ["Robbery sucessfull in %1", _time];
	};
	

    uiSleep 1;
	_time = _time - 1;

    if (!alive player) exitwith {};
    if (player distance _npc >= 10) exitwith {titleText["You left the robbery scene!", "PLAIN"];};
    if ((currentWeapon player) in ["", "Binocular", "Rangefinder", "Laserdesignator"]) exitwith {titleText["You need to be more threatening!", "PLAIN"];};
    if(_time <= 0) exitWith { _completed = true };
};

if (_completed) then {
	life_cash = life_cash + _bounty;
	deleteMarker (_markername);
	hint format["You have sucessfully robbed the %1 shop", _shoptype];
} else {
	deleteMarker (_markername);
    hint format["You have failed to rob the %1 shop", _shoptype];
};