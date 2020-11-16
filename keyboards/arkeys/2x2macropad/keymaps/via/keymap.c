#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_2x2(
        KC_7, KC_8,
        KC_4, KC_5
    ),

    [1] = LAYOUT_ortho_2x2(
        RESET, KC_TRNS,
        KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT_ortho_2x2(
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,
    ),

    [3] = LAYOUT_ortho_2x2(
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS
    ),

};
