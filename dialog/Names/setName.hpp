/* #Raziro
$[
	1.063,
	["a",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[1000,"",[1,"",["0.425079 * safezoneW + safezoneX","0.330729 * safezoneH + safezoneY","0.145434 * safezoneW","0.0846353 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1001,"",[1,"Name",["0.429487 * safezoneW + safezoneX","0.340133 * safezoneH + safezoneY","0.0264426 * safezoneW","0.0282118 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1400,"",[1,"",["0.455929 * safezoneW + safezoneX","0.340133 * safezoneH + safezoneY","0.110177 * safezoneW","0.0282118 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.5],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"",[1,"Save",["0.429487 * safezoneW + safezoneX","0.377749 * safezoneH + safezoneY","0.13662 * safezoneW","0.0282118 * safezoneH"],[-1,-1,-1,-1],[0,0,0,0.8],[-1,-1,-1,-1],"","-1"],[]]
]
*/


class MB_Set_Name
{
	idd = 9000;
	movingEnable = 0;

	class controlsBackground
	{
		class RscText_1000: RscText
		{
			idc = -1;
			x = 0.425079 * safezoneW + safezoneX;
			y = 0.330729 * safezoneH + safezoneY;
			w = 0.145434 * safezoneW;
			h = 0.0846353 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class RscText_1001: RscText
		{
			idc = -1;
			text = "Name";
			x = 0.429487 * safezoneW + safezoneX;
			y = 0.340133 * safezoneH + safezoneY;
			w = 0.0264426 * safezoneW;
			h = 0.0282118 * safezoneH;
		};
	};

	class controls 
	{
		class RscEdit_1400: RscEdit
		{
			idc = 1400;
			x = 0.455929 * safezoneW + safezoneX;
			y = 0.340133 * safezoneH + safezoneY;
			w = 0.110177 * safezoneW;
			h = 0.0282118 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Save Name"; //--- ToDo: Localize;
			x = 0.429487 * safezoneW + safezoneX;
			y = 0.377749 * safezoneH + safezoneY;
			w = 0.13662 * safezoneW;
			h = 0.0282118 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
			action = "[] call Life_fnc_setName;"
		};
	};
};