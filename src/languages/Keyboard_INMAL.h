#include <KeyboardUTF8.h>

// Malayalam

const UnicodeLookup kbdinmal[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0d70, 0x1e | (MOD_SHIFT | MOD_ALTGR)},	// Malayalam Number Ten
  {0x0d71, 0x1f | (MOD_SHIFT | MOD_ALTGR)},	// Malayalam Number One Hundred
  {0x0d72, 0x20 | (MOD_SHIFT | MOD_ALTGR)},	// Malayalam Number One Thousand
  {0x0d60, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Malayalam Letter Vocalic Rr
  {0x0d61, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Malayalam Letter Vocalic Ll
  {0x0d0c, 0x07 | (MOD_SHIFT | MOD_ALTGR)},	// Malayalam Letter Vocalic L
  {0x0d79, 0x19 | (MOD_SHIFT | MOD_ALTGR)},	// Malayalam Date Mark
  {0x0d67, 0x1e | MOD_ALTGR},	// Malayalam Digit One
  {0x0d68, 0x1f | MOD_ALTGR},	// Malayalam Digit Two
  {0x0d69, 0x20 | MOD_ALTGR},	// Malayalam Digit Three
  {0x0d6a, 0x21 | MOD_ALTGR},	// Malayalam Digit Four
  {0x0d6b, 0x22 | MOD_ALTGR},	// Malayalam Digit Five
  {0x0d6c, 0x23 | MOD_ALTGR},	// Malayalam Digit Six
  {0x0d6d, 0x24 | MOD_ALTGR},	// Malayalam Digit Seven
  {0x0d6e, 0x25 | MOD_ALTGR},	// Malayalam Digit Eight
  {0x0d6f, 0x26 | MOD_ALTGR},	// Malayalam Digit Nine
  {0x0d66, 0x27 | MOD_ALTGR},	// Malayalam Digit Zero
  {0x0d57, 0x14 | MOD_ALTGR},	// Malayalam Au Length Mark
  {0x0d12, 0x35 | MOD_SHIFT},	// Malayalam Letter O
  {0x0d7f, 0x23 | MOD_SHIFT},	// Malayalam Letter Chillu K
  {0x0d7e, 0x25 | MOD_SHIFT},	// Malayalam Letter Chillu Ll
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x0d03, 0x2d | MOD_SHIFT},	// Malayalam Sign Visarga
  {0x0d0b, 0x2e | MOD_SHIFT},	// Malayalam Letter Vocalic R
  {0x0d14, 0x14 | MOD_SHIFT},	// Malayalam Letter Au
  {0x0d10, 0x1a | MOD_SHIFT},	// Malayalam Letter Ai
  {0x0d06, 0x08 | MOD_SHIFT},	// Malayalam Letter Aa
  {0x0d08, 0x15 | MOD_SHIFT},	// Malayalam Letter Ii
  {0x0d0a, 0x17 | MOD_SHIFT},	// Malayalam Letter Uu
  {0x0d2d, 0x1c | MOD_SHIFT},	// Malayalam Letter Bha
  {0x0d19, 0xa0 | MOD_SHIFT},	// Malayalam Letter Nga
  {0x0d18, 0x0c | MOD_SHIFT},	// Malayalam Letter Gha
  {0x0d27, 0x12 | MOD_SHIFT},	// Malayalam Letter Dha
  {0x0d1d, 0x13 | MOD_SHIFT},	// Malayalam Letter Jha
  {0x0d22, 0x2f | MOD_SHIFT},	// Malayalam Letter Ddha
  {0x0d1e, 0x30 | MOD_SHIFT},	// Malayalam Letter Nya
  {0x0d13, 0x04 | MOD_SHIFT},	// Malayalam Letter Oo
  {0x0d0f, 0x16 | MOD_SHIFT},	// Malayalam Letter Ee
  {0x0d05, 0x07 | MOD_SHIFT},	// Malayalam Letter A
  {0x0d07, 0x09 | MOD_SHIFT},	// Malayalam Letter I
  {0x0d09, 0x0a | MOD_SHIFT},	// Malayalam Letter U
  {0x0d2b, 0x0b | MOD_SHIFT},	// Malayalam Letter Pha
  {0x0d31, 0x0d | MOD_SHIFT},	// Malayalam Letter Rra
  {0x0d16, 0x0e | MOD_SHIFT},	// Malayalam Letter Kha
  {0x0d25, 0x0f | MOD_SHIFT},	// Malayalam Letter Tha
  {0x0d1b, 0x33 | MOD_SHIFT},	// Malayalam Letter Cha
  {0x0d20, 0x34 | MOD_SHIFT},	// Malayalam Letter Ttha
  {0x0d0e, 0x1d | MOD_SHIFT},	// Malayalam Letter E
  {0x0d7a, 0x1b | MOD_SHIFT},	// Malayalam Letter Chillu Nn
  {0x0d23, 0x06 | MOD_SHIFT},	// Malayalam Letter Nna
  {0x0d7b, 0x19 | MOD_SHIFT},	// Malayalam Letter Chillu N
  {0x0d34, 0x05 | MOD_SHIFT},	// Malayalam Letter Llla
  {0x0d33, 0x11 | MOD_SHIFT},	// Malayalam Letter Lla
  {0x0d36, 0x10 | MOD_SHIFT},	// Malayalam Letter Sha
  {0x0d37, 0x36 | MOD_SHIFT},	// Malayalam Letter Ssa
  {0x0d7d, 0x37 | MOD_SHIFT},	// Malayalam Letter Chillu L
  {0x0d4a, 0x35},	// Malayalam Vowel Sign O
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
  {0x0d43, 0x2e},	// Malayalam Vowel Sign Vocalic R
  {0x0d4c, 0x14},	// Malayalam Vowel Sign Au
  {0x0d48, 0x1a},	// Malayalam Vowel Sign Ai
  {0x0d3e, 0x08},	// Malayalam Vowel Sign Aa
  {0x0d40, 0x15},	// Malayalam Vowel Sign Ii
  {0x0d42, 0x17},	// Malayalam Vowel Sign Uu
  {0x0d2c, 0x1c},	// Malayalam Letter Ba
  {0x0d39, 0xa0},	// Malayalam Letter Ha
  {0x0d17, 0x0c},	// Malayalam Letter Ga
  {0x0d26, 0x12},	// Malayalam Letter Da
  {0x0d1c, 0x13},	// Malayalam Letter Ja
  {0x0d21, 0x2f},	// Malayalam Letter Dda
  {0x0d7c, 0x30},	// Malayalam Letter Chillu Rr
  {0x0d4b, 0x04},	// Malayalam Vowel Sign Oo
  {0x0d47, 0x16},	// Malayalam Vowel Sign Ee
  {0x0d4d, 0x07},	// Malayalam Sign Virama
  {0x0d3f, 0x09},	// Malayalam Vowel Sign I
  {0x0d41, 0x0a},	// Malayalam Vowel Sign U
  {0x0d2a, 0x0b},	// Malayalam Letter Pa
  {0x0d30, 0x0d},	// Malayalam Letter Ra
  {0x0d15, 0x0e},	// Malayalam Letter Ka
  {0x0d24, 0x0f},	// Malayalam Letter Ta
  {0x0d1a, 0x33},	// Malayalam Letter Ca
  {0x0d1f, 0x34},	// Malayalam Letter Tta
  {0x0d46, 0x1d},	// Malayalam Vowel Sign E
  {0x0d02, 0x1b},	// Malayalam Sign Anusvara
  {0x0d2e, 0x06},	// Malayalam Letter Ma
  {0x0d28, 0x19},	// Malayalam Letter Na
  {0x0d35, 0x05},	// Malayalam Letter Va
  {0x0d32, 0x11},	// Malayalam Letter La
  {0x0d38, 0x10},	// Malayalam Letter Sa
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x0d2f, 0x38},	// Malayalam Letter Ya
};

const DeadkeyLookup kbdinmal_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_INMAL(kbdinmal, sizeof kbdinmal / sizeof kbdinmal[0], kbdinmal_deadkeys, sizeof kbdinmal_deadkeys / sizeof kbdinmal_deadkeys[0]);
