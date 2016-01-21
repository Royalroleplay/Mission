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
			text = "Health: 100       Thirst: 100       Hunger: 100";
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.962 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};
};