/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

//Run the food and water monitor
[] call life_fnc_foodMonitor;
[] call life_fnc_waterMonitor;

//Done running everything - let's update the hud
[] call life_fnc_hudUpdate;