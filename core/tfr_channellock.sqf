`/*
	Block Civ's using emergency freq's
*/
private["_shortrangeradio", "_longrangeradio","_radioArray","_radios", "_channel", "_currentFreq"];

if(playerSide != civilian) exitWith {};

while {true} do 
{
	_radioArray = [];
	_radios = player call TFAR_fnc_radiosList;
	if(call TFAR_fnc_haveLRRadio) then
	{
		_radioArray = [TFAR_fnc_ActiveLRRadio, TFAR_fnc_getLRChannel, TFAR_fnc_activeLrRadio];
	};

	if(call TFAR_fnc_haveSWRadio) then
	{
		_radioArray = [TFAR_fnc_ActiveSWRadio, TFAR_fnc_getSWChannel, TFAR_fnc_activeSWRadio];
	};

	if(count _radios isEqualTo 1) then 
	{
		_channel = (call _radioArray select 0) call _radioArray select 1;
		_channel = _channel + 1;
		_currentFreq = [(call _radioArray select 2), _channel] call TFAR_fnc_GetChannelFrequency;
		_currentFreq = parseNumber _currentFreq;

		if( _currentFreq >= 33 && _currentFreq <= 34 ) then 
		{
			hint "You are trying to access a restricted band...";
			[(call _radioArray select 2), _channel, "41"] call TFAR_fnc_SetChannelFrequency;
		};
	}
	else
	{
		{
			if(_forEachIndex != "tf_anprc152") then
			{
				player unassignItem (_radios select (_forEachIndex - 1));
				player removeItem (_radios select (_forEachIndex));
			};

			_channel = (call _radioArray select 0) call _radioArray select 1;
			_channel = _channel + 1;
			_currentFreq = [(call _radioArray select 2), _channel] call TFAR_fnc_GetChannelFrequency;
			_currentFreq = parseNumber _currentFreq;

			if( _currentFreq >= 33 && _currentFreq <= 34 ) then 
			{
				hint "You are trying to access a restricted band...";
				[(call _radioArray select 2), _channel, str (round(random 480)+30)] call TFAR_fnc_SetChannelFrequency;
			};
		} forEach _radios;

		uiSleep 3;
	};

	uiSleep 2;
};

