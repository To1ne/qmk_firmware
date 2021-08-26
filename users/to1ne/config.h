#pragma once

#ifndef __ASSEMBLER__

enum combos {
  COMBO_BACKSPACE,
  COMBO_DELETE,
  COMBO_SPACE,
  COMBO_ENTER,
  COMBO_TAB,

  COMBO_COUNTE // COMBO_COUNT needs to be a macro
};

#undef COMBO_COUNT
#define COMBO_COUNT COMBO_COUNTE

#endif /* __ASSEMBLER__ */
