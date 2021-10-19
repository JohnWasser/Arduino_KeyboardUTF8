#include <KeyboardUTF8.h>

// Odia

const UnicodeLookup kbdinori[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0b60, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Oriya Letter Vocalic Rr
  {0x0b61, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Oriya Letter Vocalic Ll
  {0x0b5d, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Oriya Letter Rha
  {0x0b0c, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Oriya Letter Vocalic L
  {0x0b3d, 0x37 | (MOD_SHIFT | MOD_ALTGR)},	// Oriya Sign Avagraha
  {0x0b67, 0x1e | MOD_ALTGR},	// Oriya Digit One
  {0x0b68, 0x1f | MOD_ALTGR},	// Oriya Digit Two
  {0x0b69, 0x20 | MOD_ALTGR},	// Oriya Digit Three
  {0x0b6a, 0x21 | MOD_ALTGR},	// Oriya Digit Four
  {0x0b6b, 0x22 | MOD_ALTGR},	// Oriya Digit Five
  {0x0b6c, 0x23 | MOD_ALTGR},	// Oriya Digit Six
  {0x0b6d, 0x24 | MOD_ALTGR},	// Oriya Digit Seven
  {0x0b6e, 0x25 | MOD_ALTGR},	// Oriya Digit Eight
  {0x0b6f, 0x26 | MOD_ALTGR},	// Oriya Digit Nine
  {0x0b66, 0x27 | MOD_ALTGR},	// Oriya Digit Zero
  {0x0b44, 0x2e | MOD_ALTGR},	// Oriya Vowel Sign Vocalic Rr
  {0x0b63, 0x15 | MOD_ALTGR},	// Oriya Vowel Sign Vocalic Ll
  {0x0b5c, 0x2f | MOD_ALTGR},	// Oriya Letter Rra
  {0x0b62, 0x09 | MOD_ALTGR},	// Oriya Vowel Sign Vocalic L
  {0x0b70, 0x1b | MOD_ALTGR},	// Oriya Isshar
  {0x0b35, 0x05 | MOD_ALTGR},	// Oriya Letter Va
  {0x0965, 0x37 | MOD_ALTGR},	// Devanagari Double Danda
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x0b03, 0x2d | MOD_SHIFT},	// Oriya Sign Visarga
  {0x0b0b, 0x2e | MOD_SHIFT},	// Oriya Letter Vocalic R
  {0x0b14, 0x14 | MOD_SHIFT},	// Oriya Letter Au
  {0x0b10, 0x1a | MOD_SHIFT},	// Oriya Letter Ai
  {0x0b06, 0x08 | MOD_SHIFT},	// Oriya Letter Aa
  {0x0b08, 0x15 | MOD_SHIFT},	// Oriya Letter Ii
  {0x0b0a, 0x17 | MOD_SHIFT},	// Oriya Letter Uu
  {0x0b2d, 0x1c | MOD_SHIFT},	// Oriya Letter Bha
  {0x0b19, 0xa0 | MOD_SHIFT},	// Oriya Letter Nga
  {0x0b18, 0x0c | MOD_SHIFT},	// Oriya Letter Gha
  {0x0b27, 0x12 | MOD_SHIFT},	// Oriya Letter Dha
  {0x0b1d, 0x13 | MOD_SHIFT},	// Oriya Letter Jha
  {0x0b22, 0x2f | MOD_SHIFT},	// Oriya Letter Ddha
  {0x0b1e, 0x30 | MOD_SHIFT},	// Oriya Letter Nya
  {0x0b13, 0x04 | MOD_SHIFT},	// Oriya Letter O
  {0x0b0f, 0x16 | MOD_SHIFT},	// Oriya Letter E
  {0x0b05, 0x07 | MOD_SHIFT},	// Oriya Letter A
  {0x0b07, 0x09 | MOD_SHIFT},	// Oriya Letter I
  {0x0b09, 0x0a | MOD_SHIFT},	// Oriya Letter U
  {0x0b2b, 0x0b | MOD_SHIFT},	// Oriya Letter Pha
  {0x0b16, 0x0e | MOD_SHIFT},	// Oriya Letter Kha
  {0x0b25, 0x0f | MOD_SHIFT},	// Oriya Letter Tha
  {0x0b1b, 0x33 | MOD_SHIFT},	// Oriya Letter Cha
  {0x0b20, 0x34 | MOD_SHIFT},	// Oriya Letter Ttha
  {0x0b71, 0x05},	// Oriya Letter Wa
  {0x0b01, 0x1b | MOD_SHIFT},	// Oriya Sign Candrabindu
  {0x0b23, 0x06 | MOD_SHIFT},	// Oriya Letter Nna
  {0x0b33, 0x11 | MOD_SHIFT},	// Oriya Letter Lla
  {0x0b36, 0x10 | MOD_SHIFT},	// Oriya Letter Sha
  {0x0b37, 0x36 | MOD_SHIFT},	// Oriya Letter Ssa
  {0x0964, 0x37 | MOD_SHIFT},	// Devanagari Danda
  {0x0b2f, 0x38 | MOD_SHIFT},	// Oriya Letter Ya
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
  {0x0b43, 0x2e},	// Oriya Vowel Sign Vocalic R
  {0x0b4c, 0x14},	// Oriya Vowel Sign Au
  {0x0b48, 0x1a},	// Oriya Vowel Sign Ai
  {0x0b3e, 0x08},	// Oriya Vowel Sign Aa
  {0x0b40, 0x15},	// Oriya Vowel Sign Ii
  {0x0b42, 0x17},	// Oriya Vowel Sign Uu
  {0x0b2c, 0x1c},	// Oriya Letter Ba
  {0x0b39, 0xa0},	// Oriya Letter Ha
  {0x0b17, 0x0c},	// Oriya Letter Ga
  {0x0b26, 0x12},	// Oriya Letter Da
  {0x0b1c, 0x13},	// Oriya Letter Ja
  {0x0b21, 0x2f},	// Oriya Letter Dda
  {0x0b3c, 0x30},	// Oriya Sign Nukta
  {0x0b4b, 0x04},	// Oriya Vowel Sign O
  {0x0b47, 0x16},	// Oriya Vowel Sign E
  {0x0b4d, 0x07},	// Oriya Sign Virama
  {0x0b3f, 0x09},	// Oriya Vowel Sign I
  {0x0b41, 0x0a},	// Oriya Vowel Sign U
  {0x0b2a, 0x0b},	// Oriya Letter Pa
  {0x0b30, 0x0d},	// Oriya Letter Ra
  {0x0b15, 0x0e},	// Oriya Letter Ka
  {0x0b24, 0x0f},	// Oriya Letter Ta
  {0x0b1a, 0x33},	// Oriya Letter Ca
  {0x0b1f, 0x34},	// Oriya Letter Tta
  {0x0b5f, 0x38},	// Oriya Letter Yya
  {0x0b02, 0x1b},	// Oriya Sign Anusvara
  {0x0b2e, 0x06},	// Oriya Letter Ma
  {0x0b28, 0x19},	// Oriya Letter Na
  {0x0b32, 0x11},	// Oriya Letter La
  {0x0b38, 0x10},	// Oriya Letter Sa
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
};

const DeadkeyLookup kbdinori_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_INORI(kbdinori, sizeof kbdinori / sizeof kbdinori[0], kbdinori_deadkeys, sizeof kbdinori_deadkeys / sizeof kbdinori_deadkeys[0]);
