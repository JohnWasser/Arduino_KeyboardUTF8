#include <KeyboardUTF8.h>

// Arabic (102)

const UnicodeLookup kbda2[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x00a4, 0x21 | MOD_ALTGR},	// Currency Sign
  {0x003c, 0x35 | MOD_SHIFT},	// Less-Than Sign
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0040, 0x1f | MOD_SHIFT},	// Commercial At
  {0x0023, 0x20 | MOD_SHIFT},	// Number Sign
  {0x0024, 0x21 | MOD_SHIFT},	// Dollar Sign
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x005e, 0x23 | MOD_SHIFT},	// Circumflex Accent
  {0x0026, 0x24 | MOD_SHIFT},	// Ampersand
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x0028, 0x27 | MOD_SHIFT},	// Left Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x064e, 0x14 | MOD_SHIFT},	// Arabic Fatha
  {0x064b, 0x1a | MOD_SHIFT},	// Arabic Fathatan
  {0x064f, 0x08 | MOD_SHIFT},	// Arabic Damma
  {0x064c, 0x15 | MOD_SHIFT},	// Arabic Dammatan
  {0x0625, 0x1c | MOD_SHIFT},	// Arabic Letter Alef With Hamza Below
  {0x2018, 0xa0 | MOD_SHIFT},	// Left Single Quotation Mark
  {0x00f7, 0x0c | MOD_SHIFT},	// Division Sign
  {0x00d7, 0x12 | MOD_SHIFT},	// Multiplication Sign
  {0x061b, 0x13 | MOD_SHIFT},	// Arabic Semicolon
  {0x007d, 0x2f | MOD_SHIFT},	// Right Curly Bracket
  {0x007b, 0x30 | MOD_SHIFT},	// Left Curly Bracket
  {0x005c, 0x04 | MOD_SHIFT},	// Reverse Solidus
  {0x005d, 0x07 | MOD_SHIFT},	// Right Square Bracket
  {0x005b, 0x09 | MOD_SHIFT},	// Left Square Bracket
  {0x0623, 0x0b | MOD_SHIFT},	// Arabic Letter Alef With Hamza Above
  {0x0640, 0x64},	// Arabic Tatweel
  {0x060c, 0x0e | MOD_SHIFT},	// Arabic Comma
  {0x002f, 0x0f | MOD_SHIFT},	// Solidus
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x0651, 0x28 | MOD_SHIFT},	// Arabic Shadda
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x007e, 0x1d | MOD_SHIFT},	// Tilde
  {0x0652, 0x1b | MOD_SHIFT},	// Arabic Sukun
  {0x0650, 0x06 | MOD_SHIFT},	// Arabic Kasra
  {0x064d, 0x19 | MOD_SHIFT},	// Arabic Kasratan
  {0x0622, 0x11 | MOD_SHIFT},	// Arabic Letter Alef With Madda Above
  {0x2019, 0x10 | MOD_SHIFT},	// Right Single Quotation Mark
  {0x002c, 0x36 | MOD_SHIFT},	// Comma
  {0x002e, 0x37 | MOD_SHIFT},	// Full Stop
  {0x061f, 0x38 | MOD_SHIFT},	// Arabic Question Mark
  {0x003e, 0x35},	// Greater-Than Sign
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
  {0x0636, 0x14},	// Arabic Letter Dad
  {0x0635, 0x1a},	// Arabic Letter Sad
  {0x062b, 0x08},	// Arabic Letter Theh
  {0x0642, 0x15},	// Arabic Letter Qaf
  {0x0641, 0x17},	// Arabic Letter Feh
  {0x063a, 0x1c},	// Arabic Letter Ghain
  {0x0639, 0xa0},	// Arabic Letter Ain
  {0x0647, 0x0c},	// Arabic Letter Heh
  {0x062e, 0x12},	// Arabic Letter Khah
  {0x062d, 0x13},	// Arabic Letter Hah
  {0x062c, 0x2f},	// Arabic Letter Jeem
  {0x062f, 0x30},	// Arabic Letter Dal
  {0x0634, 0x04},	// Arabic Letter Sheen
  {0x0633, 0x16},	// Arabic Letter Seen
  {0x064a, 0x07},	// Arabic Letter Yeh
  {0x0628, 0x09},	// Arabic Letter Beh
  {0x0644, 0x0a},	// Arabic Letter Lam
  {0x0627, 0x0b},	// Arabic Letter Alef
  {0x062a, 0x0d},	// Arabic Letter Teh
  {0x0646, 0x0e},	// Arabic Letter Noon
  {0x0645, 0x0f},	// Arabic Letter Meem
  {0x0643, 0x33},	// Arabic Letter Kaf
  {0x0637, 0x34},	// Arabic Letter Tah
  {0x0630, 0x28},	// Arabic Letter Thal
  {0x0626, 0x1d},	// Arabic Letter Yeh With Hamza Above
  {0x0621, 0x1b},	// Arabic Letter Hamza
  {0x0624, 0x06},	// Arabic Letter Waw With Hamza Above
  {0x0631, 0x19},	// Arabic Letter Reh
  {0x0649, 0x11},	// Arabic Letter Alef Maksura
  {0x0629, 0x10},	// Arabic Letter Teh Marbuta
  {0x0648, 0x36},	// Arabic Letter Waw
  {0x0632, 0x37},	// Arabic Letter Zain
  {0x0638, 0x38},	// Arabic Letter Zah
};

const DeadkeyLookup kbda2_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_A2(kbda2, sizeof kbda2 / sizeof kbda2[0], kbda2_deadkeys, sizeof kbda2_deadkeys / sizeof kbda2_deadkeys[0]);
