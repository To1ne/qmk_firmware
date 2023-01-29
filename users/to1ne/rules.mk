SRC += to1ne.c combos.c

COMBO_ENABLE = yes
NKRO_ENABLE = yes
#EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = yes

ifeq ($(strip $(KEYBOARD)),foostan/cornelius)
  #SRC += keymap_to1ne_4x12.c
endif
