class Royal_HUD {
	idd = 2000;
	onLoad = "uiNamespace setVariable ['HUD',_this select 0]";
	name = "HUD";
	duration = 1e1000;
	movingEnable = 0;
	fadein = 0;
	fadeout = 0;

	class controls 
	{
		class RscText_1000: RscText
		{
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