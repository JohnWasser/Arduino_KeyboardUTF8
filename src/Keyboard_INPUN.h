#include <KeyboardUTF8.h>

// Punjabi

const UnicodeLookup kbdinpun[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0a72, 0x05 | MOD_SHIFT},	// Gurmukhi Iri
  {0x0a73, 0x05 | MOD_ALTGR},	// Gurmukhi Ura
  {0x0a74, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Gurmukhi Ek Onkar
  {0x0a67, 0x1e | MOD_ALTGR},	// Gurmukhi Digit One
  {0x0a68, 0x1f | MOD_ALTGR},	// Gurmukhi Digit Two
  {0x0a69, 0x20 | MOD_ALTGR},	// Gurmukhi Digit Three
  {0x0a6a, 0x21 | MOD_ALTGR},	// Gurmukhi Digit Four
  {0x0a6b, 0x22 | MOD_ALTGR},	// Gurmukhi Digit Five
  {0x0a6c, 0x23 | MOD_ALTGR},	// Gurmukhi Digit Six
  {0x0a6d, 0x24 | MOD_ALTGR},	// Gurmukhi Digit Seven
  {0x0a6e, 0x25 | MOD_ALTGR},	// Gurmukhi Digit Eight
  {0x0a6f, 0x26 | MOD_ALTGR},	// Gurmukhi Digit Nine
  {0x0a66, 0x27 | MOD_ALTGR},	// Gurmukhi Digit Zero
  {0x0a5a, 0x0c | MOD_ALTGR},	// Gurmukhi Letter Ghha
  {0x0a5b, 0x13 | MOD_ALTGR},	// Gurmukhi Letter Za
  {0x0a5c, 0x0d | MOD_SHIFT},	// Gurmukhi Letter Rra
  {0x0a5e, 0x0b | MOD_ALTGR},	// Gurmukhi Letter Fa
  {0x0a59, 0x0e | MOD_ALTGR},	// Gurmukhi Letter Khha
  {0x0965, 0x37 | MOD_ALTGR},	// Devanagari Double Danda
  {0x0a71, 0x21 | MOD_SHIFT},	// Gurmukhi Addak
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x0a14, 0x14 | MOD_SHIFT},	// Gurmukhi Letter Au
  {0x0a10, 0x1a | MOD_SHIFT},	// Gurmukhi Letter Ai
  {0x0a06, 0x08 | MOD_SHIFT},	// Gurmukhi Letter Aa
  {0x0a08, 0x15 | MOD_SHIFT},	// Gurmukhi Letter Ii
  {0x0a0a, 0x17 | MOD_SHIFT},	// Gurmukhi Letter Uu
  {0x0a2d, 0x1c | MOD_SHIFT},	// Gurmukhi Letter Bha
  {0x0a19, 0xa0 | MOD_SHIFT},	// Gurmukhi Letter Nga
  {0x0a18, 0x0c | MOD_SHIFT},	// Gurmukhi Letter Gha
  {0x0a27, 0x12 | MOD_SHIFT},	// Gurmukhi Letter Dha
  {0x0a1d, 0x13 | MOD_SHIFT},	// Gurmukhi Letter Jha
  {0x0a22, 0x2f | MOD_SHIFT},	// Gurmukhi Letter Ddha
  {0x0a1e, 0x30 | MOD_SHIFT},	// Gurmukhi Letter Nya
  {0x0a13, 0x04 | MOD_SHIFT},	// Gurmukhi Letter Oo
  {0x0a0f, 0x16 | MOD_SHIFT},	// Gurmukhi Letter Ee
  {0x0a05, 0x07 | MOD_SHIFT},	// Gurmukhi Letter A
  {0x0a07, 0x09 | MOD_SHIFT},	// Gurmukhi Letter I
  {0x0a09, 0x0a | MOD_SHIFT},	// Gurmukhi Letter U
  {0x0a2b, 0x0b | MOD_SHIFT},	// Gurmukhi Letter Pha
  {0x0a16, 0x0e | MOD_SHIFT},	// Gurmukhi Letter Kha
  {0x0a25, 0x0f | MOD_SHIFT},	// Gurmukhi Letter Tha
  {0x0a1b, 0x33 | MOD_SHIFT},	// Gurmukhi Letter Cha
  {0x0a20, 0x34 | MOD_SHIFT},	// Gurmukhi Letter Ttha
  {0x0a02, 0x1b | MOD_SHIFT},	// Gurmukhi Sign Bindi
  {0x0a23, 0x06 | MOD_SHIFT},	// Gurmukhi Letter Nna
  {0x0a33, 0x11 | MOD_SHIFT},	// Gurmukhi Letter Lla
  {0x0a36, 0x10 | MOD_SHIFT},	// Gurmukhi Letter Sha
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
  {0x0a4c, 0x14},	// Gurmukhi Vowel Sign Au
  {0x0a48, 0x1a},	// Gurmukhi Vowel Sign Ai
  {0x0a3e, 0x08},	// Gurmukhi Vowel Sign Aa
  {0x0a40, 0x15},	// Gurmukhi Vowel Sign Ii
  {0x0a42, 0x17},	// Gurmukhi Vowel Sign Uu
  {0x0a2c, 0x1c},	// Gurmukhi Letter Ba
  {0x0a39, 0xa0},	// Gurmukhi Letter Ha
  {0x0a17, 0x0c},	// Gurmukhi Letter Ga
  {0x0a26, 0x12},	// Gurmukhi Letter Da
  {0x0a1c, 0x13},	// Gurmukhi Letter Ja
  {0x0a21, 0x2f},	// Gurmukhi Letter Dda
  {0x0a3c, 0x30},	// Gurmukhi Sign Nukta
  {0x0a4b, 0x04},	// Gurmukhi Vowel Sign Oo
  {0x0a47, 0x16},	// Gurmukhi Vowel Sign Ee
  {0x0a4d, 0x07},	// Gurmukhi Sign Virama
  {0x0a3f, 0x09},	// Gurmukhi Vowel Sign I
  {0x0a41, 0x0a},	// Gurmukhi Vowel Sign U
  {0x0a2a, 0x0b},	// Gurmukhi Letter Pa
  {0x0a30, 0x0d},	// Gurmukhi Letter Ra
  {0x0a15, 0x0e},	// Gurmukhi Letter Ka
  {0x0a24, 0x0f},	// Gurmukhi Letter Ta
  {0x0a1a, 0x33},	// Gurmukhi Letter Ca
  {0x0a1f, 0x34},	// Gurmukhi Letter Tta
  {0x0a70, 0x1b},	// Gurmukhi Tippi
  {0x0a2e, 0x06},	// Gurmukhi Letter Ma
  {0x0a28, 0x19},	// Gurmukhi Letter Na
  {0x0a35, 0x05},	// Gurmukhi Letter Va
  {0x0a32, 0x11},	// Gurmukhi Letter La
  {0x0a38, 0x10},	// Gurmukhi Letter Sa
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x0a2f, 0x38},	// Gurmukhi Letter Ya
};

const DeadkeyLookup kbdinpun_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_INPUN(kbdinpun, sizeof kbdinpun / sizeof kbdinpun[0], kbdinpun_deadkeys, sizeof kbdinpun_deadkeys / sizeof kbdinpun_deadkeys[0]);
