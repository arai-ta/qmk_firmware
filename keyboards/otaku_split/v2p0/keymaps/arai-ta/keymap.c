/* Copyright 2020 takashiski
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


enum layers{
	BASE=0,
	CURSOR,
	FUNCTION
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
			KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,             KC_6,    KC_7,    RGB_VAD,    KC_9,    KC_0,    KC_MINUS,KC_EQL,  KC_JYEN, KC_BSPC,
			KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,             KC_Y,    KC_U,    RGB_VAI,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,
			KC_LCTRL,KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,             RGB_TOG, KC_J,    RGB_MODE_FORWARD,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS,
			KC_LSHIFT,KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,                      KC_B,    KC_N,    RGB_TOG,    KC_COMM, KC_DOT,  KC_SLASH,KC_RO,   KC_RSHIFT,
			LT(FUNCTION,KC_BSPC),KC_LALT,KC_LGUI,KC_LGUI, KC_LANG2,KC_ENT,  KC_SPC,   LT(CURSOR,KC_BSPC),KC_ENT,KC_LANG1,KC_SPC,  KC_RGUI, KC_RALT, KC_PGDN, KC_PGUP
  ),
  [CURSOR] = LAYOUT(
			_______, LGUI(KC_UP), KC_NO, KC_NO, LGUI(KC_RIGHT), KC_NO, KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   LGUI(KC_LEFT), KC_NO, KC_NO, KC_NO, KC_NO,
			_______, KC_NO,   LALT(KC_RGHT), LALT(KC_LEFT), KC_NO, KC_NO, KC_NO,    KC_NO,   KC_PGUP, LGUI(KC_NUHS),LGUI(KC_RBRC), KC_NO,  KC_NO,   KC_NO,   _______,
			_______, KC_NO,   KC_NO,   KC_PGDN, KC_NO,   LGUI(KC_DOWN), KC_NO,      KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,  KC_NO, KC_NO,   KC_NO,
			_______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_NO,                     KC_NO,   KC_NO,   KC_NO,   KC_VOLD, KC_VOLU, KC_NO,   KC_NO,   _______,
			_______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [FUNCTION] = LAYOUT(
			LGUI(LCTL(KC_Q)), _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______,
			_______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, _______,              _______, _______, _______, _______, _______, _______, _______, _______,
			_______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, _______,              _______, _______, _______, _______, _______, _______, _______,
			_______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,                       _______, _______, _______, _______, _______, _______, _______, _______,
			_______, _______, _______, _______, _______, _______, LCTL(LGUI(KC_SPC)),   _______, _______, _______, _______, _______, _______, _______, _______
  )
};
