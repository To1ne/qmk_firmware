// nothing here yet

#include "to1ne.h"
#include "version.h"
#include <stdbool.h>

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case T1_VERSION: // Output firmware info.
            if (record->event.pressed) {
                SEND_STRING(QMK_KEYBOARD ":" QMK_KEYMAP " @ " QMK_VERSION " | " QMK_BUILDDATE);
            }
            break;
    }
    return true;
}
