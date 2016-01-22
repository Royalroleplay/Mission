/*
	Block Civ's using emergency freq's
*/
private["_hasLRRadio", "_hasSWRadio","_radioArray","_radios", "_channel", "_currentFreq","_check"];

if(playerSide != civilian) exitWith {};

[] spawn 
{
	while {true} do 
	{
		_radioArray = [];
		_radios = player call TFAR_fnc_radiosList;
		_hasLRRadio = call TFAR_fnc_haveLRRadio;
		_hasSWRadio = call TFAR_fnc_haveSWRadio;

		if((count _radios) isEqualTo 1) then 
		{
			
			if(_hasLRRadio) then 
			{
				_channel = (call TFAR_fnc_ActiveLRRadio) call TFAR_fnc_getLRChannel;
				_channel = _channel + 1;
				if (driver (vehicle player) == player && (vehicle player) != player) then {
					_curfreqlr = [(call TFAR_fnc_activeLrRadio), _channel] call TFAR_fnc_GetChannelFrequency;
					_curfreqlr = parseNumber _curfreqlr;
					if( _curfreqlr >= 33 && _curfreqlr <= 34 ) then {
						hint "You are trying to access a locked band....";
						[(call TFAR_fnc_activeLrRadio), _channel, "41"] call TFAR_fnc_SetChannelFrequency;
					};
				};
			};

			if(_hasSWRadio) then 
			{
				_channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
				_channel = _channel + 1;
				_curfreqsr = [(call TFAR_fnc_activeSwRadio), _channel] call TFAR_fnc_GetChannelFrequency;
				_curfreqsr = parseNumber _curfreqsr;
				if(!isNil "_curfreqsr") then 
				{
					if( _curfreqsr >= 33 && _curfreqsr <= 34 ) then 
					{
						hint "You are trying to access a locked band....";
						[(call TFAR_fnc_activeSwRadio), _channel, "41"] call TFAR_fnc_SetChannelFrequency;
					};
				};
			};
		}
		else
		{
			{
				if(_x != "tf_anprc152") then
				{
					player unassignItem _x;
					player removeItem _x;
				};

				if(_hasSWRadio) then 
				{
					_channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
					_channel = _channel + 1;
					_curfreqsr = [(call TFAR_fnc_activeSwRadio), _channel] call TFAR_fnc_GetChannelFrequency;
					if(!isNil "_curfreqsr") then 
					{
						hint "You are trying to access a locked band....";
						[(call TFAR_fnc_activeSwRadio), _channel, str (round(random 480)+30)] call TFAR_fnc_SetChannelFrequency;
					};
				};
			} forEach _radios;

			uiSleep 3;
		};

		uiSleep 2;
	};
};

