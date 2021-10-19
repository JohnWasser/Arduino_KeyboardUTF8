#include <KeyboardUTF8.h>

// Uyghur (Legacy)

const UnicodeLookup kbdughr[] PROGMEM = 
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
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x0028, 0x27 | MOD_SHIFT},	// Left Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x00bb, 0x2f | MOD_SHIFT},	// Right-Pointing Double Angle Quotation Mark *
  {0x00ab, 0x30 | MOD_SHIFT},	// Left-Pointing Double Angle Quotation Mark *
  {0x007c, 0x31 | MOD_SHIFT},	// Vertical Line
  {0x0698, 0x07 | MOD_SHIFT},	// Arabic Letter Jeh
  {0x06a7, 0x09 | MOD_SHIFT},	// Arabic Letter Qaf With Dot Above
  {0x06af, 0x0a | MOD_SHIFT},	// Arabic Letter Gaf *
  {0x062e, 0x0b | MOD_SHIFT},	// Arabic Letter Khah
  {0x062c, 0x0d | MOD_SHIFT},	// Arabic Letter Jeem
  {0x06c6, 0x0e | MOD_SHIFT},	// Arabic Letter Oe
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x003e, 0x36 | MOD_SHIFT},	// Greater-Than Sign
  {0x003c, 0x37 | MOD_SHIFT},	// Less-Than Sign
  {0x061f, 0x38 | MOD_SHIFT},	// Arabic Question Mark
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
  {0x0686, 0x14},	// Arabic Letter Tcheh
  {0x06cb, 0x1a},	// Arabic Letter Ve
  {0x06d0, 0x08},	// Arabic Letter E *
  {0x0631, 0x15},	// Arabic Letter Reh
  {0x062a, 0x17},	// Arabic Letter Teh
  {0x064a, 0x1c},	// Arabic Letter Yeh
  {0x06c7, 0xa0},	// Arabic Letter U
  {0x06ad, 0x0c},	// Arabic Letter Ng
  {0x0648, 0x12},	// Arabic Letter Waw
  {0x067e, 0x13},	// Arabic Letter Peh
  {0x005d, 0x2f},	// Right Square Bracket
  {0x005b, 0x30},	// Left Square Bracket
  {0x005c, 0x31},	// Reverse Solidus
  {0x06be, 0x04},	// Arabic Letter Heh Doachashmee
  {0x0633, 0x16},	// Arabic Letter Seen
  {0x062f, 0x07},	// Arabic Letter Dal
  {0x0627, 0x09},	// Arabic Letter Alef
  {0x06d5, 0x0a},	// Arabic Letter Ae
  {0x0649, 0x0b},	// Arabic Letter Alef Maksura
  {0x0642, 0x0d},	// Arabic Letter Qaf
  {0x0643, 0x0e},	// Arabic Letter Kaf
  {0x0644, 0x0f},	// Arabic Letter Lam
  {0x061b, 0x33},	// Arabic Semicolon
  {0x0027, 0x34},	// Apostrophe
  {0x0632, 0x1d},	// Arabic Letter Zain
  {0x0634, 0x1b},	// Arabic Letter Sheen
  {0x063a, 0x06},	// Arabic Letter Ghain
  {0x06c8, 0x19},	// Arabic Letter Yu
  {0x0628, 0x05},	// Arabic Letter Beh
  {0x0646, 0x11},	// Arabic Letter Noon
  {0x0645, 0x10},	// Arabic Letter Meem
  {0x060c, 0x36},	// Arabic Comma
  {0x002e, 0x37},	// Full Stop
  {0x0626, 0x38},	// Arabic Letter Yeh With Hamza Above
};

const DeadkeyLookup kbdughr_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_UGHR(kbdughr, sizeof kbdughr / sizeof kbdughr[0], kbdughr_deadkeys, sizeof kbdughr_deadkeys / sizeof kbdughr_deadkeys[0]);
