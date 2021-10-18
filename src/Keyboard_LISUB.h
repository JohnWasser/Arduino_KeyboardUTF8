#include <KeyboardUTF8.h>

// Lisu (Basic)

const UnicodeLookup kbdlisub[] PROGMEM = 
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
  {0xa4f1, 0x08 | MOD_SHIFT},	// Lisu Letter Eu
  {0xa4e4, 0x15 | MOD_SHIFT},	// Lisu Letter Za
  {0xa4d5, 0x17 | MOD_SHIFT},	// Lisu Letter Tha
  {0xa4fb, 0x1c | MOD_SHIFT},	// Lisu Letter Tone Mya Bo
  {0xa4f5, 0xa0 | MOD_SHIFT},	// Lisu Letter Ue
  {0xa4fe, 0x0c | MOD_SHIFT},	// Lisu Punctuation Comma
  {0x02cd, 0x12 | MOD_SHIFT},	// Modifier Letter Low Macron
  {0xa4d2, 0x13 | MOD_SHIFT},	// Lisu Letter Pha
  {0x007b, 0x2f | MOD_SHIFT},	// Left Curly Bracket
  {0x007d, 0x30 | MOD_SHIFT},	// Right Curly Bracket
  {0xa4ef, 0x04 | MOD_SHIFT},	// Lisu Letter Ae
  {0xa4f7, 0x07 | MOD_SHIFT},	// Lisu Letter Oe
  {0xa4de, 0x09 | MOD_SHIFT},	// Lisu Letter Tsha
  {0xa4e8, 0x0a | MOD_SHIFT},	// Lisu Letter Hha
  {0xa4fa, 0x0b | MOD_SHIFT},	// Lisu Letter Tone Mya Cya
  {0xa4e9, 0x0d | MOD_SHIFT},	// Lisu Letter Fa
  {0xa4d8, 0x0e | MOD_SHIFT},	// Lisu Letter Kha
  {0xa4f6, 0x0f | MOD_SHIFT},	// Lisu Letter Uh
  {0xa4fd, 0x33 | MOD_SHIFT},	// Lisu Letter Tone Mya Jeu
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0xa4db, 0x06 | MOD_SHIFT},	// Lisu Letter Cha
  {0xa4e5, 0x19 | MOD_SHIFT},	// Lisu Letter Nga
  {0xa4ed, 0x05 | MOD_SHIFT},	// Lisu Letter Gha
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
  {0x2010, 0x2d},	// Hyphen
  {0xa4ff, 0x2e},	// Lisu Punctuation Full Stop
  {0x0051, 0x14},	// Latin Capital Letter Q
  {0xa4ea, 0x1a},	// Lisu Letter Wa
  {0xa4f0, 0x08},	// Lisu Letter E
  {0xa4e3, 0x15},	// Lisu Letter Zha
  {0xa4d4, 0x17},	// Lisu Letter Ta
  {0xa4ec, 0x1c},	// Lisu Letter Ya
  {0xa4f4, 0xa0},	// Lisu Letter U
  {0xa4f2, 0x0c},	// Lisu Letter I
  {0xa4f3, 0x12},	// Lisu Letter O
  {0xa4d1, 0x13},	// Lisu Letter Pa
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x30},	// Right Square Bracket
  {0xa4ee, 0x04},	// Lisu Letter A
  {0xa4e2, 0x16},	// Lisu Letter Sa
  {0xa4d3, 0x07},	// Lisu Letter Da
  {0xa4dd, 0x09},	// Lisu Letter Tsa
  {0xa4d6, 0x0a},	// Lisu Letter Ga
  {0xa4e7, 0x0b},	// Lisu Letter Xa
  {0xa4d9, 0x0d},	// Lisu Letter Ja
  {0xa4d7, 0x0e},	// Lisu Letter Ka
  {0xa4e1, 0x0f},	// Lisu Letter La
  {0xa4fc, 0x33},	// Lisu Letter Tone Mya Na
  {0x02bc, 0x34},	// Modifier Letter Apostrophe
  {0x005c, 0x64},	// Reverse Solidus
  {0xa4dc, 0x1d},	// Lisu Letter Dza
  {0xa4eb, 0x1b},	// Lisu Letter Sha
  {0xa4da, 0x06},	// Lisu Letter Ca
  {0xa4e6, 0x19},	// Lisu Letter Ha
  {0xa4d0, 0x05},	// Lisu Letter Ba
  {0xa4e0, 0x11},	// Lisu Letter Na
  {0xa4df, 0x10},	// Lisu Letter Ma
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbdlisub_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_LISUB(kbdlisub, sizeof kbdlisub / sizeof kbdlisub[0], kbdlisub_deadkeys, sizeof kbdlisub_deadkeys / sizeof kbdlisub_deadkeys[0]);
