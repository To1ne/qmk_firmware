#include QMK_KEYBOARD_H


enum layers {
  PAGE_LAYER = 0,
  ARROW_LAYER,
};

/* Define the tap dance actions for the french characters */
qk_tap_dance_action_t tap_dance_actions[] = {
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [PAGE_LAYER] = LAYOUT(TG(ARROW_LAYER)),
    [ARROW_LAYER] = LAYOUT(TG(ARROW_LAYER))
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
  /* With an if statement we can check which layer we're on. */
  if (layer_state_is(PAGE_LAYER)) {
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
  } else if (layer_state_is(ARROW_LAYER)) {
    if (clockwise) {
      tap_code(KC_DOWN);
    } else {
      tap_code(KC_UP);
    }
  }
}
