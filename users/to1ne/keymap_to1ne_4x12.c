#include "to1ne.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
      KC_ESC,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,     KC_U,    KC_Y, KC_SCLN,KC_BSPC,
      KC_TAB,    LG_A,    LA_R,    LS_S,    LC_T,    KC_D,    KC_H,    RC_N,     RS_E,    RA_I,    RG_O,KC_QUOT,
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_ENT,
     KC_LGUI, KC_LCTL, KC_LALT,   MO(1),   MO(2),  KC_SPC,  KC_ENT,   MO(1),    MO(2), KC_RGUI, KC_RCTL,KC_RALT
  ),

[1] = LAYOUT(
     KC_TILD,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
     _______, LG_XXXX, LA_XXXX, LS_XXXX, LC_XXXX, XXXXXXX, KC_LEFT, RC_DOWN,   RS_UP, RA_RGHT, RG_XXXX, XXXXXXX,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
     _______, _______, _______,   MO(1),   MO(3), _______, _______,   MO(1),   MO(3), _______, _______, _______
  ),

[2] = LAYOUT(
      KC_GRV, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_DEL,
     _______, LG_XXXX, LA_XXXX, LS_XXXX, LC_XXXX, XXXXXXX, KC_MINS,  RC_EQL, RS_LCBR, RA_RCBR, RG_PIPE,  KC_GRV,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, _______,
     _______, _______, _______,   MO(3),   MO(2), _______, _______,   MO(3),   MO(2), _______, _______, _______
  ),

[3] = LAYOUT(
       RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, _______, _______,   MO(3),   MO(3), _______, _______,   MO(3),   MO(3), _______, _______, _______
  ),
};
