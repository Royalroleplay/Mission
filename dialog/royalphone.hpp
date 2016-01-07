class rr_phone_welcome
{
	idd = 20050;                  
	movingEnable = false;      
	enableSimulation = false;    
	controls[] = { rr_phone_welcome_frame, rr_phone_welcome_background, rr_phone_welcome_screen };  

	class rr_phone_welcome_frame: RscFrame
	{
		idc = 1800;
		x = 0.29375 * safezoneW + safezoneX;
		y = 0.225 * safezoneH + safezoneY;
		w = 0.4125 * safezoneW;
		h = 0.55 * safezoneH;
		style = 0;
	};
	class rr_phone_welcome_background: RscPicture
	{
		idc = 1200;
		text = "\rr_textures\phone\RoyalPhone.paa";
		x = 0.402031 * safezoneW + safezoneX;
		y = 0.159 * safezoneH + safezoneY;
		w = 0.201094 * safezoneW;
		h = 0.682 * safezoneH;
	};
	class rr_phone_welcome_screen: RscPicture
	{
		idc = 1201;
		text = "\rr_textures\phone\WelcomeScreen.paa";
		x = 0.402031 * safezoneW + safezoneX;
		y = 0.159 * safezoneH + safezoneY;
		w = 0.201094 * safezoneW;
		h = 0.682 * safezoneH;
	};
};

class rr_phone_home: rr_phone_welcome
{
	idd = 20051;
	controls[] = { rr_phone_home_frame, rr_phone_home_background, rr_phone_home_screen, rr_phone_home_bank, rr_phone_home_contacts, rr_phone_home_licenses, rr_phone_home_sync, rr_phone_home_keychain, rr_phone_home_items, rr_phone_home_messaging, rr_phone_home_settings, rr_phone_home_keypad };
	
	class rr_phone_home_frame: rr_phone_welcome_frame {};
	class rr_phone_home_background: rr_phone_welcome_background {};
	class rr_phone_home_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\HomeScreen.paa";
	};
	class rr_phone_home_bank: RscButtonInvisible
	{
		idc = 1600;
		x = 0.448438 * safezoneW + safezoneX;
		y = 0.467 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
		action = "[] call life_fnc_openBank";
	};
	class rr_phone_home_contacts: RscButtonInvisible
	{
		idc = 1601;
		x = 0.489687 * safezoneW + safezoneX;
		y = 0.467 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_contacts'";
	};
	class rr_phone_home_licenses: RscButtonInvisible
	{
		idc = 1602;
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.467 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
		action = "[] call life_fnc_openLicenses;";
	};
	class rr_phone_home_sync: RscButtonInvisible
	{
		idc = 1603;
		x = 0.448438 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_sync'";
	};
	class rr_phone_home_keychain: RscButtonInvisible
	{
		idc = 1604;
		x = 0.489687 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_keychain'; [] call life_fnc_keyMenu;";
	};
	class rr_phone_home_items: RscButtonInvisible
	{
		idc = 1605;
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
		action = "[] call life_fnc_openInv";
	};
	class rr_phone_home_messaging: RscButtonInvisible
	{
		idc = 1606;
		x = 0.448438 * safezoneW + safezoneX;
		y = 0.632 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
		action = "[] call life_fnc_openMessages";
	};
	class rr_phone_home_settings: RscButtonInvisible
	{
		idc = 1607;
		x = 0.489687 * safezoneW + safezoneX;
		y = 0.632 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
		action = "[] call life_fnc_openSettings;";
	};
	class rr_phone_home_keypad: RscButtonInvisible
	{
		idc = 1608;
		x = 0.525781 * safezoneW + safezoneX;
		y = 0.632 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
		action = "hint ""Expect this in a day or two"";";
		//action = "closeDialog 0; createDialog 'rr_phone_keypad'";
	};
};

class rr_phone_balance: rr_phone_welcome
{
	idd = 20052;
	controls[] = { rr_phone_balance_frame, rr_phone_balance_background, rr_phone_balance_screen, rr_phone_balance_name, rr_phone_balance_exit, rr_phone_balance_transfer, rr_phone_balance_balance, rr_phone_balance_wallet };
	
	class rr_phone_balance_frame: rr_phone_welcome_frame {};
	class rr_phone_balance_background: rr_phone_welcome_background {};
	class rr_phone_balance_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\BalanceScreen.paa";
	};
	class rr_phone_balance_name: RscText
	{
		idc = 1000;
		style = 2;
		text = "John Doe"; //--- ToDo: Localize;
		x = 0.432969 * safezoneW + safezoneX;
		y = 0.420 * safezoneH + safezoneY;
		w = 0.139219 * safezoneW;
		h = 0.011 * safezoneH;
		font = "RobotoBoldCondensed";
		shadow = 0;
	};
	class rr_phone_balance_exit: RscButtonInvisible
	{
		idc = 1600;
		x = 0.479375 * safezoneW + safezoneX;
		y = 0.709 * safezoneH + safezoneY;
		w = 0.0464063 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_balance_transfer: RscButtonInvisible
	{
		idc = 1601;
		x = 0.479375 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.0464063 * safezoneW;
		h = 0.033 * safezoneH;
		action = "[] call life_fnc_openTransfer";
	};
	class rr_phone_balance_balance: RscText
	{
		idc = 1001;
		text = "$365,521,427"; //--- ToDo: Localize;
		x = 0.494844 * safezoneW + safezoneX;
		y = 0.491 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.011 * safezoneH;
		colorText[] = {0.1,0.1,0.1,1};
		font = "RobotoThin";
		SizeEx = "0.015 / (getResolution select 5)";
		style = 1;
		shadow = 0;
	};
	class rr_phone_balance_wallet: RscText
	{
		idc = 1002;
		text = "$5,000"; //--- ToDo: Localize;
		x = 0.494844 * safezoneW + safezoneX;
		y = 0.505 * safezoneH + safezoneY;
		w = 0.0567187 * safezoneW;
		h = 0.011 * safezoneH;
		colorText[] = {0.1,0.1,0.1,1};
		font = "RobotoThin";
		SizeEx = "0.015 / (getResolution select 5)";
		style = 1;
		shadow = 0;
	};
};

class rr_phone_sync: rr_phone_welcome
{
	idd = 20053;
	controls[] = { rr_phone_sync_frame, rr_phone_sync_background, rr_phone_sync_screen, rr_phone_sync_exit, rr_phone_sync_return, rr_phone_sync_button };
	
	class rr_phone_sync_frame: rr_phone_welcome_frame {};
	class rr_phone_sync_background: rr_phone_welcome_background {};
	class rr_phone_sync_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\SyncScreen.paa";
	};
	class rr_phone_sync_exit: RscButtonInvisible
	{
		idc = 1600;
		x = 0.479375 * safezoneW + safezoneX;
		y = 0.709 * safezoneH + safezoneY;
		w = 0.0464063 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_sync_return: RscButtonInvisible
	{
		idc = 1601;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_sync_button: RscButtonInvisible
	{
		idc = 1602;
		x = 0.469062 * safezoneW + safezoneX;
		y = 0.489 * safezoneH + safezoneY;
		w = 0.0721875 * safezoneW;
		h = 0.044 * safezoneH;
		action = "[] call SOCK_fnc_syncData";
	};
};

class rr_phone_keypad: rr_phone_welcome
{
	idd = 20054;
	controls[] = { rr_phone_keypad_frame, rr_phone_keypad_background, rr_phone_keypad_screen, rr_phone_keypad_1, rr_phone_keypad_4, rr_phone_keypad_7, rr_phone_keypad_astrix, rr_phone_keypad_0, rr_phone_keypad_pound, rr_phone_keypad_9, rr_phone_keypad_6, rr_phone_keypad_3, rr_phone_keypad_2, rr_phone_keypad_5, rr_phone_keypad_8, rr_phone_keypad_call, rr_phone_keypad_messaging, rr_phone_keypad_contacts, rr_phone_keypad_exit, rr_phone_keypad_return, rr_phone_keypad_edit };
	
	class rr_phone_keypad_frame: rr_phone_welcome_frame {};
	class rr_phone_keypad_background: rr_phone_welcome_background {};
	class rr_phone_keypad_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\KeypadScreen.paa";
	};
	class rr_phone_keypad_1: RscButtonInvisible
	{
		idc = 1600;
		x = 0.453594 * safezoneW + safezoneX;
		y = 0.401 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
	};
	class rr_phone_keypad_4: RscButtonInvisible
	{
		idc = 1601;
		x = 0.453594 * safezoneW + safezoneX;
		y = 0.456 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.044 * safezoneH;
	};
	class rr_phone_keypad_7: RscButtonInvisible
	{
		idc = 1602;
		x = 0.453594 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
	};
	class rr_phone_keypad_astrix: RscButtonInvisible
	{
		idc = 1603;
		x = 0.453594 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.044 * safezoneH;
	};
	class rr_phone_keypad_0: RscButtonInvisible
	{
		idc = 1604;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.044 * safezoneH;
	};
	class rr_phone_keypad_pound: RscButtonInvisible
	{
		idc = 1605;
		x = 0.520625 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.044 * safezoneH;
	};
	class rr_phone_keypad_9: RscButtonInvisible
	{
		idc = 1606;
		x = 0.520625 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
	};
	class rr_phone_keypad_6: RscButtonInvisible
	{
		idc = 1607;
		x = 0.520625 * safezoneW + safezoneX;
		y = 0.456 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.044 * safezoneH;
	};
	class rr_phone_keypad_3: RscButtonInvisible
	{
		idc = 1608;
		x = 0.520625 * safezoneW + safezoneX;
		y = 0.401 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
	};
	class rr_phone_keypad_2: RscButtonInvisible
	{
		idc = 1609;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.401 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.055 * safezoneH;
	};
	class rr_phone_keypad_5: RscButtonInvisible
	{
		idc = 1610;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.456 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.044 * safezoneH;
	};
	class rr_phone_keypad_8: RscButtonInvisible
	{
		idc = 1611;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.055 * safezoneH;
	};
	class rr_phone_keypad_call: RscButtonInvisible
	{
		idc = 1612;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.621 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.055 * safezoneH;
	};
	class rr_phone_keypad_messaging: RscButtonInvisible
	{
		idc = 1613;
		x = 0.453594 * safezoneW + safezoneX;
		y = 0.654 * safezoneH + safezoneY;
		w = 0.020625 * safezoneW;
		h = 0.044 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_message'";
	};
	class rr_phone_keypad_contacts: RscButtonInvisible
	{
		idc = 1614;
		x = 0.530937 * safezoneW + safezoneX;
		y = 0.654 * safezoneH + safezoneY;
		w = 0.020625 * safezoneW;
		h = 0.044 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_contacts'";
	};
	class rr_phone_keypad_exit: RscButtonInvisible
	{
		idc = 1615;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.011 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_keypad_return: RscButtonInvisible
	{
		idc = 1616;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_keypad_edit: RscEdit
	{
		idc = 1400;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.346 * safezoneH + safezoneY;
		w = 0.128906 * safezoneW;
		h = 0.055 * safezoneH;
		font = "RobotoThin";
		style = "0x200 + 0x02";
		shadow = 0;
		SizeEx = "0.015 / (getResolution select 5)";
	};
};

class rr_phone_transfer: rr_phone_welcome
{
	idd = 20055;
	controls[] = { rr_phone_transfer_frame, rr_phone_transfer_background, rr_phone_transfer_screen, rr_phone_transfer_player, rr_phone_transfer_to, rr_phone_transfer_amount, rr_phone_transfer_send, rr_phone_transfer_exit, rr_phone_transfer_return };
	
	class rr_phone_transfer_frame: rr_phone_welcome_frame {};
	class rr_phone_transfer_background: rr_phone_welcome_background {};
	class rr_phone_transfer_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\TransferScreen.paa";
	};
	class rr_phone_transfer_player: RscText
	{
		idc = 1000;
		text = "John Doe";
		x = 0.448438 * safezoneW + safezoneX;
		y = 0.427 * safezoneH + safezoneY;
		w = 0.0979687 * safezoneW;
		h = 0.011 * safezoneH;
		colorText[] = {0.1,0.1,0.1,1};
		shadow = 0;
		SizeEx = "0.015 / (getResolution select 5)";
	};
	class rr_phone_transfer_to: RscCombo
	{
		idc = 2100;
		x = 0.448438 * safezoneW + safezoneX;
		y = 0.462 * safezoneH + safezoneY;
		w = 0.107125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class rr_phone_transfer_amount: RscEdit
	{
		idc = 1400;
		x = 0.448438 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0979687 * safezoneW;
		h = 0.011 * safezoneH;
		colorText[] = {0.1,0.1,0.1,1};
		font = "RobotoThin";
		style = "0x200 + 0x02";
		shadow = 0;
		SizeEx = "0.015 / (getResolution select 5)";
	};
	class rr_phone_transfer_send: RscButtonInvisible
	{
		idc = 1600;
		onButtonClick = "[ctrlText 1400, lbCurSel 2100] call life_fnc_giveMoney";
		x = 0.479375 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.0464063 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class rr_phone_transfer_exit: RscButtonInvisible
	{
		idc = 1601;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.011 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_transfer_return: RscButtonInvisible
	{
		idc = 1602;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; [] call life_fnc_openBank";
	};
};

class rr_phone_message: rr_phone_welcome
{
	idd = 3000;
	controls[] = { rr_phone_message_frame, rr_phone_message_background, rr_phone_message_screen, rr_phone_message_name, rr_phone_message_textBox, rr_phone_message_send, rr_phone_message_return, rr_phone_message_exit, rr_phone_message_admin, rr_phone_message_police, rr_phone_message_ems, rr_phone_message_players };
	
	class rr_phone_message_frame: rr_phone_welcome_frame {};
	class rr_phone_message_background: rr_phone_welcome_background {};
	class rr_phone_message_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\MessageScreen.paa";
	};
	class rr_phone_message_name: RscText
	{
		idc = 1000;
		text = "John Doe Jr."; //--- ToDo: Localize;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.128906 * safezoneW;
		h = 0.022 * safezoneH;
		font = "RobotoBoldCondensed";
		shadow = 0;
		style = 2;
	};
	class rr_phone_message_textBox: RscEdit
	{
		idc = 3003;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.599 * safezoneH + safezoneY;
		w = 0.103125 * safezoneW;
		h = 0.066 * safezoneH;
		colorText[] = {0.1,0.1,0.1,1};
		font = "RobotoThin";
		style = "0x200 + 0x02";
		shadow = 0;
	};
	class rr_phone_message_send: RscButtonInvisible
	{
		idc = 3015;
		x = 0.546406 * safezoneW + safezoneX;
		y = 0.61 * safezoneH + safezoneY;
		w = 0.020625 * safezoneW;
		h = 0.044 * safezoneH;
		action = "[] call TON_fnc_cell_textmsg";
	};
	class rr_phone_message_return: RscButtonInvisible
	{
		idc = 1601;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_message_exit: RscButtonInvisible
	{
		idc = 1602;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.011 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_message_admin: RscButton
	{
		idc = 3017;
		text = "Text Admin"; //--- ToDo: Localize;
		x = 0.443281 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.0515625 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {0,1,0,1};
		action = "[] call TON_fnc_cell_textadmin";
	};
	class rr_phone_message_ems: RscButton
	{
		idc = 3022;
		text = "Text EMS"; //--- ToDo: Localize;
		x = 0.510312 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.0515625 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {1,0,0,1};
		action = "[] call TON_fnc_cell_emsrequest";
	};
	class rr_phone_message_police: RscButton
	{
		idc = 3016;
		text = "Text Police"; //--- ToDo: Localize;
		x = 0.474219 * safezoneW + safezoneX;
		y = 0.522 * safezoneH + safezoneY;
		w = 0.0515625 * safezoneW;
		h = 0.022 * safezoneH;
		colorBackground[] = {0,0,1,1};
		action = "[] call TON_fnc_cell_textcop";
	};
	class rr_phone_message_players: RscCombo
	{
		idc = 3004;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.357 * safezoneH + safezoneY;
		w = 0.128906 * safezoneW;
		h = 0.022 * safezoneH;
	};
};

class rr_phone_items: rr_phone_welcome
{
	idd = 20057;
	controls[] = { rr_phone_items_frame, rr_phone_items_background, rr_phone_items_screen, rr_phone_items_use, rr_phone_items_remove, rr_phone_items_give, rr_phone_items_exit, rr_phone_items_return, rr_phone_items_nearPlayers, rr_phone_items_items, rr_phone_items_quantity };
	
	class rr_phone_items_frame: rr_phone_welcome_frame {};
	class rr_phone_items_background: rr_phone_welcome_background {};
	class rr_phone_items_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\ItemScreen.paa";
	};
	class rr_phone_items_use: RscButtonInvisible
	{
		idc = 1600;
		onButtonClick = "[] call life_fnc_useItem;";
		x = 0.520625 * safezoneW + safezoneX;
		y = 0.61 * safezoneH + safezoneY;
		w = 0.0464063 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class rr_phone_items_remove: RscButtonInvisible
	{
		idc = 1601;
		onButtonClick = "[] call life_fnc_removeItem;";
		x = 0.520625 * safezoneW + safezoneX;
		y = 0.643 * safezoneH + safezoneY;
		w = 0.0464063 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class rr_phone_items_give: RscButtonInvisible
	{
		idc = 1602;
		onButtonClick = "[] call life_fnc_giveItem;";
		x = 0.520625 * safezoneW + safezoneX;
		y = 0.665 * safezoneH + safezoneY;
		w = 0.0464063 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class rr_phone_items_exit: RscButtonInvisible
	{
		idc = 1603;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.011 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_items_return: RscButtonInvisible
	{
		idc = 1604;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_items_nearPlayers: RscCombo
	{
		idc = 2100;
		x = 0.443281 * safezoneW + safezoneX;
		y = 0.665 * safezoneH + safezoneY;
		w = 0.0721875 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class rr_phone_items_items: RscListbox
	{
		idc = 1500;
		x = 0.443281 * safezoneW + safezoneX;
		y = 0.357 * safezoneH + safezoneY;
		w = 0.118594 * safezoneW;
		h = 0.242 * safezoneH;
	};
	class rr_phone_items_quantity: RscEdit
	{
		idc = 3004;
		x = 0.443281 * safezoneW + safezoneX;
		y = 0.621 * safezoneH + safezoneY;
		w = 0.0721875 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class iNearPlayers : RscCombo
	{
		idc = 2023;
			
		x = 0.62; y = 0.65;
		w = 0.275; h = 0.03;
	};
	class NearPlayers : RscCombo 
	{
		idc = 2022;
		
		x = 0.12; y = 0.46;
		w = 0.18; h = 0.03;
	};
};

class rr_phone_licenses: rr_phone_welcome
{
	idd = 20058;
	controls[] = { rr_phone_licenses_frame, rr_phone_licenses_background, rr_phone_licenses_screen, rr_phone_licenses_list, rr_phone_licenses_exit, rr_phone_licenses_return };
	
	class rr_phone_licenses_frame: rr_phone_welcome_frame {};
	class rr_phone_licenses_background: rr_phone_welcome_background {};
	class rr_phone_licenses_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\LicensesScreen.paa";
	};
	class rr_phone_licenses_list: Life_RscStructuredText
	{
		idc = 1500;
		background[] = {0,0,0,0};
		x = 0.443281 * safezoneW + safezoneX;
		y = 0.357 * safezoneH + safezoneY;
		w = 0.118594 * safezoneW;
		h = 0.33 * safezoneH;
	};
	class rr_phone_licenses_exit: RscButtonInvisible
	{
		idc = 1600;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.011 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_licenses_return: RscButtonInvisible
	{
		idc = 1601;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
};

class rr_phone_keychain: rr_phone_welcome
{
	idd = 2700;
	controls[] = { rr_phone_keychain_frame, rr_phone_keychain_background, rr_phone_keychain_screen, rr_phone_keychain_list, rr_phone_keychain_exit, rr_phone_keychain_return, rr_phone_keychain_give, rr_phone_keychain_nearPlayers };
	
	class rr_phone_keychain_frame: rr_phone_welcome_frame {};
	class rr_phone_keychain_background: rr_phone_welcome_background {};
	class rr_phone_keychain_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\KeychainScreen.paa";
	};
	class rr_phone_keychain_list: Life_RscListBox
	{
		idc = 2701;
		x = 0.443281 * safezoneW + safezoneX;
		y = 0.357 * safezoneH + safezoneY;
		w = 0.118594 * safezoneW;
		h = 0.264 * safezoneH;
	};
	class rr_phone_keychain_exit: RscButtonInvisible
	{
		idc = 1600;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.011 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_keychain_return: RscButtonInvisible
	{
		idc = 1601;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_keychain_give: RscButtonInvisible
	{
		idc = 2703;
		x = 0.520625 * safezoneW + safezoneX;
		y = 0.643 * safezoneH + safezoneY;
		w = 0.0464063 * safezoneW;
		h = 0.022 * safezoneH;
		action = "[] call life_fnc_keyGive";
	};
	class rr_phone_keychain_nearPlayers: RscCombo
	{
		idc = 2702;
		x = 0.443281 * safezoneW + safezoneX;
		y = 0.643 * safezoneH + safezoneY;
		w = 0.0721875 * safezoneW;
		h = 0.022 * safezoneH;
	};
};

class rr_phone_contacts: rr_phone_welcome
{
	idd = 20060;
	controls[] = { rr_phone_contacts_frame, rr_phone_contacts_background, rr_phone_contacts_screen, rr_phone_contacts_list, rr_phone_contacts_exit, rr_phone_contacts_return, rr_phone_contacts_addContact };
	
	class rr_phone_contacts_frame: rr_phone_welcome_frame {};
	class rr_phone_contacts_background: rr_phone_welcome_background {};
	class rr_phone_contacts_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\ContactsScreen.paa";
	};
	class rr_phone_contacts_list: RscListbox
	{
		idc = 1500;
		x = 0.443281 * safezoneW + safezoneX;
		y = 0.357 * safezoneH + safezoneY;
		w = 0.118594 * safezoneW;
		h = 0.242 * safezoneH;
	};
	class rr_phone_contacts_exit: RscButtonInvisible
	{
		idc = 1600;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.011 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_contacts_return: RscButtonInvisible
	{
		idc = 1601;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_contacts_addContact: RscButtonInvisible
	{
		idc = 1602;
		x = 0.489687 * safezoneW + safezoneX;
		y = 0.621 * safezoneH + safezoneY;
		w = 0.0309375 * safezoneW;
		h = 0.055 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_addContact'";
	};
};

class rr_phone_addContact: rr_phone_welcome
{
	idd = 20061;
	controls[] = { rr_phone_addContact_frame, rr_phone_addContact_background, rr_phone_addContact_screen, rr_phone_contacts_exit, rr_phone_contacts_return, rr_phone_addContact_add, rr_phone_addContact_name, rr_phone_addContact_number };
	
	class rr_phone_addContact_frame: rr_phone_welcome_frame {};
	class rr_phone_addContact_background: rr_phone_welcome_background {};
	class rr_phone_addContact_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\AddContactScreen.paa";
	};
	class rr_phone_contacts_exit: RscButtonInvisible
	{
		idc = 1600;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.011 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_contacts_return: RscButtonInvisible
	{
		idc = 1601;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_contacts'";
	};
	class rr_phone_addContact_add: RscButtonInvisible
	{
		idc = 1602;
		x = 0.469062 * safezoneW + safezoneX;
		y = 0.522 * safezoneH + safezoneY;
		w = 0.0670312 * safezoneW;
		h = 0.033 * safezoneH;
	};
	class rr_phone_addContact_name: RscEdit
	{
		idc = 1400;
		x = 0.467062 * safezoneW + safezoneX;
		y = 0.385 * safezoneH + safezoneY;
		w = 0.08 * safezoneW;
		h = 0.02 * safezoneH;
		colorText[] = {0.1,0.1,0.1,1};
		font = "RobotoThin";
		style = "0x200 + 0x02";
		shadow = 0;
	};
	class rr_phone_addContact_number: RscEdit
	{
		idc = 1401;
		x = 0.467062 * safezoneW + safezoneX;
		y = 0.456 * safezoneH + safezoneY;
		w = 0.08 * safezoneW;
		h = 0.02 * safezoneH;
		colorText[] = {0.1,0.1,0.1,1};
		font = "RobotoThin";
		style = "0x200 + 0x02";
		shadow = 0;
	};
};

class rr_phone_settings: rr_phone_welcome
{
	idd = 2900;
	controls[] = { rr_phone_settings_frame, rr_phone_settings_background, rr_phone_settings_screen, rr_phone_settings_exit, rr_phone_settings_return, rr_phone_settings_onFoot, rr_phone_settings_inCar, rr_phone_settings_inAir, rr_phone_settings_playerTags, rr_phone_settings_sidechat, rr_phone_settings_revealObject };
	
	class rr_phone_settings_frame: rr_phone_welcome_frame {};
	class rr_phone_settings_background: rr_phone_welcome_background {};
	class rr_phone_settings_screen: rr_phone_welcome_screen
	{
		text = "\rr_textures\phone\settingsScreen.paa";
	};
	class rr_phone_settings_exit: RscButtonInvisible
	{
		idc = 1600;
		x = 0.484531 * safezoneW + safezoneX;
		y = 0.72 * safezoneH + safezoneY;
		w = 0.0360937 * safezoneW;
		h = 0.011 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_settings_return: RscButtonInvisible
	{
		idc = 1601;
		x = 0.438125 * safezoneW + safezoneX;
		y = 0.313 * safezoneH + safezoneY;
		w = 0.0154688 * safezoneW;
		h = 0.033 * safezoneH;
		action = "closeDialog 0; createDialog 'rr_phone_home'";
	};
	class rr_phone_settings_onFoot: life_RscXSliderH
	{
		idc = 2901;
		onSliderPosChanged = "[0,_this select 1] call life_fnc_s_onSliderChange;";
		x = 0.479375 * safezoneW + safezoneX;
		y = 0.379 * safezoneH + safezoneY;
		w = 0.0825 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class rr_phone_settings_inCar: life_RscXSliderH
	{
		idc = 2911;
		onSliderPosChanged = "[1,_this select 1] call life_fnc_s_onSliderChange;";
		x = 0.479375 * safezoneW + safezoneX;
		y = 0.405 * safezoneH + safezoneY;
		w = 0.0825 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class rr_phone_settings_inAir: life_RscXSliderH
	{
		idc = 2921;
		onSliderPosChanged = "[2,_this select 1] call life_fnc_s_onSliderChange;";
		x = 0.479375 * safezoneW + safezoneX;
		y = 0.43 * safezoneH + safezoneY;
		w = 0.0825 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class rr_phone_settings_playerTags: Life_Checkbox
	{
		idc = 2970;
		onCheckedChanged = "['tags',_this select 1] call life_fnc_s_onCheckedChange;";
		x = 0.551562 * safezoneW + safezoneX;
		y = 0.511 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class rr_phone_settings_sidechat: Life_Checkbox
	{
		idc = 2971;
		onCheckedChanged = "['sidechat',_this select 1] call life_fnc_s_onCheckedChange;";
		x = 0.551562 * safezoneW + safezoneX;
		y = 0.533 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.022 * safezoneH;
	};
	class rr_phone_settings_revealObject: Life_Checkbox
	{
		idc = 2972;
		onCheckedChanged = "['objects',_this select 1] call life_fnc_s_onCheckedChange;";
		x = 0.551562 * safezoneW + safezoneX;
		y = 0.555 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.022 * safezoneH;
	};
};