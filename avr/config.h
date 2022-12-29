/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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
//#include "config_common.h"

/* Key matrix configuration. */
#define MATRIX_ROW_PINS \
    {D4, C6, F5, F7}

#define MATRIX_COL_PINS \
    {B4, B5, E6, D7, F6}


/* Handedness. */
#define MASTER_RIGHT

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
//#define TAPPING_FORCE_HOLD_PER_KEY

// To use the handedness pin, resistors need to be installed on the PCB.
// If so, uncomment the following code, and undefine MASTER_RIGHT above.
//#define SPLIT_HAND_PIN GP29
// If you've soldered the handedness pull-up on the upper side instead of the
// left one, uncomment the following line.
//#define SPLIT_HAND_PIN_LOW_IS_LEFT // High -> right, Low -> left.

/* serial.c configuration (for split keyboard). */
//#ifndef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D2
//#endif

/* CRC. */
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED
#define CIRQUE_PINNACLE_TAP_ENABLE



