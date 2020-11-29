#include QMK_KEYBOARD_H

enum layers {
  NORMAL_LAYER = 0,
  // MEDIA_LAYER,
};

/* Define the tap dance actions for the french characters */
qk_tap_dance_action_t tap_dance_actions[] = {
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [NORMAL_LAYER] = LAYOUT(KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H, KC_I, KC_J),

    //    [NORMAL_LAYER] = LAYOUT(KC_F13, KC_F14, KC_F15, KC_F16, KC_F17,
    //                            KC_F18, KC_F19, KC_F20, KC_F21, KC_F22),

};

/* The encoder_update_user is a function.
 * It'll be called by QMK every time you turn the encoder.
 *
 * The index parameter tells you which encoder was turned. If you only have
 * one encoder, the index will always be zero.
 *
 * The clockwise parameter tells you the direction of the encoder. It'll be
 * true when you turned the encoder clockwise, and false otherwise.
 */
void encoder_update_user(uint8_t index, bool clockwise) {
  /* With an if statement we can check which encoder was turned. */
  if (index == 0) { /* First encoder */
    /* And with another if statement we can check the direction. */
    if (clockwise) {
      /* This is where the actual magic happens: this bit of code taps on the
         Page Down key. You can do anything QMK allows you to do here.
         You'll want to replace these lines with the things you want your
         encoders to do. */
      tap_code(KC_MS_WH_DOWN);
    } else {
      /* And likewise for the other direction, this time Page Down is pressed. */
      tap_code(KC_MS_WH_UP);
    }
  /* You can copy the code and change the index for every encoder you have. Most
     keyboards will only have two, so this piece of code will suffice. */
  } else if (index == 1) { /* Second encoder */
    if (clockwise) {
      tap_code(KC_UP);
    } else {
      tap_code(KC_DOWN);
    }
  }
}
