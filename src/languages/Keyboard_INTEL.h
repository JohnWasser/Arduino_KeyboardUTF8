#include <KeyboardUTF8.h>

// Telugu

const UnicodeLookup kbdintel[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0c60, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Telugu Letter Vocalic Rr
  {0x0c61, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Telugu Letter Vocalic Ll
  {0x0c0c, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Telugu Letter Vocalic L
  {0x0c67, 0x1e | MOD_ALTGR},	// Telugu Digit One
  {0x0c68, 0x1f | MOD_ALTGR},	// Telugu Digit Two
  {0x0c69, 0x20 | MOD_ALTGR},	// Telugu Digit Three
  {0x0c6a, 0x21 | MOD_ALTGR},	// Telugu Digit Four
  {0x0c6b, 0x22 | MOD_ALTGR},	// Telugu Digit Five
  {0x0c6c, 0x23 | MOD_ALTGR},	// Telugu Digit Six
  {0x0c6d, 0x24 | MOD_ALTGR},	// Telugu Digit Seven
  {0x0c6e, 0x25 | MOD_ALTGR},	// Telugu Digit Eight
  {0x0c6f, 0x26 | MOD_ALTGR},	// Telugu Digit Nine
  {0x0c66, 0x27 | MOD_ALTGR},	// Telugu Digit Zero
  {0x0c44, 0x2e | MOD_ALTGR},	// Telugu Vowel Sign Vocalic Rr
  {0x0c56, 0x1a | MOD_ALTGR},	// Telugu Ai Length Mark
  {0x0c59, 0x13 | MOD_ALTGR},	// Telugu Letter Dza
  {0x0c55, 0x16 | MOD_ALTGR},	// Telugu Length Mark
  {0x0c58, 0x33 | MOD_ALTGR},	// Telugu Letter Tsa
  {0x0c12, 0x35 | MOD_SHIFT},	// Telugu Letter O
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x0c03, 0x2d | MOD_SHIFT},	// Telugu Sign Visarga
  {0x0c0b, 0x2e | MOD_SHIFT},	// Telugu Letter Vocalic R
  {0x0c14, 0x14 | MOD_SHIFT},	// Telugu Letter Au
  {0x0c10, 0x1a | MOD_SHIFT},	// Telugu Letter Ai
  {0x0c06, 0x08 | MOD_SHIFT},	// Telugu Letter Aa
  {0x0c08, 0x15 | MOD_SHIFT},	// Telugu Letter Ii
  {0x0c0a, 0x17 | MOD_SHIFT},	// Telugu Letter Uu
  {0x0c2d, 0x1c | MOD_SHIFT},	// Telugu Letter Bha
  {0x0c19, 0xa0 | MOD_SHIFT},	// Telugu Letter Nga
  {0x0c18, 0x0c | MOD_SHIFT},	// Telugu Letter Gha
  {0x0c27, 0x12 | MOD_SHIFT},	// Telugu Letter Dha
  {0x0c1d, 0x13 | MOD_SHIFT},	// Telugu Letter Jha
  {0x0c22, 0x2f | MOD_SHIFT},	// Telugu Letter Ddha
  {0x0c1e, 0x30 | MOD_SHIFT},	// Telugu Letter Nya
  {0x0c13, 0x04 | MOD_SHIFT},	// Telugu Letter Oo
  {0x0c0f, 0x16 | MOD_SHIFT},	// Telugu Letter Ee
  {0x0c05, 0x07 | MOD_SHIFT},	// Telugu Letter A
  {0x0c07, 0x09 | MOD_SHIFT},	// Telugu Letter I
  {0x0c09, 0x0a | MOD_SHIFT},	// Telugu Letter U
  {0x0c2b, 0x0b | MOD_SHIFT},	// Telugu Letter Pha
  {0x0c31, 0x0d | MOD_SHIFT},	// Telugu Letter Rra
  {0x0c16, 0x0e | MOD_SHIFT},	// Telugu Letter Kha
  {0x0c25, 0x0f | MOD_SHIFT},	// Telugu Letter Tha
  {0x0c1b, 0x33 | MOD_SHIFT},	// Telugu Letter Cha
  {0x0c20, 0x34 | MOD_SHIFT},	// Telugu Letter Ttha
  {0x0c0e, 0x1d | MOD_SHIFT},	// Telugu Letter E
  {0x0c01, 0x1b | MOD_SHIFT},	// Telugu Sign Candrabindu
  {0x0c23, 0x06 | MOD_SHIFT},	// Telugu Letter Nna
  {0x0c28, 0x19},	// Telugu Letter Na
  {0x0c33, 0x11 | MOD_SHIFT},	// Telugu Letter Lla
  {0x0c36, 0x10 | MOD_SHIFT},	// Telugu Letter Sha
  {0x0c37, 0x36 | MOD_SHIFT},	// Telugu Letter Ssa
  {0x0c4a, 0x35},	// Telugu Vowel Sign O
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
  {0x0c43, 0x2e},	// Telugu Vowel Sign Vocalic R
  {0x0c4c, 0x14},	// Telugu Vowel Sign Au
  {0x0c48, 0x1a},	// Telugu Vowel Sign Ai
  {0x0c3e, 0x08},	// Telugu Vowel Sign Aa
  {0x0c40, 0x15},	// Telugu Vowel Sign Ii
  {0x0c42, 0x17},	// Telugu Vowel Sign Uu
  {0x0c2c, 0x1c},	// Telugu Letter Ba
  {0x0c39, 0xa0},	// Telugu Letter Ha
  {0x0c17, 0x0c},	// Telugu Letter Ga
  {0x0c26, 0x12},	// Telugu Letter Da
  {0x0c1c, 0x13},	// Telugu Letter Ja
  {0x0c21, 0x2f},	// Telugu Letter Dda
  {0x0c4b, 0x04},	// Telugu Vowel Sign Oo
  {0x0c47, 0x16},	// Telugu Vowel Sign Ee
  {0x0c4d, 0x07},	// Telugu Sign Virama
  {0x0c3f, 0x09},	// Telugu Vowel Sign I
  {0x0c41, 0x0a},	// Telugu Vowel Sign U
  {0x0c2a, 0x0b},	// Telugu Letter Pa
  {0x0c30, 0x0d},	// Telugu Letter Ra
  {0x0c15, 0x0e},	// Telugu Letter Ka
  {0x0c24, 0x0f},	// Telugu Letter Ta
  {0x0c1a, 0x33},	// Telugu Letter Ca
  {0x0c1f, 0x34},	// Telugu Letter Tta
  {0x0c46, 0x1d},	// Telugu Vowel Sign E
  {0x0c02, 0x1b},	// Telugu Sign Anusvara
  {0x0c2e, 0x06},	// Telugu Letter Ma
  {0x0c35, 0x05},	// Telugu Letter Va
  {0x0c32, 0x11},	// Telugu Letter La
  {0x0c38, 0x10},	// Telugu Letter Sa
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x0c2f, 0x38},	// Telugu Letter Ya
};

const DeadkeyLookup kbdintel_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_INTEL(kbdintel, sizeof kbdintel / sizeof kbdintel[0], kbdintel_deadkeys, sizeof kbdintel_deadkeys / sizeof kbdintel_deadkeys[0]);
