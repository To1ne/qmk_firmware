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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_FL] = LAYOUT(KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,
                   KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
                   TO(_LL),KC_LCTL,KC_LALT,KC_LCMD,KC_LSFT,TO(_RL)
                  ),
    [_LL] = LAYOUT(_______,_______,_______,_______,_______,_______,
                   _______,_______,_______,_______,_______,_______,
                   _______,_______,_______,_______,_______,_______
                  ),
    [_RL] = LAYOUT(_______,_______,_______,_______,_______,RESET,
                   _______,_______,_______,_______,_______,_______,
                   _______,_______,_______,_______,_______,_______
                  ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(layer_state_is(_LL) ? KC__VOLUP   : KC_PGDOWN);
        } else {
            tap_code(layer_state_is(_LL) ? KC__VOLDOWN : KC_PGUP);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(layer_state_is(_RL) ? KC_MS_WH_RIGHT : KC_DOWN);
        } else {
            tap_code(layer_state_is(_RL) ? KC_MS_WH_LEFT  : KC_UP);
        }
    }
    return true;
}
