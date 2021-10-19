#include <KeyboardUTF8.h>

// Lao

const UnicodeLookup kbdlao[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0ed1, 0x1e | MOD_ALTGR},	// Lao Digit One
  {0x0ed2, 0x1f | MOD_ALTGR},	// Lao Digit Two
  {0x0ed3, 0x20 | MOD_ALTGR},	// Lao Digit Three
  {0x0ed4, 0x21 | MOD_ALTGR},	// Lao Digit Four
  {0x0ed5, 0x22 | MOD_ALTGR},	// Lao Digit Five
  {0x0ed6, 0x23 | MOD_ALTGR},	// Lao Digit Six
  {0x0ed7, 0x24 | MOD_ALTGR},	// Lao Digit Seven
  {0x0ed8, 0x25 | MOD_ALTGR},	// Lao Digit Eight
  {0x0ed9, 0x26 | MOD_ALTGR},	// Lao Digit Nine
  {0x0ed0, 0x27 | MOD_ALTGR},	// Lao Digit Zero
  {0x0027, 0x35 | MOD_SHIFT},	// Apostrophe
  {0x0031, 0x1e | MOD_SHIFT},	// Digit One
  {0x0032, 0x1f | MOD_SHIFT},	// Digit Two
  {0x0033, 0x20 | MOD_SHIFT},	// Digit Three
  {0x0034, 0x21 | MOD_SHIFT},	// Digit Four
  {0x0ecc, 0x22 | MOD_SHIFT},	// Lao Cancellation Mark
  {0x0ebc, 0x23 | MOD_SHIFT},	// Lao Semivowel Sign Lo
  {0x0035, 0x24 | MOD_SHIFT},	// Digit Five
  {0x0036, 0x25 | MOD_SHIFT},	// Digit Six
  {0x0037, 0x26 | MOD_SHIFT},	// Digit Seven
  {0x0038, 0x27 | MOD_SHIFT},	// Digit Eight
  {0x0039, 0x2d | MOD_SHIFT},	// Digit Nine
  {0x0030, 0x1a | MOD_SHIFT},	// Digit Zero
  {0x002a, 0x08 | MOD_SHIFT},	// Asterisk
  {0x005f, 0x15 | MOD_SHIFT},	// Low Line
  {0x002b, 0x17 | MOD_SHIFT},	// Plus Sign
  {0x0ea3, 0x0c | MOD_SHIFT},	// Lao Letter Lo Ling
  {0x0edc, 0x12 | MOD_SHIFT},	// Lao Ho No
  {0x0ebd, 0x13 | MOD_SHIFT},	// Lao Semivowel Sign Nyo
  {0x002d, 0x2f | MOD_SHIFT},	// Hyphen-Minus
  {0x005c, 0x31 | MOD_SHIFT},	// Reverse Solidus
  {0x003b, 0x16 | MOD_SHIFT},	// Semicolon
  {0x002e, 0x07 | MOD_SHIFT},	// Full Stop
  {0x002c, 0x09 | MOD_SHIFT},	// Comma
  {0x003a, 0x0a | MOD_SHIFT},	// Colon
  {0x0eca, 0x0b | MOD_SHIFT},	// Lao Tone Mai Ti
  {0x0ecb, 0x0d | MOD_SHIFT},	// Lao Tone Mai Catawa
  {0x0021, 0x0e | MOD_SHIFT},	// Exclamation Mark
  {0x003f, 0x0f | MOD_SHIFT},	// Question Mark
  {0x0025, 0x33 | MOD_SHIFT},	// Percent Sign
  {0x003d, 0x34 | MOD_SHIFT},	// Equals Sign
  {0x20ad, 0x1d | MOD_SHIFT},	// Kip Sign
  {0x0028, 0x1b | MOD_SHIFT},	// Left Parenthesis
  {0x0eaf, 0x06 | MOD_SHIFT},	// Lao Ellipsis
  {0x0078, 0x19 | MOD_SHIFT},	// Latin Small Letter X
  {0x0ec6, 0x10 | MOD_SHIFT},	// Lao Ko La
  {0x0edd, 0x36 | MOD_SHIFT},	// Lao Ho Mo
  {0x0024, 0x37 | MOD_SHIFT},	// Dollar Sign
  {0x0029, 0x38 | MOD_SHIFT},	// Right Parenthesis
  {0x0022, 0x35},	// Quotation Mark
  {0x0ea2, 0x1e},	// Lao Letter Yo
  {0x0e9f, 0x1f},	// Lao Letter Fo Sung
  {0x0ec2, 0x20},	// Lao Vowel Sign O
  {0x0e96, 0x21},	// Lao Letter Tho Sung
  {0x0eb8, 0x22},	// Lao Vowel Sign U
  {0x0eb9, 0x23},	// Lao Vowel Sign Uu
  {0x0e84, 0x24},	// Lao Letter Kho Tam
  {0x0e95, 0x25},	// Lao Letter To
  {0x0e88, 0x26},	// Lao Letter Co
  {0x0e82, 0x27},	// Lao Letter Kho Sung
  {0x0e8a, 0x2d},	// Lao Letter So Tam
  {0x0ecd, 0x2e},	// Lao Niggahita
  {0x0ebb, 0x14},	// Lao Vowel Sign Mai Kon
  {0x0ec4, 0x1a},	// Lao Vowel Sign Ai
  {0x0eb3, 0x08},	// Lao Vowel Sign Am
  {0x0e9e, 0x15},	// Lao Letter Pho Tam
  {0x0eb0, 0x17},	// Lao Vowel Sign A
  {0x0eb4, 0x1c},	// Lao Vowel Sign I
  {0x0eb5, 0xa0},	// Lao Vowel Sign Ii
  {0x0eae, 0x0c},	// Lao Letter Ho Tam
  {0x0e99, 0x12},	// Lao Letter No
  {0x0e8d, 0x13},	// Lao Letter Nyo
  {0x0e9a, 0x2f},	// Lao Letter Bo
  {0x0ea5, 0x30},	// Lao Letter Lo Loot
  {0x002f, 0x31},	// Solidus
  {0x0eb1, 0x04},	// Lao Vowel Sign Mai Kan
  {0x0eab, 0x16},	// Lao Letter Ho Sung
  {0x0e81, 0x07},	// Lao Letter Ko
  {0x0e94, 0x09},	// Lao Letter Do
  {0x0ec0, 0x0a},	// Lao Vowel Sign E
  {0x0ec9, 0x0b},	// Lao Tone Mai Tho
  {0x0ec8, 0x0d},	// Lao Tone Mai Ek
  {0x0eb2, 0x0e},	// Lao Vowel Sign Aa
  {0x0eaa, 0x0f},	// Lao Letter So Sung
  {0x0ea7, 0x33},	// Lao Letter Wo
  {0x0e87, 0x34},	// Lao Letter Ngo
  {0x0e9c, 0x1d},	// Lao Letter Pho Sung
  {0x0e9b, 0x1b},	// Lao Letter Po
  {0x0ec1, 0x06},	// Lao Vowel Sign Ei
  {0x0ead, 0x19},	// Lao Letter O
  {0x0eb6, 0x05},	// Lao Vowel Sign Y
  {0x0eb7, 0x11},	// Lao Vowel Sign Yy
  {0x0e97, 0x10},	// Lao Letter Tho Tam
  {0x0ea1, 0x36},	// Lao Letter Mo
  {0x0ec3, 0x37},	// Lao Vowel Sign Ay
  {0x0e9d, 0x38},	// Lao Letter Fo Tam
};

const DeadkeyLookup kbdlao_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_LAO(kbdlao, sizeof kbdlao / sizeof kbdlao[0], kbdlao_deadkeys, sizeof kbdlao_deadkeys / sizeof kbdlao_deadkeys[0]);
