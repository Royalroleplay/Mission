/*
	File: fn_radar.sqf
	Author: Silly Aussie kid named Jaydon
	
	Description:
	Looks like weird but radar?
*/
private ["_speed","_vehicle"];
_vehicle = cursorTarget;
_speed = round speed _vehicle;

if(isNull _vehicle) exitWith {hint "Point at a vehicle!"};
if(playerSide != west) exitWith {};
if(!(_vehicle isKindOf "Car")) exitWith {hint "Point at a land vehicle!"};
if((currentWeapon player) != "Radar_Gun") exitWith {"You need a radar gun in your hand!"};

switch (true) do 
{
	case ((_speed > 33 && _speed <= 80)) :
	{
		hint parseText format ["<t color='#ffffff'><t size='2'><t align='center'>" +(localize "STR_Cop_Radar")+ "<br/><t color='#33CC33'><t align='center'><t size='1'>" +(localize "STR_Cop_VehSpeed"),round  _speed];
	};
	
	case ((_speed > 80)) :
	{	
		hint parseText format ["<t color='#ffffff'><t size='2'><t align='center'>" +(localize "STR_Cop_Radar")+ "<br/><t color='#FF0000'><t align='center'><t size='1'>" +(localize "STR_Cop_VehSpeed"),round  _speed];
	};
};
