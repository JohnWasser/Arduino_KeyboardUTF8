#include <KeyboardUTF8.h>

// United States-Dvorak for right hand

const UnicodeLookup kbdusr[] PROGMEM = 
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
  {0x004a, 0x22 | MOD_SHIFT},	// Latin Capital Letter J
  {0x004c, 0x23 | MOD_SHIFT},	// Latin Capital Letter L
  {0x004d, 0x24 | MOD_SHIFT},	// Latin Capital Letter M
  {0x0046, 0x25 | MOD_SHIFT},	// Latin Capital Letter F
  {0x0050, 0x26 | MOD_SHIFT},	// Latin Capital Letter P
  {0x003f, 0x27 | MOD_SHIFT},	// Question Mark
  {0x007b, 0x2d | MOD_SHIFT},	// Left Curly Bracket
  {0x007d, 0x2e | MOD_SHIFT},	// Right Curly Bracket
  {0x0025, 0x14 | MOD_SHIFT},	// Percent Sign
  {0x005e, 0x1a | MOD_SHIFT},	// Circumflex Accent
  {0x0051, 0x08 | MOD_SHIFT},	// Latin Capital Letter Q
  {0x003e, 0x15 | MOD_SHIFT},	// Greater-Than Sign
  {0x004f, 0x17 | MOD_SHIFT},	// Latin Capital Letter O
  {0x0052, 0x1c | MOD_SHIFT},	// Latin Capital Letter R
  {0x0053, 0xa0 | MOD_SHIFT},	// Latin Capital Letter S
  {0x0055, 0x0c | MOD_SHIFT},	// Latin Capital Letter U
  {0x0059, 0x12 | MOD_SHIFT},	// Latin Capital Letter Y
  {0x0042, 0x13 | MOD_SHIFT},	// Latin Capital Letter B
  {0x003a, 0x2f | MOD_SHIFT},	// Colon
  {0x002b, 0x30 | MOD_SHIFT},	// Plus Sign
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x0026, 0x04 | MOD_SHIFT},	// Ampersand
  {0x002a, 0x16 | MOD_SHIFT},	// Asterisk
  {0x005a, 0x07 | MOD_SHIFT},	// Latin Capital Letter Z
  {0x0041, 0x09 | MOD_SHIFT},	// Latin Capital Letter A
  {0x0045, 0x0a | MOD_SHIFT},	// Latin Capital Letter E
  {0x0048, 0x0b | MOD_SHIFT},	// Latin Capital Letter H
  {0x0054, 0x0d | MOD_SHIFT},	// Latin Capital Letter T
  {0x0044, 0x0e | MOD_SHIFT},	// Latin Capital Letter D
  {0x0043, 0x0f | MOD_SHIFT},	// Latin Capital Letter C
  {0x004b, 0x33 | MOD_SHIFT},	// Latin Capital Letter K
  {0x005f, 0x34 | MOD_SHIFT},	// Low Line
  {0x0028, 0x1d | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x1b | MOD_SHIFT},	// Right Parenthesis
  {0x0058, 0x06 | MOD_SHIFT},	// Latin Capital Letter X
  {0x003c, 0x19 | MOD_SHIFT},	// Less-Than Sign
  {0x0049, 0x05 | MOD_SHIFT},	// Latin Capital Letter I
  {0x004e, 0x11 | MOD_SHIFT},	// Latin Capital Letter N
  {0x0057, 0x10 | MOD_SHIFT},	// Latin Capital Letter W
  {0x0056, 0x36 | MOD_SHIFT},	// Latin Capital Letter V
  {0x0047, 0x37 | MOD_SHIFT},	// Latin Capital Letter G
  {0x0022, 0x38 | MOD_SHIFT},	// Quotation Mark
  {0x0060, 0x35},	// Grave Accent
  {0x0031, 0x1e},	// Digit One
  {0x0032, 0x1f},	// Digit Two
  {0x0033, 0x20},	// Digit Three
  {0x0034, 0x21},	// Digit Four
  {0x006a, 0x22},	// Latin Small Letter J
  {0x006c, 0x23},	// Latin Small Letter L
  {0x006d, 0x24},	// Latin Small Letter M
  {0x0066, 0x25},	// Latin Small Letter F
  {0x0070, 0x26},	// Latin Small Letter P
  {0x002f, 0x27},	// Solidus
  {0x005b, 0x2d},	// Left Square Bracket
  {0x005d, 0x2e},	// Right Square Bracket
  {0x0035, 0x14},	// Digit Five
  {0x0036, 0x1a},	// Digit Six
  {0x0071, 0x08},	// Latin Small Letter Q
  {0x002e, 0x15},	// Full Stop
  {0x006f, 0x17},	// Latin Small Letter O
  {0x0072, 0x1c},	// Latin Small Letter R
  {0x0073, 0xa0},	// Latin Small Letter S
  {0x0075, 0x0c},	// Latin Small Letter U
  {0x0079, 0x12},	// Latin Small Letter Y
  {0x0062, 0x13},	// Latin Small Letter B
  {0x003b, 0x2f},	// Semicolon
  {0x003d, 0x30},	// Equals Sign
  {0x005c, 0x64},	// Reverse Solidus
  {0x0037, 0x04},	// Digit Seven
  {0x0038, 0x16},	// Digit Eight
  {0x007a, 0x07},	// Latin Small Letter Z
  {0x0061, 0x09},	// Latin Small Letter A
  {0x0065, 0x0a},	// Latin Small Letter E
  {0x0068, 0x0b},	// Latin Small Letter H
  {0x0074, 0x0d},	// Latin Small Letter T
  {0x0064, 0x0e},	// Latin Small Letter D
  {0x0063, 0x0f},	// Latin Small Letter C
  {0x006b, 0x33},	// Latin Small Letter K
  {0x002d, 0x34},	// Hyphen-Minus
  {0x0039, 0x1d},	// Digit Nine
  {0x0030, 0x1b},	// Digit Zero
  {0x0078, 0x06},	// Latin Small Letter X
  {0x002c, 0x19},	// Comma
  {0x0069, 0x05},	// Latin Small Letter I
  {0x006e, 0x11},	// Latin Small Letter N
  {0x0077, 0x10},	// Latin Small Letter W
  {0x0076, 0x36},	// Latin Small Letter V
  {0x0067, 0x37},	// Latin Small Letter G
  {0x0027, 0x38},	// Apostrophe
};

const DeadkeyLookup kbdusr_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_USR(kbdusr, sizeof kbdusr / sizeof kbdusr[0], kbdusr_deadkeys, sizeof kbdusr_deadkeys / sizeof kbdusr_deadkeys[0]);
