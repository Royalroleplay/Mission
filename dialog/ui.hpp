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
#define ST_RIGHT 0x01

/*
	Name: MrBoolean
	File: ui.hpp
*/

class playerHUD {
	idd = -1;
	duration = INFINITE;
	fadein = 0;
	fadeout = 0;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";

	class controls 
	{
		class RscText_1000: RscText
		{
			font = "PuristaLight";
			idc = 1000;
			text = "";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.951 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
	};
};

class osefStatusBarAdmin {
	idd = -1;
	onLoad = "uiNamespace setVariable ['osefStatusBarAdmin', _this select 0]";
	onUnload = "uiNamespace setVariable ['osefStatusBarAdmin', objNull]";
	onDestroy = "uiNamespace setVariable ['osefStatusBarAdmin', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 55554;
			x = safezoneX;
			y = safezoneY + safezoneH - 0.053;
			w = safezoneW;
			h = 0.06;
			shadow = false;
			colorBackground[] = { 0.074, 0.082, 0.105, 0.85 };
			font = "OrbitronLight";
			size = 0.032;
			type = 13;
			style = 2;
			colorText[] = {1, 1, 1, 1};
			text="Initalizing your world...";
			class Attributes {
				align="center";
				color = "#ffffff";
				font = "OrbitronLight";
			};
		};
	};
};

class osefStatusBar {
	idd = -1;
	onLoad = "uiNamespace setVariable ['osefStatusBar', _this select 0]";
	onUnload = "uiNamespace setVariable ['osefStatusBar', objNull]";
	onDestroy = "uiNamespace setVariable ['osefStatusBar', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 55555;
			x = safezoneX + safezoneW - 1.50;
			y = safezoneY + safezoneH - 0.035;
			w = 1.3;
			h = 0.07;
			shadow = false;
			font = "OrbitronLight";
			size = 0.032;
			type = 13;
			style = 2;
			colorText[] = {1, 1, 1, 1};
			text="";
			class Attributes {
				align="left";
			};
		};
	};
};