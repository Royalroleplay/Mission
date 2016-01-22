/*
*
*	Written by MrBoolean
*	Owned by MrBoolean, All Rights Reserved, Copyright 2014-2015
*	View http://mrboolean.io/approved for a list of servers approved to use my code.
*
*/

deletemarker "nlr";

createMarkerLocal ["nlr", (getPos player)]; 
"nlr" setMarkerShapeLocal "ELLIPSE";
"nlr" setMarkerColorLocal "ColorRed";      
"nlr" setMarkerTextLocal "NLR AREA - DO NOT ENTER!";      
"nlr" setMarkerTypeLocal "WARNING";

MB_NLR = true;
MB_NLRTime = time;