/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "taxi_uni", "Taxi Uniform", 65, { "", "", -1 } },
			{ "A3L_CivShirtAdidasMake", "Adidas", 65, { "", "", -1 } },
			{ "A3L_CivShirtAdidas", "Adidas", 65, { "", "", -1 } },
			{ "A3L_CivShirtAnotherCat", "Cat Shirt", 65, { "", "", -1 } },
			{ "A3L_CivShirtBillabong", "Billabong", 65, { "", "", -1 } },
			{ "A3L_CivShirtBillabong2", "Billabong", 65, { "", "", -1 } },
			{ "A3L_BluePoloShirt", "Polo", 65, { "", "", -1 } },
			{ "A3L_GreenPoloShirt", "Polo", 65, { "", "", -1 } },
			{ "A3L_PurplePoloShirt", "Polo", 65, { "", "", -1 } },
			{ "A3L_PinkPoloShirt", "Polo", 65, { "", "", -1 } },
			{ "A3LCatShirt", "Cat Shirt", 65, { "", "", -1 } },
			{ "A3LCloudShirt", "Clouds", 65, { "", "", -1 } },
			{ "A3LCokeShirt", "Coke", 65, { "", "", -1 } },
			{ "A3L_CivShirtDiamond", "Diamond", 65, { "", "", -1 } },
			{ "A3L_CivShirtDJ", "DJ", 65, { "", "", -1 } },
			{ "A3L_CivShirtGetHigh", "Get High", 65, { "", "", -1 } },
			{ "A3LHandShirt", "Hand", 65, { "", "", -1 } },
			{ "A3L_CivShirtHollister", "Hollister", 65, { "", "", -1 } },
			{ "A3L_CivShirtKeepCalm", "Keep Calm", 65, { "", "", -1 } },
			{ "A3L_CivShirtNikeCamo", "Nike", 65, { "", "", -1 } },
			{ "A3L_CivShirtNikeDoIt2", "Nike", 65, { "", "", -1 } },
			{ "A3L_CivShirtNikeFeet", "Nike", 65, { "", "", -1 } },
			{ "A3L_CivShirtObey", "Obey", 65, { "", "", -1 } },
			{ "A3L_CivShirtOhBoy", "OhBoy", 65, { "", "", -1 } },
			{ "pervt_uni", "Pervert", 65, { "", "", -1 } },
			{ "A3LPikaShirt", "Pika", 65, { "", "", -1 } },
			{ "BluePlaid_uni", "Plaid", 65, { "", "", -1 } },
			{ "GreenPlaid_uni", "Plaid", 65, { "", "", -1 } },
			{ "OrangePlaid_uni", "Plaid", 65, { "", "", -1 } },
			{ "PinkPlaid_uni", "Plaid", 65, { "", "", -1 } },
			{ "RedPlaid_uni", "Plaid", 65, { "", "", -1 } },
			{ "YellowPlaid_uni", "Plaid", 65, { "", "", -1 } },
			{ "A3L_CivShirtProbe", "Probe", 65, { "", "", -1 } },
			{ "A3L_CivShirtRelationships", "Relationships", 65, { "", "", -1 } },
			{ "A3LWolfShirt", "Wolf", 65, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 105, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 125, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 150, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 110, { "", "", -1 } },
			{ "TRYK_SUITS_BR_F", "", 300, { "", "", -1 } },
			{ "TRYK_SUITS_BLK_F", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_wh_OD_Rollup_CombatUniform", "White Shirt", 50, { "", "", -1 } },
			{ "TRYK_U_B_wh_tan_Rollup_CombatUniform", "White Shirt", 50, { "", "", -1 } },
			{ "TRYK_U_B_wh_blk_Rollup_CombatUniform", "White Shirt", 50, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_gry", "Grey Jacket", 75, { "", "", -1 } },
			{ "TRYK_U_B_PCUGs_BLK", "Black Jacket", 75, { "", "", -1 } },
			{ "TRYK_U_B_PCUHs", "Hooded Black Jacket", 50, { "", "", -1 } },
			{ "TRYK_U_B_PCUGHs", "Hooded Grey Jacket", 50, { "", "", -1 } },
			{ "TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform", "Black Hoody", 85, { "", "", -1 } },
			{ "TRYK_U_B_BLK_T_BK", "Black Jeans", 65, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_WH", "Blue Jeans", 65, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } },
			{ "A3L_Badoodlenoodleshirt", "Noodle", 65, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "party_hat", "", 50, { "", "", -1 } },
			{ "tiara", "", 50, { "", "", -1 } },
			{ "A3L_gangster_hat", "", 50, { "", "", -1 } },
			{ "a3l_hardhat", "", 50, { "", "", -1 } },
			{ "A3L_Legoman", "", 50, { "", "", -1 } },
			{ "A3L_Mask", "", 50, { "", "", -1 } },
			{ "A3L_SkateHelmet_green", "", 50, { "", "", -1 } },
			{ "A3L_soa_helmet", "", 50, { "", "", -1 } },
			{ "Kio_Afro_Hat", "", 50, { "", "", -1 } },
			{ "kio_vfv_mask", "", 50, { "", "", -1 } },
			{ "Kio_Capital_Hat", "", 50, { "", "", -1 } },
			{ "cowboyhat", "", 50, { "", "", -1 } },
			{ "elfhat", "", 50, { "", "", -1 } },
			{ "A3L_crown", "", 50, { "", "", -1 } },
			{ "A3L_longhairblack", "", 50, { "", "", -1 } },
			{ "A3L_longhairblond", "", 50, { "", "", -1 } },
			{ "A3L_longhairbrown", "", 50, { "", "", -1 } },
			{ "A3L_mexicanhat", "", 50, { "", "", -1 } },
			{ "Kio_No1_Hat", "", 50, { "", "", -1 } },
			{ "party_hat", "", 50, { "", "", -1 } },
			{ "party_hatrb", "", 50, { "", "", -1 } },
			{ "piratehatp", "", 50, { "", "", -1 } },
			{ "Kio_Pirate_Hat", "", 50, { "", "", -1 } },
			{ "piratehat", "", 50, { "", "", -1 } },
			{ "conehead", "", 50, { "", "", -1 } },
			{ "rangehat", "", 50, { "", "", -1 } },
			{ "Kio_Santa_Hat", "", 50, { "", "", -1 } },
			{ "adminsanta", "", 50, { "", "", -1 } },
			{ "A3L_sombrero", "", 50, { "", "", -1 } },
			{ "Kio_Spinning_Hat", "", 50, { "", "", -1 } },
			{ "TRYK_r_cap_blk_Glasses", "", 50, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } },
			{ "TRYK_Kio_Balaclava", "", 150, { "", "", -1 } },
			{ "TRYK_H_Bandana_H", "", 150, { "", "", -1 } },
			{ "TRYK_H_Bandana_wig", "", 150, { "", "", -1 } },
			{ "TRYK_H_Bandana_wig_g", "", 150, { "", "", -1 } },
			{ "TRYK_H_Booniehat_3CD", "", 150, { "", "", -1 } },
			{ "TRYK_H_Booniehat_AOR1", "", 150, { "", "", -1 } },
			{ "TRYK_H_Booniehat_AOR2", "", 150, { "", "", -1 } },
			{ "TRYK_H_Booniehat_CC", "", 150, { "", "", -1 } },
			{ "TRYK_H_Booniehat_MARPAT_Desert", "", 150, { "", "", -1 } },
			{ "TRYK_H_Booniehat_MARPAT_WOOD", "", 150, { "", "", -1 } },
			{ "TRYK_H_Booniehat_JSDF", "", 150, { "", "", -1 } },
			{ "TRYK_R_CAP_BLK", "", 150, { "", "", -1 } },
			{ "TRYK_R_CAP_TAN", "", 150, { "", "", -1 } },
			{ "TRYK_R_CAP_OD_US", "", 150, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Aviator", "", 25, { "", "", -1 } },
			{ "G_Lady_Blue", "", 25, { "", "", -1 } },
			{ "SFG_Tac_smallBeardB", "", 25, { "", "", -1 } },
			{ "SFG_Tac_smallBeardD", "", 25, { "", "", -1 } },
			{ "SFG_Tac_smallBeardG", "", 25, { "", "", -1 } },
			{ "SFG_Tac_smallBeardO", "", 25, { "", "", -1 } },
			{ "G_Spectacles", "", 25, { "", "", -1 } },
			{ "SFG_Tac_BeardB", "", 25, { "", "", -1 } },
			{ "SFG_Tac_BeardD", "", 25, { "", "", -1 } },
			{ "SFG_Tac_BeardG", "", 25, { "", "", -1 } },
			{ "SFG_Tac_BeardO", "", 25, { "", "", -1 } },
			{ "SFG_Tac_chinlessbB", "", 25, { "", "", -1 } },
			{ "SFG_Tac_chinlessbD", "", 25, { "", "", -1 } },
			{ "SFG_Tac_chinlessbG", "", 25, { "", "", -1 } },
			{ "SFG_Tac_chinlessbO", "", 25, { "", "", -1 } },
			{ "SFG_Tac_moustacheB", "", 25, { "", "", -1 } },
			{ "SFG_Tac_moustacheD", "", 25, { "", "", -1 } },
			{ "SFG_Tac_moustacheG", "", 25, { "", "", -1 } },
			{ "SFG_Tac_moustacheO", "", 25, { "", "", -1 } },
			{ "SFG_Tac_ChopsB", "", 25, { "", "", -1 } },
			{ "SFG_Tac_ChopsD", "", 25, { "", "", -1 } },
			{ "SFG_Tac_ChopsG", "", 25, { "", "", -1 } },
			{ "SFG_Tac_ChopsO", "", 25, { "", "", -1 } },
			{ "TRYK_Beard_BK", "", 25, { "", "", -1 } },
			{ "TRYK_Beard", "", 25, { "", "", -1 } },
			{ "TRYK_Beard_BW", "", 25, { "", "", -1 } },
			{ "TRYK_Beard_Gr", "", 25, { "", "", -1 } },
			{ "TRYK_Beard_BK2", "", 25, { "", "", -1 } },
			{ "TRYK_Beard_BK2", "", 25, { "", "", -1 } },
			{ "TRYK_Beard2", "", 25, { "", "", -1 } },
			{ "TRYK_Beard_BW2", "", 25, { "", "", -1 } },
			{ "TRYK_Beard_Gr2", "", 25, { "", "", -1 } },
			{ "beard", "", 25, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } },
			{ "TRYK_H_wig", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh_G", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh_WH", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh_shade_G", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh_shade", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh_shade_WH", "", 150, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "TRYK_V_Bulletproof_BL", "Bulletproof Vest", 500, { "", "", -1 } },
			{ "TRYK_V_Bulletproof_BLK", "Bulletproof Vest", 500, { "", "", -1 } },
			{ "TRYK_V_Bulletproof", "Bulletproof Vest", 500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_BLK", "", 5000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack", "", 5000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_OD", "", 5000, { "", "", -1 } },
			{ "TRYK_B_Carryall_JSDF", "", 5000, { "", "", -1 } },
			{ "TRYK_B_Carryall_blk", "", 5000, { "", "", -1 } },
			{ "TRYK_B_Carryall_wood", "", 5000, { "", "", -1 } },
			{ "TRYK_B_FieldPack_Wood", "", 5000, { "", "", -1 } },
			{ "TRYK_B_Kitbag_blk", "", 5000, { "", "", -1 } },
			{ "TRYK_B_Kitbag_Base", "", 5000, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "a3l_pdofc", "", 25, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Booniehat_mcamo", "", 120, { "life_coplevel", "SCALAR", 1 } },
			{ "H_MilCap_mcamo", "", 100, { "life_coplevel", "SCALAR", 2 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "" , "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "v_tacvest_blk_police", "", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "cl3_police_tacticalbelt", "", 800, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 500, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 2500, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 3500, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 12500, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{"B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};