/* Copyright 2019 zk-phi
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
#include "keymap_jp.h"

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

enum layers {
    DEFAULT,
    MEET,
    ZOOM,
    ADJUST,
    RGBMODE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEFAULT] = LAYOUT(
        LT(ADJUST,KC__MUTE),    KC__VOLDOWN, KC__VOLUP,
        MO(MEET),               KC_BRMD,     KC_BRMU
    ),
    [MEET] = LAYOUT(
        MO(ZOOM), _______,   _______,
        _______,  LGUI(KC_D),LGUI(KC_E)
    ),
    [ZOOM] = LAYOUT(
        _______, _______,    _______,
        _______, SGUI(KC_A), SGUI(KC_V)
    ),
    [ADJUST] = LAYOUT(
        _______,        RGB_HUD, RGB_HUI,
        MO(RGBMODE),    RGB_VAD, RGB_VAI
    ),
    [RGBMODE] = LAYOUT(
        _______, RGB_MODE_FORWARD,  RGB_MODE_RAINBOW,
        _______, RGB_MODE_GRADIENT, RGB_TOG
    )
};
