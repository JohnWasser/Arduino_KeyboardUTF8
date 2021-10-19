#include <KeyboardUTF8.h>

// Devanagari - INSCRIPT

const UnicodeLookup kbdindev[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0960, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Devanagari Letter Vocalic Rr
  {0x0951, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Devanagari Stress Sign Udatta
  {0x0961, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Devanagari Letter Vocalic Ll
  {0x095d, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Devanagari Letter Rha
  {0x090c, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Devanagari Letter Vocalic L
  {0x095e, 0x0b | (MOD_SHIFT | MOD_ALTGR)},	// Devanagari Letter Fa
  {0x0959, 0x0e | (MOD_SHIFT | MOD_ALTGR)},	// Devanagari Letter Khha
  {0x0950, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Devanagari Om
  {0x093d, 0x37 | (MOD_SHIFT | MOD_ALTGR)},	// Devanagari Sign Avagraha
  {0x0967, 0x1e | MOD_ALTGR},	// Devanagari Digit One
  {0x0968, 0x1f | MOD_ALTGR},	// Devanagari Digit Two
  {0x0969, 0x20 | MOD_ALTGR},	// Devanagari Digit Three
  {0x096a, 0x21 | MOD_ALTGR},	// Devanagari Digit Four
  {0x096b, 0x22 | MOD_ALTGR},	// Devanagari Digit Five
  {0x096c, 0x23 | MOD_ALTGR},	// Devanagari Digit Six
  {0x096d, 0x24 | MOD_ALTGR},	// Devanagari Digit Seven
  {0x096e, 0x25 | MOD_ALTGR},	// Devanagari Digit Eight
  {0x096f, 0x26 | MOD_ALTGR},	// Devanagari Digit Nine
  {0x0966, 0x27 | MOD_ALTGR},	// Devanagari Digit Zero
  {0x0944, 0x2e | MOD_ALTGR},	// Devanagari Vowel Sign Vocalic Rr
  {0x0963, 0x15 | MOD_ALTGR},	// Devanagari Vowel Sign Vocalic Ll
  {0x095a, 0x0c | MOD_ALTGR},	// Devanagari Letter Ghha
  {0x095b, 0x13 | MOD_ALTGR},	// Devanagari Letter Za
  {0x095c, 0x2f | MOD_ALTGR},	// Devanagari Letter Dddha
  {0x0952, 0x33 | MOD_ALTGR},	// Devanagari Stress Sign Anudatta
  {0x0962, 0x09 | MOD_ALTGR},	// Devanagari Vowel Sign Vocalic L
  {0x0958, 0x0e | MOD_ALTGR},	// Devanagari Letter Qa
  {0x0953, 0x1d | MOD_ALTGR},	// Devanagari Grave Accent
  {0x0954, 0x06 | MOD_ALTGR},	// Devanagari Acute Accent
  {0x0970, 0x36 | MOD_ALTGR},	// Devanagari Abbreviation Sign
  {0x0965, 0x37 | MOD_ALTGR},	// Devanagari Double Danda
  {0x0912, 0x35 | MOD_SHIFT},	// Devanagari Letter Short O
  {0x090d, 0x1e | MOD_SHIFT},	// Devanagari Letter Candra E
  {0x0945, 0x1f | MOD_SHIFT},	// Devanagari Vowel Sign Candra E
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x0903, 0x2d | MOD_SHIFT},	// Devanagari Sign Visarga
  {0x090b, 0x2e | MOD_SHIFT},	// Devanagari Letter Vocalic R
  {0x0914, 0x14 | MOD_SHIFT},	// Devanagari Letter Au
  {0x0910, 0x1a | MOD_SHIFT},	// Devanagari Letter Ai
  {0x0906, 0x08 | MOD_SHIFT},	// Devanagari Letter Aa
  {0x0908, 0x15 | MOD_SHIFT},	// Devanagari Letter Ii
  {0x090a, 0x17 | MOD_SHIFT},	// Devanagari Letter Uu
  {0x092d, 0x1c | MOD_SHIFT},	// Devanagari Letter Bha
  {0x0919, 0xa0 | MOD_SHIFT},	// Devanagari Letter Nga
  {0x0918, 0x0c | MOD_SHIFT},	// Devanagari Letter Gha
  {0x0927, 0x12 | MOD_SHIFT},	// Devanagari Letter Dha
  {0x091d, 0x13 | MOD_SHIFT},	// Devanagari Letter Jha
  {0x0922, 0x2f | MOD_SHIFT},	// Devanagari Letter Ddha
  {0x091e, 0x30 | MOD_SHIFT},	// Devanagari Letter Nya
  {0x0911, 0x64 | MOD_SHIFT},	// Devanagari Letter Candra O
  {0x0913, 0x04 | MOD_SHIFT},	// Devanagari Letter O
  {0x090f, 0x16 | MOD_SHIFT},	// Devanagari Letter E
  {0x0905, 0x07 | MOD_SHIFT},	// Devanagari Letter A
  {0x0907, 0x09 | MOD_SHIFT},	// Devanagari Letter I
  {0x0909, 0x0a | MOD_SHIFT},	// Devanagari Letter U
  {0x092b, 0x0b | MOD_SHIFT},	// Devanagari Letter Pha
  {0x0931, 0x0d | MOD_SHIFT},	// Devanagari Letter Rra
  {0x0916, 0x0e | MOD_SHIFT},	// Devanagari Letter Kha
  {0x0925, 0x0f | MOD_SHIFT},	// Devanagari Letter Tha
  {0x091b, 0x33 | MOD_SHIFT},	// Devanagari Letter Cha
  {0x0920, 0x34 | MOD_SHIFT},	// Devanagari Letter Ttha
  {0x090e, 0x1d | MOD_SHIFT},	// Devanagari Letter Short E
  {0x0901, 0x1b | MOD_SHIFT},	// Devanagari Sign Candrabindu
  {0x0923, 0x06 | MOD_SHIFT},	// Devanagari Letter Nna
  {0x0929, 0x19 | MOD_SHIFT},	// Devanagari Letter Nnna
  {0x0934, 0x05 | MOD_SHIFT},	// Devanagari Letter Llla
  {0x0933, 0x11 | MOD_SHIFT},	// Devanagari Letter Lla
  {0x0936, 0x10 | MOD_SHIFT},	// Devanagari Letter Sha
  {0x0937, 0x36 | MOD_SHIFT},	// Devanagari Letter Ssa
  {0x0964, 0x37 | MOD_SHIFT},	// Devanagari Danda
  {0x095f, 0x38 | MOD_SHIFT},	// Devanagari Letter Yya
  {0x094a, 0x35},	// Devanagari Vowel Sign Short O
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
  {0x0943, 0x2e},	// Devanagari Vowel Sign Vocalic R
  {0x094c, 0x14},	// Devanagari Vowel Sign Au
  {0x0948, 0x1a},	// Devanagari Vowel Sign Ai
  {0x093e, 0x08},	// Devanagari Vowel Sign Aa
  {0x0940, 0x15},	// Devanagari Vowel Sign Ii
  {0x0942, 0x17},	// Devanagari Vowel Sign Uu
  {0x092c, 0x1c},	// Devanagari Letter Ba
  {0x0939, 0xa0},	// Devanagari Letter Ha
  {0x0917, 0x0c},	// Devanagari Letter Ga
  {0x0926, 0x12},	// Devanagari Letter Da
  {0x091c, 0x13},	// Devanagari Letter Ja
  {0x0921, 0x2f},	// Devanagari Letter Dda
  {0x093c, 0x30},	// Devanagari Sign Nukta
  {0x0949, 0x64},	// Devanagari Vowel Sign Candra O
  {0x094b, 0x04},	// Devanagari Vowel Sign O
  {0x0947, 0x16},	// Devanagari Vowel Sign E
  {0x094d, 0x07},	// Devanagari Sign Virama
  {0x093f, 0x09},	// Devanagari Vowel Sign I
  {0x0941, 0x0a},	// Devanagari Vowel Sign U
  {0x092a, 0x0b},	// Devanagari Letter Pa
  {0x0930, 0x0d},	// Devanagari Letter Ra
  {0x0915, 0x0e},	// Devanagari Letter Ka
  {0x0924, 0x0f},	// Devanagari Letter Ta
  {0x091a, 0x33},	// Devanagari Letter Ca
  {0x091f, 0x34},	// Devanagari Letter Tta
  {0x0946, 0x1d},	// Devanagari Vowel Sign Short E
  {0x0902, 0x1b},	// Devanagari Sign Anusvara
  {0x092e, 0x06},	// Devanagari Letter Ma
  {0x0928, 0x19},	// Devanagari Letter Na
  {0x0935, 0x05},	// Devanagari Letter Va
  {0x0932, 0x11},	// Devanagari Letter La
  {0x0938, 0x10},	// Devanagari Letter Sa
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x092f, 0x38},	// Devanagari Letter Ya
};

const DeadkeyLookup kbdindev_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_INDEV(kbdindev, sizeof kbdindev / sizeof kbdindev[0], kbdindev_deadkeys, sizeof kbdindev_deadkeys / sizeof kbdindev_deadkeys[0]);
