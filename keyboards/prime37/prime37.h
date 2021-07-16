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

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, \
    k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, \
    k300, k301, k302, k303, k304, k305, k306, k307, k308, k309, \
    k400, k401, k402, k403, k404, k405, k406, k407, k408, k409  \
) { \
    { k100, k101, k102, k103, k104, k105, k106, k107, k108, k109 }, \
    { k200, k201, k202, k203, k204, k205, k206, k207, k208, k209 }, \
    { k300, k301, k302, k303, k304, k305, k306, k307, k308, k309 }, \
    { KC_NO,KC_NO,KC_NO,k403, k404, k405, KC_NO,KC_NO,KC_NO,KC_NO }  \
}
