class life_crime_system_log 
{
    idd = 86700;
    name= "life_crime_system_log";
    movingEnable = false;
    enableSimulation = true;
    onLoad = "";
    
    class controlsBackground 
    {
        class Mainbackground: Life_RscText
        {
            idc = -1;

            x = 4 * GUI_GRID_W + GUI_GRID_X;
            y = 3 * GUI_GRID_H + GUI_GRID_Y;
            w = 32 * GUI_GRID_W;
            h = 18 * GUI_GRID_H;
            colorBackground[] = {0,0,0,0.7};
        };

        class RscTitleBackground: Life_RscText
        {
            idc = -1;

            x = 4 * GUI_GRID_W + GUI_GRID_X;
            y = 2 * GUI_GRID_H + GUI_GRID_Y;
            w = 32 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
        };

        class RscTitleBadgeground: Life_RscText
        {
            idc = -1;

            x = 9 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
        };

        class RscTitleOfficerground: Life_RscText
        {
            idc = -1;

            x = 20.5 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
        };
    };

    class controls 
    {
        class Title: Life_RscTitle
        {
            idc = 86701;

            text = "LSVPD Crimes System"; //--- ToDo: Localize;
            x = 4 * GUI_GRID_W + GUI_GRID_X;
            y = 2 * GUI_GRID_H + GUI_GRID_Y;
            w = 32 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorText[] = {0.95,0.95,0.95,1};
        };

        class BadgeNumber: Life_RscTitle
        {
            idc = 86702;

            text = "Badge Number"; //--- ToDo: Localize;
            x = 9 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorText[] = {0.95,0.95,0.95,1};
        };

        class Badge: Life_RscEdit
        {
            idc = 86703;

            text = "";
            x = 9 * GUI_GRID_W + GUI_GRID_X;
            y = 6 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };

        class ArrestingOfficer: Life_RscTitle
        {
            idc = 86704;

            text = "Arresting Officer"; //--- ToDo: Localize;
            x = 20.5 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorText[] = {0.95,0.95,0.95,1};
        };

        class Officer: Life_RscEdit
        {
            idc = 86705;

            text = "";
            x = 20.5 * GUI_GRID_W + GUI_GRID_X;
            y = 6 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };

        class Crimes: Life_RscEdit
        {
            idc = 86706;

            text = "";
            x = 9 * GUI_GRID_W + GUI_GRID_X;
            y = 9 * GUI_GRID_H + GUI_GRID_Y;
            w = 22 * GUI_GRID_W;
            h = 9 * GUI_GRID_H;
        };

        class Submit: Life_RscButtonMenu
        {
            idc = 86707;
            onButtonClick = "[] call life_fnc_crime_submit;";

            text = "Submit"; //--- ToDo: Localize;
            x = 9 * GUI_GRID_W + GUI_GRID_X;
            y = 19 * GUI_GRID_H + GUI_GRID_Y;
            w = 6.25 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };

        class ButtonClose: Life_RscButtonMenu
        {
            onButtonClick = "closeDialog 0;";
            idc = 86708;

            text = "Cancel"; //--- ToDo: Localize;
            x = 24.5 * GUI_GRID_W + GUI_GRID_X;
            y = 19 * GUI_GRID_H + GUI_GRID_Y;
            w = 6.25 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
    };
};

class life_crime_system_load 
{
    idd = 86750;
    name= "life_crime_system_load";
    movingEnable = false;
    enableSimulation = true;
    onLoad = "";
    
    class controlsBackground 
    {
        class Mainbackground: Life_RscText
        {
            idc = -1;

            x = 4 * GUI_GRID_W + GUI_GRID_X;
            y = 3 * GUI_GRID_H + GUI_GRID_Y;
            w = 32 * GUI_GRID_W;
            h = 18 * GUI_GRID_H;
            colorBackground[] = {0,0,0,0.7};
        };

        class RscTitleBackground: Life_RscText
        {
            idc = -1;

            x = 4 * GUI_GRID_W + GUI_GRID_X;
            y = 2 * GUI_GRID_H + GUI_GRID_Y;
            w = 32 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
        };

        class RscTitleBadgeground: Life_RscText
        {
            idc = -1;

            x = 9 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
        };

        class RscTitleOfficerground: Life_RscText
        {
            idc = -1;

            x = 20.5 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
        };
    };

    class controls 
    {
        class Title: Life_RscTitle
        {
            idc = 86751;

            text = "LSVPD Crimes System"; //--- ToDo: Localize;
            x = 4 * GUI_GRID_W + GUI_GRID_X;
            y = 2 * GUI_GRID_H + GUI_GRID_Y;
            w = 32 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorText[] = {0.95,0.95,0.95,1};
        };

        class BadgeNumber: Life_RscTitle
        {
            idc = 86752;

            text = "Badge Number"; //--- ToDo: Localize;
            x = 9 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorText[] = {0.95,0.95,0.95,1};
        };

        class Badge: Life_RscEdit
        {
            idc = 86753;

            text = "";
            x = 9 * GUI_GRID_W + GUI_GRID_X;
            y = 6 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };

        class ArrestingOfficer: Life_RscTitle
        {
            idc = 86754;

            text = "Arresting Officer"; //--- ToDo: Localize;
            x = 20.5 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorText[] = {0.95,0.95,0.95,1};
        };

        class Officer: Life_RscEdit
        {
            idc = 86755;

            text = "";
            x = 20.5 * GUI_GRID_W + GUI_GRID_X;
            y = 6 * GUI_GRID_H + GUI_GRID_Y;
            w = 10.5 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
        };

        class Crimes: Life_RscEdit
        {
            idc = 86756;

            text = "";
            x = 9 * GUI_GRID_W + GUI_GRID_X;
            y = 9 * GUI_GRID_H + GUI_GRID_Y;
            w = 22 * GUI_GRID_W;
            h = 9 * GUI_GRID_H;
        };

        class ButtonClose: Life_RscButtonMenu
        {
            onButtonClick = "closeDialog 0;";
            idc = 86757;

            text = "Close"; //--- ToDo: Localize;
            x = 17.5 * GUI_GRID_W + GUI_GRID_X;
            y = 19 * GUI_GRID_H + GUI_GRID_Y;
            w = 6.25 * GUI_GRID_W;
            h = 1 * GUI_GRID_H;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };

        class Forward: Life_RscButton
        {
            onButtonClick = "[] call life_fnc_crime_forwards;";
            idc = 86758;
            x = 32 * GUI_GRID_W + GUI_GRID_X;
            y = 12 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };

        class Back: Life_RscButton
        {
            onButtonClick = "[] call life_fnc_crime_forwards;";
            idc = 86759;
            x = 5 * GUI_GRID_W + GUI_GRID_X;
            y = 12 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
    };
};



