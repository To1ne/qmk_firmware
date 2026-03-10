#include "to1ne.h"

/* Layout with home row mods */
#define LAYOUT_HOMEMODS(                                                        \
        K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
        K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
        K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
        K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311  \
) \
LAYOUT( \
        K000,       K001,        K002,        K003,        K004,  K005, K006,       K007,        K008,        K009,        K010,  K011, \
        K100,LGUI_T(K101),LALT_T(K102),LSFT_T(K103),LCTL_T(K104), K105, K106,RCTL_T(K107),RSFT_T(K108),RALT_T(K109),RGUI_T(K110), K111, \
        K200,       K201,        K202,        K203,        K204,  K205, K206,       K207,        K208,        K209,        K210,  K211, \
        K300,       K301,        K302,        K303,        K304,  K305, K306,       K307,        K308,        K309,        K310,  K311 \
)

enum layer_names {
    _COLEMAK,
    _QWERTY,
    _NUMBERS,
    _SYMBOLS,
    _FUNCTIONS,
};

#define MO_NUM  MO(_NUMBERS)
#define MO_SYM  MO(_SYMBOLS)
#define MO_FUNC MO(_FUNCTIONS)
#define DF_CLMK PDF(_COLEMAK)
#define DF_QWRT PDF(_QWERTY)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_COLEMAK] = LAYOUT_HOMEMODS(
/* Colemak */
      KC_ESC,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,     KC_U,    KC_Y, KC_SCLN, KC_BSPC,
      KC_TAB,    KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,     KC_E,    KC_I,    KC_O, KC_QUOT,
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_ENT,
     KC_LGUI, KC_LCTL, KC_LALT,  MO_NUM,  MO_SYM,  KC_SPC,  KC_ENT,   MO_NUM,  MO_SYM, KC_RGUI, KC_RCTL, KC_RALT
),

[_QWERTY] = LAYOUT_HOMEMODS(
/* Qwerty */
      KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,   KC_P,  KC_BSPC,
      KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,     KC_K,    KC_L, KC_SCLN, KC_QUOT,
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
     KC_LGUI, KC_LCTL, KC_LALT,  MO_NUM,  MO_SYM,  KC_SPC,  KC_ENT,  MO_NUM,   MO_SYM, KC_RGUI, KC_RCTL, KC_RALT
  ),

[_NUMBERS] = LAYOUT_HOMEMODS(
/* Numbers & Arrows */
     KC_TILD,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,     KC_8,    KC_9,    KC_0,  KC_DEL,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,    KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, _______,
     _______, _______, _______,  MO_NUM, MO_FUNC, _______, _______,   MO_NUM, MO_FUNC, _______, _______, _______
  ),

[_SYMBOLS] = LAYOUT_HOMEMODS(
/* Symbols */
      KC_GRV, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, KC_PIPE, KC_GRV,
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, _______,
     _______, _______, _______, MO_FUNC,  MO_SYM, _______, _______, MO_FUNC, MO_SYM, _______, _______, _______
  ),

[_FUNCTIONS] = LAYOUT_HOMEMODS(
/* Function + System */
     QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, QK_RBT,
      KC_F11, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, DT_UP,
      KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DT_DOWN,
     T1_VERS, DF_CLMK, DF_QWRT, MO_FUNC, MO_FUNC, _______, _______, MO_FUNC, MO_FUNC, _______, _______, DT_PRNT
  ),
};

// Local Variables:
// mode: c
// End:
