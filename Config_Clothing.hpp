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
			{ "RR_Clothing_Anon", "", 120, { "", "", -1 } },
			{ "RR_Clothing_Creepy", "", 120, { "", "", -1 } },
			{ "RR_Clothing_grafiti", "", 120, { "", "", -1 } },
			{ "RR_Clothing_Drama", "", 120, { "", "", -1 } },
			{ "RR_Clothing_Doge", "", 120, { "", "", -1 } },
			{ "RR_Clothing_grafiti2", "", 120, { "", "", -1 } },
			{ "RR_Clothing_grafiti", "", 120, { "", "", -1 } },
			{ "RR_Clothing_nerd", "", 120, { "", "", -1 } },
			{ "RR_Clothing_Illuminati", "", 120, { "", "", -1 } },
			{ "RR_Clothing_badass", "", 120, { "", "", -1 } },
			{ "RR_Clothing_pewproffesional", "", 120, { "", "", -1 } },
			{ "RR_Clothing_Kappa", "", 120, { "", "", -1 } },
			{ "RR_Clothing_enjoycocaine", "", 120, { "", "", -1 } },
			{ "RR_Clothing_idowhatiwant", "", 120, { "", "", -1 } },
			{ "RR_Clothing_leftsharkbest", "", 120, { "", "", -1 } },
			{ "RR_Clothing_letsparty", "", 120, { "", "", -1 } },
			{ "RR_Clothing_mechanicblue", "", 120, { "", "", -1 } },
			{ "RR_Clothing_twitch", "", 120, { "", "", -1 } },
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
			{ "A3L_Badoodlenoodleshirt", "Noodle", 120, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 3000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 3000, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 2150, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 1750, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 1510, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 2340, { "", "", -1 } },
			{ "A3L_Badoodlenoodleshirt", "Noodle", 120, { "", "", -1 } },
			{ "KAEL_SUITS_BLK_F", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F3", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F4", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F5", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F6", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F7", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F8", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F9", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F10", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F11", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F12", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F13", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F14", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F15", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F16", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F17", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F18", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F19", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F20", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F21", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F22", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F23", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F24", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F25", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F26", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F27", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F28", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F29", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F30", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F31", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F32", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F33", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F34", "", 300, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F35", "", 300, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 300, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 300, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 300, { "", "", -1 } },
			{ "TRYK_B_TRYK_UCP_T", "", 300, { "", "", -1 } },
			{ "U_B_CTRG_2", "", 300, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_BSBPBB", "", 300, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_TSTPTB", "", 300, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_GSTPTB", "", 300, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_TSGPTB", "", 300, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_BSTPTB", "", 300, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_TSBPTB", "", 300, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_YSBPBB", "", 300, { "", "", -1 } },
			{ "U_BG_Guerrilla_6_1", "", 300, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_BSSPBB", "", 300, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_GSBPBB", "", 300, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_GSSPBB", "", 300, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_IndPBSBB", "", 300, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_SSBPBB", "", 300, { "", "", -1 } },
			{ "TRYK_U_pad_hood_CSATBlk", "", 300, { "", "", -1 } },
			{ "TRYK_U_pad_hood_Blod", "", 300, { "", "", -1 } },
			{ "TRYK_U_pad_hood_Blk", "", 300, { "", "", -1 } },
			{ "TRYK_U_pad_hood_BKT2", "", 300, { "", "", -1 } },
			{ "TRYK_U_nohoodPcu_gry", "", 300, { "", "", -1 } },
			{ "TRYK_U_pad_hood_tan", "", 300, { "", "", -1 } },
			{ "TRYK_hoodie_3c", "", 300, { "", "", -1 } },
			{ "TRYK_hoodie_FR", "", 300, { "", "", -1 } },
			{ "TRYK_hoodie_Blk", "", 300, { "", "", -1 } },
			{ "TRYK_hoodie_Wood", "", 300, { "", "", -1 } },
			{ "TRYK_U_hood_mc", "", 300, { "", "", -1 } },
			{ "TRYK_U_hood_nc", "", 300, { "", "", -1 } },
			{ "TRYK_T_BLK_PAD", "", 300, { "", "", -1 } },
			{ "TRYK_T_CSAT_PAD", "", 300, { "", "", -1 } },
			{ "TRYK_T_T2_PAD", "", 300, { "", "", -1 } },
			{ "TRYK_U_denim_hood_mc", "", 300, { "", "", -1 } },
			{ "TRYK_T_camo_3c_BG", "", 300, { "", "", -1 } },
			{ "TRYK_T_camo_desert_marpat_BG", "", 300, { "", "", -1 } },
			{ "TRYK_T_camo_Wood_BG", "", 300, { "", "", -1 } },
			{ "TRYK_T_camo_wood_marpat_BG", "", 300, { "", "", -1 } },
			{ "TRYK_T_camo_3c", "", 300, { "", "", -1 } },
			{ "TRYK_T_camo_Wood", "", 300, { "", "", -1 } },
			{ "TRYK_T_camo_wood_marpat", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_woodtan_CombatUniform", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_woodtanR_CombatUniformTshirt", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_TANOCP_CombatUniform", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_TANOCP_R_CombatUniformTshirt", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_JSDF_CombatUniform", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_JSDF_CombatUniformTshirt", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_Woodland", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_Woodland_Tshirt", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_wood_CombatUniform", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_woodR_CombatUniformTshirt", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_WDL_GRY_R_CombatUniform", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_Wood_T", "", 300, { "", "", -1 } },
			{ "TRYK_U_B_wood3c_CombatUniform", "", 300, { "", "", -1 } }
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
			{ "DTU_Vest", "", 500, { "", "", -1 } },
			{ "DTU_Vest2", "", 500, { "", "", -1 } },
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
			{ "TRYK_B_Kitbag_Base", "", 500, { "", "", -1 } },
			{ "a3l_bergenMurica", "", 500, { "", "", -1 } }
		};
	};

	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "RR_Clothing_Anon", "", 120, { "", "", -1 } },
			{ "RR_Clothing_Creepy", "", 120, { "", "", -1 } },
			{ "RR_Clothing_grafiti", "", 120, { "", "", -1 } },
			{ "RR_Clothing_Drama", "", 120, { "", "", -1 } },
			{ "RR_Clothing_Doge", "", 120, { "", "", -1 } },
			{ "RR_Clothing_grafiti2", "", 120, { "", "", -1 } },
			{ "RR_Clothing_grafiti", "", 120, { "", "", -1 } },
			{ "RR_Clothing_nerd", "", 120, { "", "", -1 } },
			{ "RR_Clothing_Illuminati", "", 120, { "", "", -1 } },
			{ "RR_Clothing_badass", "", 120, { "", "", -1 } },
			{ "RR_Clothing_pewproffesional", "", 120, { "", "", -1 } },
			{ "RR_Clothing_Kappa", "", 120, { "", "", -1 } },
			{ "RR_Clothing_enjoycocaine", "", 120, { "", "", -1 } },
			{ "RR_Clothing_idowhatiwant", "", 120, { "", "", -1 } },
			{ "RR_Clothing_leftsharkbest", "", 120, { "", "", -1 } },
			{ "RR_Clothing_letsparty", "", 120, { "", "", -1 } },
			{ "RR_Clothing_mechanicblue", "", 120, { "", "", -1 } },
			{ "RR_Clothing_twitch", "", 120, { "", "", -1 } },
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
			{ "A3L_Badoodlenoodleshirt", "Noodle", 120, { "", "", -1 } },
			{ "TRYK_U_denim_jersey_blk", "", 120, { "", "", -1 } },
			{ "TRYK_U_denim_jersey_blu", "", 120, { "", "", -1 } },
			{ "TRYK_U_pad_j_blk", "", 120, { "", "", -1 } },
			{ "TRYK_U_pad_j", "", 120, { "", "", -1 } },
			{ "TRYK_U_B_BLK_T_BG_BK", "", 120, { "", "", -1 } },
			{ "TRYK_U_B_RED_T_BG_BR", "", 120, { "", "", -1 } },
			{ "TRYK_U_B_BLK_T_BG_WH", "", 120, { "", "", -1 } },
			{ "TRYK_U_B_BLK_T_BK", "", 120, { "", "", -1 } },
			{ "TRYK_U_B_RED_T_BR", "", 120, { "", "", -1 } },
			{ "TRYK_U_B_BLK_T_WH", "", 120, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_BG_BK", "", 120, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_BG_WH", "", 120, { "", "", -1 } },
			{ "U_PMC_BluePlaidShirt_BeigeCords", "", 120, { "", "", -1 } },
			{ "U_PMC_RedPlaidShirt_DenimCords", "", 120, { "", "", -1 } },
			{ "A3LCivPoloGreenBlack", "", 120, { "", "", -1 } },
			{ "A3LCivPoloGreenGreen", "", 120, { "", "", -1 } },
			{ "A3LCivPoloGreenGrey", "", 120, { "", "", -1 } },
			{ "A3LCivPoloGreenOrange", "", 120, { "", "", -1 } }
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
			{ "TRYK_R_CAP_OD_US", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh_G", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh_WH", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh_shade_G", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh_shade", "", 150, { "", "", -1 } },
			{ "TRYK_Shemagh_shade_WH", "", 150, { "", "", -1 } },
			{ "TRYK_H_wig", "", 150, { "", "", -1 } }
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
			{ "G_Combat", "", 55, { "", "", -1 } }
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
			{ "TRYK_B_Kitbag_Base", "", 500, { "", "", -1 } },
			{ "TRYK_B_Kitbag_blk", "", 500, { "", "", -1 } },
			{ "TRYK_B_Kitbag_Base", "", 500, { "", "", -1 } },
			{ "a3l_bergenMurica", "", 500, { "", "", -1 } }
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
			{ "RR_Clothing_Police_RM_New_DOWarden_obj", "", 0, { "", "", -1 } },
			{ "RR_Clothing_Police_RM_New_DOCapt_obj", "", 0, { "", "", -1 } },
			{ "RR_Clothing_Police_RM_New_DOLt_obj", "", 0, { "", "", -1 } },
			{ "RR_Clothing_Police_RM_New_DOSgt_obj", "", 0, { "", "", -1 } },
			{ "RR_Clothing_Police_RM_New_DOCorp_obj", "", 0, { "", "", -1 } },
			{ "RR_Clothing_Police_RM_New_DOOfficer_obj", "", 0, { "", "", -1 } },
			{ "RR_Clothing_Police_RM_New_DOCadet_obj", "", 0, { "", "", -1 } },
			{ "RR_Swat_Uniform_obj", "", 0, { "", "", -1 } },
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
			{ "H_PilotHelmetHeli_B", "", 0, { "", "", -1 } },
			{ "SWATHelm", "", 0, { "", "", -1 } },
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
			{ "TRYK_kio_balaclavas", "Pilots Only", 50, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "HighThreatVestPolice2", "", 0, { "", "", -1 } },
			{ "SWATvest1", "", 0, { "", "", -1 } },
			{ "SWAT_Vest", "", 0, { "", "", -1 } },
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
			{ "TRYK_B_TRYK_UCP_T", "", 1510, { "", "", -1 } },
			{ "U_B_CTRG_2", "", 1510, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_BSBPBB", "", 1510, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_TSTPTB", "", 1510, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_GSTPTB", "", 1510, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_TSGPTB", "", 1510, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_BSTPTB", "", 1510, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_TSBPTB", "", 1510, { "", "", -1 } },
			{ "U_PMC_IndUniformRS_YSBPBB", "", 1510, { "", "", -1 } },
			{ "U_BG_Guerrilla_6_1", "", 1510, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_BSSPBB", "", 1510, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_GSBPBB", "", 1510, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_GSSPBB", "", 1510, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_IndPBSBB", "", 1510, { "", "", -1 } },
			{ "U_PMC_CombatUniformLS_SSBPBB", "", 1510, { "", "", -1 } },
			{ "TRYK_U_pad_hood_CSATBlk", "", 1510, { "", "", -1 } },
			{ "TRYK_U_pad_hood_Blod", "", 1510, { "", "", -1 } },
			{ "TRYK_U_pad_hood_Blk", "", 1510, { "", "", -1 } },
			{ "TRYK_U_pad_hood_BKT2", "", 1510, { "", "", -1 } },
			{ "TRYK_U_nohoodPcu_gry", "", 1510, { "", "", -1 } },
			{ "TRYK_U_pad_hood_tan", "", 1510, { "", "", -1 } },
			{ "TRYK_hoodie_3c", "", 1510, { "", "", -1 } },
			{ "TRYK_hoodie_FR", "", 1510, { "", "", -1 } },
			{ "TRYK_hoodie_Blk", "", 1510, { "", "", -1 } },
			{ "TRYK_hoodie_Wood", "", 1510, { "", "", -1 } },
			{ "TRYK_U_hood_mc", "", 1510, { "", "", -1 } },
			{ "TRYK_U_hood_nc", "", 1510, { "", "", -1 } },
			{ "TRYK_T_BLK_PAD", "", 1510, { "", "", -1 } },
			{ "TRYK_T_CSAT_PAD", "", 1510, { "", "", -1 } },
			{ "TRYK_T_T2_PAD", "", 1510, { "", "", -1 } },
			{ "TRYK_U_denim_hood_mc", "", 1510, { "", "", -1 } },
			{ "TRYK_T_camo_3c_BG", "", 1510, { "", "", -1 } },
			{ "TRYK_T_camo_desert_marpat_BG", "", 1510, { "", "", -1 } },
			{ "TRYK_T_camo_Wood_BG", "", 1510, { "", "", -1 } },
			{ "TRYK_T_camo_wood_marpat_BG", "", 1510, { "", "", -1 } },
			{ "TRYK_T_camo_3c", "", 1510, { "", "", -1 } },
			{ "TRYK_T_camo_Wood", "", 1510, { "", "", -1 } },
			{ "TRYK_T_camo_wood_marpat", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_woodtan_CombatUniform", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_woodtanR_CombatUniformTshirt", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_TANOCP_CombatUniform", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_TANOCP_R_CombatUniformTshirt", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_JSDF_CombatUniform", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_JSDF_CombatUniformTshirt", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_Woodland", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_Woodland_Tshirt", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_wood_CombatUniform", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_woodR_CombatUniformTshirt", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_WDL_GRY_R_CombatUniform", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_Wood_T", "", 1510, { "", "", -1 } },
			{ "TRYK_U_B_wood3c_CombatUniform", "", 1510, { "", "", -1 } }

		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 1200, { "", "", -1 } },
			{ "TRYK_H_woolhat_CW", "", 600, { "", "", -1 } }
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
			{ "V_HarnessO_brn", "", 3500, { "", "", -1 } },
			{ "TAC_FS_FO_B", "", 3500, { "", "", -1 } },
			{ "TAC_FS_FO_G", "", 3500, { "", "", -1 } },
			{ "TAC_FS_FOL_B", "", 3500, { "", "", -1 } },
			{ "TAC_FS_FOL_G", "", 3500, { "", "", -1 } },
			{ "TAC_EI_RRV24L_B", "", 3500, { "", "", -1 } },
			{ "TAC_EI_RRV24L_Khaki", "", 3500, { "", "", -1 } },
			{ "TAC_EI_RRV24L_OD", "", 3500, { "", "", -1 } },
			{ "TAC_EI_RRVCVH_B", "", 3500, { "", "", -1 } },
			{ "TAC_EI_RRVCVH_Khaki", "", 3500, { "", "", -1 } },
			{ "TAC_EI_RRVCVH_OD", "", 3500, { "", "", -1 } },
			{ "TRYK_V_tacv1M_BK", "", 3500, { "", "", -1 } },
			{ "TRYK_V_tacv1_CY", "", 3500, { "", "", -1 } },
			{ "TRYK_V_tacv1", "", 3500, { "", "", -1 } },
			{ "V_TacVest_camo", "", 3500, { "", "", -1 } },
			{ "V_TacVest_blk", "", 3500, { "", "", -1 } },
			{ "V_TacVest_oli", "", 3500, { "", "", -1 } },
			{ "V_I_G_resistanceLeader_F", "", 3500, { "", "", -1 } }

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
			{ "B_Carryall_khk", "", 500, { "", "", -1 } },
			{ "TRYK_B_Kitbag_Base_JSDF", "", 500, { "", "", -1 } },
			{ "B_TacticalPack_mcamo", "", 500, { "", "", -1 } },
			{ "B_TacticalPack_ocamo", "", 500, { "", "", -1 } }
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

	class buck {
		title = "";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_BK", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_BL", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_BWH", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_od", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_R", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_RED2", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_WH", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_WHB", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_ylb", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_od_Sleeve", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_ylb_Sleeve", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_BK_Sleeve", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_BL_Sleeve", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_R_Sleeve", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_RED2_Sleeve", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_WH_Sleeve", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_WHB_Sleeve", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_PAD_BK", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_BLK_PAD_BK", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_OD_PAD_BK", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_TAN_PAD_BK", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_PAD_BL", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_BLK_PAD_BL", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_OD_PAD_BL", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_TAN_PAD_BL", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_PAD_BLW", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_BLK_PAD_BLW", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_OD_PAD_BLW", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_TAN_PAD_BLW", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_PAD_BLU3", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_BLK_PAD_BLU3", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_OD_PAD_BLU3", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_TAN_PAD_BLU3", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_PAD", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_BLK_PAD", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_OD_PAD", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_TAN_PAD", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_PAD_RED2", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_BLK_PAD_RED2", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_OD_PAD_RED2", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_TAN_PAD_RED2", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_PAD_YEL", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_BLK_PAD_YEL", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_OD_PAD_YEL", "", 80, { "", "", -1 } },
			{ "TRYK_shirts_TAN_PAD_YEL", "", 80, { "", "", -1 } },
			{ "TRYK_U_pad_hood_odBK", "", 80, { "", "", -1 } },
			{ "TRYK_U_pad_hood_Cl", "", 80, { "", "", -1 } },
			{ "TRYK_T_OD_PAD", "", 80, { "", "", -1 } },
			{ "TRYK_T_TAN_PAD", "", 80, { "", "", -1 } },
			{ "TRYK_U_denim_hood_blk", "", 80, { "", "", -1 } },
			{ "TRYK_U_denim_hood_nc", "", 80, { "", "", -1 } },
			{ "TRYK_T_camo_tan", "", 80, { "", "", -1 } }

		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "TRYK_H_woolhat", "", 80, { "", "", -1 } },
			{ "TRYK_H_woolhat_br", "", 80, { "", "", -1 } },
			{ "TRYK_H_woolhat_cu", "", 80, { "", "", -1 } },
			{ "TRYK_H_woolhat_tan", "", 80, { "", "", -1 } },
			{ "TRYK_H_woolhat_WH", "", 80, { "", "", -1 } }

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


	class suit {
		title = "";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "TRYK_SUITS_BR_F", "", 1000, { "", "", -1 } },
			{ "TRYK_SUITS_BLK_F", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BLK_F", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F3", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F4", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F5", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F6", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F7", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F8", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F9", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F10", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F11", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F12", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F13", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F14", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F15", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F16", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F17", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F18", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F19", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F20", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F21", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F22", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F23", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F24", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F25", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F26", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F27", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F28", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F29", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F30", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F31", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F32", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F33", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F34", "", 1000, { "", "", -1 } },
			{ "KAEL_SUITS_BR_F35", "", 1000, { "", "", -1 } }

		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }

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
			{ "RR_EMS_Uniforms_5", "", 0, { "", "", -1 } },
			{ "RR_EMS_Uniforms_4", "", 0, { "", "", -1 } },
			{ "RR_EMS_Uniforms_3", "", 0, { "", "", -1 } },
			{ "RR_EMS_Uniforms_2", "", 0, { "", "", -1 } },
			{ "RR_EMS_Uniforms_1", "", 0, { "", "", -1 } },
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
			{ "RobJ_Rescue_Hat", "", 1000, { "", "", -1 } },
			{"SFG_Tac_smallBeardB", "", 50, { "", "", -1 } },
			{"SFG_Tac_smallBeardD", "", 50, { "", "", -1 } },
			{"SFG_Tac_smallBeardG", "", 50, { "", "", -1 } },
			{"SFG_Tac_smallBeardO", "", 50, { "", "", -1 } },
			{"SFG_Tac_BeardB", "", 50, { "", "", -1 } },
			{"SFG_Tac_BeardD", "", 50, { "", "", -1 } },
			{"SFG_Tac_BeardG", "", 50, { "", "", -1 } },
			{"SFG_Tac_BeardO", "", 50, { "", "", -1 } },
			{"SFG_Tac_chinlessbB", "", 50, { "", "", -1 } },
			{"SFG_Tac_chinlessbD", "", 50, { "", "", -1 } },
			{"SFG_Tac_chinlessbG", "", 50, { "", "", -1 } },
			{"SFG_Tac_chinlessbO", "", 50, { "", "", -1 } },
			{"SFG_Tac_moustacheB", "", 50, { "", "", -1 } },
			{"SFG_Tac_moustacheD", "", 50, { "", "", -1 } },
			{"SFG_Tac_moustacheG", "", 50, { "", "", -1 } },
			{"SFG_Tac_moustacheO", "", 50, { "", "", -1 } },
			{"SFG_Tac_ChopsB", "", 50, { "", "", -1 } },
			{"SFG_Tac_ChopsD", "", 50, { "", "", -1 } },
			{"SFG_Tac_ChopsG", "", 50, { "", "", -1 } },
			{"SFG_Tac_ChopsO", "", 50, { "", "", -1 } },
			{"TRYK_Beard", "", 50, { "", "", -1 } },
			{"TRYK_Beard_BW", "", 50, { "", "", -1 } },
			{"TRYK_Beard_BK", "", 50, { "", "", -1 } },
			{"TRYK_Beard_Gr", "", 50, { "", "", -1 } },
			{"TRYK_Beard2", "", 50, { "", "", -1 } },
			{"TRYK_Beard_BW2", "", 50, { "", "", -1 } },
			{"TRYK_Beard_BK2", "", 50, { "", "", -1 } },
			{"TRYK_Beard_Gr2", "", 50, { "", "", -1 } },
			{"TRYK_Beard3", "", 50, { "", "", -1 } },
			{"TRYK_Beard_BW3", "", 50, { "", "", -1 } },
			{"TRYK_Beard_BK3", "", 50, { "", "", -1 } },
			{"TRYK_Beard_Gr3", "", 50, { "", "", -1 } },
			{"TRYK_Beard4", "", 50, { "", "", -1 } },
			{"TRYK_Beard_BW4", "", 50, { "", "", -1 } },
			{"TRYK_Beard_BK4", "", 50, { "", "", -1 } },
			{"TRYK_Beard_Gr4", "", 50, { "", "", -1 } }
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
			{ "RR_EMS_Vests_Command", "", 0, { "", "", -1 } },
			{ "RR_EMS_Vests_RideAlong", "", 0, { "", "", -1 } },
			{ "RR_EMS_Vests_EMT", "", 0, { "", "", -1 } },
			{ "RR_EMS_Vests_Paramedic", "", 0, { "", "", -1 } },
			{ "RR_EMS_Vests_SearchRescue", "", 0, { "", "", -1 } },
			{ "RR_EMS_Vests_Probie", "", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "cl3_emt_tacticalbelt", "EMS Duty Belt", 150, { "", "", -1 } },
			{ "cl3_emt_tacticalbelt_black", "EMS Duty Belt Black", 600, { "", "", -1 } }
		};
	};
};