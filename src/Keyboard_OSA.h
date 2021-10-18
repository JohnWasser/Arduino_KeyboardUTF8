#include <KeyboardUTF8.h>

// Osage

const UnicodeLookup kbdosa[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0xefb8, 0x08 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefcb, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefcc, 0x17 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefb1, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefc3, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefc5, 0x13 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefb2, 0x04 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefc7, 0x16 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefc9, 0x07 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xeeb3, 0x0d | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefbd, 0x0e | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefd1, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefb6, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xefe0, 0x08 | MOD_ALTGR},	// Private Use 
  {0xeff3, 0x15 | MOD_ALTGR},	// Private Use 
  {0xeff4, 0x17 | MOD_ALTGR},	// Private Use 
  {0xefd9, 0x0c | MOD_ALTGR},	// Private Use 
  {0xefeb, 0x12 | MOD_ALTGR},	// Private Use 
  {0xefed, 0x13 | MOD_ALTGR},	// Private Use 
  {0xefda, 0x04 | MOD_ALTGR},	// Private Use 
  {0xefef, 0x16 | MOD_ALTGR},	// Private Use 
  {0xeff1, 0x07 | MOD_ALTGR},	// Private Use 
  {0xeedb, 0x0d | MOD_ALTGR},	// Private Use 
  {0xefe5, 0x0e | MOD_ALTGR},	// Private Use 
  {0xeff9, 0x1b | MOD_ALTGR},	// Private Use 
  {0xefde, 0x06 | MOD_ALTGR},	// Private Use 
  {0x007e, 0x35 | MOD_SHIFT},	// Tilde
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0040, 0x1f | MOD_SHIFT},	// Commercial At
  {0x0023, 0x20 | MOD_SHIFT},	// Number Sign
  {0x0024, 0x21 | MOD_SHIFT},	// Dollar Sign
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x005e, 0x23 | MOD_SHIFT},	// Circumflex Accent
  {0x0026, 0x24 | MOD_SHIFT},	// Ampersand
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x104b, 0x05 | MOD_SHIFT},	//  <Null>
  {0x104c, 0x10 | MOD_SHIFT},	//  <Null>
  {0x104d, 0x05},	//  <Null>
  {0x007b, 0x2f | MOD_SHIFT},	// Left Curly Bracket
  {0x007d, 0x30 | MOD_SHIFT},	// Right Curly Bracket
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x0304, 0x09 | MOD_SHIFT},	// Combining Macron
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x003c, 0x36 | MOD_SHIFT},	// Less-Than Sign
  {0x003e, 0x37 | MOD_SHIFT},	// Greater-Than Sign
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
  {0x0060, 0x35},	// Grave Accent
  {0x0031, 0x1e},	// Digit One
  {0x0032, 0x1f},	// Digit Two
  {0x0033, 0x20},	// Digit Three
  {0x0034, 0x21},	// Digit Four
  {0x0035, 0x22},	// Digit Five
  {0x0036, 0x23},	// Digit Six
  {0x0037, 0x24},	// Digit Seven
  {0x0038, 0x25},	// Digit Eight
  {0x0039, 0x26},	// Digit Nine
  {0x0030, 0x27},	// Digit Zero
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x003d, 0x2e},	// Equals Sign
  {0x104e, 0x10},	//  <Null>
  {0x104f, 0x1b},	//  <Null>
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x30},	// Right Square Bracket
  {0x005c, 0x64},	// Reverse Solidus
  {0x0358, 0x09},	// Combining Dot Above Right
  {0x003b, 0x33},	// Semicolon
  {0x0027, 0x34},	// Apostrophe
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbdosa_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_OSA(kbdosa, sizeof kbdosa / sizeof kbdosa[0], kbdosa_deadkeys, sizeof kbdosa_deadkeys / sizeof kbdosa_deadkeys[0]);
