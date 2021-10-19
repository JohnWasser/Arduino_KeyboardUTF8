#include <KeyboardUTF8.h>

// Buginese

const UnicodeLookup kbdbug[] PROGMEM = 
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
  {0x007b, 0x2f | MOD_SHIFT},	// Left Curly Bracket
  {0x007d, 0x30 | MOD_SHIFT},	// Right Curly Bracket
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x1a0b, 0x11 | MOD_SHIFT},	// Buginese Letter Nra
  {0x1a07, 0x10 | MOD_SHIFT},	// Buginese Letter Mpa
  {0x002c, 0x36 | MOD_SHIFT},	// Comma
  {0x002e, 0x37 | MOD_SHIFT},	// Full Stop
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
  {0xa9cf, 0x35},	// Javanese Pangrangkep
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
  {0x1a1b, 0x14},	// Buginese Vowel Sign Ae
  {0x1a0f, 0x1a},	// Buginese Letter Nyca
  {0x1a19, 0x08},	// Buginese Vowel Sign E
  {0x1a11, 0x15},	// Buginese Letter Ra
  {0x1a08, 0x17},	// Buginese Letter Ta
  {0x1a10, 0x1c},	// Buginese Letter Ya
  {0x1a18, 0xa0},	// Buginese Vowel Sign U
  {0x1a17, 0x0c},	// Buginese Vowel Sign I
  {0x1a1a, 0x12},	// Buginese Vowel Sign O
  {0x1a04, 0x13},	// Buginese Letter Pa
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x30},	// Right Square Bracket
  {0x1a15, 0x04},	// Buginese Letter A
  {0x1a14, 0x16},	// Buginese Letter Sa
  {0x1a09, 0x07},	// Buginese Letter Da
  {0x1a03, 0x09},	// Buginese Letter Ngka
  {0x1a01, 0x0a},	// Buginese Letter Ga
  {0x1a16, 0x0b},	// Buginese Letter Ha
  {0x1a0d, 0x0d},	// Buginese Letter Ja
  {0x1a00, 0x0e},	// Buginese Letter Ka
  {0x1a12, 0x0f},	// Buginese Letter La
  {0x003b, 0x33},	// Semicolon
  {0x0027, 0x34},	// Apostrophe
  {0x005c, 0x64},	// Reverse Solidus
  {0x1a0e, 0x1d},	// Buginese Letter Nya
  {0x1a02, 0x1b},	// Buginese Letter Nga
  {0x1a0c, 0x06},	// Buginese Letter Ca
  {0x1a13, 0x19},	// Buginese Letter Va
  {0x1a05, 0x05},	// Buginese Letter Ba
  {0x1a0a, 0x11},	// Buginese Letter Na
  {0x1a06, 0x10},	// Buginese Letter Ma
  {0x1a1e, 0x36},	// Buginese Pallawa
  {0x1a1f, 0x37},	// Buginese End Of Section
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbdbug_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_BUG(kbdbug, sizeof kbdbug / sizeof kbdbug[0], kbdbug_deadkeys, sizeof kbdbug_deadkeys / sizeof kbdbug_deadkeys[0]);
