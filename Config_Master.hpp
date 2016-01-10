#define VITEMMACRO(NAME,DISPLAYNAME,VARNAME,WEIGHT,BUYPRICE,SELLPRICE,ILLEGAL,EDIBLE,ICON) class NAME { \
		variable = VARNAME; \
		weight = WEIGHT; \
		displayName = DISPLAYNAME; \
		buyPrice = BUYPRICE; \
		sellPrice = SELLPRICE; \
		illegal = ILLEGAL; \
		edible = EDIBLE; \
		icon = ICON; \
	};
	
#define LICENSEMACRO(NAME,DISPLAYNAME,VARNAME,PRICE,ILLEGAL,SIDE) class NAME { \
		variable = VARNAME; \
		displayName = DISPLAYNAME; \
		price = PRICE; \
		illegal = ILLEGAL; \
		side = SIDE; \
	};

#define true 1
#define false 0
#include "Config_Clothing.hpp"

/*
	Master settings for various features and functionality	
*/
class Life_Settings {
	/* Persistent Settings */
	save_civ_weapons = true; //Allow civilians to save weapons on them?
	save_virtualItems = true; //Save Virtual items (all sides)?

	/* Revive system settings */
	revive_cops = false; //true to enable cops the ability to revive everyone or false for only medics/ems.
	revive_fee = 1500; //Revive fee that players have to pay and medics / EMS are rewarded

	/* House related settings */
	house_limit = 2; //Maximum amount of houses a player can own.

	/* Gang related settings */
	gang_price = 75000; //Price for creating a gang, remember they are persistent so keep it reasonable to avoid millions of gangs.
	gang_upgradeBase = 10000; //The base cost for upgrading slots in a gang
	gang_upgradeMultiplier = 2.5; //Not sure if in use?

	/* Player-related systems */
	enable_fatigue = true; //Set to false to disable the ARMA 3 false system.
	total_maxWeight = 24; //Static variable for the maximum weight allowed without having a backpack
	paycheck_period = 5; //Scaled in minutes

	/* Impound Variables */
	impound_car = 1350; //Price for impounding cars
	impound_boat = 1250; //Price for impounding boats
	impound_air = 1850; //Price for impounding helicopters / planes

	/* Initial Bank Amount */
	bank_cop = 20000; //Amount of cash on bank for new cops
	bank_civ = 20000; //Amount of cash on bank for new civillians
	bank_med = 20000; //Amount of cash on bank for new medics

	/* Paycheck Amount */
	paycheck_cop = 500; //Payment for cops
	paycheck_civ = 500; //Payment for civillians
	paycheck_med = 500; //Payment for medics

	/* Car-shop Settings */
	vehicleShop_rentalOnly[] = {};

	/* Job-related stuff */
	delivery_points[] = {};

	sellArray[] = {
		{"arifle_sdar_F", 0},
		{"hgun_P07_snds_F", 0},
		{"hgun_P07_F", 0},
		{"ItemGPS", 0},
		{"ToolKit", 0},
		{"FirstAidKit", 0},
		{"Medikit", 0},
		{"NVGoggles", 0},
		{"16Rnd_9x21_Mag", 0},
		{"20Rnd_556x45_UW_mag", 0},
		{"ItemMap", 0},
		{"ItemCompass", 0},
		{"Chemlight_blue", 0},
		{"Chemlight_yellow", 0},
		{"Chemlight_green", 0},
		{"Chemlight_red", 0},
		{"hgun_Rook40_F", 0},
		{"arifle_Katiba_F", 0},
		{"30Rnd_556x45_Stanag", 0},
		{"20Rnd_762x51_Mag", 0},
		{"30Rnd_65x39_caseless_green", 0},
		{"DemoCharge_Remote_Mag", 0},
		{"SLAMDirectionalMine_Wire_Mag", 0},
		{"optic_ACO_grn", 0},
		{"acc_flashlight", 0},
		{"srifle_EBR_F", 0},
		{"arifle_TRG21_F", 0},
		{"optic_MRCO", 0},
		{"optic_Aco", 0},
		{"arifle_MX_F", 0},
		{"arifle_MXC_F", 0},
		{"arifle_MXM_F", 0},
		{"MineDetector", 0},
		{"optic_Holosight", 0},
		{"acc_pointer_IR", 0},
		{"arifle_TRG20_F", 0},
		{"SMG_01_F", 0},
		{"arifle_Mk20C_F", 0},
		{"30Rnd_45ACP_Mag_SMG_01", 0},
		{"30Rnd_9x21_Mag", 0}
	};
};

//Virtual Items
class VirtualItems {

	//Misc
	VITEMMACRO(pickaxe, "STR_Item_Pickaxe", "pickaxe", 2, 750, 350, false, -1, "")
	VITEMMACRO(fuelEmpty, "STR_Item_FuelE", "fuelEmpty", 2, -1, -1, false, -1, "\rr_textures\icons\ico_fuelempty.paa")
	VITEMMACRO(fuelFull, "STR_Item_FuelF", "fuelFull", 5, 850, 500, false, -1, "\rr_textures\icons\ico_fuel.paa")
	VITEMMACRO(spikeStrip, "STR_Item_SpikeStrip", "spikeStrip", 15, 2500, 1200, false, -1, "")
	VITEMMACRO(lockpick, "STR_Item_Lockpick", "lockpick", 1, 150, 75, true, -1, "")
	VITEMMACRO(goldbar, "STR_Item_GoldBar", "goldBar", 12, -1, 95000, false, -1, "")
	VITEMMACRO(hacking_device, "STR_Item_Hacking_Device", "hacking_device", 15, 35000, -1, true, -1, "")
	VITEMMACRO(boltcutter, "STR_Item_BCutter", "boltCutter", 5, 7500, -1, true, -1, "\rr_textures\icons\ico_boltcutters.paa")
	VITEMMACRO(defusekit, "STR_Item_DefuseKit", "defuseKit", 2, 2500, -1, false, -1, "")
	VITEMMACRO(storagesmall, "STR_Item_StorageBS", "storageSmall", 5, 75000, -1, false, -1, "\rr_textures\icons\ico_storageSmall.paa")
	VITEMMACRO(storagebig, "STR_Item_StorageBL", "storageBig", 10, 150000, -1, false, -1, "\rr_textures\icons\ico_storageBig.paa")
	VITEMMACRO(rope, "STR_Item_Rope", "rope", 5, 100, 50, true, -1, "")

	//Mined Items
	VITEMMACRO(oil_unprocessed, "STR_Item_OilU", "oilUnprocessed", 7, -1, -1, false, -1, "")
	VITEMMACRO(oil_processed, "STR_Item_OilP", "oilProcessed", 6, -1, 650, false, -1, "")
	VITEMMACRO(copper_unrefined, "STR_Item_CopperOre", "copperUnrefined", 4, -1, -1, false, -1, "")
	VITEMMACRO(copper_refined, "STR_Item_CopperIngot", "copperRefined", 3, -1, 225, false, -1, "")
	VITEMMACRO(iron_unrefined, "STR_Item_IronOre", "ironUnrefined", 5, -1, -1, false, -1, "")
	VITEMMACRO(iron_refined, "STR_Item_IronIngot", "ironRefined", 3, -1, 320, false, -1, "")
	VITEMMACRO(salt_unrefined, "STR_Item_Salt", "saltUnrefined", 3, -1, -1, false, -1, "")
	VITEMMACRO(salt_refined, "STR_Item_SaltR", "saltRefined", 1, -1, 175, false, -1, "")
	VITEMMACRO(sand, "STR_Item_Sand", "sand", 3, -1, -1, false, -1, "")
	VITEMMACRO(glass, "STR_Item_Glass", "glass", 1, -1, 225, false, -1, "")
	VITEMMACRO(diamond_uncut, "STR_Item_DiamondU", "diamondUncut", 4, -1, 750, false, -1, "")
	VITEMMACRO(diamond_cut, "STR_Item_DiamondC", "diamondCut", 2, -1, 2000, false, -1, "")
	VITEMMACRO(rock, "STR_Item_Rock", "rock", 6, -1, -1, false, -1, "")
	VITEMMACRO(cement, "STR_Item_CementBag", "cement", 5, -1, 200, false, -1, "")

	//Drugs
	VITEMMACRO(heroin_unprocessed, "STR_Item_HeroinU", "heroinUnprocessed", 6, -1, -1, true, -1, "")
	VITEMMACRO(heroin_processed, "STR_Item_HeroinP", "heroinProcessed", 4, 850, 850, true, -1, "")
	VITEMMACRO(cannabis, "STR_Item_Cannabis", "cannabis", 4, -1, -1, true, -1, "")
	VITEMMACRO(marijuana, "STR_Item_Marijuana", "marijuana", 3, 600, 600, true, -1, "\rr_textures\icons\ico_marijuana.paa")
	VITEMMACRO(cocaine_unprocessed, "STR_Item_CocaineU", "cocaineUnprocessed", 6, -1, 300, true, -1, "")
	VITEMMACRO(cocaine_processed, "STR_Item_CocaineP", "cocaineProcessed", 4, -1, 1000, true, -1, "")

	//Drink
	VITEMMACRO(redgull, "STR_Item_RedGull", "redgull", 1, 150, 50, false, 100, "\rr_textures\icons\ico_redgull.paa")
	VITEMMACRO(coffee, "STR_Item_Coffee", "coffee", 1, 10, 5, false, 100, "")
	VITEMMACRO(waterBottle, "STR_Item_WaterBottle", "waterBottle", 1, 10, 5, false, 100, "\rr_textures\icons\ico_waterBottle.paa")

	//Food
	VITEMMACRO(apple, "STR_Item_Apple", "apple", 1, 65, 25, false, 10, "\rr_textures\icons\food.paa")
	VITEMMACRO(peach, "STR_Item_Peach", "peach", 1, 68, 20, false, 10, "\rr_textures\icons\food.paa")
	VITEMMACRO(tbacon, "STR_Item_TBacon", "tbacon", 1, 75, 25, false, 40, "\rr_textures\icons\ico_tbacon.paa")
	VITEMMACRO(donut, "STR_Item_Donuts", "donut", 1, 120, 60, false, 30, "\rr_textures\icons\food.paa")
	VITEMMACRO(rabbit_raw, "STR_Item_Rabbit", "rabbitRaw", 2, -1, 65, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(rabbit_grilled, "STR_Item_RabbitGrilled", "rabbitGrilled", 1, 150, 115, false, 20, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(salema_raw, "STR_Item_Salema", "salemaRaw", 2, -1, 45, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(salema_grilled, "STR_Item_SalemaGrilled", "salemaGrilled", 1, 75, 55, false, 30, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(ornate_raw, "STR_Item_OrnateMeat", "ornateRaw", 2, -1, 40, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(ornate_grilled, "STR_Item_OrnateGrilled", "ornateGrilled", 1, 175, 150, false, 25, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(mackerel_raw, "STR_Item_MackerelMeat", "mackerelRaw", 4, -1, 175, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(mackerel_grilled, "STR_Item_MackerelGrilled", "mackerelGrilled", 2, 250, 200, false, 30, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(tuna_raw, "STR_Item_TunaMeat", "tunaRaw", 6, -1, 700, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(tuna_grilled, "STR_Item_TunaGrilled", "tunaGrilled", 3, 1250, 1000, false, 100, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(mullet_raw, "STR_Item_MulletMeat", "mulletRaw", 4, -1, 250, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(mullet_fried, "STR_Item_MulletFried", "mulletFried", 2, 600, 400, false, 80, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(catshark_raw, "STR_Item_CatSharkMeat", "catsharkRaw", 6, -1, 300, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(catshark_fried, "STR_Item_CatSharkFried", "catsharkFried", 3, 750, 500, false, 100, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(turtle_raw, "STR_Item_TurtleMeat", "turtleRaw", 6, 4000, 3000, true, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(turtle_soup, "STR_Item_TurtleSoup", "turtleSoup", 2, 2500, 1000, false, 100, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(hen_raw, "STR_Item_HenRaw", "henRaw", 1, -1, 35, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(hen_fried, "STR_Item_HenFried", "henFried", 1, 115, 85, false, 65, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(rooster_raw, "STR_Item_RoosterRaw", "roosterRaw", 1, -1, 35, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(rooster_grilled, "STR_Item_RoosterGrilled", "roosterGrilled", 115, 85, false, 45, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(sheep_raw, "STR_Item_SheepRaw", "sheepRaw", 2, -1, 50, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(sheep_grilled, "STR_Item_SheepGrilled", "sheepGrilled", 2, 155, 115, false, 100, "\rr_textures\icons\ico_cookedMeat.paa")
	VITEMMACRO(goat_raw, "STR_Item_GoatRaw", "goatRaw", 2, -1, 75, false, -1, "\rr_textures\icons\food.paa")
	VITEMMACRO(goat_grilled, "STR_Item_GoatGrilled", "goatGrilled", 2, 175, 135, false, 100, "\rr_textures\icons\ico_cookedMeat.paa")
};


/*
	Licenses
	
	Params:
	CLASS ENTRY,DisplayName,VariableName,price,illegal,side indicator
*/
class Licenses {
	LICENSEMACRO(driver,"STR_License_Driver","driver",500,false,"civ")
    LICENSEMACRO(boat,"STR_License_Boat","boat",1000,false,"civ")
    LICENSEMACRO(pilot,"STR_License_Pilot","pilot",22000,false,"civ")
    LICENSEMACRO(gun,"STR_License_Firearm","gun",7000,false,"civ")
    LICENSEMACRO(dive,"STR_License_Diving","dive",2000,false,"civ")
    LICENSEMACRO(oil,"STR_License_Oil","oil",8000,false,"civ")
    LICENSEMACRO(cAir,"STR_License_Pilot","cAir",15000,false,"cop")
    LICENSEMACRO(coastguard,"STR_License_CG","cg",3000,false,"cop")
    LICENSEMACRO(heroin,"STR_License_Heroin","heroin",12000,true,"civ")
    LICENSEMACRO(marijuana,"STR_License_Marijuana","marijuana",9500,true,"civ")
    LICENSEMACRO(medmarijuana,"STR_License_Medmarijuana","medmarijuana",15000,false,"civ")
    LICENSEMACRO(rebel,"STR_License_Rebel","rebel",100000,true,"civ")
    LICENSEMACRO(trucking,"STR_License_Truck","trucking",7000,false,"civ")
    LICENSEMACRO(diamond,"STR_License_Diamond","diamond",7000,false,"civ")
    LICENSEMACRO(salt,"STR_License_Salt","salt",5000,false,"civ")
    LICENSEMACRO(cocaine,"STR_License_Cocaine","cocaine",30000,false,"civ")
    LICENSEMACRO(sand,"STR_License_Sand","sand",5500,false,"civ")
    LICENSEMACRO(iron,"STR_License_Iron","iron",5000,false,"civ")
    LICENSEMACRO(copper,"STR_License_Copper","copper",3000,false,"civ")
    LICENSEMACRO(cement,"STR_License_Cement","cement",2000,false,"civ")
    LICENSEMACRO(mAir,"STR_License_Pilot","mAir",150,false,"med")
    LICENSEMACRO(home,"STR_License_Home","home",50000,false,"civ")
    LICENSEMACRO(race,"STR_License_Race","race",5000,false,"civ")
    LICENSEMACRO(semi,"STR_License_Semi","semi",20000,false,"civ")
};

class VirtualShops {
	class market {
		name = "STR_Shops_Market";
		items[] = { "waterBottle", "rabbit_grilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "storagesmall", "storagebig", "rope" };
	};

	class rebel {
		name = "STR_Shops_Rebel";
		items[] = { "waterBottle", "rabbit_grilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "hacking_device", "rope" };
	};

	class gang {
		name = "STR_Shops_Gang";
		items[] = { "waterBottle", "rabbit_grilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "hacking_device" };
	};

	class wongs {
		name = "STR_Shops_Wongs";
		items[] = { "turtle_soup", "turtle_raw" };
	};

	class coffee {
		name = "STR_Shops_Coffee";
		items[] = { "coffee", "donut" };
	};
	
	class drugdealer {
		name = "STR_Shops_DrugDealer";
		items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
	};

	class construction {
		name = "STR_Shops_Oil";
		items[] = { "oil_processed","pickaxe","fuelFull","glass","iron_refined","copper_refined","salt_refined","cement" };
	};

	class fishmarket {
		name = "STR_Shops_FishMarket";
		items[] = { "salema_raw", "salema_grilled", "ornate_raw", "ornate_grilled", "mackerel_raw", "mackerel_grilled", "tuna_raw", "tuna_grilled", "mullet_raw", "mullet_fried", "catshark_raw", "catshark_fried" };
	};
	
	class emsMarket {
		name = "STR_Shops_emsMarket";
		items[] = { "spikeStrip", "waterBottle", "rabbit_grilled", "apple", "redgull", "fuelFull", "defusekit" };
	};

	class diamond {
		name = "STR_Shops_Diamond";
		items[] = { "diamond_uncut", "diamond_cut" };
	};

	class cop {
		name = "STR_Shops_Cop";
		items[] = { "spikeStrip", "waterBottle", "rabbit_grilled", "apple", "redgull", "fuelFull" };
	};

	class gold {
		name = "STR_Shops_Gold";
		items[] = { "goldbar" };
	};
};

#include "Config_Vehicles.hpp"