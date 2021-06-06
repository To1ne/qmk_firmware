/* Copyright 2021 Toon Claes
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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    iotcl
#define PRODUCT         Marconi16

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 6

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { C6, D7, E6 }
#define MATRIX_COL_PINS { B3, B1, F7, F6, F5, F4 }

#define ENCODERS_PAD_A { B4, B2 }
#define ENCODERS_PAD_B { B5, B6 }
#define ENCODER_RESOLUTION 1
