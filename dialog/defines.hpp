#define GRAD_GUESTBOOK_IDD                      42500
#define GRAD_GUESTBOOK_IDCTEXTL                 42501
#define GRAD_GUESTBOOK_IDCTEXTR                 42502
#define GRAD_GUESTBOOK_IDCEDITL                 42503
#define GRAD_GUESTBOOK_IDCEDITR                 42504
#define GRAD_GUESTBOOK_IDCBUTTONL               42505
#define GRAD_GUESTBOOK_IDCBUTTONR               42506
#define GRAD_GUESTBOOK_IDCBUTTONSAVER           42507
#define GRAD_GUESTBOOK_IDCBUTTONSAVEL           42508
#define GRAD_GUESTBOOK_IDCBUTTONDELETER         42509
#define GRAD_GUESTBOOK_IDCBUTTONDELETEL         42510

#define grad_guestbook_totalW                   (0.900 * X_SCALE)
#define grad_guestbook_totalH                   (0.600 * Y_SCALE)
#define grad_guestbook_paddingX                 (0.050 * X_SCALE)
#define grad_guestbook_paddingY                 (0.044 * Y_SCALE)
#define grad_guestbook_buttonW                  (0.060 * X_SCALE)
#define grad_guestbook_buttonPaddingX           (0.005 * X_SCALE)
#define grad_guestbook_buttonBotPaddingY        (0.004 * Y_SCALE)
#define grad_guestbook_buttonBotPaddingX        (0.005 * X_SCALE)
#define grad_guestbook_itemH                    (0.025 * Y_SCALE)
#define grad_guestbook_buttonBotW               (0.080 * X_SCALE)

#define grad_guestbook_textScale                (TEXT_SCALE_UI * 0.0373)

#define grad_guestbook_totalX                   CENTER(1,grad_guestbook_totalW)
#define grad_guestbook_totalY                   CENTER(1,grad_guestbook_totalH)

#define grad_guestbook_textW                    ((grad_guestbook_totalW / 2) - 2 * grad_guestbook_paddingX)
#define grad_guestbook_textH                    (grad_guestbook_totalH - 2 * grad_guestbook_paddingY)

#define grad_guestbook_textLX                   (grad_guestbook_totalX + grad_guestbook_paddingX)
#define grad_guestbook_textRX                   (grad_guestbook_totalX + grad_guestbook_paddingX + (grad_guestbook_totalW / 2))
#define grad_guestbook_textY                    (grad_guestbook_totalY + grad_guestbook_paddingY)

#define grad_guestbook_buttonLX                 (grad_guestbook_textLX - grad_guestbook_buttonW - grad_guestbook_buttonPaddingX)
#define grad_guestbook_buttonRX                 (grad_guestbook_textRX + grad_guestbook_textW + grad_guestbook_buttonPaddingX)

#define grad_guestbook_buttonBotY               (grad_guestbook_textY + grad_guestbook_textH + grad_guestbook_buttonBotPaddingY)
#define grad_guestbook_buttonBotRX1             (grad_guestbook_textRX + grad_guestbook_textW - grad_guestbook_buttonBotW)
#define grad_guestbook_buttonBotLX1             (grad_guestbook_textLX + grad_guestbook_textW - grad_guestbook_buttonBotW)
