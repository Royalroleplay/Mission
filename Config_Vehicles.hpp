class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	
	class car_lowend {
		side = "civ";
		vehicles[] = {
			{ "Jonzie_Z432", 2000, "driver" },
			{ "Jonzie_Galant", 3000, "driver" },
			{ "Jonzie_Corolla", 4500, "driver" },
			{ "A3L_GMC_Van_White", 5000, "driver" },
			{ "Jonzie_Ceed", 6000, "driver" },
			{ "Jonzie_Ute", 7500, "driver" },
			{ "Jonzie_Mini_Cooper", 8000, "driver" },
			{ "Jonzie_Datsun_Z432", 6000, "driver" },
			{ "Jonzie_Transit", 10000, "driver" },
			{ "Mrshounka_lincoln_civ", 12000, "driver" },
			{ "Jonzie_30CSL", 12000, "driver" },
			{ "Jonzie_XB", 12000, "driver" },
			{ "ADM_Ford_F100", 12500 , "driver" },
			{ "ADM_1964_Impala", 15000 , "driver" },
			{ "ADM_1969_Camaro", 25000 , "driver" },
			{ "ADM_1969_Charger", 29000 , "driver" }
		};
	};
	
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "shounka_gt", 45000, "driver" },
			{ "Mrshounka_207_civ", 18000, "driver" },
			{ "Mrshounka_a3_308_rcz", 21000, "driver" },
			{ "Mrshounka_a3_308_civ", 28000, "driver" },
			{ "Mrshounka_a3_dodge15_civ", 29000, "driver" },
			{ "Mrshounka_a3_ds3_civ", 18000, "driver" },
			{ "RG_mustang_rouge", 41000, "driver" },
			{ "Mrshounka_cherokee_noir", 25000, "driver" },
			{ "Jonzie_Viper", 35000, "driver" },
			{ "shounka_buggy", 37000, "driver" },
			{ "Mrshounka_a3_gtr_civ", 66000, "driver" },
			{ "RG_huracan_c_noir", 125000, "driver" },
			{ "Mrshounka_agera_p", 360000, "driver" },  // Koenesegge Agera based off real pricing of car
			{ "Mrshounka_bmwm1_civ", 40000, "driver" },  // BMW m 1 Seriews based off real pricing of car
			{ "Mrshounka_bmwm6_civ", 55400, "driver" },  // BMW M 6 Series based off real pricing of car
			{ "Mrshounka_Bowler_c", 57000, "driver" },  // Land Rover Bowler based off real pricing of car
			{ "shounka_f430_spider", 120000, "driver" },  // Ferrari F430 Spyder based off real pricing of car
			{ "Mrshounka_hummer_civ", 40500, "driver" },  // Hummer H1 based off real pricing of car
			{ "shounka_h2", 57400, "driver" },  // Hummer h2 based off real pricing of car
			{ "Mrshounka_evox_civ", 50000, "driver" },  // Lancer Evolution based off real pricing of car
			{ "Mrshounka_lykan_c", 340000, "driver" },  // LykanHyper Sport based off real pricing of car
			{ "Mrshounka_c63_2015_civ", 102000, "driver" },
			{ "RG_yamaha_p_noir", 32000, "driver" },
			{ "RG_Volkswagen_Touareg_noir", 60000, "driver" },
			{ "Mrshounka_a3_smart_civ", 40000, "driver" },
			{ "Mrshounka_twingo_p", 22000, "driver" },
			{ "RG_r5_noir", 45000, "driver" },
			{ "Mrshounka_cayenne_p_civ", 34000, "driver" },
			{ "RG_spr_civ_noir", 78000, "driver" },
			{ "Mrshounka_Alfa_Romeo_civ", 30000, "driver" },
			{ "RG_rs4_noir", 25000, "driver" },
			{ "shounka_avalanche", 52000, "driver" },
			{ "Mrshounka_c4_p_civ", 37000, "driver" },
			{ "shounka_nemo", 27500, "driver" },
			{ "Mrshounka_corbillard_c", 95000, "driver" },
			{ "Mrshounka_ducati_p", 32000, "driver" },
			{ "RG_mustang_mat_n", 75000, "driver" },
			{ "RG_raptor2_noir", 66500, "driver" },
			{ "Mrshounka_golfvi_civ", 22000, "driver" },
			{ "Mrshounka_jeep_blinde_noir", 152000, "driver" },
			{ "Jonzie_Escalade", 80000, "driver" },
			{ "IVORY_R8", 130000, "driver" },
			{ "A3L_Panamera_Black", 120000, "driver" },
			{ "A3L_Mercedes_ML63_Base", 85000, "driver" },
			{ "A3L_F350Black", 45000, "driver" },
			{ "Jonzie_Mini_Cooper_R_spec", 65000, "driver" },
			{ "A3L_CVBlack", 28000, "driver" },
			{ "A3L_Challenger", 50000, "driver" },
			{ "Jonzie_STI", 100000, "driver" },
			{ "ivory_gt500", 50000, "driver" },
			{ "ivory_lfa", 78000, "driver" },
			{ "ivory_lp560", 130000, "driver" },
			{ "IVORY_PRIUS", 45000, "driver" },
			{ "IVORY_REV", 220000, "driver" },
			{ "ivory_c", 80000, "driver" },
			{ "ivory_wrx", 80000, "driver" },
			{ "Mrshounka_c4_picasso_p_bleufonce", 60000, "driver" },
			{ "Mrshounka_mercedes_190_p_civ", 75000, "driver" },
			{ "shounka_clk_grise", 75000, "driver" },
			{ "shounka_mp4", 75000, "driver" },
			{ "shounka_porsche911", 100000, "driver" },
			{ "shounka_rs6", 52000, "driver" },
			{ "shounka_transam", 60000, "driver" },
			{ "Quiet_c65amg_blanche_f", 80000, "driver" },
			{ "Quiet_dodge_15_blanche_f", 50000, "driver" },
			{ "Quiet_v2_r8plus_blanche_f", 250000, "driver" },
			{ "Mrshounka_subaru08_civ", 35000, "driver" },
			{ "A3L_Ferrari458red", 125000, "driver" },
			{ "A3L_Ford_Mustang_Red", 45000, "driver" },
			{ "AM_Escalade_White", 50000, "driver" }
		};
	};

	class dtu {
		side = "cop";
		vehicles[] = {
			{ "Jonzie_Z432", 500, "" },
			{ "Jonzie_Galant", 500, "" },
			{ "Jonzie_Corolla", 500, "" },
			{ "A3L_GMC_Van_White", 500, "" },
			{ "Jonzie_Ceed", 500, "" },
			{ "Jonzie_Ute", 500, "" },
			{ "Jonzie_Transit", 500, "" },
			{ "shounka_gt", 500, "" },
			{ "Mrshounka_207_civ", 500, "" },
			{ "Mrshounka_a3_308_rcz", 500, "" },
			{ "Mrshounka_a3_308_civ", 500, "" },
			{ "Mrshounka_a3_dodge15_civ", 500, "" },
			{ "Mrshounka_a3_ds3_civ", 500, "" },
			{ "RG_mustang_rouge", 500, "" },
			{ "Mrshounka_cherokee_noir", 500, "" },
			{ "Jonzie_Viper", 500, "" },
			{ "shounka_buggy", 500, "" },
			{ "Mrshounka_a3_gtr_civ", 500, "" },
			{ "RG_huracan_c_noir", 500, "" },
			{ "Mrshounka_agera_p", 500, "" },  // Koenesegge Agera based off real pricing of car
			{ "Mrshounka_bmwm1_civ", 500, "" },  // BMW m 1 Seriews based off real pricing of car
			{ "Mrshounka_bmwm6_civ", 500, "" },  // BMW M 6 Series based off real pricing of car
			{ "Mrshounka_Bowler_c", 500, "" },  // Land Rover Bowler based off real pricing of car
			{ "shounka_f430_spider", 500, "" },  // Ferrari F430 Spyder based off real pricing of car
			{ "Mrshounka_hummer_civ", 500, "" },  // Hummer H1 based off real pricing of car
			{ "shounka_h2", 500, "" },  // Hummer h2 based off real pricing of car
			{ "Mrshounka_evox_civ", 500, "" },  // Lancer Evolution based off real pricing of car
			{ "Mrshounka_lykan_c", 500, "" },  // LykanHyper Sport based off real pricing of car
			{ "Mrshounka_c63_2015_civ", 500, "" },
			{ "DRPG_15Charger_P_U", 500, "" },
			{ "RG_yamaha_p_noir", 500, "" },
			{ "RG_Volkswagen_Touareg_noir", 500, "" },
			{ "Mrshounka_a3_smart_civ", 500, "" },
			{ "Mrshounka_twingo_p", 500, "" },
			{ "RG_r5_noir", 500, "" },
			{ "Mrshounka_cayenne_p_civ", 500, "" },
			{ "RG_spr_civ_noir", 500, "" },
			{ "Mrshounka_Alfa_Romeo_civ", 500, "" },
			{ "RG_rs4_noir", 500, "" },
			{ "shounka_avalanche", 500, "" },
			{ "Mrshounka_c4_p_civ", 500, "" },
			{ "shounka_nemo", 500, "" },
			{ "Mrshounka_corbillard_c", 500, "" },
			{ "Mrshounka_ducati_p", 500, "" },
			{ "RG_mustang_mat_n", 500, "" },
			{ "RG_raptor2_noir", 500, "" },
			{ "Mrshounka_golfvi_civ", 500, "" },
			{ "Mrshounka_jeep_blinde_noir", 500, "" },
			{ "Jonzie_Escalade", 500, "" },
			{ "IVORY_R8", 500, "" },
			{ "A3L_Panamera_Black", 500, "" },
			{ "A3L_Mercedes_ML63_Base", 500, "" },
			{ "A3L_F350Black", 500, "" },
			{ "Jonzie_Mini_Cooper_R_spec", 500, "" },
			{ "Jonzie_Datsun_Z432", 500, "" },
			{ "Jonzie_XB", 500, "" },
			{ "A3L_CVBlack", 500, "" },
			{ "A3L_TaurusBlack", 500, "" },
			{ "A3L_Challenger", 500, "" },
			{ "Jonzie_STI", 500, "" },
			{ "ivory_gt500", 500, "" },
			{ "ivory_lfa", 500, "" },
			{ "ivory_lp560", 500, "" },
			{ "IVORY_PRIUS", 500, "" },
			{ "IVORY_REV", 500, "" },
			{ "ivory_c", 500, "" },
			{ "ivory_wrx", 500, "" },
			{ "Mrshounka_c4_picasso_p_bleufonce", 500, "" },
			{ "Mrshounka_mercedes_190_p_civ", 500, "" },
			{ "shounka_clk_grise", 500, "" },
			{ "shounka_mp4", 500, "" },
			{ "shounka_porsche911", 500, "" },
			{ "shounka_rs6", 500, "" },
			{ "shounka_transam", 500, "" },
			{ "Quiet_c65amg_blanche_f", 500, "" },
			{ "Quiet_dodge_15_blanche_f", 500, "" },
			{ "Quiet_v2_r8plus_blanche_f", 500, "" },
			{ "Mrshounka_subaru08_civ", 500, "" },
			{ "ivory_wrx_cop_marked", 500, "" },
			{ "ivory_wrx_cop_slicktop", 500, ""}
		};
	};


	class race_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "C_Kart_01_Vrana_F", 15000, "driver" },
			{ "ADM_Monte_Carlo", 175000, "race" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "A3L_CVPILBFD", 1000, "" },
			{ "A3L_Subaru_EMS", 1500, "" },
			{ "A3L_ExplorerEMS_S", 1500, ""},
			{ "A3L_Charger_EMS_Fast", 2500, ""},
			{ "Jonzie_AmbulanceExtended", 1000, "" },
			{ "DRPG_06Victoria_EMS", 1000, "" }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 500, "mAir" },
			{ "RobJ_Rescue1", 500, "mAir" },
			{ "EC635_SAR", 500, "mAir" },
			{ "O_Heli_Light_02_unarmed_F", 500, "mAir" }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_box_F", 25000, "trucking" },
			{ "Jonzie_Box_Truck", 70000, "trucking" },
			{ "Jonzie_Tow_Truck", 40000, "trucking" },
			{ "A3L_Renault_Magnum", 80000, "trucking" },
			{ "Jonzie_Western", 80000, "semi" },
			{ "Jonzie_Superliner", 80000, "semi" },
			{ "A3L_Towtruck_black", 60000, "trucking" },
			{ "A3L_Bus_base", 120000, "semi" },
			{ "wirk_h3_limo", 75000, "trucking" }
		};
	};

	class civ_trailer {
		side = "civ";
		vehicles[] = {
			{ "Jonzie_Curtain", 45000, "semi" },
			{ "Jonzie_Flatbed", 35000, "semi" }
		};
	};
	
	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" },
			{ "B_G_Offroad_01_F", 15000, "" },
			{ "O_MRAP_02_F", 150000, "" },
			{ "B_Heli_Light_01_F", 325000, "" },
			{ "B_G_Offroad_01_armed_F", 750000, "rebel" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "Mrshounka_a3_smart_cop", 500, "" },
			{ "DRPG_12Charger_P_P", 1500, "" },
			{ "DRPG_12M5_P_P", 2000, "" },
			{ "DRPG_08Suburban_P_U", 2500, "" },
			{ "DRPG_06Victoria_P_T", 3000, "" },
			{ "DRPG_14Explorer_P_P", 3500, "" },
			{ "DRPG_06Victoria_P_P", 4000, "" },
			{ "ivory_wrx_cop_marked", 500, "" }
		};
	};

	class civ_air {	
		side = "civ";
		vehicles[] = {
			{ "sab_camel", 150000, "pilot" },
			{ "sab_camel_pro", 150000, "pilot" },
			{ "sab_FAAllegro", 160000, "pilot" },
			{ "sab_FAAllegro_2", 160000, "pilot" },
			{ "sab_FAAllegro_3", 160000, "pilot" },
			{ "sab_FAAllegro_4", 160000, "pilot" },
			{ "sab_FAAllegro_5", 160000, "pilot" },
			{ "GNT_C185", 250000, "pilot" },
			{ "GNT_C185F", 275000, "pilot" },
			{ "Sab_A2_An2", 500000, "pilot" },
			{ "Sab_cz_An2", 500000, "pilot" },
			{ "Sab_ee_An2", 500000, "pilot" },
			{ "B_Heli_Light_01_F", 253000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 750000, "pilot" },
			{ "ivory_b206", 300000, "pilot" },
			{ "ivory_b206_news", 350000, "pilot" },
			{ "IVORY_BELL512", 400000, "pilot" },
			{ "IVORY_ERJ135_1", 800000, "pilot" },
			{ "IVORY_CRJ200_1", 1000000, "pilot" },
			{ "ivory_yak42d_1", 3000000, "pilot" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 20000, "cAir" },
			{ "ivory_b206_police", 20000, "cAir" },
			{ "IVORY_BELL512_POLICE", 20000, "cAir" }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "" },
			{ "C_Boat_Civil_01_police_F", 20000, "" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "" },
			{ "B_SDV_01_F", 100000, "" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = 30;
		storageFee[] = { 100, 100, 100, 100 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 2500;
		textures = [];
	};

    class shounka_base {
    	vItemSpace = 60;
    	storageFee[] = { 100, 500, 650, 100 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 2500;
    	chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "\shounka_a3_base\couleurs\rouge.paa"
            } },
			{ "Black", "civ", {
	                "\shounka_a3_base\couleurs\noir.paa"
            } },
			{ "Dark blue", "civ", {
	                "\shounka_a3_base\couleurs\bleufonce.paa"
            } },
			{ "Yellow", "civ", {
	                "\shounka_a3_base\couleurs\jaune.paa"
            } },
			{ "Pink", "civ", {
	                "\shounka_a3_base\couleurs\rose.paa"
            } },
			{ "Gray", "civ", {
	                "\shounka_a3_base\couleurs\gris.paa"
            } },
            { "Purple", "civ", {
	                "\shounka_a3_base\couleurs\violet.paa"
            } },
			{ "Orange", "civ", {
	                "\shounka_a3_base\couleurs\orange.paa"
            } }
	    };
    };

    class shounka_gt : shounka_base {};
	class Mrshounka_207_civ : shounka_base {};
	class Mrshounka_a3_308_rcz : shounka_base {};
	class Mrshounka_a3_308_civ : shounka_base {};
	class Mrshounka_a3_dodge15_civ : shounka_base {};
	class Mrshounka_a3_ds3_civ : shounka_base {};
	class RG_mustang_rouge : shounka_base {};
	class Mrshounka_cherokee_noir : shounka_base {};
	class shounka_buggy : shounka_base {};
	class Mrshounka_a3_gtr_civ : shounka_base {};
	class RG_huracan_c_noir : shounka_base {};
	class Mrshounka_agera_p : shounka_base {};
	class Mrshounka_bmwm1_civ : shounka_base {};
	class Mrshounka_bmwm6_civ : shounka_base {};
	class Mrshounka_Bowler_c : shounka_base {};
	class shounka_f430_spider : shounka_base {};
	class Mrshounka_hummer_civ : shounka_base {};
	class shounka_h2 : shounka_base {};
	class Mrshounka_evox_civ : shounka_base {};
	class Mrshounka_lykan_c : shounka_base {};
	class Mrshounka_c63_2015_civ : shounka_base {};
	class RG_yamaha_p_noir : shounka_base {};
	class RG_Volkswagen_Touareg_noir : shounka_base {};
	class Mrshounka_a3_smart_civ : shounka_base {};
	class Mrshounka_twingo_p : shounka_base {};
	class RG_r5_noir : shounka_base {};
	class Mrshounka_cayenne_p_civ : shounka_base {};
	class RG_spr_civ_noir : shounka_base {};
	class Mrshounka_Alfa_Romeo_civ : shounka_base {};
	class RG_rs4_noir : shounka_base {};
	class shounka_avalanche : shounka_base {};
	class Mrshounka_c4_p_civ : shounka_base {};
	class shounka_nemo : shounka_base {};
	class Mrshounka_corbillard_c : shounka_base {};
	class Mrshounka_ducati_p : shounka_base {};
	class RG_mustang_mat_n : shounka_base {};
	class RG_raptor2_noir : shounka_base {vItemSpace = 150;};
	class Mrshounka_golfvi_civ : shounka_base {};
	class Mrshounka_jeep_blinde_noir : shounka_base {};

	class Jonzie_Base {
		vItemSpace = 10;
    	storageFee[] = { 100, 500, 650, 100 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 2500;
    	chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "#(argb,8,8,3)color(1,0,0,1)"
            } },
			{ "Black", "civ", {
	                "#(argb,8,8,3)color(0,0,0,1)"
            } },
			{ "Dark blue", "civ", {
	                "#(argb,8,8,3)color(0,0,0.627451,1)"
            } },
			{ "Yellow", "civ", {
	                "#(argb,8,8,3)color(1,1,0,1)"
            } },
			{ "Pink", "civ", {
	                "#(argb,8,8,3)color(1,0,1,1)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,1)"
            } },
            { "Purple", "civ", {
	                "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
			{ "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.501961,0,1)"
            } }
	    };
	};
	class Mrshounka_subaru08_civ: Jonzie_Base {vItemSpace = 25;};
	class Quiet_v2_r8plus_blanche_f: Jonzie_Base {vItemSpace = 25;};
	class Quiet_dodge_15_blanche_f: Jonzie_Base {vItemSpace = 25;};
	class Quiet_c65amg_blanche_f: Jonzie_Base {vItemSpace = 25;};
	class shounka_transam: Jonzie_Base {vItemSpace = 25;};
	class shounka_rs6: Jonzie_Base {vItemSpace = 25;};
	class shounka_porsche911: Jonzie_Base {vItemSpace = 25;};
	class shounka_mp4: Jonzie_Base {vItemSpace = 25;};
	class shounka_clk_grise: Jonzie_Base {vItemSpace = 25;};
	class Mrshounka_mercedes_190_p_civ: Jonzie_Base {vItemSpace = 25;};
	class Mrshounka_c4_picasso_p_bleufonce: Jonzie_Base {vItemSpace = 25;};
	class IVORY_REV: Jonzie_Base {vItemSpace = 25;};
	class ivory_lfa: Jonzie_Base {vItemSpace = 25;};
	class ivory_gt500: Jonzie_Base {vItemSpace = 25;};
	class Jonzie_Superliner: Jonzie_Base {vItemSpace = 0;};
	class wirk_h3_limo: Jonzie_Base {vItemSpace = 25;};
	class Jonzie_STI: Jonzie_Base {vItemSpace = 25;};
	class A3L_TaurusBlack: Jonzie_Base {vItemSpace = 25;};
	class A3L_CVBlack: Jonzie_Base {vItemSpace = 25;};
	class Jonzie_XB: Jonzie_Base {vItemSpace = 25;};
	class Jonzie_Datsun_Z432: Jonzie_Base {vItemSpace = 25;};
	class Jonzie_Mini_Cooper_R_spec: Jonzie_Base {vItemSpace = 25;};
	class Jonzie_Mini_Cooper: Jonzie_Base {vItemSpace = 25;};
	class A3L_Mercedes_ML63_Base: Jonzie_Base {vItemSpace = 25;};
	class A3L_F350Black: Jonzie_Base {vItemSpace = 25;};
	class A3L_Panamera_Black: Jonzie_Base {vItemSpace = 25;};
	class IVORY_R8: Jonzie_Base {vItemSpace = 25;};
	class Jonzie_Z432: Jonzie_Base {vItemSpace = 50;};
	class Jonzie_Galant: Jonzie_Base {vItemSpace = 55;};
	class Jonzie_Corolla: Jonzie_Base {vItemSpace = 60;};
	class Jonzie_Ceed: Jonzie_Base {vItemSpace = 65;};
	class Jonzie_Ute: Jonzie_Base {vItemSpace = 70;};
	class Jonzie_Transit: Jonzie_Base {vItemSpace = 130;};
	class Jonzie_Viper : Jonzie_Base {vItemSpace = 50; };
	class Jonzie_AmbulanceExtended: Jonzie_Base {vItemSpace = 100; textures[] = {}; };
	class Jonzie_Western: Jonzie_Base {vItemSpace = 0;};
	class Jonzie_Flatbed: Jonzie_Base {vItemSpace = 450;};
	class Jonzie_Curtain: Jonzie_Base {vItemSpace = 550;};
	class ADM_GMC_Vandura: Jonzie_Base {vItemSpace = 100;};
	class ADM_Monte_Carlo: Jonzie_Base {vItemSpace = 0;};
	class ADM_1964_Impala: Jonzie_Base {vItemSpace = 80;};
	class ADM_1969_Camaro: Jonzie_Base {vItemSpace = 100;};
	class ADM_1969_Charger: Jonzie_Base {vItemSpace = 90;};
	class ADM_Ford_F100: Jonzie_Base {vItemSpace = 150;};
	class DRPG_12Charger_P_P: Jonzie_Base {vItemSpace = 125;};
	class DRPG_12M5_P_P: Jonzie_Base {vItemSpace = 150;};
	class DRPG_08Suburban_P_U: Jonzie_Base {vItemSpace = 175;};
	class DRPG_06Victoria_P_T: Jonzie_Base {vItemSpace = 150;};
	class DRPG_14Explorer_P_P: Jonzie_Base {vItemSpace = 125;};
	class DRPG_06Victoria_P_P: Jonzie_Base {vItemSpace = 100;};
	class DRPG_06Victoria_EMS: Jonzie_Base {vItemSpace = 100;};
	class DRPG_06Victoria_Base: Jonzie_Base {vItemSpace = 100;};
	class DRPG_14Explorer_Base: Jonzie_Base {vItemSpace = 125;};
	class DRPG_12Charger_Base: Jonzie_Base {vItemSpace = 125;};
	class DRPG_15Charger_Base: Jonzie_Base {vItemSpace = 150;};
	class DRPG_12M5_Base: Jonzie_Base {vItemSpace = 150;};
	class Jonzie_Escalade: Jonzie_Base {};
	
	class A3L_Challenger {
		vItemSpace = 10;
    	storageFee[] = { 100, 500, 650, 100 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 2500;
    	chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "#(argb,8,8,3)color(1,0,0,1)"
            } },
			{ "Black", "civ", {
	                "#(argb,8,8,3)color(0,0,0,1)"
            } },
			{ "Dark blue", "civ", {
	                "#(argb,8,8,3)color(0,0,0.627451,1)"
            } },
			{ "Yellow", "civ", {
	                "#(argb,8,8,3)color(1,1,0,1)"
            } },
			{ "Pink", "civ", {
	                "#(argb,8,8,3)color(1,0,1,1)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,1)"
            } },
            { "Purple", "civ", {
	                "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
			{ "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.501961,0,1)"
            } },
			{ "White", "civ", {
					"\A3L_Challenger\data\colors\white.paa"
            } },
			{ "Hemi", "civ", {
					"\A3L_Challenger\data\colors\hemi.paa"
            } },
			{ "Jacket", "civ", {
					"\A3L_Challenger\data\colors\Jacket.paa"
            } },
			{ "Fire", "civ", {
					"\A3L_Challenger\data\colors\Fir.paa"
            } },
			{ "General", "civ", {
					"\A3L_Challenger\data\colors\general.paa"
            } },
			{ "Graffiti", "civ", {
					"\A3L_Challenger\data\colors\graffity.paa"
            } },
			{ "SRT8", "civ", {
					"\A3L_Challenger\data\colors\srt8_sign_2.paa"
            } }
	    };
	};
	
	class IVORY_PRIUS {
		vItemSpace = 10;
    	storageFee[] = { 100, 500, 650, 100 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 2500;
    	chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "#(argb,8,8,3)color(1,0,0,1)"
            } },
			{ "Black", "civ", {
	                "#(argb,8,8,3)color(0,0,0,1)"
            } },
			{ "Dark blue", "civ", {
	                "#(argb,8,8,3)color(0,0,0.627451,1)"
            } },
			{ "Yellow", "civ", {
	                "#(argb,8,8,3)color(1,1,0,1)"
            } },
			{ "Pink", "civ", {
	                "#(argb,8,8,3)color(1,0,1,1)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,1)"
            } },
            { "Purple", "civ", {
	                "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
			{ "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.501961,0,1)"
            } },
			{ "White", "civ", {
                    "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
			{ "Anime", "civ", {
					"\IVORY_PRIUS\data\anime.paa"
            } },
			{ "Animu", "civ", {
					"\IVORY_PRIUS\data\animu.pac"
            } },
			{ "Downtown Taxi", "civ", {
					"\IVORY_PRIUS\data\taxiblue.paa"
            } },
			{ "Anime v2", "civ", {
					"\IVORY_PRIUS\data\wtf.paa"
            } },
			{ "NYC", "civ", {
					"\IVORY_PRIUS\data\yankes.paa"
            } }
	    };
	};
	
	class AM_Escalade_White {
		vItemSpace = 10;
    	storageFee[] = { 100, 500, 650, 100 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 2500;
    	chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "#(argb,8,8,3)color(1,0,0,1)"
            } },
			{ "Black", "civ", {
	                "#(argb,8,8,3)color(0,0,0,1)"
            } },
			{ "Dark blue", "civ", {
	                "#(argb,8,8,3)color(0,0,0.627451,1)"
            } },
			{ "Yellow", "civ", {
	                "#(argb,8,8,3)color(1,1,0,1)"
            } },
			{ "Pink", "civ", {
	                "#(argb,8,8,3)color(1,0,1,1)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,1)"
            } },
            { "Purple", "civ", {
	                "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
			{ "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.501961,0,1)"
            } },
			{ "White", "civ", {
                    "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
			{ "Silver", "civ", {
					"AM_V_Data\data\Colours\Silver.paa"
            } },
			{ "ArtBomb", "civ", {
					"AM_Sexcalade\data\artcadi.paa"
            } },
			{ "Taxi", "civ", {
					"AM_Sexcalade\data\Taxi.paa"
            } }
	    };
	};
	
	
	class A3L_GMC_Van_White {
		vItemSpace = 100;
    	storageFee[] = { 100, 500, 650, 100 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 2500;
    	chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "#(argb,8,8,3)color(1,0,0,1)"
            } },
			{ "Black", "civ", {
	                "#(argb,8,8,3)color(0,0,0,1)"
            } },
			{ "Dark blue", "civ", {
	                "#(argb,8,8,3)color(0,0,0.627451,1)"
            } },
			{ "Yellow", "civ", {
	                "#(argb,8,8,3)color(1,1,0,1)"
            } },
			{ "Pink", "civ", {
	                "#(argb,8,8,3)color(1,0,1,1)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,1)"
            } },
            { "Purple", "civ", {
	                "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
			{ "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.501961,0,1)"
            } },
			{ "White", "civ", {
                    "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
			{ "Aqua", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Aqua.paa"
            } },
			{ "Candy", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Candy.paa"
            } },
			{ "Chill", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Chill.paa"
            } },
			{ "Dew", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Dew.paa"
            } },
			{ "Fox News", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Fox.paa"
            } },
			{ "Gangbang", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Gangbang.paa"
            } },
			{ "Ghost", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Ghost.paa"
            } },
			{ "LOST BOYS", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\LOST.paa"
            } },
			{ "Monster Drinks", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Monster.paa"
            } },
			{ "News4", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\News 4.paa"
            } },
			{ "Ocean", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Ocean.paa"
            } },
			{ "Rockstar Drinks", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Rockstar.paa"
            } },
			{ "Shark", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Shark.paa"
            } },
			{ "SWAGGY", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\SWAGGY.paa"
            } },
			{ "Scoobydoo", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\Scoobydoo.paa"
            } }
/*			{ "Food Store", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\GMC_Food.paa"
            } },
			{ "General Store", "civ", {
					"A3L_GMC_Van\Mrshounka_texture\GMC_General.paa"
            } },
			{ "Clothing Store", "civ", {
				"A3L_GMC_Van\Mrshounka_texture\GMC_Clothing.paa"
            } }
*/
	    };
	};
	
	class A3L_Ferrari458red {
		vItemSpace = 10;
    	storageFee[] = { 100, 500, 650, 100 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 2500;
    	chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "#(argb,8,8,3)color(1,0,0,1)"
            } },
			{ "Black", "civ", {
	                "#(argb,8,8,3)color(0,0,0,1)"
            } },
			{ "Dark blue", "civ", {
	                "#(argb,8,8,3)color(0,0,0.627451,1)"
            } },
			{ "Yellow", "civ", {
	                "#(argb,8,8,3)color(1,1,0,1)"
            } },
			{ "Pink", "civ", {
	                "#(argb,8,8,3)color(1,0,1,1)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,1)"
            } },
            { "Purple", "civ", {
	                "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
			{ "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.501961,0,1)"
            } },
			{ "Challenge", "civ", {
					"A3L_Ferrari458\Data\Challenge.paa"
            } },
			{ "Dragon", "civ", {
					"A3L_Ferrari458\Data\Dragon.paa"
            } },
			{ "Gumball", "civ", {
					"A3L_Ferrari458\Data\Gumball.paa"
            } },
			{ "Gumball Red", "civ", {
					"A3L_Ferrari458\Data\GumballRed.paa"
            } },
			{ "Italia", "civ", {
					"A3L_Ferrari458\Data\Italia.paa"
            } },
			{ "Martini", "civ", {
					"A3L_Ferrari458\Data\Martini.paa"
            } },
			{ "Nighthawk", "civ", {
					"A3L_Ferrari458\Data\Nighthawk.paa"
            } },
			{ "Nyan Cat", "civ", {
					"A3L_Ferrari458\Data\Nyan.paa"
            } },
			{ "Red Dragon", "civ", {
					"A3L_Ferrari458\Data\RedDragon.paa"
            } },
			{ "UK", "civ", {
					"A3L_Ferrari458\Data\UK.paa"
            } }
	    };
	};
	
	class A3L_Ford_Mustang_Red {
		vItemSpace = 10;
    	storageFee[] = { 100, 500, 650, 100 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 2500;
    	chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "#(argb,8,8,3)color(1,0,0,1)"
            } },
			{ "Black", "civ", {
	                "#(argb,8,8,3)color(0,0,0,1)"
            } },
			{ "Dark blue", "civ", {
	                "#(argb,8,8,3)color(0,0,0.627451,1)"
            } },
			{ "Yellow", "civ", {
	                "#(argb,8,8,3)color(1,1,0,1)"
            } },
			{ "Pink", "civ", {
	                "#(argb,8,8,3)color(1,0,1,1)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,1)"
            } },
            { "Purple", "civ", {
	                "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
			{ "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.501961,0,1)"
            } },
			{ "Falken", "civ", {
					"A3L_Ford_Mustang\Mrshounka_texture\template.paa"
            } },
			{ "BlackBird", "civ", {
					"A3L_Ford_Mustang\Mrshounka_texture\Blackbird.paa"
            } },
			{ "Cobra", "civ", {
					"A3L_Ford_Mustang\Mrshounka_texture\Cobra.paa"
            } },
			{ "Monster", "civ", {
					"A3L_Ford_Mustang\Mrshounka_texture\Monster.paa"
            } },
			{ "Roush", "civ", {
					"A3L_Ford_Mustang\Mrshounka_texture\Roush.paa"
            } },
			{ "Sticker Bomb", "civ", {
					"A3L_Ford_Mustang\Mrshounka_texture\Stickerbomb.paa"
            } },
			{ "RedTail", "civ", {
					"A3L_Ford_Mustang\Mrshounka_texture\RedTail.paa"
            } },
			{ "Rs3", "civ", {
					"A3L_Ford_Mustang\Mrshounka_texture\Rs3.paa"
            } }
	    };
	};

	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 150, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 3000;
	};
	
	class A3L_ExplorerEMS_S : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 150, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 3000;
	};
	
	class A3L_CVPILBFD : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 150, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 3000;
	};

	class DRPG_15Charger_P_U : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 800, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 2000;
	};
	
	class A3L_Charger_EMS_Fast : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 150, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 300, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 650, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 12500;
	};
	
	class a3l_subaru_ems : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 650, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 5000, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 165, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 100, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 100, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 450, 250, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
	
	class RobJ_Rescue1 {
        vItemSpace = 85;
        storageFee[] = { 450, 250, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
	
	class EC635_SAR {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 350, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 100, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 350, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 250, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 40, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 100, 500, 650, 100 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Fed", "fed", {
	                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Police", "cop", {
	                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Taxi", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } }
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 150, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 250, 100, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 5500;
        chopShop = 4500;
        textures[] = {
        	{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
			{ "Black / White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
			{ "Beige", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

	class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 10, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 6500;
        chopShop = 20000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 120, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};

	class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
			{ "Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
			{ "White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
			{ "Grey", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

	class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "Black", "cop", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Cop", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
	        };
    };

	class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class C_Van_01_box_F {
        vItemSpace = 250;
        storageFee[] = { 100, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class Jonzie_Box_Truck {
    	vItemSpace = 350;
    	storageFee[] = { 50, 0, 0, 0 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 10000;
    	chopShop = 15000;
		textures[] = {};
    };

    class A3L_Renault_Magnum {
    	vItemSpace = 350;
    	storageFee[] = {1000, 1000, 1000, 1000};
    	garageSell[] = {0,0,0,0};
    	insurance = 10000;
    	chopShop = 15000;
    	textures[] = {};
    };
	
	class Jonzie_Tow_Truck {
    	vItemSpace = 50;
    	storageFee[] = { 50, 0, 0, 0 };
    	garageSell[] = { 0, 0, 0, 0 };
    	insurance = 10000;
    	chopShop = 15000;
		textures[] = {};
    };
    
	class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 750, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Regular", "cop", {
                "\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 0;
        storageFee[] = { 450, 190, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Sheriff", "cop", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
			{ "Black", "fed", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 0;
        storageFee[] = { 550, 0, 220, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Black", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"   
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
			{ "Desert Digi", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa" 
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 0;
        storageFee[] = { 750, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };
   
    //Bently Skins
    class ivory_c {
        vItemSpace = 10;
        storageFee[] = { 100, 500, 650, 100 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        _path = "\ivory_c\data";
        textures[] = {
            { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
            { "Gold", "civ", {
                    "#(argb,8,8,3)color(1,0.843137,0,1.0,CO)"
            } },
            { "Gray", "civ", {
                    "#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,CO)"
            } },
            { "Green", "civ", {
                    "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
            { "Pink", "civ", {
                    "#(argb,8,8,3)color(1,0.411765,0.705882,1.0,CO)"
            } },
            { "Purple", "civ", {
                    "#(argb,8,8,3)color(0.501961,0,0.501961,1.0,CO)"
            } },
            { "Red", "civ", {
                    "#(argb,8,8,3)color(1,0,0,1.0,CO)"
            } },
            { "Teal", "civ", {
                    "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
            { "White", "civ", {
                    "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } },
            { "Carillo", "civ", {
                    "\ivory_c\data\bentley_con_livery01.paa"
            } },
            { "8", "civ", {
                    "\ivory_c\data\bentley_con_livery02.paa"
            } },
            { "Revo", "civ", {
                    "\ivory_c\data\bentley_con_livery03.paa"
            } },
            { "Ksport", "civ", {
                    "\ivory_c\data\bentley_con_livery04.paa"
            } },
            { "Gee", "civ", {
                    "\ivory_wrx\data\gee.paa"
            } },
            { "Race", "civ", {
                    "\ivory_c\data\race.paa"
            } },
            { "Goldee", "civ", {
                    "\ivory_c\data\goldee.paa"
            } },
            { "Camo", "civ", {
                    "\ivory_c\data\camo.paa"
            } },
            { "Velvet", "civ", {
                    "\ivory_c\data\velvet.paa"
            } },
            { "Blue", "civ", {
                    "#(argb,8,8,3)color(0.027451,0.211765,0.972549,1.0,CO)"
            } },
            { "Teal", "civ", {
                    "#(argb,8,8,3)color(0,0.333333,0.290196,1.0,CO)"
            } },
            { "Wedding", "civ", {
                    "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
            { "Orange", "civ", {
                    "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } }
        };
    };
   
   
   
    //lp560
    class ivory_lp560 {
        vItemSpace = 25;
        storageFee[] = { 100, 500, 650, 100 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        _path = "\ivory_lp560\data";
        textures[] = {
            { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
            { "Blue", "civ", {
                "#(argb,8,8,3)color(0.027451,0.211765,0.972549,1.0,CO)"
            } },
            { "Gold", "civ", {
                    "#(argb,8,8,3)color(1,0.843137,0,1.0,CO)"
            } },
            { "Gray", "civ", {
                    "#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,CO)"
            } },
            { "Green", "civ", {
                    "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
            { "Pink", "civ", {
                    "#(argb,8,8,3)color(1,0.411765,0.705882,1.0,CO)"
            } },
            { "Purple", "civ", {
                    "#(argb,8,8,3)color(0.501961,0,0.501961,1.0,CO)"
            } },
            { "Red", "civ", {
                    "#(argb,8,8,3)color(1,0,0,1.0,CO)"
            } },
            { "Teal", "civ", {
                    "#(argb,8,8,3)color(0,0.333333,0.290196,1.0,CO)"
            } },
            { "White", "civ", {
                    "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
            { "Orange", "civ", {
                    "#(argb,8,8,3)color(1,0.501961,0,1.0,CO)"
            } },
            { "Fidanza", "civ", {
                    "\ivory_lp560\data\lamborghini_gallardo_livery01.paa"
            } },
            { "Koni", "civ", {
                    "\ivory_lp560\data\lamborghini_gallardo_livery02.paa"
            } },
            { "KW", "civ", {
                    "\ivory_lp560\data\lamborghini_gallardo_livery03.paa"
            } },
            { "Blue Ruthless", "civ", {
                    "\ivory_lp560\data\lamborghini_gallardo_livery04.paa"
            } },
            { "Red Savage", "civ", {
                    "\ivory_lp560\data\redsavage.paa"
            } },
            { "Galaxy", "civ", {
                    "\ivory_lp560\data\galaxy.paa"
            } },
            { "Dark Knight", "civ", {
                    "\ivory_lp560\data\darkknight.paa"
            } },
            { "Purrardo", "civ", {
                    "\ivory_lp560\data\purrardo.paa"
            } },
            { "Dark Knight", "civ", {
                    "\ivory_lp560\data\25thedition.paa"
            } }
        };
    };
   
   
   
    //ivory_wrx_cop_marked
    class ivory_wrx_cop_marked {
        vItemSpace = 25;
        storageFee[] = { 100, 500, 650, 100 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        _path = "\ivory_wrx\data";
        textures[] = {
            { "PD Marked", "cop", {
                    "\ivory_wrx\data\pd.paa"
            } },
            { "Sert", "cop", {
                    "\ivory_wrx\data\sert.paa"
            } },
            { "Sheriff", "cop", {
                    "\ivory_wrx\data\so.paa"
            } },
            { "ST", "cop", {
                    "\ivory_wrx\data\st.paa"
            } }
        };
    };
   
    //ivory_wrx_cop_slicktop
    class ivory_wrx_cop_slicktop {
        vItemSpace = 25;
        storageFee[] = { 100, 500, 650, 100 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        _path = "\ivory_wrx\data";
        textures[] = {
            { "PD Marked", "cop", {
                    "\ivory_wrx\data\pd.paa"
            } },
            { "Sert", "cop", {
                    "\ivory_wrx\data\sert.paa"
            } },
            { "Sheriff", "cop", {
                    "\ivory_wrx\data\so.paa"
            } },
            { "ST", "cop", {
                    "\ivory_wrx\data\st.paa"
            } },
            { "Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            } },
            { "Gold", "civ", {
                    "#(argb,8,8,3)color(1,0.843137,0,1.0,CO)"
            } },
            { "Gray", "civ", {
                    "#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,CO)"
            } },
            { "Green", "civ", {
                    "#(argb,8,8,3)color(0,0.501961,0,1.0,CO)"
            } },
            { "Pink", "civ", {
                    "#(argb,8,8,3)color(1,0.411765,0.705882,1.0,CO)"
            } },
            { "Purple", "civ", {
                    "#(argb,8,8,3)color(0.501961,0,0.501961,1.0,CO)"
            } },
            { "Red", "civ", {
                    "#(argb,8,8,3)color(1,0,0,1.0,CO)"
            } },
            { "Teal", "civ", {
                    "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            } },
            { "White", "civ", {
                    "#(argb,8,8,3)color(0.501961,0,0.501961,1)"
            } }
        };
    };
};