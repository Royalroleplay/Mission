/*

    LICENSEMACRO(air_support,"STR_License_Pilot","air_support",0,false,"cop")
    LICENSEMACRO(coast_guard,"STR_License_Pilot","coast_guard",0,false,"cop")
    LICENSEMACRO(basic_firearms,"STR_License_CG","basic_firearms",0,false,"cop")
    LICENSEMACRO(adv_firearms,"STR_License_CG","adv_firearms",0,false,"cop")
    LICENSEMACRO(dtu,"STR_License_CG","dtu",0,false,"cop")
    LICENSEMACRO(swat,"STR_License_CG","swat",0,false,"cop")
    LICENSEMACRO(swat_marks,"STR_License_CG","swat_marks",0,false,"cop")
    LICENSEMACRO(basic_driving,"STR_License_CG","basic_driving",0,false,"cop")
    LICENSEMACRO(adv_driving,"STR_License_CG","adv_driving",0,false,"cop")
    LICENSEMACRO(trainer_patrol,"STR_License_CG","trainer_patrol",0,false,"cop")
    LICENSEMACRO(trainer_swat,"STR_License_CG","trainer_swat",0,false,"cop")
    LICENSEMACRO(trainer_dtu,"STR_License_CG","trainer_dtu",0,false,"cop")
    LICENSEMACRO(trainer_highway,"STR_License_CG","trainer_highway",0,false,"cop")
    LICENSEMACRO(trainer_doc,"STR_License_CG","trainer_doc",0,false,"cop")

*/

class WeaponShops 
{	
	class west 
	{
		name = "LSPD Shop";

		class basic 
		{
			rank = 1;
			license = "";
			items[] = 
			{
				{"Binocular",nil,150},
				{"pmc_earpiece",nil,50}, // added - Von
				{"ItemGPS",nil,100},
				{"ToolKit",nil,250},
				{"tf_anprc152",nil,0},
				{"ItemCompass",nil,50},
				{"ACE_fieldDressing",nil,0},
				{"taser_26","Taser",200},
				{"26_cartridge","Taser Magazine",125},
				{"radar_gun","Radar Gun",750},
				{"RH_g17",nil,250},
				{"RH_17Rnd_9x19_g17",nil,50},
				{"RH_m9",nil,250},
				{"RH_15Rnd_9x19_M9",nil,250}
			};
		};

		class basic_firearms 
		{
			rank = 1;
			license = "license_cop_basic_firearms";
			items[] = 
			{
				{"RH_cz75",nil,250},
				{"RH_16Rnd_9x19_CZ",nil,50},
				{"RH_sw659",nil,250},
				{"RH_14Rnd_9x19_sw",nil,50},
				{"RH_usp",nil,250},
				{"RH_12Rnd_45cal_usp",nil,50},
				{"RH_fnp45",nil,250},
				{"RH_15Rnd_45cal_fnp",nil,50},
				{"RH_sbr9",nil,250},
				{"RH_32Rnd_9mm_M822",nil,50},
				{"hlc_smg_mp5a4",nil,250},
				{"hlc_30Rnd_9x19_B_MP5",nil,50}
			};
		};

		class adv_firearms 
		{
			rank = 4;
			license = "license_cop_adv_firearms";
			items[] = 
			{
				{"RH_barska_rds",nil,50},
				{"RH_cmore",nil,50},
				{"RH_compM2",nil,50},
				{"RH_M4_ris",nil,250},
				{"RH_30Rnd_556x45_M855A1",nil,50},
				{"RH_m4",nil,250},
				{"RH_30Rnd_556x45_M855A1",nil,50}
			};
		};

		class trainer_patrol 
		{
			rank = 4;
			license = "license_cop_trainer_patrol";
			items[] = 
			{
				{"RH_barska_rds",nil,50},
				{"RH_cmore",nil,50},
				{"RH_compM2",nil,50}
			};
		};

		class trainer_highway 
		{
			rank = 4;
			license = "license_cop_trainer_highway";
			items[] = 
			{
				{"RH_barska_rds",nil,50},
				{"RH_cmore",nil,50},
				{"RH_compM2",nil,50}
			};
		};

		class trainer_doc 
		{
			rank = 4;
			license = "license_cop_trainer_doc";
			items[] = 
			{
				{"RH_barska_rds",nil,50},
				{"RH_cmore",nil,50},
				{"RH_compM2",nil,50}
			};
		};

		class trainer_swat 
		{
			rank = 4;
			license = "license_cop_trainer_swat";
			items[] = 
			{
				{"RH_barska_rds",nil,50},
				{"RH_cmore",nil,50},
				{"RH_compM2",nil,50},
				{"RH_Hk416s",nil,250},
				{"RH_30Rnd_556x45_M855A1",nil,50}
			};
		};

		class trainer_dtu 
		{
			rank = 4;
			license = "license_cop_trainer_dtu";
			items[] = 
			{
				{"RH_barska_rds",nil,50},
				{"RH_cmore",nil,50},
				{"RH_compM2",nil,50}
			};
		};

		class swat 
		{
			rank = 1;
			license = "license_cop_swat";
			items[] = 
			{
				{"RH_cz75",nil,250},
				{"RH_16Rnd_9x19_CZ",nil,50},
				{"RH_sw659",nil,250},
				{"RH_14Rnd_9x19_sw",nil,50},
				{"RH_usp",nil,250},
				{"RH_12Rnd_45cal_usp",nil,50},
				{"RH_fnp45",nil,250},
				{"RH_15Rnd_45cal_fnp",nil,50},
				{"RH_sbr9",nil,250},
				{"RH_32Rnd_9mm_M822",nil,50},
				{"hlc_smg_mp5a4",nil,250},
				{"hlc_30Rnd_9x19_B_MP5",nil,50},
				{"RH_barska_rds",nil,50},
				{"RH_cmore",nil,50},
				{"RH_compM2",nil,50},
				{"RH_M4_ris",nil,250},
				{"RH_30Rnd_556x45_M855A1",nil,50},
				{"RH_m4",nil,250},
				{"RH_30Rnd_556x45_M855A1",nil,50},
				{"RH_barska_rds",nil,50},
				{"RH_cmore",nil,50},
				{"RH_compM2",nil,50},
				{"RH_ta31rmr",nil,100}
			};
		};

		class swat_marks 
		{
			rank = 1;
			license = "license_cop_swat_marks";
			items[] = 
			{
				
			};
		};

		class dtu 
		{
			rank = 1;
			license = "license_cop_dtu";
			items[] = 
			{
				{"RH_m9c",nil,500},
				{"RH_15Rnd_9x19_M9",nil,100},
				{"RH_vp70",nil,500},
				{"RH_18Rnd_9x19_VP",nil,250},
				{"hgun_Pistol_heavy_01_F",nil,500},
				{"11Rnd_45ACP_Mag",nil,300},
				{"RH_kimber_nw",nil,500},
				{"RH_7Rnd_45cal_m1911",nil,300},
				{"RH_kimber",nil,500},
				{"RH_7Rnd_45cal_m1911",nil,300},
				{"RH_g18",nil,500},
				{"RH_19Rnd_9x19_g18",nil,175},
				{"RH_vz61",nil,500},
				{"RH_20Rnd_32cal_vz61",nil,250},
				{"RH_muzi",nil,500},
				{"RH_30Rnd_9x19_UZI",nil,200},
				{"RH_tec9",nil,500},
				{"RH_32Rnd_9x19_tec",nil,250},
				{"hlc_smg_mp5k",nil,500},
				{"hlc_30Rnd_9x19_B_MP5",nil,200},
				{"RH_sbr9_wdl",nil,500},
				{"RH_32Rnd_9mm_M822",nil,250},
				{"RH_sbr9_tg",nil,500},
				{"RH_32Rnd_9mm_M822",nil,250},
				{"RH_sbr9_des",nil,500},
				{"RH_32Rnd_9mm_M822",nil,250},
				{"SMG_01_F",nil,500},
				{"30Rnd_45ACP_Mag_SMG_01",nil,250},
				{"hlc_rifle_aku12",nil,500},
				{"hlc_30Rnd_545x39_B_AK",nil,250},
				{"hlc_rifle_aek971worn",nil,500},
				{"hlc_30Rnd_545x39_B_AK",nil,250},
				{"hlc_rifle_aks74",nil,500},
				{"hlc_30Rnd_545x39_B_AK",nil,250},
				{"hlc_rifle_ak74_dirty2",nil,500},
				{"hlc_30Rnd_545x39_B_AK",nil,250},
				{"hlc_rifle_ak47",nil,500},
				{"hlc_30Rnd_762x39_b_ak",nil,250},
				{"hlc_rifle_akm",nil,500},
				{"hlc_30Rnd_762x39_b_ak",nil,350},
				{"hlc_optic_kobra",nil,500},
				{"optic_Aco",nil,500},
				{"RH_Hk416s",nil,500},
				{"RH_30Rnd_556x45_M855A1",nil,100},
				{"RH_ta31rmr",nil,100}
			};
		};

		class command
		{
			rank = 7;
			license = "";
			items[] = 
			{
				{"RH_M4A6",nil,250},
				{"RH_30Rnd_68x43_FMJ",nil,50},
				{"RH_Hk416s",nil,250},
				{"RH_30Rnd_556x45_M855A1",nil,50},
				{"RH_M4sbr_b",nil,250},
				{"RH_30Rnd_556x45_M855A1",nil,50},
				{"acc_flashlight",nil,50},
				{"RH_ta31rmr",nil,100}
			};
		};
	};
	
	class independent 
	{
		name = "Hospital EMS Shop";

		class basic
		{
			license = "";
			rank = 1;
			items[] = 
			{
				{"ACE_atropine",nil,0},
				{"ACE_fieldDressing",nil,0},
				{"ACE_elasticBandage",nil,0},
				{"ACE_quikclot",nil,0},
				{"ACE_bloodIV",nil,0},
				{"ACE_bloodIV_500",nil,0},
				{"ACE_bloodIV_250",nil,0},
				{"ACE_bodyBag",nil,0},
				{"ACE_epinephrine",nil,0},
				{"ACE_morphine",nil,0},
				{"ACE_packingBandage",nil,0},
				{"ACE_personalAidKit",nil,0},
				{"ACE_plasmaIV",nil,0},
				{"ACE_plasmaIV_500",nil,0},
				{"ACE_plasmaIV_250",nil,0},
				{"ACE_salineIV",nil,0},
				{"ACE_salineIV_500",nil,0},
				{"ACE_salineIV_250",nil,0},
				{"ACE_surgicalKit",nil,0},
				{"ACE_tourniquet",nil,0},
				{"ItemGPS",nil,100},
				{"ItemCompass",nil,50},
				{"Binocular",nil,150},
				{"pmc_earpiece",nil,50},
				{"ToolKit",nil,250},
				{"Medikit",nil,500},
				{"NVGoggles",nil,1200},
				{"B_FieldPack_ocamo",nil,3000},
				{"tf_anprc152",nil,0},
				{"tf_anprc148jem",nil,0},
				{"Chemlight_green",nil,0},
				{"Chemlight_red",nil,0},
				{"Chemlight_yellow",nil,0},
				{"Chemlight_blue",nil,0}
			};
		};
	};

	class civilian
	{

		class genstore 
		{
			name = "General Store";
			license = "";
			items[] = 
			{
				{"ACE_fieldDressing",nil,80},
				{"ItemCompass",nil,50},
				{"Binocular",nil,150},
				{"tf_anprc152",nil,0},
				{"tf_anprc148jem",nil,0},
				{"ItemGPS",nil,100},
				{"ToolKit",nil,250},
				{"NVGoggles",nil,2000},
				{"Chemlight_red",nil,300},
				{"Chemlight_yellow",nil,300},
				{"Chemlight_green",nil,300},
				{"Chemlight_blue",nil,300},
				{"a3l_jackhammer","Jackhammer",2500},
				{"jackhammerfuel","Jackhammer Fuel",200}
			};
		};

		class rebel 
		{
			name = "Black Market";
			license = "license_civ_rebel";
			items[] = 
			{
				{"RH_m9c",nil,2100},
				{"RH_15Rnd_9x19_M9",nil,100},
				{"RH_vp70",nil,7500},
				{"RH_18Rnd_9x19_VP",nil,250},
				{"hgun_Pistol_heavy_01_F",nil,9000},
				{"11Rnd_45ACP_Mag",nil,300},
				{"RH_kimber_nw",nil,11000},
				{"RH_7Rnd_45cal_m1911",nil,300},
				{"RH_kimber",nil,11000},
				{"RH_7Rnd_45cal_m1911",nil,300},
				{"RH_g18",nil,12000},
				{"RH_19Rnd_9x19_g18",nil,175},
				{"RH_vz61",nil,13250},
				{"RH_20Rnd_32cal_vz61",nil,250},
				{"RH_muzi",nil,14000},
				{"RH_30Rnd_9x19_UZI",nil,200},
				{"RH_tec9",nil,16500},
				{"RH_32Rnd_9x19_tec",nil,250},
				{"hlc_smg_mp5k",nil,17000},
				{"hlc_30Rnd_9x19_B_MP5",nil,200},
				{"RH_sbr9_wdl",nil,23000},
				{"RH_32Rnd_9mm_M822",nil,250},
				{"RH_sbr9_tg",nil,23000},
				{"RH_32Rnd_9mm_M822",nil,250},
				{"RH_sbr9_des",nil,23000},
				{"RH_32Rnd_9mm_M822",nil,250},
				{"SMG_01_F",nil,28000},
				{"30Rnd_45ACP_Mag_SMG_01",nil,250},
				{"hlc_rifle_aku12",nil,34000},
				{"hlc_30Rnd_545x39_B_AK",nil,250},
				{"hlc_rifle_aek971worn",nil,37500},
				{"hlc_30Rnd_545x39_B_AK",nil,250},
				{"hlc_rifle_aks74",nil,39200},
				{"hlc_30Rnd_545x39_B_AK",nil,250},
				{"hlc_rifle_ak74_dirty2",nil,41500},
				{"hlc_30Rnd_545x39_B_AK",nil,250},
				{"hlc_rifle_ak47",nil,46500},
				{"hlc_30Rnd_762x39_b_ak",nil,250},
				{"hlc_rifle_akm",nil,52350},
				{"hlc_30Rnd_762x39_b_ak",nil,350},
				{"hlc_optic_kobra",nil,500},
				{"optic_Aco",nil,500}
			};
		};

		class gun 
		{
			name = "Billy Joe's Firearms";
			license = "license_civ_gun";
			items[] = 
			{
				{"arifle_SDAR_F",nil,8000},
				{"20Rnd_556x45_UW_mag",nil,500},
				{"RH_mak",nil,1000},
				{"RH_8Rnd_9x18_Mak",nil,100},
				{"hgun_P07_F",nil,1000},
				{"16Rnd_9x21_Mag",nil,100},
				{"hgun_Rook40_F",nil,1100},
				{"16Rnd_9x21_Mag",nil,100},
				{"RH_g17",nil,1200},
				{"RH_17Rnd_9x19_g17",nil,100},
				{"RH_g19",nil,1200},
				{"RH_17Rnd_9x19_g17",nil,100},
				{"RH_g19t",nil,1200},
				{"RH_17Rnd_9x19_g17",nil,100},
				{"RH_m9",nil,2000},
				{"RH_15Rnd_9x19_M9",nil,100},
				{"RH_sw659",nil,2250},
				{"RH_14Rnd_9x19_sw",nil,100},
				{"RH_gsh18",nil,4950},
				{"RH_18Rnd_9x19_gsh",nil,200},
				{"RH_m1911",nil,5750},
				{"RH_7Rnd_45cal_m1911",nil,250}
			};
		};
	};
};
