#include QMK_KEYBOARD_H

const uint16_t PROGMEM combo_backspace[] = {KC_Y, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo_delete[] = {KC_9, KC_0, COMBO_END};
const uint16_t PROGMEM combo_space[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_enter[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_Q, KC_W, COMBO_END};

combo_t key_combos[] = {
  COMBO(combo_backspace, KC_BSPC),
  COMBO(combo_delete, KC_DEL),
  COMBO(combo_space, KC_SPC),
  COMBO(combo_enter, KC_ENT),
  COMBO(combo_tab, KC_TAB),
};
