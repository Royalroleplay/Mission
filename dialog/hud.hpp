class Royal_HUD {
	idd = 2000;
	onLoad = "uiNamespace setVariable ['HUD',_this select 0]";
	name = "HUD";
	duration = 1e1000;
	movingEnable = 0;
	fadein = 0;
	fadeout = 0;
		
	class controlsBackground {
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "\rr_textures\hud_placement.paa";
			x = 0.852567 * safezoneW + safezoneX;
			y = 0.894965 * safezoneH + safezoneY;
			w = 0.154248 * safezoneW;
			h = 0.122251 * safezoneH;
		};
	};
	
	class controls 
	{
		class RscText_1000: RscText
		{
			idc = 1000;
			x = 0.856974 * safezoneW + safezoneX;
			y = 0.923177 * safezoneH + safezoneY;
			w = 0.0352567 * safezoneW;
			h = 0.0470196 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			x = 0.90986 * safezoneW + safezoneX;
			y = 0.923177 * safezoneH + safezoneY;
			w = 0.0352567 * safezoneW;
			h = 0.0470196 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			x = 0.962745 * safezoneW + safezoneX;
			y = 0.923177 * safezoneH + safezoneY;
			w = 0.0352567 * safezoneW;
			h = 0.0470196 * safezoneH;
		};
	};
};