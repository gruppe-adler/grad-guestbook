class grad_guestbook_rscPicture {
    access = 0;
    type = CT_STATIC;
    idc = -1;
    style = ST_PICTURE;
    colorBackground[] = {1,1,1,1};
    colorText[] = {1,1,1,1};
    font = "TahomaB";
    sizeEx = 0;
    lineSpacing = 0;
    text = "";
    fixedWidth = 0;
    shadow = 0;
};

class grad_guestbook_rscText {
    idc = -1;
    access = 0;
    type = CT_STATIC;

    style = "16 + 512";                                                         //multi line + no border
    lineSpacing = 1;
    w = 0.1;
    h = 0.05;
    font = "TahomaB";
    sizeEx = grad_guestbook_textScale;
    colorBackground[] = {0,0,0,0};
    colorText[] = {0,0,0,1};
    text = "";
    fixedWidth = 0;
    shadow = 0;
};

class grad_guestbook_rscEdit: grad_guestbook_rscText {
    type = CT_EDIT;

    colorDisabled[] = {0,0,0,0};
    colorSelection[] = {0,0,0,0.25};
    autocomplete = "";
    htmlControl = 1;
};


class grad_guestbook_rscButtonInvisible {
    idc = -1;
    access = 0;
    type = CT_BUTTON;
    style = ST_LEFT;
    x = 0; y = 0; w = 0.3; h = 0.1;
    text = "";
    font = "TahomaB";
    sizeEx = 0.04;
    colorText[] = {0,0,0,1};
    colorDisabled[] = {0.3,0.3,0.3,1};
    colorBackground[] = {0.6,0.6,0.6,1};
    colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
    colorBackgroundActive[] = {1,0.5,0,1};
    offsetX = 0.004;
    offsetY = 0.004;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    colorFocused[] = {0,0,0,1};
    colorShadow[] = {0,0,0,1};
    shadow = 0;
    colorBorder[] = {0,0,0,1};
    borderSize = 0.008;
    soundEnter[] = {"",0.1,1};
    soundPush[] = {"",0.1,1};
    soundClick[] = {"",0.1,1};
    soundEscape[] = {"",0.1,1};
};

class grad_guestbook_rscButton {
	access = 0;
	type = CT_BUTTON;
	style = ST_RIGHT;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.1};
	colorBackground[] = {0,0,0,0.8};
	colorFocused[] = {1,1,1,0.5};
	colorBackgroundActive[] = {1,1,1,0.8}; // hover
	colorBackgroundDisabled[] = {0.3,0.3,0.3,1};
	colorBackgroundFocused[] = {0,0,0,0.5};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	shadow = 0;
	font = "RobotoCondensed";
	sizeEx = 0.04;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
