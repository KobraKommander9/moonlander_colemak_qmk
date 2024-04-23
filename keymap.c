#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LEFT,                                        KC_RIGHT,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    CAPS_WORD,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           TT(1),                                          TT(1),          KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_BSLASH,
    KC_TAB,         HOME_A,         HOME_R,         HOME_S,         HOME_T,         KC_D,           KC_HYPR,                                        KC_MEH,         KC_H,           HOME_N,         HOME_E,         HOME_I,         HOME_O,         KC_QUOTE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           TD(DANCE_0),    KC_B,                                                           KC_K,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    KC_LALT,        KC_LEFT,        KC_RIGHT,       KC_LGUI,        KC_GRAVE,       TD(DANCE_1),                                                    TD(DANCE_4),    KC_LBRACKET,    KC_RBRACKET,    KC_UP,          KC_DOWN,        TD(DANCE_3),
    OSM(MOD_LSFT),  KC_BSPACE,      TD(DANCE_2),                    TD(DANCE_5),    KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC,        KC_LBRACKET,    KC_TRANSPARENT, KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, DT_UP,          DT_DOWN,        DT_PRNT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(LSFT(KC_R)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                 KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_NEXT_TRACK,KC_MEDIA_PREV_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_TAB,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_LBRACKET,                                                                    KC_RBRACKET,    KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      MT(MOD_LCTL, KC_Z),MT(MOD_LALT, KC_X),MT(MOD_LGUI, KC_C),KC_V,           KC_B,                                           KC_N,           KC_M,           MT(MOD_RGUI, KC_COMMA),MT(MOD_LALT, KC_DOT),MT(MOD_RCTL, KC_SLASH),KC_RSHIFT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_DOWN,        KC_UP,          KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT,
    KC_SPACE,       KC_BSPACE,      KC_TRANSPARENT,                 TD(DANCE_6),    KC_ENTER,       KC_SPACE
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {74,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {131,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {131,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {219,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {74,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {131,255,255}, {188,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {188,255,255}, {74,255,255}, {74,255,255}, {252,255,232}, {74,255,255}, {131,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {74,255,255}, {131,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {74,255,255}, {74,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {74,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {131,255,255}, {188,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255}, {219,255,255} },

    [1] = { {219,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {188,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {74,255,255}, {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {252,255,232}, {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {219,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {188,255,255}, {188,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {74,255,255}, {188,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {219,255,255}, {188,255,255}, {219,255,255}, {219,255,255}, {74,255,255}, {219,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232} },

    [2] = { {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {131,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {131,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {131,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {131,255,255}, {252,255,232}, {252,255,232}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232} },

    [3] = { {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {41,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {41,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {219,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {234,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {152,255,255}, {234,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {152,255,255}, {152,255,255}, {74,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {219,255,255} },

    [4] = { {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {74,255,255}, {131,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {131,255,255}, {131,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {74,255,255}, {131,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {74,255,255}, {74,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {74,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {74,255,255}, {252,255,232}, {252,255,232}, {131,255,255}, {252,255,232}, {74,255,255}, {188,255,255}, {252,255,232}, {131,255,255}, {252,255,232}, {74,255,255}, {188,255,255}, {252,255,232}, {131,255,255}, {252,255,232}, {74,255,255}, {188,255,255}, {74,255,255}, {131,255,255}, {252,255,232}, {74,255,255}, {188,255,255}, {74,255,255}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {188,255,255}, {252,255,232} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return;
  }
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    }
    return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HOME_R:
            return TAPPING_TERM - 20;
        case HOME_S:
            return TAPPING_TERM - 75;
        case HOME_E:
            return TAPPING_TERM - 75;
        case HOME_I:
            return TAPPING_TERM - 20;
        default:
            return TAPPING_TERM;
    }
}


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
