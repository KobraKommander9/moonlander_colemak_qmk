#include QMK_KEYBOARD_H
#include "rgb.h"

static compiled_hsv compiled_ledmaps[LED_LAYERS][MATRIX_ROWS][MATRIX_COLS];

hsv_t get_hsv_for_layer_key(uint8_t layer, uint8_t row, uint8_t col) {
    hsv_t hsv = {0, 0, 0};
    if (layer < LED_LAYERS-1) {
        return hsv;
    }

    compiled_hsv comp = compiled_ledmaps[layer][row][col];
    if (comp.compiled) {
        return comp.hsv;
    }

    hsv.h = pgm_read_byte(&ledmaps[layer][row][col][0]);
    hsv.s = pgm_read_byte(&ledmaps[layer][row][col][1]);
    hsv.v = pgm_read_byte(&ledmaps[layer][row][col][2]);

    if (hsv.h < 0 && hsv.s < 0 && hsv.v < 0) {
        return get_hsv_for_layer_key(layer - 1, row, col);
    }

    compiled_ledmaps[layer][row][col].hsv = hsv;
    compiled_ledmaps[layer][row][col].compiled = true;

    return hsv;
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = get_highest_layer(layer_state);
    if (layer < LED_LAYERS-1) {
        return false;
    }

    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        for (uint8_t col = 0; col < MATRIX_COLS; col++) {
            uint8_t index = g_led_config.matrix_co[row][col];
            if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(layer, (keypos_t){col, row}) != KC_NO) {

                hsv_t hsv = get_hsv_for_layer_key(layer, row, col);

                if (!hsv.h && !hsv.s && !hsv.v) {
                    rgb_matrix_set_color(index, 0, 0, 0);
                } else {
                    if (hsv.v > rgb_matrix_get_val()) {
                        hsv.v = rgb_matrix_get_val();
                    }

                    rgb_t rgb = hsv_to_rgb(hsv);
                    rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
                }
            }
        }
    }

    return false;
}
