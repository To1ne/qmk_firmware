SRC += to1ne.c

NKRO_ENABLE = yes
#EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = yes

# Change the tapping term with DT_UP & DT_DOWN
# To print it, press DT_PRNT
# https://docs.qmk.fm/tap_hold#dynamic-tapping-term
DYNAMIC_TAPPING_TERM_ENABLE = yes

ifeq ($(strip $(KEYBOARD)),foostan/cornelius)
  #SRC += keymap_to1ne_4x12.c
endif
