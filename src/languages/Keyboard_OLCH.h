#include <KeyboardUTF8.h>

// Ol Chiki

const UnicodeLookup kbdolch[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x1c7b, 0x35 | MOD_SHIFT},	// Ol Chiki Relaa
  {0x1c7c, 0x2d | MOD_SHIFT},	// Ol Chiki Phaarkaa
  {0x1c5d, 0xa0 | MOD_SHIFT},	// Ol Chiki Letter Ang
  {0x1c72, 0x2f | MOD_SHIFT},	// Ol Chiki Letter Err
  {0x1c67, 0x30 | MOD_SHIFT},	// Ol Chiki Letter Iny
  {0x1c7a, 0x33 | MOD_SHIFT},	// Ol Chiki Mu-Gaahlaa Ttuddaag
  {0x1c7d, 0x1d | MOD_SHIFT},	// Ol Chiki Ahad
  {0x1c6c, 0x06 | MOD_SHIFT},	// Ol Chiki Letter Unn
  {0x1c76, 0x05 | MOD_SHIFT},	// Ol Chiki Letter Ov
  {0x1c7f, 0x36 | MOD_SHIFT},	// Ol Chiki Punctuation Double Mucaad
  {0x1c7e, 0x37 | MOD_SHIFT},	// Ol Chiki Punctuation Mucaad
  {0x1c51, 0x1e},	// Ol Chiki Digit One
  {0x1c52, 0x1f},	// Ol Chiki Digit Two
  {0x1c53, 0x20},	// Ol Chiki Digit Three
  {0x1c54, 0x21},	// Ol Chiki Digit Four
  {0x1c55, 0x22},	// Ol Chiki Digit Five
  {0x1c56, 0x23},	// Ol Chiki Digit Six
  {0x1c57, 0x24},	// Ol Chiki Digit Seven
  {0x1c58, 0x25},	// Ol Chiki Digit Eight
  {0x1c59, 0x26},	// Ol Chiki Digit Nine
  {0x1c50, 0x27},	// Ol Chiki Digit Zero
  {0x1c5f, 0x08},	// Ol Chiki Letter Laa
  {0x1c75, 0x1c},	// Ol Chiki Letter Ob
  {0x1c66, 0xa0},	// Ol Chiki Letter Ih
  {0x1c5c, 0x0c},	// Ol Chiki Letter Ag
  {0x1c6b, 0x12},	// Ol Chiki Letter Ud
  {0x1c61, 0x13},	// Ol Chiki Letter Aaj
  {0x1c70, 0x2f},	// Ol Chiki Letter Edd
  {0x1c79, 0x30},	// Ol Chiki Gaahlaa Ttuddaag
  {0x1c73, 0x04},	// Ol Chiki Letter Lo
  {0x1c6e, 0x16},	// Ol Chiki Letter Le
  {0x1c5a, 0x07},	// Ol Chiki Letter La
  {0x1c64, 0x09},	// Ol Chiki Letter Li
  {0x1c69, 0x0a},	// Ol Chiki Letter Lu
  {0x1c6f, 0x0b},	// Ol Chiki Letter Ep
  {0x1c68, 0x0d},	// Ol Chiki Letter Ir
  {0x1c60, 0x0e},	// Ol Chiki Letter Aak
  {0x1c5b, 0x0f},	// Ol Chiki Letter At
  {0x1c6a, 0x33},	// Ol Chiki Letter Uc
  {0x1c74, 0x34},	// Ol Chiki Letter Ott
  {0x1c77, 0x1d},	// Ol Chiki Letter Oh
  {0x1c78, 0x1b},	// Ol Chiki Mu Ttuddag
  {0x1c62, 0x06},	// Ol Chiki Letter Aam
  {0x1c71, 0x19},	// Ol Chiki Letter En
  {0x1c63, 0x05},	// Ol Chiki Letter Aaw
  {0x1c5e, 0x11},	// Ol Chiki Letter Al
  {0x1c65, 0x10},	// Ol Chiki Letter Is
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x1c6d, 0x38},	// Ol Chiki Letter Uy
};

const DeadkeyLookup kbdolch_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_OLCH(kbdolch, sizeof kbdolch / sizeof kbdolch[0], kbdolch_deadkeys, sizeof kbdolch_deadkeys / sizeof kbdolch_deadkeys[0]);
