/*
	File: fn_robNPC.sqf
	Author: Bad^^Eye
	
	Description:
	Function to rob NPC

	//this addAction[""Rob Store"", life_fnc_robNPC, ""Market""];
*/
private["_shop", "_npc", "_shoptype", "_robberytime", "_nearestlocation", "_marker", "_markername", "_minutes", "_seconds", "_completed"];

_npc = param[0,objNull,[objNull]];
_id = param[2,0,[0]];
_shoptype = param[3,"",[""]];

if((west countSide playableUnits) < 5) exitWith {};
if(_npc in playableUnits) exitWith {};

if((currentWeapon player) in ["", "Binocular", "Rangefinder", "Laserdesignator"]) exitWith {titleText["You need to be more threatening!", "PLAIN"];};

_robberytime = _npc getVariable ["robberytime", -999999];
if(time - _robberytime < 600) exitWith { titleText["A recent robbery has taken place, try agen later", "PLAIN"]; };

_nearestlocation = (nearestLocations [position player, ["FlatAreaCity", "FlatAreaCitySmall", "CityCenter", "Airport", "NameMarine", "NameCityCapital", "NameCity", "NameVillage"], 300]) select 0;

[[0, 2], format["The %1 shop is being robbed near %2", _shoptype, _nearestlocation]] remoteExec ["life_fnc_broadcast", west];
[getPlayerUID player, name player, "211A"] remoteExec ["life_fnc_wantedAdd", 2];

_shop = nearestBuilding _npc;
_markername = format["%1 Shop",_shoptype];
_marker = createMarker[_markername, getPos _shop];
_marker setMarkerColor "ColorRed";
_marker setMarkerText format["%1 Shop -ROBBERY IN PROGRESS-", _shoptype];

_npc removeAction _id;

_completed = false;

_bounty = 5000 + (random(floor 5000));

_seconds = 240;
while true do
{
    if (_seconds > 59) then 
	{
		_minutes = floor (_seconds / 60);
		_seconds = _seconds - (_minutes * 60);
	};

	if (_minutes < 10) then
	{
		_minutes = format["0%1",_minutes];
	};

    hintSilent format ["Robbery sucessfull in %1:%2", _minutes, _seconds];

    uiSleep 1;

    if (!alive player) exitwith {};
    
    if (player distance _npc >= 7) exitwith {};

    if (currentWeapon player == "" || {currentWeapon player == "Binocular"} || {currentWeapon player == "Rangefinder"}) exitwith {};

    if(_seconds isEqualTo 0) exitWith { _completed = true };
};

if (_completed) then
{
	_npc setVariable ["robberytime", time, true];
	life_cash = life_cash + _bounty;
	deleteMarker (_markername);
    uiSleep 1800;
    _npc addAction["Rob Store", life_fnc_robNPC, _shoptype];
	hint format["You have sucessfully robbed the %1 shop", _shoptype];
}
else
{
	deleteMarker (_markername);
    uiSleep 1800;
    _npc addAction["Rob Store", life_fnc_robNPC, _shoptype];
    hint format["You have failed to robbed the %1 shop", _shoptype];
};










