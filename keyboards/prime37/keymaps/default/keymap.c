// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    CURSOR,
    SYMBOL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ - │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ S │ D │ F │ G │ H │ J │ K │ L │ : │Ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │Sft│
     * └───┴───┴───┼───┼───┼───┼───┼───┴───┴───┴───┘
     *             │   │   │   │   │
     *             └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT(
 LSFT_T(KC_Q),  KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_MINUS,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_ENTER,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,
                       KC_LGUI,LT(SYMBOL,KC_SPC),MO(CURSOR),LCTL_T(KC_BSPC)
    ),
    [CURSOR] = LAYOUT(
        KC_ESC, LALT(KC_RGHT), LALT(KC_LEFT), KC_NO,   KC_NO,   KC_NO,   KC_PGUP, LGUI(KC_RBRC),LGUI(KC_LBRC), KC_NO,   KC_BSPC,
        KC_TAB, KC_NO,  KC_PGDN,KC_NO,  LGUI(KC_DOWN),  KC_LEFT,KC_DOWN,KC_UP,  KC_RIGHT,  KC_SCLN,_______,
        KC_LSFT,KC_NO,  KC_NO,  KC_NO,  KC_LNG2,KC_LNG1,KC_MUTE,KC_VOLD,KC_VOLU,_______,  _______,
                                _______,_______,_______,_______
    ),
    [SYMBOL] = LAYOUT(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_LBRC,
        _______,_______,_______,_______,_______,_______,KC_GRV, KC_MINS,KC_EQL, KC_BSLS,KC_RBRC,
        KC_LSFT,_______,_______,_______,KC_LNG2,KC_LNG1,BL_TOGG,BL_DOWN,BL_UP,  BL_BRTG,KC_QUOTE,
                                _______,_______,_______,_______
    )
};

