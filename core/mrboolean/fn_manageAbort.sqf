/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

//Disable everything
cutText ["Saving and Aborting, Please Wait.","BLACK OUT",1];
1 fadeSound 0;
player enableSimulation false;

_handle = [] call SOCK_fnc_updateRequest;

["Abort", true, false] call BIS_fnc_endMission;