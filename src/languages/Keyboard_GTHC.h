#include <KeyboardUTF8.h>

// Gothic

const UnicodeLookup kbdgthc[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
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
  {0x005b, 0x2f | MOD_SHIFT},	// Left Square Bracket
  {0x005d, 0x30 | MOD_SHIFT},	// Right Square Bracket
  {0x003b, 0x33 | MOD_SHIFT},	// Semicolon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x005c, 0x28 | MOD_SHIFT},	// Reverse Solidus
  {0x003c, 0x36 | MOD_SHIFT},	// Less-Than Sign
  {0x003e, 0x37 | MOD_SHIFT},	// Greater-Than Sign
  {0x002f, 0x38 | MOD_SHIFT},	// Solidus
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
  {0x1033, 0x10},	//  Gothic Letter Manna
  {0x1034, 0x19},	//  Gothic Letter Hwair
  {0x003a, 0x33},	// Colon
  {0x0027, 0x34},	// Apostrophe
  {0x0305, 0x28},	// Combining Overline
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x00b7, 0x38},	// Middle Dot
};

const DeadkeyLookup kbdgthc_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_GTHC(kbdgthc, sizeof kbdgthc / sizeof kbdgthc[0], kbdgthc_deadkeys, sizeof kbdgthc_deadkeys / sizeof kbdgthc_deadkeys[0]);
