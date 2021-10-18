#include <KeyboardUTF8.h>

// Nepali

const UnicodeLookup kbdnepr[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0031, 0x1e | MOD_ALTGR},	// Digit One
  {0x0032, 0x1f | MOD_ALTGR},	// Digit Two
  {0x0033, 0x20 | MOD_ALTGR},	// Digit Three
  {0x0034, 0x21 | MOD_ALTGR},	// Digit Four
  {0x0035, 0x22 | MOD_ALTGR},	// Digit Five
  {0x0036, 0x23 | MOD_ALTGR},	// Digit Six
  {0x0037, 0x24 | MOD_ALTGR},	// Digit Seven
  {0x0038, 0x25 | MOD_ALTGR},	// Digit Eight
  {0x0039, 0x26 | MOD_ALTGR},	// Digit Nine
  {0x0030, 0x27 | MOD_ALTGR},	// Digit Zero
  {0x002b, 0x2e | MOD_ALTGR},	// Plus Sign
  {0x090a, 0x13 | MOD_ALTGR},	// Devanagari Letter Uu
  {0x0914, 0x30 | MOD_ALTGR},	// Devanagari Letter Au
  {0x0906, 0x06 | MOD_ALTGR},	// Devanagari Letter Aa
  {0x0967, 0x1e | MOD_SHIFT},	// Devanagari Digit One
  {0x0968, 0x1f | MOD_SHIFT},	// Devanagari Digit Two
  {0x0969, 0x20 | MOD_SHIFT},	// Devanagari Digit Three
  {0x096a, 0x21 | MOD_SHIFT},	// Devanagari Digit Four
  {0x096b, 0x22 | MOD_SHIFT},	// Devanagari Digit Five
  {0x096c, 0x23 | MOD_SHIFT},	// Devanagari Digit Six
  {0x096d, 0x24 | MOD_SHIFT},	// Devanagari Digit Seven
  {0x096e, 0x25 | MOD_SHIFT},	// Devanagari Digit Eight
  {0x096f, 0x26 | MOD_SHIFT},	// Devanagari Digit Nine
  {0x0966, 0x27 | MOD_SHIFT},	// Devanagari Digit Zero
  {0x0029, 0x2d | MOD_SHIFT},	// Right Parenthesis
  {0x0902, 0x2e | MOD_SHIFT},	// Devanagari Sign Anusvara
  {0x094b, 0x14 | MOD_SHIFT},	// Devanagari Vowel Sign O
  {0x0907, 0x12 | MOD_SHIFT},	// Devanagari Letter I
  {0x090f, 0x13 | MOD_SHIFT},	// Devanagari Letter E
  {0x0948, 0x30 | MOD_SHIFT},	// Devanagari Vowel Sign Ai
  {0x094d, 0x31 | MOD_SHIFT},	// Devanagari Sign Virama
  {0x0901, 0x09 | MOD_SHIFT},	// Devanagari Sign Candrabindu
  {0x0940, 0x0f | MOD_SHIFT},	// Devanagari Vowel Sign Ii
  {0x0942, 0x34 | MOD_SHIFT},	// Devanagari Vowel Sign Uu
  {0x090b, 0x06 | MOD_SHIFT},	// Devanagari Letter Vocalic R
  {0x0903, 0x10 | MOD_SHIFT},	// Devanagari Sign Visarga
  {0x003f, 0x36 | MOD_SHIFT},	// Question Mark
  {0x091e, 0x35},	// Devanagari Letter Nya
  {0x0918, 0x1f},	// Devanagari Letter Gha
  {0x0919, 0x20},	// Devanagari Letter Nga
  {0x091d, 0x21},	// Devanagari Letter Jha
  {0x091b, 0x22},	// Devanagari Letter Cha
  {0x091f, 0x23},	// Devanagari Letter Tta
  {0x0920, 0x24},	// Devanagari Letter Ttha
  {0x0921, 0x25},	// Devanagari Letter Dda
  {0x0922, 0x26},	// Devanagari Letter Ddha
  {0x0923, 0x27},	// Devanagari Letter Nna
  {0x0028, 0x2d},	// Left Parenthesis
  {0x002e, 0x2e},	// Full Stop
  {0x0927, 0x1a},	// Devanagari Letter Dha
  {0x092d, 0x08},	// Devanagari Letter Bha
  {0x091a, 0x15},	// Devanagari Letter Ca
  {0x0924, 0x17},	// Devanagari Letter Ta
  {0x0925, 0x1c},	// Devanagari Letter Tha
  {0x0917, 0xa0},	// Devanagari Letter Ga
  {0x0937, 0x0c},	// Devanagari Letter Ssa
  {0x092f, 0x12},	// Devanagari Letter Ya
  {0x0909, 0x13},	// Devanagari Letter U
  {0x0943, 0x2f},	// Devanagari Vowel Sign Vocalic R
  {0x0947, 0x30},	// Devanagari Vowel Sign E
  {0x092c, 0x04},	// Devanagari Letter Ba
  {0x0915, 0x16},	// Devanagari Letter Ka
  {0x092e, 0x07},	// Devanagari Letter Ma
  {0x093e, 0x09},	// Devanagari Vowel Sign Aa
  {0x0928, 0x0a},	// Devanagari Letter Na
  {0x091c, 0x0b},	// Devanagari Letter Ja
  {0x0935, 0x0d},	// Devanagari Letter Va
  {0x092a, 0x0e},	// Devanagari Letter Pa
  {0x093f, 0x0f},	// Devanagari Vowel Sign I
  {0x0938, 0x33},	// Devanagari Letter Sa
  {0x0941, 0x34},	// Devanagari Vowel Sign U
  {0x0936, 0x1d},	// Devanagari Letter Sha
  {0x0939, 0x1b},	// Devanagari Letter Ha
  {0x0905, 0x06},	// Devanagari Letter A
  {0x0916, 0x19},	// Devanagari Letter Kha
  {0x0926, 0x05},	// Devanagari Letter Da
  {0x0932, 0x11},	// Devanagari Letter La
  {0x092b, 0x10},	// Devanagari Letter Pha
  {0x002c, 0x36},	// Comma
  {0x0964, 0x37},	// Devanagari Danda
  {0x0930, 0x38},	// Devanagari Letter Ra
};

const DeadkeyLookup kbdnepr_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_NEPR(kbdnepr, sizeof kbdnepr / sizeof kbdnepr[0], kbdnepr_deadkeys, sizeof kbdnepr_deadkeys / sizeof kbdnepr_deadkeys[0]);
