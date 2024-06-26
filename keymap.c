#include "kobra.h"
#include "tap_dance.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [COLEMAK] = LAYOUT_moonlander(
        KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LEFT,                                KC_RIGHT,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
        CAPS_WORD,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           XXXXXXX,                                XXXXXXX,        KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_BSLASH,
        KC_TAB,         HOME_A,         HOME_R,         HOME_S,         HOME_T,         KC_D,           KC_HYPR,                                KC_MEH,         KC_H,           HOME_N,         HOME_E,         HOME_I,         HOME_O,         KC_QUOTE,
        KC_LSHIFT,      TD4,            KC_X,           KC_C,           TD0,            KC_B,                                                                   KC_K,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
        KC_LALT,        KC_LEFT,        KC_RIGHT,       KC_LGUI,        KC_GRAVE,                       TD1,                                    TD2,                            KC_LBRACKET,    KC_RBRACKET,    KC_UP,          KC_DOWN,        XXXXXXX,
                                                                        OS_LSFT,        KC_BSPACE,      TO(BOARD),                              TD3,            KC_ENTER,       KC_SPACE
    ),
    [ARROWS] = LAYOUT_moonlander(
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,                                                                _______,        TO(COLEMAK),    _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,                        _______,                                _______,                        _______,        _______,        _______,        _______,        _______,
                                                                        KC_LALT,        _______,        _______,                                TO(COLEMAK),    _______,        _______
    ),
    [MEDIA] = LAYOUT_moonlander(
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        _______,        _______,        _______,        _______,        RESET,
        _______,        _______,        _______,        S_BRT_DN,       S_BRT_UP,       _______,        _______,                                _______,        M_MUTE,         M_VOL_DN,       M_VOL_UP,       _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        M_NEXT,         M_PREV,         _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,                                                                _______,        M_PLAY,         M_STOP,         _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,                        _______,                                _______,                        _______,        _______,        _______,        _______,        _______,
                                                                        _______,        _______,        _______,                                TO(COLEMAK),    _______,        _______
    ),
    [QWERTY] = LAYOUT_moonlander(
        KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           _______,                                _______,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
        _______,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           _______,                                _______,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
        KC_TAB,         QWRT_A,         QWRT_S,         QWRT_D,         QWRT_F,         KC_G,           KC_LBRACKET,                            KC_RBRACKET,    KC_H,           QWRT_J,         QWRT_K,         QWRT_L,         QWRT_SEMI,      KC_QUOTE,
        KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                                   KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
        _______,        _______,        _______,        _______,        KC_GRAVE,                       _______,                                _______,                        KC_DOWN,        KC_UP,          KC_LEFT,        KC_RIGHT,       _______,
                                                                        KC_SPACE,       KC_BSPACE,      _______,                                TO(COLEMAK),    KC_ENTER,       KC_SPACE
    ),
    [MOUSE] = LAYOUT_moonlander(
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        _______,        KC_MS_WH_UP,    _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        KC_MS_WH_DOWN,  _______,                                _______,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,                                                                _______,        KC_MS_BTN1,     KC_MS_BTN2,     _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,                        _______,                                _______,                        _______,        _______,        _______,        _______,        _______,
                                                                        _______,        _______,        _______,                                TO(COLEMAK),    _______,        _______
    ),
    [BOARD] = LAYOUT_moonlander(
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        DT_PRNT,        DT_DOWN,        DT_UP,          _______,        _______,        _______,
        _______,        KC_LGUI,        KC_LALT,        KC_LSFT,        KC_LCTL,        _______,        _______,                                _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,                                                                _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,                        QK_MAKE,                                _______,                        _______,        _______,        _______,        _______,        _______,
                                                                        _______,        EE_CLR,         DB_TOGG,                                TO(COLEMAK),    _______,        _______
    ),
};

#define ______ {0, 0, 0}

const ledmap PROGMEM ledmaps[] = {
    [COLEMAK] = RGB_MATRIX_LAYOUT_LEDMAP(
        RED,            GREEN,          GREEN,          GREEN,          GREEN,          GREEN,          CHART,                                  CHART,          GREEN,          GREEN,          GREEN,          GREEN,          GREEN,          RED,
        MAGENT,         RED,            RED,            RED,            RED,            RED,            ______,                                 ______,         RED,            RED,            RED,            RED,            RED,            RED,
        MAGENT,         CYAN,           CYAN,           CYAN,           CYAN,           RED,            PURPLE,                                 PURPLE,         RED,            CYAN,           CYAN,           CYAN,           CYAN,           RED,
        BLUE,           RED,            RED,            RED,            RED,            RED,                                                                    RED,            RED,            RED,            RED,            RED,            BLUE,
        BLUE,           CHART,          CHART,          BLUE,           RED,                            CORAL,                                  CORAL,                          RED,            RED,            CHART,          CHART,          ______,
                                                                        MAGENT,         MAGENT,         CORAL,                                  CORAL,          MAGENT,         MAGENT
    ),
    [ARROWS] = RGB_MATRIX_LAYOUT_LEDMAP(
        RED,            RED,            RED,            RED,            RED,            RED,            RED,                                    RED,            RED,            RED,            RED,            RED,            RED,            RED,
        RED,            RED,            RED,            RED,            RED,            RED,            RED,                                    RED,            RED,            RED,            RED,            RED,            RED,            RED,
        RED,            RED,            RED,            RED,            RED,            RED,            RED,                                    RED,            CYAN,           CYAN,           CYAN,           CYAN,           RED,            RED,
        RED,            RED,            RED,            RED,            RED,            RED,                                                                    RED,            GREEN,          RED,            RED,            RED,            RED,
        RED,            RED,            RED,            RED,            RED,                            RED,                                    RED,                            RED,            RED,            RED,            RED,            RED,
                                                                        GREEN,          RED,            RED,                                    GREEN,          RED,            RED
    ),
    [MEDIA] = RGB_MATRIX_LAYOUT_LEDMAP(
        BLUE,           BLUE,           BLUE,           BLUE,           BLUE,           BLUE,           BLUE,                                   BLUE,           BLUE,           BLUE,           BLUE,           BLUE,           BLUE,           PURPLE,
        BLUE,           BLUE,           BLUE,           YELLOW,         YELLOW,         BLUE,           BLUE,                                   BLUE,           MAGENT,         MAGENT,         MAGENT,         BLUE,           BLUE,           BLUE,
        BLUE,           BLUE,           BLUE,           BLUE,           BLUE,           BLUE,           BLUE,                                   BLUE,           BLUE,           RED,            RED,            BLUE,           BLUE,           BLUE,
        BLUE,           BLUE,           BLUE,           BLUE,           BLUE,           BLUE,                                                                   BLUE,           RED,            RED,            BLUE,           BLUE,           BLUE,
        BLUE,           BLUE,           BLUE,           BLUE,           BLUE,                           BLUE,                                   BLUE,                           BLUE,           BLUE,           BLUE,           BLUE,           BLUE,
                                                                        BLUE,           BLUE,           BLUE,                                   GREEN,          BLUE,           BLUE
    ),
    [QWERTY] = RGB_MATRIX_LAYOUT_LEDMAP(
        RED,            RED,            RED,            RED,            RED,            RED,            RED,                                    RED,            RED,            RED,            RED,            RED,            RED,            RED,
        RED,            RED,            CYAN,           RED,            RED,            RED,            ______,                                 ______,         RED,            RED,            RED,            RED,            RED,            RED,
        RED,            CYAN,           CYAN,           CYAN,           RED,            RED,            RED,                                    RED,            RED,            RED,            RED,            RED,            RED,            RED,
        RED,            RED,            RED,            RED,            RED,            RED,                                                                    RED,            RED,            RED,            RED,            RED,            RED,
        RED,            RED,            RED,            RED,            RED,                            RED,                                    RED,                            RED,            RED,            RED,            RED,            ______,
                                                                        RED,            RED,            ______,                                 GREEN,          RED,            RED
    ),
    [MOUSE] = RGB_MATRIX_LAYOUT_LEDMAP(
        GREEN,          GREEN,          GREEN,          GREEN,          GREEN,          GREEN,          GREEN,                                  GREEN,          GREEN,          GREEN,          GREEN,          GREEN,          GREEN,          GREEN,
        GREEN,          GREEN,          GREEN,          GREEN,          GREEN,          GREEN,          GREEN,                                  GREEN,          GREEN,          GREEN,          RED,            GREEN,          GREEN,          GREEN,
        GREEN,          GREEN,          GREEN,          GREEN,          GREEN,          RED,            GREEN,                                  GREEN,          RED,            RED,            RED,            RED,            GREEN,          GREEN,
        GREEN,          GREEN,          GREEN,          GREEN,          GREEN,          GREEN,                                                                  GREEN,          RED,            RED,            GREEN,          GREEN,          GREEN,
        GREEN,          GREEN,          GREEN,          GREEN,          GREEN,                          GREEN,                                  GREEN,                          GREEN,          GREEN,          GREEN,          GREEN,          GREEN,
                                                                        GREEN,          GREEN,          GREEN,                                  CYAN,          GREEN,          GREEN
    ),
    [BOARD] = RGB_MATRIX_LAYOUT_LEDMAP(
        RED,            RED,            RED,            RED,            RED,            RED,            RED,                                    RED,            RED,            RED,            RED,            RED,            RED,            RED,
        RED,            RED,            RED,            RED,            RED,            RED,            RED,                                    RED,            RED,            MAGENT,         MAGENT,         MAGENT,            RED,            RED,
        RED,            CYAN,           CYAN,           CYAN,           CYAN,           RED,            RED,                                    RED,            RED,            RED,            RED,            RED,           RED,            RED,
        RED,            RED,            RED,            RED,            RED,            RED,                                                                    RED,            RED,            RED,            RED,            RED,            RED,
        RED,            RED,            RED,            RED,            RED,                            MAGENT,                                 RED,                            RED,            RED,            RED,            RED,            RED,
                                                                        RED,            MAGENT,         MAGENT,                                 GREEN,          RED,            RED
    ),
};
