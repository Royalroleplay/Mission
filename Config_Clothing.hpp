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
	class dtu {
		title = "STR_Shops_C_Dective";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "taxi_uni", "Taxi Uniform", 120, { "", "", -1 } },
			{ "A3L_CivShirtAdidasMake", "Adidas", 120, { "", "", -1 } },
			{ "A3L_CivShirtAdidas", "Adidas", 120, { "", "", -1 } },
			{ "A3L_CivShirtAnotherCat", "Cat Shirt", 120, { "", "", -1 } },
			{ "A3L_CivShirtBillabong", "Billabong", 120, { "", "", -1 } },
			{ "A3L_CivShirtBillabong2", "Billabong", 120, { "", "", -1 } },
			{ "A3L_BluePoloShirt", "Polo", 120, { "", "", -1 } },
			{ "A3L_GreenPoloShirt", "Polo", 120, { "", "", -1 } },
			{ "A3L_PurplePoloShirt", "Polo", 120, { "", "", -1 } },
			{ "A3L_PinkPoloShirt", "Polo", 120, { "", "", -1 } },
			{ "A3LCatShirt", "Cat Shirt", 120, { "", "", -1 } },
			{ "A3LCloudShirt", "Clouds", 120, { "", "", -1 } },
			{ "A3LCokeShirt", "Coke", 120, { "", "", -1 } },
			{ "A3L_CivShirtDiamond", "Diamond", 120, { "", "", -1 } },
			{ "A3L_CivShirtDJ", "DJ", 120, { "", "", -1 } },
			{ "A3L_CivShirtGetHigh", "Get High", 120, { "", "", -1 } },
			{ "A3LHandShirt", "Hand", 120, { "", "", -1 } },
			{ "A3L_CivShirtHollister", "Hollister", 120, { "", "", -1 } },
			{ "A3L_CivShirtKeepCalm", "Keep Calm", 120, { "", "", -1 } },
			{ "A3L_CivShirtNikeCamo", "Nike", 120, { "", "", -1 } },
			{ "A3L_CivShirtNikeDoIt2", "Nike", 120, { "", "", -1 } },
			{ "A3L_CivShirtNikeFeet", "Nike", 120, { "", "", -1 } },
			{ "A3L_CivShirtObey", "Obey", 120, { "", "", -1 } },
			{ "A3L_CivShirtOhBoy", "OhBoy", 120, { "", "", -1 } },
			{ "pervt_uni", "Pervert", 120, { "", "", -1 } },
			{ "A3LPikaShirt", "Pika", 120, { "", "", -1 } },
			{ "BluePlaid_uni", "Plaid", 80, { "", "", -1 } },
			{ "GreenPlaid_uni", "Plaid", 80, { "", "", -1 } },
			{ "OrangePlaid_uni", "Plaid", 80, { "", "", -1 } },
			{ "PinkPlaid_uni", "Plaid", 80, { "", "", -1 } },
			{ "RedPlaid_uni", "Plaid", 80, { "", "", -1 } },
			{ "YellowPlaid_uni", "Plaid", 80, { "", "", -1 } },
			{ "A3L_CivShirtProbe", "Probe", 120, { "", "", -1 } },
			{ "A3L_CivShirtRelationships", "Relationships", 120, { "", "", -1 } },
			{ "A3LWolfShirt", "Wolf", 120, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 1000, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 1100, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 1000, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 1200, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 105, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1100, { "", "", -1 } },
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
			{ "TRYK_U_B_BLK_T_BK", "Black Jeans", 120, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_WH", "Blue Jeans", 120, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 120, { "", "", -1 } },
			{ "A3L_Badoodlenoodleshirt", "Noodle", 120, { "", "", -1 } }
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
			{ "a3l_russianhat", "", 50, { "", "", -1 } },
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
			{ "H_Bandanna_cbr", "", 1120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 2100, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 4100, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 2120, { "", "", -1 } },
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
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Blue", "", 100, { "", "", -1 } },
			{ "SFG_Tac_smallBeardB", "", 100, { "", "", -1 } },
			{ "SFG_Tac_smallBeardD", "", 100, { "", "", -1 } },
			{ "SFG_Tac_smallBeardG", "", 100, { "", "", -1 } },
			{ "SFG_Tac_smallBeardO", "", 100, { "", "", -1 } },
			{ "G_Spectacles", "", 100, { "", "", -1 } },
			{ "SFG_Tac_BeardB", "", 100, { "", "", -1 } },
			{ "SFG_Tac_BeardD", "", 100, { "", "", -1 } },
			{ "SFG_Tac_BeardG", "", 100, { "", "", -1 } },
			{ "SFG_Tac_BeardO", "", 100, { "", "", -1 } },
			{ "SFG_Tac_chinlessbB", "", 100, { "", "", -1 } },
			{ "SFG_Tac_chinlessbD", "", 100, { "", "", -1 } },
			{ "SFG_Tac_chinlessbG", "", 100, { "", "", -1 } },
			{ "SFG_Tac_chinlessbO", "", 100, { "", "", -1 } },
			{ "SFG_Tac_moustacheB", "", 100, { "", "", -1 } },
			{ "SFG_Tac_moustacheD", "", 100, { "", "", -1 } },
			{ "SFG_Tac_moustacheG", "", 100, { "", "", -1 } },
			{ "SFG_Tac_moustacheO", "", 100, { "", "", -1 } },
			{ "SFG_Tac_ChopsB", "", 100, { "", "", -1 } },
			{ "SFG_Tac_ChopsD", "", 100, { "", "", -1 } },
			{ "SFG_Tac_ChopsG", "", 100, { "", "", -1 } },
			{ "SFG_Tac_ChopsO", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_BK", "", 100, { "", "", -1 } },
			{ "TRYK_Beard", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_BW", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_Gr", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_BK2", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_BK2", "", 100, { "", "", -1 } },
			{ "TRYK_Beard2", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_BW2", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_Gr2", "", 100, { "", "", -1 } },
			{ "beard", "", 100, { "", "", -1 } },
			{ "G_Shades_Black", "", 100, { "", "", -1 } },
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
			{ "B_AssaultPack_cbr", "", 1000, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 450, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 350, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 300, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 450, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 450, { "", "", -1 } },
			{ "B_Carryall_oli", "", 500, { "", "", -1 } },
			{ "B_Carryall_khk", "", 500, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_BLK", "", 500, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack", "", 500, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_OD", "", 500, { "", "", -1 } },
			{ "TRYK_B_Carryall_JSDF", "", 500, { "", "", -1 } },
			{ "TRYK_B_Carryall_blk", "", 500, { "", "", -1 } },
			{ "TRYK_B_Carryall_wood", "", 500, { "", "", -1 } },
			{ "TRYK_B_FieldPack_Wood", "", 500, { "", "", -1 } },
			{ "TRYK_B_Kitbag_blk", "", 500, { "", "", -1 } },
			{ "TRYK_B_Kitbag_Base", "", 500, { "", "", -1 } }
		};
	};

	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "taxi_uni", "Taxi Uniform", 120, { "", "", -1 } },
			{ "A3L_CivShirtAdidasMake", "Adidas", 120, { "", "", -1 } },
			{ "A3L_CivShirtAdidas", "Adidas", 120, { "", "", -1 } },
			{ "A3L_CivShirtAnotherCat", "Cat Shirt", 120, { "", "", -1 } },
			{ "A3L_CivShirtBillabong", "Billabong", 120, { "", "", -1 } },
			{ "A3L_CivShirtBillabong2", "Billabong", 120, { "", "", -1 } },
			{ "A3L_BluePoloShirt", "Polo", 120, { "", "", -1 } },
			{ "A3L_GreenPoloShirt", "Polo", 120, { "", "", -1 } },
			{ "A3L_PurplePoloShirt", "Polo", 120, { "", "", -1 } },
			{ "A3L_PinkPoloShirt", "Polo", 120, { "", "", -1 } },
			{ "A3LCatShirt", "Cat Shirt", 120, { "", "", -1 } },
			{ "A3LCloudShirt", "Clouds", 120, { "", "", -1 } },
			{ "A3LCokeShirt", "Coke", 120, { "", "", -1 } },
			{ "A3L_CivShirtDiamond", "Diamond", 120, { "", "", -1 } },
			{ "A3L_CivShirtDJ", "DJ", 120, { "", "", -1 } },
			{ "A3L_CivShirtGetHigh", "Get High", 120, { "", "", -1 } },
			{ "A3LHandShirt", "Hand", 120, { "", "", -1 } },
			{ "A3L_CivShirtHollister", "Hollister", 120, { "", "", -1 } },
			{ "A3L_CivShirtKeepCalm", "Keep Calm", 120, { "", "", -1 } },
			{ "A3L_CivShirtNikeCamo", "Nike", 120, { "", "", -1 } },
			{ "A3L_CivShirtNikeDoIt2", "Nike", 120, { "", "", -1 } },
			{ "A3L_CivShirtNikeFeet", "Nike", 120, { "", "", -1 } },
			{ "A3L_CivShirtObey", "Obey", 120, { "", "", -1 } },
			{ "A3L_CivShirtOhBoy", "OhBoy", 120, { "", "", -1 } },
			{ "pervt_uni", "Pervert", 120, { "", "", -1 } },
			{ "A3LPikaShirt", "Pika", 120, { "", "", -1 } },
			{ "BluePlaid_uni", "Plaid", 120, { "", "", -1 } },
			{ "GreenPlaid_uni", "Plaid", 120, { "", "", -1 } },
			{ "OrangePlaid_uni", "Plaid", 120, { "", "", -1 } },
			{ "PinkPlaid_uni", "Plaid", 120, { "", "", -1 } },
			{ "RedPlaid_uni", "Plaid", 120, { "", "", -1 } },
			{ "YellowPlaid_uni", "Plaid", 120, { "", "", -1 } },
			{ "A3L_CivShirtProbe", "Probe", 120, { "", "", -1 } },
			{ "A3L_CivShirtRelationships", "Relationships", 120, { "", "", -1 } },
			{ "A3LWolfShirt", "Wolf", 120, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 1000, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 1100, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 1000, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 1200, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 105, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1100, { "", "", -1 } },
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
			{ "TRYK_U_B_BLK_T_BK", "Black Jeans", 120, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_WH", "Blue Jeans", 120, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 120, { "", "", -1 } },
			{ "A3L_Badoodlenoodleshirt", "Noodle", 120, { "", "", -1 } }
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
			{ "a3l_russianhat", "", 50, { "", "", -1 } },
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
			{ "H_Bandanna_cbr", "", 1120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 2100, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 4100, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 2120, { "", "", -1 } },
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
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Blue", "", 100, { "", "", -1 } },
			{ "SFG_Tac_smallBeardB", "", 100, { "", "", -1 } },
			{ "SFG_Tac_smallBeardD", "", 100, { "", "", -1 } },
			{ "SFG_Tac_smallBeardG", "", 100, { "", "", -1 } },
			{ "SFG_Tac_smallBeardO", "", 100, { "", "", -1 } },
			{ "G_Spectacles", "", 100, { "", "", -1 } },
			{ "SFG_Tac_BeardB", "", 100, { "", "", -1 } },
			{ "SFG_Tac_BeardD", "", 100, { "", "", -1 } },
			{ "SFG_Tac_BeardG", "", 100, { "", "", -1 } },
			{ "SFG_Tac_BeardO", "", 100, { "", "", -1 } },
			{ "SFG_Tac_chinlessbB", "", 100, { "", "", -1 } },
			{ "SFG_Tac_chinlessbD", "", 100, { "", "", -1 } },
			{ "SFG_Tac_chinlessbG", "", 100, { "", "", -1 } },
			{ "SFG_Tac_chinlessbO", "", 100, { "", "", -1 } },
			{ "SFG_Tac_moustacheB", "", 100, { "", "", -1 } },
			{ "SFG_Tac_moustacheD", "", 100, { "", "", -1 } },
			{ "SFG_Tac_moustacheG", "", 100, { "", "", -1 } },
			{ "SFG_Tac_moustacheO", "", 100, { "", "", -1 } },
			{ "SFG_Tac_ChopsB", "", 100, { "", "", -1 } },
			{ "SFG_Tac_ChopsD", "", 100, { "", "", -1 } },
			{ "SFG_Tac_ChopsG", "", 100, { "", "", -1 } },
			{ "SFG_Tac_ChopsO", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_BK", "", 100, { "", "", -1 } },
			{ "TRYK_Beard", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_BW", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_Gr", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_BK2", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_BK2", "", 100, { "", "", -1 } },
			{ "TRYK_Beard2", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_BW2", "", 100, { "", "", -1 } },
			{ "TRYK_Beard_Gr2", "", 100, { "", "", -1 } },
			{ "beard", "", 100, { "", "", -1 } },
			{ "G_Shades_Black", "", 100, { "", "", -1 } },
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
			{ "B_AssaultPack_cbr", "", 300, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 450, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 350, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 300, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 450, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 450, { "", "", -1 } },
			{ "B_Carryall_oli", "", 500, { "", "", -1 } },
			{ "B_Carryall_khk", "", 500, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_BLK", "", 500, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack", "", 500, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_OD", "", 500, { "", "", -1 } },
			{ "TRYK_B_Carryall_JSDF", "", 500, { "", "", -1 } },
			{ "TRYK_B_Carryall_blk", "", 500, { "", "", -1 } },
			{ "TRYK_B_Carryall_wood", "", 500, { "", "", -1 } },
			{ "TRYK_B_FieldPack_Wood", "", 500, { "", "", -1 } },
			{ "TRYK_B_Kitbag_blk", "", 500, { "", "", -1 } },
			{ "TRYK_B_Kitbag_Base", "", 500, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "RR_Clothing_Police_RM_Cadet_obj", "", 0, {"", "", -1 } },
			{ "RR_Clothing_Police_RM_Officer_obj", "", 0, {"", "", -1 } },
			{ "RR_Clothing_Police_RM_Corporal_obj", "", 0, {"", "", -1 } },
			{ "RR_Clothing_Police_RM_Sergeant_obj", "", 0, {"", "", -1 } },
			{ "RR_Clothing_Police_RM_FTO_obj", "", 0, {"", "", -1 } },
			{ "RR_Clothing_Police_RM_LT_obj", "", 0, {"", "", -1 } },
			{ "RR_Clothing_Police_RM_cpt_obj", "", 0, {"", "", -1 } },
			{ "RR_Clothing_Police_RM_Dep_Chief_obj", "", 0, {"", "", -1 } },
			{ "RR_Clothing_Police_RM_Chief_obj", "", 0, {"", "", -1 } },
			{ "RR_Clothing_Police_Tactical_obj", "SWAT", 0, {"", "", -1 } },
			{ "a3l_pdofc", "", 100, { "", "", -1 } },
			{ "A3L_CCPT", "", 0, { "", "", -1 } },
			{ "A3L_CLT", "", 0, { "", "", -1 } },
			{ "A3L_CSGT", "", 0, { "", "", -1 } },
			{ "A3L_CCPL", "", 0, { "", "", -1 } },
			{ "A3L_COFC", "", 0, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "TRYK_H_woolhat", "", 0, { "", "", -1 } },
			{ "TRYK_r_cap_blk_Glasses", "", 0, { "", "", -1 } },
			{ "TRYK_R_CAP_BLK", "", 0, { "", "", -1 } },
			{ "H_Cap_blk", "", 0, { "", "", -1 } },
			{ "H_CrewHelmetHeli_B", "", 0, { "", "", -1 } },
			{ "TRYK_H_PASGT_BLK", "", 175, { "life_coplevel", "SCALAR", 6 } },
			{ "TRYK_H_headsetcap_blk_Glasses", "", 120, { "", "", -1 } },
			{ "H_MilCap_mcamo", "", 100, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 100, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "Kio_Balaclava_blk", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "" , "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "HighThreatVestPolice2", "", 0, { "", "", -1 } },
			{ "SWATvest1", "", 0, { "", "", -1 } },
			{ "TRYK_V_tacv1_P_BK", "", 0, { "", "", -1 } },
			{ "TRYK_V_tacv1LP_BK", "", 0, { "", "", -1 } },
			{ "PD_DUTY_VEST", "", 0, { "", "", -1 } },
			{ "v_tacvest_blk_police", "", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "cl3_police_tacticalbelt", "", 800, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 200, { "", "", -1 } }
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
			{ "V_RebreatherB", "", 500, { "", "", -1 } }
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
			{ "U_IG_Guerilla1_1", "", 3000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 3000, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 2150, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 1750, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 1510, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 2340, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 115000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 1000, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 1200, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 100, { "", "", -1 } },
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
			{ "V_TacVest_khk", "", 5100, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 3500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{"B_AssaultPack_cbr", "", 200, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 450, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 300, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 300, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 450, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 450, { "", "", -1 } },
			{ "B_Carryall_oli", "", 500, { "", "", -1 } },
			{ "B_Carryall_khk", "", 500, { "", "", -1 } }
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
			{ "H_RacingHelmet_1_F", "", 10000, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 10000, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 10000, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 10000, { "", "", -1 } }
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
	
	class emsShop {
		title = "STR_Shops_C_EMS";
		license = "";
		side = "med";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "emsoff_uni", "", 100, { "", "", -1 } },
			{ "A3L_EMSProbieUniform", "", 150, { "", "", -1 } },
			{ "EMTRM_uni", "", 150, { "", "", -1 } },
			{ "A3L_EMT2", "", 150, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 150, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "A3L_medic_helmet", "", 100, { "", "", -1 } },
			{ "TRYK_H_woolhat", "", 100, { "", "", -1 } },
			{ "TRYK_H_woolhat_br", "", 100, { "", "", -1 } },
			{ "TRYK_H_woolhat_cu", "", 300, { "", "", -1 } },
			{ "TRYK_H_woolhat_CW", "", 100, { "", "", -1 } },
			{ "TRYK_H_woolhat_tan", "", 100, { "", "", -1 } },
			{ "TRYK_H_woolhat_WH", "", 1000, { "", "", -1 } },
			{ "TRYK_R_CAP_BLK", "", 1000, { "", "", -1 } },
			{ "TRYK_H_headsetcap_blk", "", 1000, { "", "", -1 } },
			{ "H_Cap_blk", "", 1000, { "", "", -1 } },
			{ "H_Cap_red", "", 1000, { "", "", -1 } },
			{ "H_Cap_blu", "", 1000, { "", "", -1 } },
			{ "H_Beret_blk", "", 1000, { "", "", -1 } },
			{ "RobJ_Rescue_Hat", "", 1000, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Aviator", "", 50, { "", "", -1} },
			{ "G_Diving", "", 50, { "", "", -1} },
			{ "G_Shades_Black", "", 50, { "", "", -1} },
			{ "G_Shades_Blue", "", 50, { "", "", -1} },
			{ "G_Shades_Green", "", 50, { "", "", -1} },
			{ "G_Shades_Red", "", 50, { "", "", -1} },
			{ "G_Spectacles", "", 50, { "", "", -1} },
			{ "G_Spectacles_Tinted", "", 50, { "", "", -1} },
			{ "G_Sport_Red", "", 50, { "", "", -1} },
			{ "G_Sport_Blackyellow", "", 50, { "", "", -1} },
			{ "G_Sport_BlackWhite", "", 50, { "", "", -1} },
			{ "G_Sport_Checkered", "", 50, { "", "", -1} },
			{ "G_Sport_Blackred", "", 50, { "", "", -1} },
			{ "G_Sport_Greenblack", "", 50, { "", "", -1} },
			{ "G_Squares_Tinted", "", 50, { "", "", -1} }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_HarnessOSpec_gry", "", 200, { "", "", -1 } },
			{ "V_PlateCarrierL_CTRG", "", 1000, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 300, { "", "", -1 } },
			{ "V_TacVest_blk", "", 300, { "", "", -1 } },
			{ "V_RebreatherB", "", 800, { "", "", -1 } },
			{ "cl3_police_vest_CG2", "EMS Chief", 400, { "", "", -1 } },
			{ "cl3_police_vest_fd", "", 800, { "", "", -1 } },
			{ "cl3_police_vest_mr", "EMS Command", 400, { "", "", -1 } },
			{ "cl3_police_vest_pm", "", 500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "cl3_emt_tacticalbelt", "EMS Duty Belt", 150, { "", "", -1 } },
			{ "cl3_emt_tacticalbelt_black", "EMS Duty Belt Black", 600, { "", "", -1 } },
			{ "TRYK_B_Medbag_OD", "", 600, { "", "", -1 } },
			{ "TRYK_B_Medbag_BK", "", 600, { "", "", -1 } }
		};
	};
};