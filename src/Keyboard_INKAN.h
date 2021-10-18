#include <KeyboardUTF8.h>

// Kannada

const UnicodeLookup kbdinkan[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0ce0, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Kannada Letter Vocalic Rr
  {0x0ce1, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Kannada Letter Vocalic Ll
  {0x0c8c, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Kannada Letter Vocalic L
  {0x0cde, 0x0b | (MOD_SHIFT | MOD_ALTGR)},	// Kannada Letter Fa
  {0x0ce7, 0x1e | MOD_ALTGR},	// Kannada Digit One
  {0x0ce8, 0x1f | MOD_ALTGR},	// Kannada Digit Two
  {0x0ce9, 0x20 | MOD_ALTGR},	// Kannada Digit Three
  {0x0cea, 0x21 | MOD_ALTGR},	// Kannada Digit Four
  {0x0ceb, 0x22 | MOD_ALTGR},	// Kannada Digit Five
  {0x0cec, 0x23 | MOD_ALTGR},	// Kannada Digit Six
  {0x0ced, 0x24 | MOD_ALTGR},	// Kannada Digit Seven
  {0x0cee, 0x25 | MOD_ALTGR},	// Kannada Digit Eight
  {0x0cef, 0x26 | MOD_ALTGR},	// Kannada Digit Nine
  {0x0ce6, 0x27 | MOD_ALTGR},	// Kannada Digit Zero
  {0x0cc4, 0x2e | MOD_ALTGR},	// Kannada Vowel Sign Vocalic Rr
  {0x0cd6, 0x1a | MOD_ALTGR},	// Kannada Ai Length Mark
  {0x0cd5, 0x16 | MOD_ALTGR},	// Kannada Length Mark
  {0x0c92, 0x35 | MOD_SHIFT},	// Kannada Letter O
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x0c83, 0x2d | MOD_SHIFT},	// Kannada Sign Visarga
  {0x0c8b, 0x2e | MOD_SHIFT},	// Kannada Letter Vocalic R
  {0x0c94, 0x14 | MOD_SHIFT},	// Kannada Letter Au
  {0x0c90, 0x1a | MOD_SHIFT},	// Kannada Letter Ai
  {0x0c86, 0x08 | MOD_SHIFT},	// Kannada Letter Aa
  {0x0c88, 0x15 | MOD_SHIFT},	// Kannada Letter Ii
  {0x0c8a, 0x17 | MOD_SHIFT},	// Kannada Letter Uu
  {0x0cad, 0x1c | MOD_SHIFT},	// Kannada Letter Bha
  {0x0c99, 0xa0 | MOD_SHIFT},	// Kannada Letter Nga
  {0x0c98, 0x0c | MOD_SHIFT},	// Kannada Letter Gha
  {0x0ca7, 0x12 | MOD_SHIFT},	// Kannada Letter Dha
  {0x0c9d, 0x13 | MOD_SHIFT},	// Kannada Letter Jha
  {0x0ca2, 0x2f | MOD_SHIFT},	// Kannada Letter Ddha
  {0x0c9e, 0x30 | MOD_SHIFT},	// Kannada Letter Nya
  {0x0c93, 0x04 | MOD_SHIFT},	// Kannada Letter Oo
  {0x0c8f, 0x16 | MOD_SHIFT},	// Kannada Letter Ee
  {0x0c85, 0x07 | MOD_SHIFT},	// Kannada Letter A
  {0x0c87, 0x09 | MOD_SHIFT},	// Kannada Letter I
  {0x0c89, 0x0a | MOD_SHIFT},	// Kannada Letter U
  {0x0cab, 0x0b | MOD_SHIFT},	// Kannada Letter Pha
  {0x0cb1, 0x0d | MOD_SHIFT},	// Kannada Letter Rra
  {0x0c96, 0x0e | MOD_SHIFT},	// Kannada Letter Kha
  {0x0ca5, 0x0f | MOD_SHIFT},	// Kannada Letter Tha
  {0x0c9b, 0x33 | MOD_SHIFT},	// Kannada Letter Cha
  {0x0ca0, 0x34 | MOD_SHIFT},	// Kannada Letter Ttha
  {0x0c8e, 0x1d | MOD_SHIFT},	// Kannada Letter E
  {0x0ca3, 0x06 | MOD_SHIFT},	// Kannada Letter Nna
  {0x0cb3, 0x11 | MOD_SHIFT},	// Kannada Letter Lla
  {0x0cb6, 0x10 | MOD_SHIFT},	// Kannada Letter Sha
  {0x0cb7, 0x36 | MOD_SHIFT},	// Kannada Letter Ssa
  {0x007c, 0x37 | MOD_SHIFT},	// Vertical Line
  {0x0cca, 0x35},	// Kannada Vowel Sign O
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
  {0x0cc3, 0x2e},	// Kannada Vowel Sign Vocalic R
  {0x0ccc, 0x14},	// Kannada Vowel Sign Au
  {0x0cc8, 0x1a},	// Kannada Vowel Sign Ai
  {0x0cbe, 0x08},	// Kannada Vowel Sign Aa
  {0x0cc0, 0x15},	// Kannada Vowel Sign Ii
  {0x0cc2, 0x17},	// Kannada Vowel Sign Uu
  {0x0cac, 0x1c},	// Kannada Letter Ba
  {0x0cb9, 0xa0},	// Kannada Letter Ha
  {0x0c97, 0x0c},	// Kannada Letter Ga
  {0x0ca6, 0x12},	// Kannada Letter Da
  {0x0c9c, 0x13},	// Kannada Letter Ja
  {0x0ca1, 0x2f},	// Kannada Letter Dda
  {0x0ccb, 0x04},	// Kannada Vowel Sign Oo
  {0x0cc7, 0x16},	// Kannada Vowel Sign Ee
  {0x0ccd, 0x07},	// Kannada Sign Virama
  {0x0cbf, 0x09},	// Kannada Vowel Sign I
  {0x0cc1, 0x0a},	// Kannada Vowel Sign U
  {0x0caa, 0x0b},	// Kannada Letter Pa
  {0x0cb0, 0x0d},	// Kannada Letter Ra
  {0x0c95, 0x0e},	// Kannada Letter Ka
  {0x0ca4, 0x0f},	// Kannada Letter Ta
  {0x0c9a, 0x33},	// Kannada Letter Ca
  {0x0c9f, 0x34},	// Kannada Letter Tta
  {0x0cc6, 0x1d},	// Kannada Vowel Sign E
  {0x0c82, 0x1b},	// Kannada Sign Anusvara
  {0x0cae, 0x06},	// Kannada Letter Ma
  {0x0ca8, 0x19},	// Kannada Letter Na
  {0x0cb5, 0x05},	// Kannada Letter Va
  {0x0cb2, 0x11},	// Kannada Letter La
  {0x0cb8, 0x10},	// Kannada Letter Sa
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x0caf, 0x38},	// Kannada Letter Ya
};

const DeadkeyLookup kbdinkan_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_INKAN(kbdinkan, sizeof kbdinkan / sizeof kbdinkan[0], kbdinkan_deadkeys, sizeof kbdinkan_deadkeys / sizeof kbdinkan_deadkeys[0]);
