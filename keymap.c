#include "kobra.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [COLEMAK] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LEFT,                                        KC_RIGHT,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    CAPS_WORD,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           TT(1),                                          TT(1),          KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_BSLASH,
    KC_TAB,         HOME_A,         HOME_R,         HOME_S,         HOME_T,         KC_D,           KC_HYPR,                                        KC_MEH,         KC_H,           HOME_N,         HOME_E,         HOME_I,         HOME_O,         KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           TD0,            KC_B,                                                                           KC_K,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    KC_LALT,        KC_LEFT,        KC_RIGHT,       KC_LGUI,        KC_GRAVE,                       TD1,                                            TD4,            KC_LBRACKET,    KC_RBRACKET,    KC_UP,          KC_DOWN,        TD3,
                                                                    OS_LSFT,        KC_BSPACE,      TD2,                                            TD5,            KC_ENTER,       KC_SPACE
  ),
  [SYMBOLS] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          _______,                                        _______,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    _______,        KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        _______,                                        _______,        KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    _______,        _______,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       _______,                                        _______,        KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     _______,
    _______,        _______,        KC_CIRC,        KC_LBRACKET,    _______,        KC_TILD,                                                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      _______,
    _______,        KC_COMMA,       _______,        _______,        _______,                        _______,                                        _______,                        _______,        KC_DOT,         KC_0,           KC_EQUAL,       _______,
    _______,        _______,        _______,                                                                                                        _______,        _______,        _______
  ),
  [ARROWS] = LAYOUT_moonlander(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        DT_UP,          DT_DOWN,        DT_PRNT,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        C_REFRESH,      _______,        _______,        _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,                                                                        _______,        TO(0),          _______,        _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,                        _______,                                        _______,                        _______,        _______,        _______,        _______,        _______,
                                                                    KC_LALT,        _______,        _______,                                        _______,        _______,        _______
  ),
  [MEDIA] = LAYOUT_moonlander(
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        _______,        _______,        _______,        _______,        RESET,
    _______,        _______,        _______,        S_BRT_DN,       S_BRT_UP,       _______,        _______,                                        _______,        M_MUTE,         M_VOL_DN,       M_VOL_UP,       _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,        _______,                                        _______,        _______,        M_NEXT,         M_PREV,         _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,        _______,                                                                        _______,        M_PLAY,         M_STOP,         _______,        _______,        _______,
    _______,        _______,        _______,        _______,        _______,                        _______,                                        TO(0),                          _______,        _______,        _______,        _______,        _______,
                                                                    _______,        _______,        _______,                                        _______,        _______,        _______
  ),
  [QWERTY] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           _______,                                        _______,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    _______,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           _______,                                        _______,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_TAB,         QWRT_A,         QWRT_S,         QWRT_D,         QWRT_F,         KC_G,           KC_LBRACKET,                                    KC_RBRACKET,    KC_H,           QWRT_J,         QWRT_K,         QWRT_L,         QWRT_SEMI,      KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    _______,        _______,        _______,        _______,        KC_GRAVE,                       _______,                                        _______,                        KC_DOWN,        KC_UP,          KC_LEFT,        KC_RIGHT,       _______,
                                                                    KC_SPACE,       KC_BSPACE,      _______,                                        TD6,            KC_ENTER,       KC_SPACE
  ),
};

const ledmap PROGMEM ledmaps[] = {
    [COLEMAK] = {
        // left
        {74,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255},
        {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {131,255,255},
        {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {131,255,255},
        {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {219,255,255},
        {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {74,255,255},
        {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232},
        {131,255,255}, {188,255,255}, {219,255,255},
        {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255},

        // right
        {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {188,255,255},
        {74,255,255}, {74,255,255}, {252,255,232}, {74,255,255}, {131,255,255},
        {74,255,255}, {252,255,232}, {252,255,232}, {74,255,255}, {131,255,255},
        {74,255,255}, {252,255,232}, {252,255,232}, {74,255,255}, {74,255,255},
        {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {74,255,255},
        {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232},
        {131,255,255}, {188,255,255}, {219,255,255},
        {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}
    },

    [SYMBOLS] = {
        // left
        {219,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {188,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {74,255,255},
        {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {252,255,232},
        {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255},
        {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255},
        {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255},
        {219,255,255}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},

        // right
        {188,255,255}, {188,255,255}, {252,255,232}, {252,255,232}, {252,255,232},
        {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255},
        {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255},
        {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {74,255,255},
        {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {219,255,255},
        {188,255,255}, {219,255,255}, {219,255,255}, {74,255,255},
        {219,255,255}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}
    },

    [ARROWS] = {
        // left
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232},
        {74,255,255}, {188,255,232}, {188,255,232}, {252,255,232},

        // right
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {131,255,255}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {131,255,255}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {131,255,255}, {74,255,255}, {252,255,232},
        {252,255,232}, {252,255,232}, {131,255,255}, {252,255,232},
        {252,255,232}, {74,255,255}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}
    },

    [MEDIA] = {
        // left
        {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {41,255,255}, {152,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {41,255,255}, {152,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255},

        // right
        {219,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255},
        {234,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {152,255,255},
        {234,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {152,255,255},
        {152,255,255}, {74,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {152,255,255}, {152,255,255},
        {152,255,255}, {152,255,255}, {152,255,255}, {219,255,255}
    },

    [QWERTY] = {
        // left
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {74,255,255}, {131,255,255}, {74,255,255}, {252,255,232},
        {252,255,232}, {131,255,255}, {131,255,255}, {74,255,255}, {252,255,232},
        {252,255,232}, {74,255,255}, {131,255,255}, {74,255,255}, {252,255,232},
        {252,255,232}, {74,255,255}, {74,255,255}, {74,255,255}, {252,255,232},
        {252,255,232}, {74,255,255}, {74,255,255}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},

        // right
        {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {74,255,255}, {252,255,232}, {252,255,232}, {131,255,255},
        {252,255,232}, {74,255,255}, {188,255,255}, {252,255,232}, {131,255,255},
        {252,255,232}, {74,255,255}, {188,255,255}, {252,255,232}, {131,255,255},
        {252,255,232}, {74,255,255}, {188,255,255}, {74,255,255}, {131,255,255},
        {252,255,232}, {74,255,255}, {188,255,255}, {74,255,255},
        {252,255,232}, {252,255,232}, {252,255,232},
        {252,255,232}, {252,255,232}, {188,255,255}, {252,255,232}
    },
};

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[7];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: layer_on(2); break;
        case DOUBLE_TAP: layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: layer_off(2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LGUI(LSFT(KC_4))));
        tap_code16(LCTL(LGUI(LSFT(KC_4))));
        tap_code16(LCTL(LGUI(LSFT(KC_4))));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LGUI(LSFT(KC_4))));
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_TAP: register_code16(LGUI(LSFT(KC_R))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LGUI(LSFT(KC_4)))); register_code16(LCTL(LGUI(LSFT(KC_4))));
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_TAP: unregister_code16(LGUI(LSFT(KC_R))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_4)))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LGUI);
        tap_code16(KC_LGUI);
        tap_code16(KC_LGUI);
    }
    if(state->count > 3) {
        tap_code16(KC_LGUI);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_LGUI); break;
        case SINGLE_HOLD: register_code16(KC_LGUI); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LGUI); register_code16(KC_LGUI);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_LGUI); break;
        case SINGLE_HOLD: unregister_code16(KC_LGUI); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LGUI); break;
    }
    dance_state[2].step = 0;
}
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: layer_move(1); break;
        case DOUBLE_TAP: layer_move(4); break;
        case DOUBLE_SINGLE_TAP: layer_move(1); break;
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: layer_move(3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RALT);
        tap_code16(KC_RALT);
        tap_code16(KC_RALT);
    }
    if(state->count > 3) {
        tap_code16(KC_RALT);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_RALT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RALT); register_code16(KC_RALT);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_RALT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RALT); break;
    }
    dance_state[5].step = 0;
}
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
    }
    dance_state[6].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_6_finished, dance_6_reset),
};
