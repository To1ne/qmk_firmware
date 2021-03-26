#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x107C
#define PRODUCT_ID      0x2078
#define DEVICE_VER      0x0001
#define MANUFACTURER    to1ne
#define PRODUCT         Rot8
#define DESCRIPTION     Rot-eight

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

/* key matrix pins */
#define MATRIX_ROW_PINS { B1 }
#define MATRIX_COL_PINS { F6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Tap dancing params */
#define TAPPING_TERM 250

/* key combination for command */
/* DISABLED
#define IS_COMMAND() ( \
   get_mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
*/


#define ENCODERS_PAD_A { D7 }
#define ENCODERS_PAD_B { D4 }
#define ENCODER_RESOLUTION 1
