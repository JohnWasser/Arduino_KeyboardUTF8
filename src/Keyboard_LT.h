#include <KeyboardUTF8.h>

// Lithuanian IBM

const UnicodeLookup kbdlt[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007b, 0x24 | MOD_ALTGR},	// Left Curly Bracket
  {0x005b, 0x25 | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x26 | MOD_ALTGR},	// Right Square Bracket
  {0x007d, 0x27 | MOD_ALTGR},	// Right Curly Bracket
  {0x20ac, 0x08 | MOD_ALTGR},	// Euro Sign
  {0x007e, 0x35 | MOD_SHIFT},	// Tilde
  {0x0031, 0x1e | MOD_SHIFT},	// Digit One
  {0x0032, 0x1f | MOD_SHIFT},	// Digit Two
  {0x0033, 0x20 | MOD_SHIFT},	// Digit Three
  {0x0034, 0x21 | MOD_SHIFT},	// Digit Four
  {0x0035, 0x22 | MOD_SHIFT},	// Digit Five
  {0x0036, 0x23 | MOD_SHIFT},	// Digit Six
  {0x0037, 0x24 | MOD_SHIFT},	// Digit Seven
  {0x0038, 0x25 | MOD_SHIFT},	// Digit Eight
  {0x0039, 0x26 | MOD_SHIFT},	// Digit Nine
  {0x0030, 0x27 | MOD_SHIFT},	// Digit Zero
  {0x002d, 0x2d | MOD_SHIFT},	// Hyphen-Minus
  {0x003d, 0x2e | MOD_SHIFT},	// Equals Sign
  {0x0104, 0x14 | MOD_SHIFT},	// Latin Capital Letter A With Ogonek
  {0x017d, 0x1a | MOD_SHIFT},	// Latin Capital Letter Z With Caron
  {0x0045, 0x08 | MOD_SHIFT},	// Latin Capital Letter E
  {0x0052, 0x15 | MOD_SHIFT},	// Latin Capital Letter R
  {0x0054, 0x17 | MOD_SHIFT},	// Latin Capital Letter T
  {0x0059, 0x1c | MOD_SHIFT},	// Latin Capital Letter Y
  {0x0055, 0xa0 | MOD_SHIFT},	// Latin Capital Letter U
  {0x0049, 0x0c | MOD_SHIFT},	// Latin Capital Letter I
  {0x004f, 0x12 | MOD_SHIFT},	// Latin Capital Letter O
  {0x0050, 0x13 | MOD_SHIFT},	// Latin Capital Letter P
  {0x012e, 0x2f | MOD_SHIFT},	// Latin Capital Letter I With Ogonek
  {0x201d, 0x30 | MOD_SHIFT},	// Right Double Quotation Mark
  {0x005c, 0x64},	// Reverse Solidus
  {0x0041, 0x04 | MOD_SHIFT},	// Latin Capital Letter A
  {0x0053, 0x16 | MOD_SHIFT},	// Latin Capital Letter S
  {0x0044, 0x07 | MOD_SHIFT},	// Latin Capital Letter D
  {0x0046, 0x09 | MOD_SHIFT},	// Latin Capital Letter F
  {0x0047, 0x0a | MOD_SHIFT},	// Latin Capital Letter G
  {0x0048, 0x0b | MOD_SHIFT},	// Latin Capital Letter H
  {0x004a, 0x0d | MOD_SHIFT},	// Latin Capital Letter J
  {0x004b, 0x0e | MOD_SHIFT},	// Latin Capital Letter K
  {0x004c, 0x0f | MOD_SHIFT},	// Latin Capital Letter L
  {0x0172, 0x33 | MOD_SHIFT},	// Latin Capital Letter U With Ogonek
  {0x0116, 0x34 | MOD_SHIFT},	// Latin Capital Letter E With Dot Above
  {0x007c, 0x31},	// Vertical Line
  {0x005a, 0x1d | MOD_SHIFT},	// Latin Capital Letter Z
  {0x016a, 0x1b | MOD_SHIFT},	// Latin Capital Letter U With Macron
  {0x0043, 0x06 | MOD_SHIFT},	// Latin Capital Letter C
  {0x0056, 0x19 | MOD_SHIFT},	// Latin Capital Letter V
  {0x0042, 0x05 | MOD_SHIFT},	// Latin Capital Letter B
  {0x004e, 0x11 | MOD_SHIFT},	// Latin Capital Letter N
  {0x004d, 0x10 | MOD_SHIFT},	// Latin Capital Letter M
  {0x010c, 0x36 | MOD_SHIFT},	// Latin Capital Letter C With Caron
  {0x0160, 0x37 | MOD_SHIFT},	// Latin Capital Letter S With Caron
  {0x0118, 0x38 | MOD_SHIFT},	// Latin Capital Letter E With Ogonek
  {0x0060, 0x35},	// Grave Accent
  {0x0021, 0x1e},	// Exclamation Mark
  {0x0022, 0x1f},	// Quotation Mark
  {0x002f, 0x20},	// Solidus
  {0x003b, 0x21},	// Semicolon
  {0x003a, 0x22},	// Colon
  {0x002c, 0x23},	// Comma
  {0x002e, 0x24},	// Full Stop
  {0x003f, 0x25},	// Question Mark
  {0x0028, 0x26},	// Left Parenthesis
  {0x0029, 0x27},	// Right Parenthesis
  {0x005f, 0x2d},	// Low Line
  {0x002b, 0x2e},	// Plus Sign
  {0x0105, 0x14},	// Latin Small Letter A With Ogonek
  {0x017e, 0x1a},	// Latin Small Letter Z With Caron
  {0x0065, 0x08},	// Latin Small Letter E
  {0x0072, 0x15},	// Latin Small Letter R
  {0x0074, 0x17},	// Latin Small Letter T
  {0x0079, 0x1c},	// Latin Small Letter Y
  {0x0075, 0xa0},	// Latin Small Letter U
  {0x0069, 0x0c},	// Latin Small Letter I
  {0x006f, 0x12},	// Latin Small Letter O
  {0x0070, 0x13},	// Latin Small Letter P
  {0x012f, 0x2f},	// Latin Small Letter I With Ogonek
  {0x201c, 0x30},	// Left Double Quotation Mark
  {0x0061, 0x04},	// Latin Small Letter A
  {0x0073, 0x16},	// Latin Small Letter S
  {0x0064, 0x07},	// Latin Small Letter D
  {0x0066, 0x09},	// Latin Small Letter F
  {0x0067, 0x0a},	// Latin Small Letter G
  {0x0068, 0x0b},	// Latin Small Letter H
  {0x006a, 0x0d},	// Latin Small Letter J
  {0x006b, 0x0e},	// Latin Small Letter K
  {0x006c, 0x0f},	// Latin Small Letter L
  {0x0173, 0x33},	// Latin Small Letter U With Ogonek
  {0x0117, 0x34},	// Latin Small Letter E With Dot Above
  {0x007a, 0x1d},	// Latin Small Letter Z
  {0x016b, 0x1b},	// Latin Small Letter U With Macron
  {0x0063, 0x06},	// Latin Small Letter C
  {0x0076, 0x19},	// Latin Small Letter V
  {0x0062, 0x05},	// Latin Small Letter B
  {0x006e, 0x11},	// Latin Small Letter N
  {0x006d, 0x10},	// Latin Small Letter M
  {0x010d, 0x36},	// Latin Small Letter C With Caron
  {0x0161, 0x37},	// Latin Small Letter S With Caron
  {0x0119, 0x38},	// Latin Small Letter E With Ogonek
};

const DeadkeyLookup kbdlt_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_LT(kbdlt, sizeof kbdlt / sizeof kbdlt[0], kbdlt_deadkeys, sizeof kbdlt_deadkeys / sizeof kbdlt_deadkeys[0]);
