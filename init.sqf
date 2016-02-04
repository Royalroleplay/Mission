StartProgress = false;
enableSaving[false,false];

//[] execVM "briefing.sqf";
[] execVM "KRON_Strings.sqf";

StartProgress = true;

if(!hasInterface and {!isServer}) exitWith {
	[] call compile PreprocessFileLineNumbers "\royal_hc\init.sqf";
};