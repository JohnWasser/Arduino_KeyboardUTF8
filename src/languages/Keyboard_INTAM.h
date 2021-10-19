#include <KeyboardUTF8.h>

// Tamil

const UnicodeLookup kbdintam[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0be7, 0x1e | MOD_ALTGR},	// Tamil Digit One
  {0x0be8, 0x1f | MOD_ALTGR},	// Tamil Digit Two
  {0x0be9, 0x20 | MOD_ALTGR},	// Tamil Digit Three
  {0x0bea, 0x21 | MOD_ALTGR},	// Tamil Digit Four
  {0x0beb, 0x22 | MOD_ALTGR},	// Tamil Digit Five
  {0x0bec, 0x23 | MOD_ALTGR},	// Tamil Digit Six
  {0x0bed, 0x24 | MOD_ALTGR},	// Tamil Digit Seven
  {0x0bee, 0x25 | MOD_ALTGR},	// Tamil Digit Eight
  {0x0bef, 0x26 | MOD_ALTGR},	// Tamil Digit Nine
  {0x0be6, 0x27 | MOD_ALTGR},	// Tamil Digit Zero
  {0x0bf1, 0x2d | MOD_ALTGR},	// Tamil Number One Hundred
  {0x0bf2, 0x2e | MOD_ALTGR},	// Tamil Number One Thousand
  {0x0bf7, 0x1c | MOD_ALTGR},	// Tamil Credit Sign (Varavu)
  {0x0bf6, 0x0b | MOD_ALTGR},	// Tamil Debit Sign (Patru)
  {0x0bf9, 0x1d | MOD_ALTGR},	// Tamil Rupee Sign (Rupai)
  {0x0bfa, 0x1b | MOD_ALTGR},	// Tamil Number Sign (Enn)
  {0x0bf4, 0x06 | MOD_ALTGR},	// Tamil Month Sign (Maatham)
  {0x0bf3, 0x19 | MOD_ALTGR},	// Tamil Day Sign (Naal)
  {0x0bf5, 0x05 | MOD_ALTGR},	// Tamil Year Sign (Varudam)
  {0x0bf8, 0x11 | MOD_ALTGR},	// Tamil As Above Sign (Merpadi)
  {0x0b92, 0x35 | MOD_SHIFT},	// Tamil Letter O
  {0x0bf0, 0x27 | MOD_SHIFT},	// Tamil Number Ten
  {0x0b83, 0x2d | MOD_SHIFT},	// Tamil Sign Visarga
  {0x0b94, 0x14 | MOD_SHIFT},	// Tamil Letter Au
  {0x0b90, 0x1a | MOD_SHIFT},	// Tamil Letter Ai
  {0x0b86, 0x08 | MOD_SHIFT},	// Tamil Letter Aa
  {0x0b88, 0x15 | MOD_SHIFT},	// Tamil Letter Ii
  {0x0b8a, 0x17 | MOD_SHIFT},	// Tamil Letter Uu
  {0x0baa, 0x0b},	// Tamil Letter Pa
  {0x0b99, 0xa0 | MOD_SHIFT},	// Tamil Letter Nga
  {0x0b95, 0x0e},	// Tamil Letter Ka
  {0x0ba4, 0x0f},	// Tamil Letter Ta
  {0x0b9a, 0x33},	// Tamil Letter Ca
  {0x0b9f, 0x34},	// Tamil Letter Tta
  {0x0b9e, 0x30},	// Tamil Letter Nya
  {0x0b93, 0x04 | MOD_SHIFT},	// Tamil Letter Oo
  {0x0b8f, 0x16 | MOD_SHIFT},	// Tamil Letter Ee
  {0x0b85, 0x07 | MOD_SHIFT},	// Tamil Letter A
  {0x0b87, 0x09 | MOD_SHIFT},	// Tamil Letter I
  {0x0b89, 0x0a | MOD_SHIFT},	// Tamil Letter U
  {0x0bb1, 0x0d | MOD_SHIFT},	// Tamil Letter Rra
  {0x0b8e, 0x1d | MOD_SHIFT},	// Tamil Letter E
  {0x0bd0, 0x1b | MOD_SHIFT},	// Tamil Om
  {0x0ba3, 0x06 | MOD_SHIFT},	// Tamil Letter Nna
  {0x0ba9, 0x19 | MOD_SHIFT},	// Tamil Letter Nnna
  {0x0bb4, 0x05 | MOD_SHIFT},	// Tamil Letter Llla
  {0x0bb3, 0x11 | MOD_SHIFT},	// Tamil Letter Lla
  {0x0bb6, 0x10 | MOD_SHIFT},	// Tamil Letter Sha
  {0x0bb7, 0x36 | MOD_SHIFT},	// Tamil Letter Ssa
  {0x0baf, 0x38},	// Tamil Letter Ya
  {0x0bca, 0x35},	// Tamil Vowel Sign O
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
  {0x0bcc, 0x14},	// Tamil Vowel Sign Au
  {0x0bc8, 0x1a},	// Tamil Vowel Sign Ai
  {0x0bbe, 0x08},	// Tamil Vowel Sign Aa
  {0x0bc0, 0x15},	// Tamil Vowel Sign Ii
  {0x0bc2, 0x17},	// Tamil Vowel Sign Uu
  {0x0bb9, 0xa0},	// Tamil Letter Ha
  {0x0b9c, 0x13},	// Tamil Letter Ja
  {0x0bcb, 0x04},	// Tamil Vowel Sign Oo
  {0x0bc7, 0x16},	// Tamil Vowel Sign Ee
  {0x0bcd, 0x07},	// Tamil Sign Virama
  {0x0bbf, 0x09},	// Tamil Vowel Sign I
  {0x0bc1, 0x0a},	// Tamil Vowel Sign U
  {0x0bb0, 0x0d},	// Tamil Letter Ra
  {0x0bc6, 0x1d},	// Tamil Vowel Sign E
  {0x0bae, 0x06},	// Tamil Letter Ma
  {0x0ba8, 0x19},	// Tamil Letter Na
  {0x0bb5, 0x05},	// Tamil Letter Va
  {0x0bb2, 0x11},	// Tamil Letter La
  {0x0bb8, 0x10},	// Tamil Letter Sa
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
};

const DeadkeyLookup kbdintam_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_INTAM(kbdintam, sizeof kbdintam / sizeof kbdintam[0], kbdintam_deadkeys, sizeof kbdintam_deadkeys / sizeof kbdintam_deadkeys[0]);
