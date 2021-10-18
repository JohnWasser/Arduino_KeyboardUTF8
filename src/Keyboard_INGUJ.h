#include <KeyboardUTF8.h>

// Gujarati

const UnicodeLookup kbdinguj[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0ae0, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Gujarati Letter Vocalic Rr
  {0x0ad0, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Gujarati Om
  {0x0abd, 0x37 | (MOD_SHIFT | MOD_ALTGR)},	// Gujarati Sign Avagraha
  {0x0ae7, 0x1e | MOD_ALTGR},	// Gujarati Digit One
  {0x0ae8, 0x1f | MOD_ALTGR},	// Gujarati Digit Two
  {0x0ae9, 0x20 | MOD_ALTGR},	// Gujarati Digit Three
  {0x0aea, 0x21 | MOD_ALTGR},	// Gujarati Digit Four
  {0x0aeb, 0x22 | MOD_ALTGR},	// Gujarati Digit Five
  {0x0aec, 0x23 | MOD_ALTGR},	// Gujarati Digit Six
  {0x0aed, 0x24 | MOD_ALTGR},	// Gujarati Digit Seven
  {0x0aee, 0x25 | MOD_ALTGR},	// Gujarati Digit Eight
  {0x0aef, 0x26 | MOD_ALTGR},	// Gujarati Digit Nine
  {0x0ae6, 0x27 | MOD_ALTGR},	// Gujarati Digit Zero
  {0x0ac4, 0x2e | MOD_ALTGR},	// Gujarati Vowel Sign Vocalic Rr
  {0x0965, 0x37 | MOD_ALTGR},	// Devanagari Double Danda
  {0x0a8d, 0x1e | MOD_SHIFT},	// Gujarati Vowel Candra E
  {0x0ac5, 0x1f | MOD_SHIFT},	// Gujarati Vowel Sign Candra E
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x0a83, 0x2d | MOD_SHIFT},	// Gujarati Sign Visarga
  {0x0a8b, 0x2e | MOD_SHIFT},	// Gujarati Letter Vocalic R
  {0x0a94, 0x14 | MOD_SHIFT},	// Gujarati Letter Au
  {0x0a90, 0x1a | MOD_SHIFT},	// Gujarati Letter Ai
  {0x0a86, 0x08 | MOD_SHIFT},	// Gujarati Letter Aa
  {0x0a88, 0x15 | MOD_SHIFT},	// Gujarati Letter Ii
  {0x0a8a, 0x17 | MOD_SHIFT},	// Gujarati Letter Uu
  {0x0aad, 0x1c | MOD_SHIFT},	// Gujarati Letter Bha
  {0x0a99, 0xa0 | MOD_SHIFT},	// Gujarati Letter Nga
  {0x0a98, 0x0c | MOD_SHIFT},	// Gujarati Letter Gha
  {0x0aa7, 0x12 | MOD_SHIFT},	// Gujarati Letter Dha
  {0x0a9d, 0x13 | MOD_SHIFT},	// Gujarati Letter Jha
  {0x0aa2, 0x2f | MOD_SHIFT},	// Gujarati Letter Ddha
  {0x0a9e, 0x30 | MOD_SHIFT},	// Gujarati Letter Nya
  {0x0a91, 0x31 | MOD_SHIFT},	// Gujarati Vowel Candra O
  {0x0a93, 0x04 | MOD_SHIFT},	// Gujarati Letter O
  {0x0a8f, 0x16 | MOD_SHIFT},	// Gujarati Letter E
  {0x0a85, 0x07 | MOD_SHIFT},	// Gujarati Letter A
  {0x0a87, 0x09 | MOD_SHIFT},	// Gujarati Letter I
  {0x0a89, 0x0a | MOD_SHIFT},	// Gujarati Letter U
  {0x0aab, 0x0b | MOD_SHIFT},	// Gujarati Letter Pha
  {0x0a96, 0x0e | MOD_SHIFT},	// Gujarati Letter Kha
  {0x0aa5, 0x0f | MOD_SHIFT},	// Gujarati Letter Tha
  {0x0a9b, 0x33 | MOD_SHIFT},	// Gujarati Letter Cha
  {0x0aa0, 0x34 | MOD_SHIFT},	// Gujarati Letter Ttha
  {0x0a81, 0x1b | MOD_SHIFT},	// Gujarati Sign Candrabindu
  {0x0aa3, 0x06 | MOD_SHIFT},	// Gujarati Letter Nna
  {0x0ab3, 0x11 | MOD_SHIFT},	// Gujarati Letter Lla
  {0x0ab6, 0x10 | MOD_SHIFT},	// Gujarati Letter Sha
  {0x0ab7, 0x36 | MOD_SHIFT},	// Gujarati Letter Ssa
  {0x0964, 0x37 | MOD_SHIFT},	// Devanagari Danda
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
  {0x0ac3, 0x2e},	// Gujarati Vowel Sign Vocalic R
  {0x0acc, 0x14},	// Gujarati Vowel Sign Au
  {0x0ac8, 0x1a},	// Gujarati Vowel Sign Ai
  {0x0abe, 0x08},	// Gujarati Vowel Sign Aa
  {0x0ac0, 0x15},	// Gujarati Vowel Sign Ii
  {0x0ac2, 0x17},	// Gujarati Vowel Sign Uu
  {0x0aac, 0x1c},	// Gujarati Letter Ba
  {0x0ab9, 0xa0},	// Gujarati Letter Ha
  {0x0a97, 0x0c},	// Gujarati Letter Ga
  {0x0aa6, 0x12},	// Gujarati Letter Da
  {0x0a9c, 0x13},	// Gujarati Letter Ja
  {0x0aa1, 0x2f},	// Gujarati Letter Dda
  {0x0abc, 0x30},	// Gujarati Sign Nukta
  {0x0ac9, 0x31},	// Gujarati Vowel Sign Candra O
  {0x0acb, 0x04},	// Gujarati Vowel Sign O
  {0x0ac7, 0x16},	// Gujarati Vowel Sign E
  {0x0acd, 0x07},	// Gujarati Sign Virama
  {0x0abf, 0x09},	// Gujarati Vowel Sign I
  {0x0ac1, 0x0a},	// Gujarati Vowel Sign U
  {0x0aaa, 0x0b},	// Gujarati Letter Pa
  {0x0ab0, 0x0d},	// Gujarati Letter Ra
  {0x0a95, 0x0e},	// Gujarati Letter Ka
  {0x0aa4, 0x0f},	// Gujarati Letter Ta
  {0x0a9a, 0x33},	// Gujarati Letter Ca
  {0x0a9f, 0x34},	// Gujarati Letter Tta
  {0x0a82, 0x1b},	// Gujarati Sign Anusvara
  {0x0aae, 0x06},	// Gujarati Letter Ma
  {0x0aa8, 0x19},	// Gujarati Letter Na
  {0x0ab5, 0x05},	// Gujarati Letter Va
  {0x0ab2, 0x11},	// Gujarati Letter La
  {0x0ab8, 0x10},	// Gujarati Letter Sa
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x0aaf, 0x38},	// Gujarati Letter Ya
};

const DeadkeyLookup kbdinguj_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_INGUJ(kbdinguj, sizeof kbdinguj / sizeof kbdinguj[0], kbdinguj_deadkeys, sizeof kbdinguj_deadkeys / sizeof kbdinguj_deadkeys[0]);
