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

#include QMK_KEYBOARD_H

#define _FL 0
#define _LL 1
#define _RL 2

 enum layers {
     _TANUKI,
     _OBS,
     _FUNCTION,
     _SYSTEM,
 };

#define TANUKI TO(_TANUKI)
#define OBS    TO(_OBS)
#define FUNCT  TO(_FUNCTION)
#define SYSTEM TO(_SYSTEM)

enum custom_keycodes {
    TC_LFKN = SAFE_RANGE,  // Left knob
    TC_RGKN,               // Right knob

    TC_APPR, // Approve
    TC_MERG, // Merge
    TC_UASS, // Unassign Reviewer
    TC_DBAP, // Database Approve
    TC_UNSB, // Unsubscribe
    TC_MUTE,
};

static bool left_knob_toggle = false;
static bool right_knob_toggle = false ;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_TANUKI] =
    LAYOUT(TC_APPR,TC_MERG,TC_UASS,TC_DBAP,TC_UNSB,C(KC_ENT),
           _______,_______,_______,_______,_______,_______,
           TC_LFKN,TANUKI ,OBS,    FUNCT,  SYSTEM, TC_RGKN
           ),
    [_OBS] =
    LAYOUT(_______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______,
           _______,_______,_______,_______,_______,_______
           ),
    [_FUNCTION] =
    LAYOUT(KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,
           KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
           _______,_______,_______,_______,_______,_______
           ),
    [_SYSTEM] =
    LAYOUT(TC_MUTE,KC_MPRV,KC_MPLY,KC_MNXT,_______,RESET,
           _______,KC_MRWD,_______,KC_MFFD,_______,_______,
           _______,_______,_______,_______,_______,_______
           ),
};

static bool process_record_pressed_user(uint16_t keycode) {
    switch (keycode) {
    case TC_LFKN: left_knob_toggle = !left_knob_toggle; break;
    case TC_RGKN: right_knob_toggle = !right_knob_toggle; break;

    case TC_APPR: SEND_STRING("/approve\n"); break;
    case TC_MERG: SEND_STRING("/merge\n"); break;
    case TC_DBAP: SEND_STRING("/unassign_reviewer me\n"); break;
    case TC_UASS: SEND_STRING("/label ~\"database::approved\"\n"); break;
    case TC_UNSB: SEND_STRING("/unsubscribe\n"); break;
    }

    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
    case TC_MUTE:
        SEND_STRING(SS_TAP(X__MUTE));
        return true;
    }

    if (record->event.pressed) {
        return process_record_pressed_user(keycode);
    }

    return true;
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(left_knob_toggle ? KC_RIGHT : KC_DOWN);
        } else {
            tap_code(left_knob_toggle ? KC_LEFT : KC_UP);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(right_knob_toggle ? KC_MS_WH_RIGHT : KC_MS_WH_DOWN);
        } else {
            tap_code(right_knob_toggle ? KC_MS_WH_LEFT : KC_MS_WH_UP);
        }
    }
    return true;
}
