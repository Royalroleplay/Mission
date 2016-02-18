/*
	Versão : 0.2
	Nome : statusBar.sqf
	Autor : Bosco
	Data de Criação : 07/02/2016
	Descrição : Barra de Status para Life,Wasteland,Epoch e Exile.

*/

waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

	_rscLayer = "osefStatusBarAdmin" call BIS_fnc_rscLayer;
	_rscLayer cutRsc["osefStatusBarAdmin","PLAIN"];
	[] spawn
	{

		uiSleep 5;
		_colourDefault 	= parseText "#ffffff";
		_colourExtra	= parseText "#38bee1";
		_colour108		= parseText "#FF7000";
		_colour107		= parseText "#FF9000";
		_colour106		= parseText "#FFBB00";
		_colour105		= parseText "#FFCC00";
		_colour104		= parseText "#81CCDD";
		_colour103		= parseText	"#33AACC";
		_colour102		= parseText "#3388CC";
		_colour101		= parseText "#3366CC";
		_colour100 		= parseText "#00FF00";
		_colour90 		= parseText "#98FB98";
		_colour80 		= parseText "#FFA07A";
		_colour70 		= parseText "#FFA500";
		_colour60 		= parseText "#FF8C00";
		_colour50 		= parseText "#FF6347";
		_colour40 		= parseText "#FF4500";
		_colour30 		= parseText "#FF0000";
		_colour20 		= parseText "#FF0000";
		_colour10 		= parseText "#FF0000";
		_colour0 		= parseText "#FF0000";
		_colourDead 	= parseText "#1C1C1C";
		_uid = getPlayerUID player;


	while {true} do
	{

		uiSleep 1;


		if(isNull ((uiNamespace getVariable "osefStatusBarAdmin")displayCtrl 55554)) then
		{
			diag_log "statusbar is null create";
			disableSerialization;
			_rscLayer = "osefStatusBarAdmin" call BIS_fnc_rscLayer;
			_rscLayer cutRsc["osefStatusBarAdmin","PLAIN"];
		};


		_unit = _this select 0;
		_damage = round ((1 - (damage player)) * 100);
		_cash = [life_cash] call life_fnc_numberText;
		_bank = [life_atmbank] call life_fnc_numberText;
		_serverFPS = round diag_fps;
		_grid = mapGridPosition  player; _xx = (format[_grid]) select  [0,3];
		_yy = (format[_grid]) select  [3,3];
		_time = serverTime;
		
		_hours = (floor(_time/60));
		_minutes = (floor(_time - (_hours * 60)));
		
		_colourDamage = _colourDefault;
		if(_damage >= 100) then{_colourDamage = _colour100;};
		if((_damage >= 90) && (_damage < 100)) then {_colourDamage =  _colour100;};
		if((_damage >= 80) && (_damage < 90)) then {_colourDamage =  _colour80;};
		if((_damage >= 70) && (_damage < 80)) then {_colourDamage =  _colour70;};
		if((_damage >= 60) && (_damage < 70)) then {_colourDamage =  _colour60;};
		if((_damage >= 50) && (_damage < 60)) then {_colourDamage =  _colour50;};
		if((_damage >= 40) && (_damage < 50)) then {_colourDamage =  _colour40;};
		if((_damage >= 30) && (_damage < 40)) then {_colourDamage =  _colour30;};
		if((_damage >= 20) && (_damage < 30)) then {_colourDamage =  _colour20;};
		if((_damage >= 10) && (_damage < 20)) then {_colourDamage =  _colour10;};
		if((_damage >= 1) && (_damage < 10)) then {_colourDamage =  _colour0;};
		if(_damage < 1) then{_colourDamage =  _colourDead;};

		((uiNamespace getVariable "osefStatusBarAdmin")displayCtrl 55554)ctrlSetStructuredText parseText
			format["
			<t color='%10'>Civilians: %2</t>
			<t color='%10'>Police: %11</t>
			<t color='%10'>Medics: %12</t>
			<t color='%10'>FPS: %4</t>
			<t color='%10'>Health: %3%1</t>
			<t color='%10'>Hunger: %15%1</t>
			<t color='%10'>Thirst: %16%1</t>
			<t color='%10'>Bank: %8</t>
			<t color='%10'>Cash: %10</t>
			<t color='%10'>Uptime: %17 Minutes %18 Seconds </t>",


					"%",
					civilian countSide playableUnits,
					_damage,
					_serverFPS,
					_colourDefault,
					_colourDamage,
					_grid,
					_bank,
					_time,
					_cash,
					west countSide playableUnits,
					independent countSide playableUnits,
					format["%1/%2",_xx,_yy],
					_colourExtra,
					life_hunger,
					life_thirst,
					_hours,
					_minutes
				];

		};
};