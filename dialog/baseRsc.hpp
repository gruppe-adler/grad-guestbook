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


class grad_guestbook_rscButton {
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
