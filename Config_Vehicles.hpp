class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	
	class car_lowend {
		side = "civ";
		vehicles[] = {
			{ "Jonzie_Datsun_510", 2000, "driver" },
			{ "Jonzie_Z432", 2000, "driver" },
			{ "Jonzie_Galant", 3000, "driver" },
			{ "Jonzie_Corolla", 4500, "driver" },
			{ "ADM_GMC_Vandura", 5000, "driver" },
			{ "Jonzie_Ceed", 6000, "driver" },
			{ "Jonzie_Ute", 7500, "driver" },
			{ "Jonzie_Transit", 10000, "driver" }
		};
	};
	
	class car_classic {
		side = "civ";
		vehicles[] = {
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
			{ "Mrshounka_207_civ", 45000, "driver" },
			{ "Mrshounka_a3_308_rcz", 45000, "driver" },
			{ "Mrshounka_a3_308_civ", 45000, "driver" },
			{ "Mrshounka_a3_dodge15_civ", 45000, "driver" },
			{ "Mrshounka_a3_ds3_civ", 45000, "driver" },
			{ "RG_mustang_rouge", 55000, "driver" },
			{ "Mrshounka_cherokee_noir", 60000, "driver" },
			{ "Jonzie_Viper", 75000, "driver" },
			{ "shounka_buggy", 75000, "driver" },
			{ "Mrshounka_a3_gtr_civ", 75000, "driver" },
			{ "RG_huracan_c_noir", 125000, "driver" },
			{ "Mrshounka_agera_p", 420000, "driver" },  // Koenesegge Agera based off real pricing of car
			{ "Mrshounka_bmwm1_civ", 40000, "driver" },  // BMW m 1 Seriews based off real pricing of car
			{ "Mrshounka_bmwm6_civ", 113400, "driver" },  // BMW M 6 Series based off real pricing of car
			{ "Mrshounka_Bowler_c", 241000, "driver" },  // Land Rover Bowler based off real pricing of car
			{ "shounka_f430_spider", 120000, "driver" },  // Ferrari F430 Spyder based off real pricing of car
			{ "Mrshounka_hummer_civ", 40500, "driver" },  // Hummer H1 based off real pricing of car
			{ "shounka_h2", 57400, "driver" },  // Hummer h2 based off real pricing of car
			{ "Mrshounka_evox_civ", 50000, "driver" },  // Lancer Evolution based off real pricing of car
			{ "Mrshounka_lykan_c", 340000, "driver" },  // LykanHyper Sport based off real pricing of car
			{ "Mrshounka_c63_2015_civ", 63000, "driver" }
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
			{ "A3L_Subaru_EMS", 2500, "" },
			{ "A3L_ExplorerEMS_S", 3500, ""},
			{ "A3L_Charger_EMS_Fast", 3500, ""},
			{ "Jonzie_AmbulanceExtended", 5000, "" }
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
			{ "Jonzie_Western", 120000, "semi" }
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
			{ "AM_Impala_P_P", 1000, "" },
			{ "Mrshounka_a3_smart_cop", 500, "" }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 253000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 750000, "pilot" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir" },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } }
		};
	};

	class cop_airhq {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir" },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } },
			{ "B_MRAP_01_hmg_F", 750000, "", { "life_coplevel", 3 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 20000, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard" },
			{ "B_SDV_01_F", 100000, "coastguard" }
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
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 2500;
		textures[] = {};
	};

    class shounka_base {
    	vItemSpace = 60;
    	storageFee[] = { 1000, 500, 650, 1000 };
    	garageSell[] = { 6500, 2500, 0, 0 };
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
    class Mrshounka_cherokee_noir : shounka_base {};
    class shounka_buggy : shounka_base {};
    class Mrshounka_a3_gtr_civ : shounka_base {};
    class RG_huracan_c_noir : shounka_base {};
    class Mrshounka_agera_p : shounka_base {};

	class Jonzie_Base {
		vItemSpace = 10;
    	storageFee[] = { 1000, 500, 650, 1000 };
    	garageSell[] = { 6500, 2500, 0, 0 };
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
	class Jonzie_Datsun510: Jonzie_Base {vItemSpace = 45;};
	class Jonzie_Z432: Jonzie_Base {vItemSpace = 50;};
	class Jonzie_Galant: Jonzie_Base {vItemSpace = 55;};
	class Jonzie_Corolla: Jonzie_Base {vItemSpace = 60;};
	class Jonzie_Ceed: Jonzie_Base {vItemSpace = 65;};
	class Jonzie_Ute: Jonzie_Base {vItemSpace = 70;};
	class Jonzie_Transit: Jonzie_Base {vItemSpace = 130;};
	class Jonzie_Viper : Jonzie_Base {vItemSpace = 50; };
	class Jonzie_AmbulanceExtended: Jonzie_Base {vItemSpace = 100; textures[] = {}; };
	class Jonzie_Western: Jonzie_Base {vItemSpace = 100;};
	class Jonzie_Flatbed: Jonzie_Base {vItemSpace = 300;};
	class Jonzie_Curtain: Jonzie_Base {vItemSpace = 500;};
	class ADM_GMC_Vandura: Jonzie_Base {vItemSpace = 100;};
	class ADM_Monte_Carlo: Jonzie_Base {vItemSpace = 0;};
	class ADM_1964_Impala: Jonzie_Base {vItemSpace = 80;};
	class ADM_1969_Camaro: Jonzie_Base {vItemSpace = 100;};
	class ADM_1969_Charger: Jonzie_Base {vItemSpace = 90;};
	class ADM_Ford_F100: Jonzie_Base {vItemSpace = 150;};
	
	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
	
	class RG_mustang_rouge : Default {
		vItemSpace = 50;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 4500;
	};
	
	class A3L_ExplorerEMS_S : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
	
	class A3L_CVPILBFD : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};
	
	class A3L_Charger_EMS_Fast : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};
	
	class a3l_subaru_ems : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 2500, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
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
		garageSell[] = { 3500, 0, 0, 0 };
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
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
	
	class RobJ_Rescue1 {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
	
	class EC635_SAR {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 35000, 0, 0, 0 };
		garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
		garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
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
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
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
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
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
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
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
        storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 62000, 0, 0, 0 };
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
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 49800, 3500, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};

	class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 4500, 3500, 0, 0 };
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
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
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
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 25000, 0, 0, 0 };
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
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 35000, 0, 0, 0 };
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
    	storageFee[] = { 5000, 0, 0, 0 };
    	garageSell[] = { 40000, 0, 0, 0 };
    	insurance = 10000;
    	chopShop = 15000;
		textures[] = {};
    };
    
	class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
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
        storageFee[] = { 45000, 19500, 0, 0 };
		garageSell[] = { 57000, 35000, 0, 0 };
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
        storageFee[] = { 55000, 0, 22000, 0 };
		garageSell[] = { 72500, 0, 35000, 0 };
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
        storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
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
};