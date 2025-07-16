#include QMK_KEYBOARD_H
#include "version.h"
#include "combos.h"
#include "keys.h"
#include "layers.h"
#include "tap_dance.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [COLEMAK] = LAYOUT_moonlander(
        KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LEFT,                                KC_RIGHT,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
        CW_TOGG,        KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           TO(SYMBOLS),                            KC_CAPS,        KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,
        KC_TAB,         HOME_A,         HOME_R,         HOME_S,         HOME_T,         KC_D,           KC_HYPR,                                KC_MEH,         KC_H,           HOME_N,         HOME_E,         HOME_I,         HOME_O,         KC_QUOTE,
        KC_LSFT,        KC_Z,           KC_X,           KC_C,           TD0,            KC_B,                                                                   KC_K,           KC_M,           KC_COMM,        KC_DOT,         KC_SLASH,       KC_RSFT,
        KC_LALT,        KC_LEFT,        KC_RIGHT,       KC_LGUI,        KC_GRAVE,                       TD1,                                    TD2,                            KC_LBRC,        KC_RBRC,        KC_UP,          KC_DOWN,        XXXXXXX,
                                                                        KC_DEL,         KC_BSPC,        TO(MOUSE),                              TD3,            KC_ENT,         KC_SPC
    ),
    [ARROWS] = LAYOUT_moonlander(
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        KC_PGDN,        KC_PGUP,        _______,        _______,        _______,
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
        _______,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           _______,                                _______,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
        KC_TAB,         QWRT_A,         QWRT_S,         QWRT_D,         QWRT_F,         KC_G,           KC_LBRC,                                KC_RBRC,        KC_H,           QWRT_J,         QWRT_K,         QWRT_L,         QWRT_SEMI,      KC_QUOTE,
        KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                                   KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSFT,
        _______,        _______,        _______,        _______,        KC_GRAVE,                       _______,                                _______,                        KC_DOWN,        KC_UP,          KC_LEFT,        KC_RIGHT,       _______,
                                                                        KC_SPACE,       KC_BSPC,        _______,                                TO(COLEMAK),    KC_ENTER,       KC_SPACE
    ),
    [MOUSE] = LAYOUT_moonlander(
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        _______,        _______,        _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        _______,        KC_MS_WH_UP,    _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,        KC_MS_WH_DOWN,  _______,                                _______,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,                                                                _______,        KC_MS_BTN1,     KC_MS_BTN2,     _______,        _______,        _______,
        _______,        _______,        _______,        _______,        _______,                        _______,                                _______,                        _______,        _______,        _______,        _______,        _______,
                                                                        _______,        _______,        _______,                                TO(COLEMAK),    _______,        _______
    ),
    [SYMBOLS] = LAYOUT_moonlander(
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        _______,        KC_CAPS,        KC_SCRL,        KC_NUM,         _______,        _______,
        _______,        _______,        _______,        S(KC_PGDN),     S(KC_PGUP),     _______,        _______,                                _______,        _______,        KC_7,           KC_8,           KC_9,           _______,        _______,
        _______,        KC_PSCR,        _______,        KC_END,         KC_HOME,        _______,        _______,                                _______,        _______,        KC_4,           KC_5,           KC_6,           _______,        _______,
        _______,        _______,        _______,        _______,        _______,        _______,                                                                _______,        KC_1,           KC_2,           KC_3,           _______,        _______,
        _______,        _______,        _______,        _______,        _______,                        _______,                                _______,                        KC_0,           _______,        _______,        _______,        _______,
                                                                        MO(FUNCS),      _______,        _______,                                _______,        _______,        TO(COLEMAK)
    ),
    [FUNCS] = LAYOUT_moonlander(
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_F20,        KC_F24,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_F19,        KC_F23,
        _______,        _______,        _______,        _______,        _______,        _______,        _______,                                _______,        KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_F18,        KC_F22,
        _______,        _______,        _______,        _______,        _______,        _______,                                                                KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_F17,        KC_F21,
        _______,        _______,        _______,        _______,        _______,                        _______,                                _______,                        _______,        _______,        _______,        _______,        _______,
                                                                        _______,        _______,        _______,                                TO(COLEMAK),    _______,        KC_0
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
        case VRSN:
            SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
            return false;
        }
    }
    return true;
}
