#include "to1ne.h"

/* Layout with home row mods */
#define LAYOUT_HOMEMODS(                                                        \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311  \
) \
{ \
	{ K000,       K001,        K002,        K003,        K004,  K005, K006,       K007,        K008,        K009,        K010,  K011 }, \
	{ K100,LGUI_T(K101),LALT_T(K102),LSFT_T(K103),LCTL_T(K104), K105, K106,RCTL_T(K107),RSFT_T(K108),RALT_T(K109),RGUI_T(K110), K111 }, \
	{ K200,       K201,        K202,        K203,        K204,  K205, K206,       K207,        K208,        K209,        K210,  K211 }, \
	{ K300,       K301,        K302,        K303,        K304,  K305, K306,       K307,        K308,        K309,        K310,  K311 } \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_HOMEMODS(
      KC_ESC,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,     KC_U,    KC_Y, KC_SCLN, KC_BSPC,
      KC_TAB,    KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,     KC_E,    KC_I,    KC_O, KC_QUOT,
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_ENT,
     KC_LGUI, KC_LCTL, KC_LALT,   MO(1),   MO(2),  KC_SPC,  KC_ENT,   MO(1),    MO(2), KC_RGUI, KC_RCTL, KC_RALT
  ),

[1] = LAYOUT_HOMEMODS(
     KC_TILD,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
     _______, _______, _______,   MO(1),   MO(3), _______, _______,   MO(1),   MO(3), _______, _______, _______
  ),

[2] = LAYOUT_HOMEMODS(
      KC_GRV, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_DEL,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, KC_PIPE, KC_GRV,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, _______,
     _______, _______, _______,   MO(3),   MO(2), _______, _______,   MO(3),   MO(2), _______, _______, _______
  ),

[3] = LAYOUT_HOMEMODS(
       RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, _______, _______,   MO(3),   MO(3), _______, _______,   MO(3),   MO(3), _______, _______, _______
  ),
};
