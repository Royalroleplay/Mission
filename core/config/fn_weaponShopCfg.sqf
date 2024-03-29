#include <macro.h>
/*
	File: fn_weaponShopCfg.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Master configuration file for the weapon shops.

	Return:
	String: Close the menu
	Array:
	[Shop Name,
	[ //Array of items to add to the store
		[classname,Custom Name (set nil for default),price]
	]]
*/
private["_shop"];
_shop = [_this,0,"",[""]] call BIS_fnc_param;
if(_shop == "") exitWith {closeDialog 0}; //Bad shop type passed.

switch(_shop) do {
	case "cop_weapons": {
		switch(true) do {
			case (playerSide != west): {"You are not a cop!"};
			default {
				_ret = ["LSPD Shop"];

				_items = [];

				_items pushBack ["Binocular",nil,150];
				_items pushback ["pmc_earpiece",nil,50]; // added - Von
				_items pushBack ["ItemGPS",nil,100];
				_items pushBack ["ToolKit",nil,250];
				_items pushBack ["tf_anprc152",nil,0];
				_items pushBack ["ItemCompass",nil,50];
				_items pushBack ["FirstAidKit",nil,0];
				
				_items pushBack ["taser_26","Taser",200];
				_items pushBack ["26_cartridge","Taser Magazine",125];
				_items pushBack ["radar_gun","Radar Gun",750];
				_items pushBack ["RH_g17",nil,250];
				_items pushBack ["RH_17Rnd_9x19_g17",nil,50];
				_items pushBack ["RH_m9",nil,250];
				_items pushBack ["RH_15Rnd_9x19_M9",nil,250];

				if(FETCH_CONST(life_coplevel) >= 2) then { //Officer
					_items pushBack ["RH_cz75",nil,250];
					_items pushBack ["RH_16Rnd_9x19_CZ",nil,50];
					_items pushBack ["RH_sw659",nil,250];
					_items pushBack ["RH_14Rnd_9x19_sw",nil,50];
				};

				if(FETCH_CONST(life_coplevel) >= 3) then { //Corporal
					_items pushBack ["RH_usp",nil,250];
					_items pushBack ["RH_12Rnd_45cal_usp",nil,50];
					_items pushBack ["RH_fnp45",nil,250];
					_items pushBack ["RH_15Rnd_45cal_fnp",nil,50];
					_items pushBack ["RH_sbr9",nil,250];
					_items pushBack ["RH_32Rnd_9mm_M822",nil,50];
					_items pushBack ["hlc_smg_mp5a4",nil,250];
					_items pushBack ["hlc_30Rnd_9x19_B_MP5",nil,50];
				};

				if(FETCH_CONST(life_coplevel) >= 4) then { //Sergeant
					_items pushBack ["RH_M4_ris",nil,250];
					_items pushBack ["RH_30Rnd_556x45_M855A1",nil,50];
					_items pushBack ["RH_m4",nil,250];
					_items pushBack ["RH_30Rnd_556x45_M855A1",nil,50];
				};

				if(FETCH_CONST(life_coplevel) >= 5) then { //FTO Sergeant
					_items pushBack ["RH_barska_rds",nil,50];
					_items pushBack ["RH_cmore",nil,50];
					_items pushBack ["RH_compM2",nil,50];
				};

				if(FETCH_CONST(life_coplevel) >= 6) then { //Command
					_items pushBack ["RH_uspm",nil,250];
					_items pushBack ["RH_16Rnd_40cal_usp",nil,50];
				};

				if(FETCH_CONST(life_coplevel) >= 7) then { //High Command
					_items pushBack ["RH_M4A6",nil,250];
					_items pushBack ["RH_30Rnd_68x43_FMJ",nil,50];
				};

				if(FETCH_CONST(life_coplevel) >= 8) then { //High Command
					_items pushBack ["RH_Hk416s",nil,250];
					_items pushBack ["RH_30Rnd_556x45_M855A1",nil,50];
					_items pushBack ["RH_M4sbr_b",nil,250];
					_items pushBack ["RH_30Rnd_556x45_M855A1",nil,50];
					_items pushBack ["acc_flashlight",nil,50];

					//_items pushBack ["RH_fa556",nil,50]; - SILENCER - Maybe for the future
				};

				_ret pushback _items;

				_ret
			};
		};
	};

	case "med_supplies": {
		switch (true) do {
			case (playerSide != independent): {"You are not an EMS Medic"};
			default {
				["Hospital EMS Supplies",
					[
						["ItemGPS",nil,100],
						["Binocular",nil,150],
						["pmc_earpiece",nil,50],
						["ToolKit",nil,250],
						["FirstAidKit",nil,150],
						["Medikit",nil,500],
						["NVGoggles",nil,1200],
						["B_FieldPack_ocamo",nil,3000],
						["tf_anprc152",nil,0],
						["tf_anprc148jem",nil,0],
						["Chemlight_green",nil,0],
						["Chemlight_red",nil,0],
						["Chemlight_yellow",nil,0],
						["Chemlight_blue",nil,0]
					]
				];
			};
		};
	};

	case "med_basic": {
		switch (true) do {
			case (playerSide != independent): {"You are not an EMS Medic"};
			default {
				["Hospital EMS Shop",
					[
						["ItemGPS",nil,100],
						["ItemCompass",nil,50],
						["Binocular",nil,150],
						["pmc_earpiece",nil,50],
						["ToolKit",nil,250],
						["Medikit",nil,500],
						["NVGoggles",nil,1200],
						["B_FieldPack_ocamo",nil,3000],
						["tf_anprc152",nil,0],
						["tf_anprc148jem",nil,0],
						["Chemlight_green",nil,0],
						["Chemlight_red",nil,0],
						["Chemlight_yellow",nil,0],
						["Chemlight_blue",nil,0]
					]
				];
			};
		};
	};

	case "rebel_low":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			case (!license_civ_rebel): {"You don't have a Rebel training license!"};
			default
			{
				["Low End Black Market",
					[
						["RH_m9c",nil,2100],
						["RH_15Rnd_9x19_M9",nil,100],

						["RH_vp70",nil,7500],
						["RH_18Rnd_9x19_VP",nil,250],

						["hgun_Pistol_heavy_01_F",nil,9000],
						["11Rnd_45ACP_Mag",nil,300],

						["RH_kimber_nw",nil,11000],
						["RH_7Rnd_45cal_m1911",nil,300],

						["RH_kimber",nil,11000],
						["RH_7Rnd_45cal_m1911",nil,300],

						["RH_deagle",nil,15000],
						["rh_7rnd_50_ae",nil,800],

						["rh_python",nil,18500],
						["rh_6rnd_357_mag",nil,1000],

						["RH_g18",nil,12000],
						["RH_19Rnd_9x19_g18",nil,175],

						["RH_vz61",nil,13250],
						["RH_20Rnd_32cal_vz61",nil,250],

						["RH_muzi",nil,14000],
						["RH_30Rnd_9x19_UZI",nil,200],

						["RH_tec9",nil,16500],
						["RH_32Rnd_9x19_tec",nil,250],

						["hlc_smg_mp5k",nil,17000],
						["hlc_30Rnd_9x19_B_MP5",nil,200],

						["RH_sbr9_wdl",nil,23000],
						["RH_32Rnd_9mm_M822",nil,250],

						["RH_sbr9_tg",nil,23000],
						["RH_32Rnd_9mm_M822",nil,250],

						["RH_sbr9_des",nil,23000],
						["RH_32Rnd_9mm_M822",nil,250],

						["SMG_01_F",nil,28000],
						["30Rnd_45ACP_Mag_SMG_01",nil,250]
					]
				];
			};
		};
	};

	case "rebel_high":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			case (!license_civ_rebel): {"You don't have a Rebel training license!"};
			default
			{
				["High End Black Market",
					[
						["hlc_rifle_aku12",nil,34000],
						["hlc_30Rnd_545x39_B_AK",nil,250],

						["hlc_rifle_aek971worn",nil,37500],
						["hlc_30Rnd_545x39_B_AK",nil,250],
						
						["hlc_rifle_aks74",nil,39200],
						["hlc_30Rnd_545x39_B_AK",nil,250],
						
						["hlc_rifle_ak74_dirty2",nil,41500],
						["hlc_30Rnd_545x39_B_AK",nil,250],
						
						["hlc_rifle_ak47",nil,46500],
						["hlc_30Rnd_762x39_b_ak",nil,250],
						
						["hlc_rifle_akm",nil,52350],
						["rh_ar10",nil,62500],
						
						["rh_20rnd_762x51_ar10",nil,1200],
						["hlc_rifle_rpk",nil,68000],
						
						["hlc_75rnd_762x39_m_rpk",nil,8500],
						["rh_hb_b",nil,70000],
						
						["rh_30rnd_762x35_fmj",nil,2000],
						["hlc_30Rnd_762x39_b_ak",nil,350],
						
						["hlc_optic_kobra",nil,500],
						["optic_Aco",nil,500],
						["RH_cmore",nil,2500],
						["rh_compm2",nil,300],
						["RH_LTdocter",nil,500]
					]
				];
			};
		};
	};

	case "gun":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			case (!license_civ_gun): {"You don't have a Firearms license!"};
			default
			{
				["Billy Joe's Firearms",
					[
						["arifle_SDAR_F",nil,8000],
						["20Rnd_556x45_UW_mag",nil,500],
						["RH_mak",nil,1000],
						["RH_8Rnd_9x18_Mak",nil,100],
						["hgun_P07_F",nil,1000],
						["16Rnd_9x21_Mag",nil,100],
						["hgun_Rook40_F",nil,1100],
						["16Rnd_9x21_Mag",nil,100],
						["RH_g17",nil,1200],
						["RH_17Rnd_9x19_g17",nil,100],
						["RH_g19",nil,1200],
						["RH_17Rnd_9x19_g17",nil,100],
						["RH_g19t",nil,1200],
						["RH_17Rnd_9x19_g17",nil,100],
						["RH_m9",nil,2000],
						["RH_15Rnd_9x19_M9",nil,100],
						["RH_sw659",nil,2250],
						["RH_14Rnd_9x19_sw",nil,100],
						["RH_gsh18",nil,4950],
						["RH_18Rnd_9x19_gsh",nil,200],
						["RH_m1911",nil,5750],
						["RH_7Rnd_45cal_m1911",nil,250]
					]
				];
			};
		};
	};

	case "gang":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			default
			{
				["Hideout Armament",
					[
						["RH_m9c",nil,6000],
						["RH_15Rnd_9x19_M9",nil,500],
						["RH_vp70",nil,12500],
						["RH_18Rnd_9x19_VP",nil,750],
						["hgun_Pistol_heavy_01_F",nil,16000],
						["11Rnd_45ACP_Mag",nil,900]
					]
				];
			};
		};
	};

	case "genstore":
	{
		["General Store",
			[
				["FirstAidKit",nil,150],
				["ItemCompass",nil,50],
				["Binocular",nil,150],
				["tf_anprc152",nil,0],
				["tf_anprc148jem",nil,0],
				["ItemGPS",nil,100],
				["ToolKit",nil,250],
				["NVGoggles",nil,2000],
				["Chemlight_red",nil,300],
				["Chemlight_yellow",nil,300],
				["Chemlight_green",nil,300],
				["Chemlight_blue",nil,300],
				["a3l_jackhammer","Jackhammer",2500],
				["jackhammerfuel","Jackhammer Fuel",200]
			]
		];
	};

	case "dtu":
	{
		switch(true) do
		{
			case (playerSide != west): {"You are not a cop!"};
			case (FETCH_CONST(life_coplevel) < 7): {"Go Away Asshole!"};
			default
			{
				["DTU Weapon Shop",
					[

						["RH_m9c",nil,500],
						["RH_15Rnd_9x19_M9",nil,100],

						["RH_vp70",nil,500],
						["RH_18Rnd_9x19_VP",nil,250],

						["hgun_Pistol_heavy_01_F",nil,500],
						["11Rnd_45ACP_Mag",nil,300],

						["RH_kimber_nw",nil,500],
						["RH_7Rnd_45cal_m1911",nil,300],

						["RH_kimber",nil,500],
						["RH_7Rnd_45cal_m1911",nil,300],

						["RH_deagle",nil,500],
						["rh_7rnd_50_ae",nil,500],

						["rh_python",nil,500],
						["rh_6rnd_357_mag",nil,500],

						["RH_g18",nil,500],
						["RH_19Rnd_9x19_g18",nil,500],

						["RH_vz61",nil,500],
						["RH_20Rnd_32cal_vz61",nil,500],

						["RH_muzi",nil,500],
						["RH_30Rnd_9x19_UZI",nil,500],

						["RH_tec9",nil,500],
						["RH_32Rnd_9x19_tec",nil,250],

						["hlc_smg_mp5k",nil,500],
						["hlc_30Rnd_9x19_B_MP5",nil,200],

						["RH_sbr9_wdl",nil,500],
						["RH_32Rnd_9mm_M822",nil,250],

						["RH_sbr9_tg",nil,500],
						["RH_32Rnd_9mm_M822",nil,250],

						["RH_sbr9_des",nil,500],
						["RH_32Rnd_9mm_M822",nil,250],

						["SMG_01_F",nil,500],
						["30Rnd_45ACP_Mag_SMG_01",nil,250],
						
						["hlc_rifle_aku12",nil,500],
						["hlc_30Rnd_545x39_B_AK",nil,250],

						["hlc_rifle_aek971worn",nil,500],
						["hlc_30Rnd_545x39_B_AK",nil,250],
						
						["hlc_rifle_aks74",nil,500],
						["hlc_30Rnd_545x39_B_AK",nil,250],
						
						["hlc_rifle_ak74_dirty2",nil,500],
						["hlc_30Rnd_545x39_B_AK",nil,250],
						
						["hlc_rifle_ak47",nil,500],
						["hlc_30Rnd_762x39_b_ak",nil,250],
						
						["hlc_rifle_akm",nil,500],
						["hlc_30Rnd_762x39_b_ak",nil,350],

						["rh_ar10",nil,500],
						["rh_20rnd_762x51_ar10",nil,500],

						["hlc_rifle_rpk",nil,500],
						["hlc_75rnd_762x39_m_rpk",nil,500],

						["rh_hb_b",nil,500],
						["rh_30rnd_762x35_fmj",nil,500],
						
						["hlc_optic_kobra",nil,500],
						["optic_Aco",nil,500],
						["RH_cmore",nil,500],
						["rh_compm2",nil,300],

						["RH_Hk416s",nil,500],
						["RH_30Rnd_556x45_M855A1",nil,100],
						["RH_ta31rmr",nil,100],
						["RH_LTdocter",nil,100],
						["RH_LTdocter",nil,500]
					]
				];
			};
		};
	};
};