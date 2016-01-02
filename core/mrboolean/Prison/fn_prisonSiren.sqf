/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

if(prison_building getVariable ["prison_break",0] == 1) then {
	if(isServer) then {
		playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", prison_building, false, [9643.17,10081.8,0.001441]];
		playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", prison_building, false, [9643.17,10081.8,0.001441]];
		playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", prison_building, false, [9643.17,10081.8,0.001441]];
	};
};