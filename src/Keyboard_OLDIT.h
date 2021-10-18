#include <KeyboardUTF8.h>

// Old Italic

const UnicodeLookup kbdoldit[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x1031, 0x1b},	//  Old Italic Letter Eks (Faliscan)
  {0x1030, 0x10},	//  Old Italic Letter Em
  {0x205d, 0x33 | MOD_SHIFT},	// Tricolon
  {0x1032, 0x2d},	//  Old Italic Numeral Fifty
  {0x003a, 0x33},	// Colon
  {0x00b7, 0x37},	// Middle Dot
};

const DeadkeyLookup kbdoldit_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_OLDIT(kbdoldit, sizeof kbdoldit / sizeof kbdoldit[0], kbdoldit_deadkeys, sizeof kbdoldit_deadkeys / sizeof kbdoldit_deadkeys[0]);
