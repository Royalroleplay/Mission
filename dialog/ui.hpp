/* #Fekuge
$[
	1.063,
	["test",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[1200,"",[1,"\rr_textures\hud_placement.paa",["0.843753 * safezoneW + safezoneX","0.866753 * safezoneH + safezoneY","0.154248 * safezoneW","0.122251 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"",[1,"",["0.84816 * safezoneW + safezoneX","0.894965 * safezoneH + safezoneY","0.0308496 * safezoneW","0.0376157 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1001,"",[1,"",["0.901045 * safezoneW + safezoneX","0.894965 * safezoneH + safezoneY","0.0308496 * safezoneW","0.0376157 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1002,"",[1,"",["0.95393 * safezoneW + safezoneX","0.894965 * safezoneH + safezoneY","0.0308496 * safezoneW","0.0376157 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

#define INFINITE 1e+1000
#define IDC_LIFE_FOOD_TEXT 1000
#define IDC_LIFE_WATER_TEXT 1001
#define IDC_LIFE_HEALTH_TEXT 1002
/*
	Name: MrBoolean
	File: ui.hpp
*/

class playerHUD {
	idd = -1;
	duration = INFINITE;
	movingEnable = 0;
	fadein = 0;
	fadeout = 0;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
	objects[] = {};
	controls[] = {
		LIFE_UI_BACK,
		LIFE_FOOD_TEXT,
		LIFE_WATER_TEXT,
		LIFE_HEALTH_TEXT
	};
	
	class LIFE_UI_BACK: RscPicture
	{
		idc = 1200;
		text = "\rr_textures\hud.paa";
		x = 0.843753 * safezoneW + safezoneX;
		y = 0.866753 * safezoneH + safezoneY;
		w = 0.154248 * safezoneW;
		h = 0.122251 * safezoneH;
	};

	/* Text */
	class LIFE_WATER_TEXT: RscText
	{
		idc = IDC_LIFE_WATER_TEXT;
		x = 0.84816 * safezoneW + safezoneX;
		y = 0.894965 * safezoneH + safezoneY;
		w = 0.0308496 * safezoneW;
		h = 0.0376157 * safezoneH;
		font = "PuristaLight";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2)";
	};
	class LIFE_FOOD_TEXT: RscText
	{
		idc = IDC_LIFE_FOOD_TEXT;
		x = 0.901045 * safezoneW + safezoneX;
		y = 0.894965 * safezoneH + safezoneY;
		w = 0.0308496 * safezoneW;
		h = 0.0376157 * safezoneH;
		font = "PuristaLight";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2)";
	};
	class LIFE_HEALTH_TEXT: RscText
	{
		idc = IDC_LIFE_HEALTH_TEXT;
		x = 0.95393 * safezoneW + safezoneX;
		y = 0.894965 * safezoneH + safezoneY;
		w = 0.0308496 * safezoneW;
		h = 0.0376157 * safezoneH;
		font = "PuristaLight";
		sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2)";
	};
};
