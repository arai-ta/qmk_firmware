/* Copyright 2021 ARAI Takashi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    CURSOR,
    SYMBOL,
    /*
    META
    */
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_MINUS,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_ENTER,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSHIFT,
        XXXXXXX,XXXXXXX,XXXXXXX,
                       KC_LGUI, LT(SYMBOL,KC_SPC), LT(CURSOR,KC_BSPC), KC_RCTL,
                                                                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
    ),
    [CURSOR] = LAYOUT(
        KC_ESC, LALT(KC_RGHT), LALT(KC_LEFT), KC_NO,   KC_NO,   KC_NO,   KC_PGUP, LGUI(KC_LBRACKET),LGUI(KC_RBRACKET), KC_NO,   KC_NO,
        KC_TAB, KC_NO,  KC_PGDN,KC_NO,  LGUI(KC_DOWN),  KC_LEFT,KC_DOWN,KC_UP,  KC_RIGHT,  KC_SCLN,KC_ENTER,
        KC_LSFT,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_LANG1,  KC_NO,  BL_DEC,BL_INC,BL_TOGG,  KC_RSHIFT,
        XXXXXXX,XXXXXXX,XXXXXXX,
                                _______,_______,_______,_______,
                                                                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
    ),
    [SYMBOL] = LAYOUT(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_LBRACKET,
        _______,_______,_______,_______,_______,_______,KC_GRV, KC_MINS,KC_EQL, KC_BSLS,KC_RBRACKET,
        KC_LSFT,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_QUOTE,
        XXXXXXX,XXXXXXX,XXXXXXX,
                                _______,_______,_______,_______,
                                                                XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}
