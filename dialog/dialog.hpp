#include "ui_toolkit.hpp"
#include "baseDefines.hpp"
#include "defines.hpp"
#include "baseRsc.hpp"

class grad_guestbook_rscDisplayGuestbook {
    idd = -1;
    closeOnMissionEnd = 1;
    movingEnable = false;
    enableSimulation = true;
    onLoad = "_this call grad_guestbook_fnc_onLoad";

    class controlsBackground {
        class notebook: grad_guestbook_rscPicture {
            x = grad_guestbook_totalX;
            y = grad_guestbook_totalY;
            w = grad_guestbook_totalW;
            h = grad_guestbook_totalH;

            text = MODULES_DIRECTORY\grad-guestbook\dialog\notebook2.paa;
        };
    };

    class controls {
        class textLeft: grad_guestbook_rscText {
            idc = GRAD_GUESTBOOK_IDCTEXTL;

            x = grad_guestbook_textLX;
            y = grad_guestbook_textY;
            w = grad_guestbook_textW;
            h = grad_guestbook_textH;

            text = "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.";
        };

        class editLeft: grad_guestbook_rscEdit {
            idc = GRAD_GUESTBOOK_IDCEDITL;

            x = grad_guestbook_textLX;
            y = grad_guestbook_textY;
            w = grad_guestbook_textW;
            h = grad_guestbook_textH;

            maxChars = 600;
        };

        class textRight: grad_guestbook_rscText {
            idc = GRAD_GUESTBOOK_IDCTEXTR;

            x = grad_guestbook_textRX;
            y = grad_guestbook_textY;
            w = grad_guestbook_textW;
            h = grad_guestbook_textH;

            text = "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.";
        };

        class editRight: grad_guestbook_rscEdit {
            idc = GRAD_GUESTBOOK_IDCEDITR;

            x = grad_guestbook_textRX;
            y = grad_guestbook_textY;
            w = grad_guestbook_textW;
            h = grad_guestbook_textH;

            maxChars = 600;
        };

        class buttonLeft: grad_guestbook_rscButtonInvisible {
            idc = GRAD_GUESTBOOK_IDCBUTTONL;

            x = grad_guestbook_buttonLX;
            y = grad_guestbook_textY;
            w = grad_guestbook_buttonW;
            h = grad_guestbook_textH;

            text = "buttonL";
        };

        class buttonRight: grad_guestbook_rscButtonInvisible {
            idc = GRAD_GUESTBOOK_IDCBUTTONR;

            x = grad_guestbook_buttonRX;
            y = grad_guestbook_textY;
            w = grad_guestbook_buttonW;
            h = grad_guestbook_textH;

            text = "buttonR";
        };

        class buttonSaveR: grad_guestbook_rscButton {
            idc = GRAD_GUESTBOOK_IDCBUTTONSAVER;

            x = grad_guestbook_buttonBotRX1;
            y = grad_guestbook_buttonBotY;
            w = grad_guestbook_buttonBotW;
            h = grad_guestbook_itemH;

            text = "SAVE";
            onButtonClick = "_this call grad_guestbook_fnc_save";
        };

        class buttonSaveL: grad_guestbook_rscButton {
            idc = GRAD_GUESTBOOK_IDCBUTTONSAVEL;

            x = grad_guestbook_buttonBotLX1;
            y = grad_guestbook_buttonBotY;
            w = grad_guestbook_buttonBotW;
            h = grad_guestbook_itemH;

            text = "SAVE";
            onButtonClick = "_this call grad_guestbook_fnc_save";
        };

        class buttonDeleteR: grad_guestbook_rscButton {
            idc = GRAD_GUESTBOOK_IDCBUTTONDELETER;

            x = grad_guestbook_buttonBotRX1;
            y = grad_guestbook_buttonBotY;
            w = grad_guestbook_buttonBotW;
            h = grad_guestbook_itemH;

            text = "DELETE";
        };

        class buttonDeleteL: grad_guestbook_rscButton {
            idc = GRAD_GUESTBOOK_IDCBUTTONDELETEL;

            x = grad_guestbook_buttonBotLX1;
            y = grad_guestbook_buttonBotY;
            w = grad_guestbook_buttonBotW;
            h = grad_guestbook_itemH;

            text = "DELETE";
        };
    };
};
