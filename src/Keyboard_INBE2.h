#include <KeyboardUTF8.h>

// Bengali - INSCRIPT

const UnicodeLookup kbdinbe2[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0040, 0x1f | MOD_SHIFT},	// Commercial At
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x0983, 0x2d | MOD_SHIFT},	// Bengali Sign Visarga
  {0x098b, 0x2e | MOD_SHIFT},	// Bengali Letter Vocalic R
  {0x0994, 0x14 | MOD_SHIFT},	// Bengali Letter Au
  {0x0990, 0x1a | MOD_SHIFT},	// Bengali Letter Ai
  {0x0986, 0x08 | MOD_SHIFT},	// Bengali Letter Aa
  {0x0988, 0x15 | MOD_SHIFT},	// Bengali Letter Ii
  {0x098a, 0x17 | MOD_SHIFT},	// Bengali Letter Uu
  {0x09ad, 0x1c | MOD_SHIFT},	// Bengali Letter Bha
  {0x0999, 0xa0 | MOD_SHIFT},	// Bengali Letter Nga
  {0x0998, 0x0c | MOD_SHIFT},	// Bengali Letter Gha
  {0x09a7, 0x12 | MOD_SHIFT},	// Bengali Letter Dha
  {0x099d, 0x13 | MOD_SHIFT},	// Bengali Letter Jha
  {0x09a2, 0x2f | MOD_SHIFT},	// Bengali Letter Ddha
  {0x099e, 0x30 | MOD_SHIFT},	// Bengali Letter Nya
  {0x0993, 0x04 | MOD_SHIFT},	// Bengali Letter O
  {0x098f, 0x16 | MOD_SHIFT},	// Bengali Letter E
  {0x0985, 0x07 | MOD_SHIFT},	// Bengali Letter A
  {0x0987, 0x09 | MOD_SHIFT},	// Bengali Letter I
  {0x0989, 0x0a | MOD_SHIFT},	// Bengali Letter U
  {0x09ab, 0x0b | MOD_SHIFT},	// Bengali Letter Pha
  {0x09ce, 0x0d | MOD_SHIFT},	// Bengali Letter Khanda Ta
  {0x0996, 0x0e | MOD_SHIFT},	// Bengali Letter Kha
  {0x09a5, 0x0f | MOD_SHIFT},	// Bengali Letter Tha
  {0x099b, 0x33 | MOD_SHIFT},	// Bengali Letter Cha
  {0x09a0, 0x34 | MOD_SHIFT},	// Bengali Letter Ttha
  {0x0981, 0x1b | MOD_SHIFT},	// Bengali Sign Candrabindu
  {0x09a3, 0x06 | MOD_SHIFT},	// Bengali Letter Nna
  {0x09b6, 0x10 | MOD_SHIFT},	// Bengali Letter Sha
  {0x09b7, 0x36 | MOD_SHIFT},	// Bengali Letter Ssa
  {0x0964, 0x37 | MOD_SHIFT},	// Devanagari Danda
  {0x09af, 0x38 | MOD_SHIFT},	// Bengali Letter Ya
  {0x0965, 0x35},	// Devanagari Double Danda
  {0x09e7, 0x1e},	// Bengali Digit One
  {0x09e8, 0x1f},	// Bengali Digit Two
  {0x09e9, 0x20},	// Bengali Digit Three
  {0x09ea, 0x21},	// Bengali Digit Four
  {0x09eb, 0x22},	// Bengali Digit Five
  {0x09ec, 0x23},	// Bengali Digit Six
  {0x09ed, 0x24},	// Bengali Digit Seven
  {0x09ee, 0x25},	// Bengali Digit Eight
  {0x09ef, 0x26},	// Bengali Digit Nine
  {0x09e6, 0x27},	// Bengali Digit Zero
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x09c3, 0x2e},	// Bengali Vowel Sign Vocalic R
  {0x09cc, 0x14},	// Bengali Vowel Sign Au
  {0x09c8, 0x1a},	// Bengali Vowel Sign Ai
  {0x09be, 0x08},	// Bengali Vowel Sign Aa
  {0x09c0, 0x15},	// Bengali Vowel Sign Ii
  {0x09c2, 0x17},	// Bengali Vowel Sign Uu
  {0x09ac, 0x05},	// Bengali Letter Ba
  {0x09b9, 0xa0},	// Bengali Letter Ha
  {0x0997, 0x0c},	// Bengali Letter Ga
  {0x09a6, 0x12},	// Bengali Letter Da
  {0x099c, 0x13},	// Bengali Letter Ja
  {0x09a1, 0x2f},	// Bengali Letter Dda
  {0x09bc, 0x30},	// Bengali Sign Nukta
  {0x09cb, 0x04},	// Bengali Vowel Sign O
  {0x09c7, 0x16},	// Bengali Vowel Sign E
  {0x09cd, 0x07},	// Bengali Sign Virama
  {0x09bf, 0x09},	// Bengali Vowel Sign I
  {0x09c1, 0x0a},	// Bengali Vowel Sign U
  {0x09aa, 0x0b},	// Bengali Letter Pa
  {0x09b0, 0x0d},	// Bengali Letter Ra
  {0x0995, 0x0e},	// Bengali Letter Ka
  {0x09a4, 0x0f},	// Bengali Letter Ta
  {0x099a, 0x33},	// Bengali Letter Ca
  {0x099f, 0x34},	// Bengali Letter Tta
  {0x0982, 0x1b},	// Bengali Sign Anusvara
  {0x09ae, 0x06},	// Bengali Letter Ma
  {0x09a8, 0x19},	// Bengali Letter Na
  {0x09b2, 0x11},	// Bengali Letter La
  {0x09b8, 0x10},	// Bengali Letter Sa
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x09df, 0x38},	// Bengali Letter Yya
};

const DeadkeyLookup kbdinbe2_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_INBE2(kbdinbe2, sizeof kbdinbe2 / sizeof kbdinbe2[0], kbdinbe2_deadkeys, sizeof kbdinbe2_deadkeys / sizeof kbdinbe2_deadkeys[0]);
