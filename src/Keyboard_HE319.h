#include <KeyboardUTF8.h>

// Greek (319)

const UnicodeLookup kbdhe319[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x20ac, 0x08 | MOD_ALTGR},	// Euro Sign
  {0x00b1, 0x35 | MOD_SHIFT},	// Plus-Minus Sign
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0022, 0x1f | MOD_SHIFT},	// Quotation Mark
  {0x00a3, 0x20 | MOD_SHIFT},	// Pound Sign
  {0x0024, 0x21 | MOD_SHIFT},	// Dollar Sign
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x00ac, 0x23 | MOD_SHIFT},	// Not Sign
  {0x002f, 0x24 | MOD_SHIFT},	// Solidus
  {0x0028, 0x25 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x003d, 0x27 | MOD_SHIFT},	// Equals Sign
  {0x00b0, 0x2d | MOD_SHIFT},	// Degree Sign
  {0x002a, 0x2e | MOD_SHIFT},	// Asterisk
  {0x2015, 0x14 | MOD_SHIFT},	// Horizontal Bar
  {0x00a6, 0x1a | MOD_SHIFT},	// Broken Bar
  {0x0395, 0x08 | MOD_SHIFT},	// Greek Capital Letter Epsilon
  {0x03a1, 0x15 | MOD_SHIFT},	// Greek Capital Letter Rho
  {0x03a4, 0x17 | MOD_SHIFT},	// Greek Capital Letter Tau
  {0x03a5, 0x1c | MOD_SHIFT},	// Greek Capital Letter Upsilon
  {0x0398, 0xa0 | MOD_SHIFT},	// Greek Capital Letter Theta
  {0x0399, 0x0c | MOD_SHIFT},	// Greek Capital Letter Iota
  {0x039f, 0x12 | MOD_SHIFT},	// Greek Capital Letter Omicron
  {0x03a0, 0x13 | MOD_SHIFT},	// Greek Capital Letter Pi
  {0x00ab, 0x2f | MOD_SHIFT},	// Left-Pointing Double Angle Quotation Mark *
  {0x00bb, 0x30 | MOD_SHIFT},	// Right-Pointing Double Angle Quotation Mark *
  {0x0391, 0x04 | MOD_SHIFT},	// Greek Capital Letter Alpha
  {0x03a3, 0x16 | MOD_SHIFT},	// Greek Capital Letter Sigma
  {0x0394, 0x07 | MOD_SHIFT},	// Greek Capital Letter Delta
  {0x03a6, 0x09 | MOD_SHIFT},	// Greek Capital Letter Phi
  {0x0393, 0x0a | MOD_SHIFT},	// Greek Capital Letter Gamma
  {0x0397, 0x0b | MOD_SHIFT},	// Greek Capital Letter Eta
  {0x039e, 0x0d | MOD_SHIFT},	// Greek Capital Letter Xi
  {0x039a, 0x0e | MOD_SHIFT},	// Greek Capital Letter Kappa
  {0x039b, 0x0f | MOD_SHIFT},	// Greek Capital Letter Lamda
  {0x2018, 0x34 | MOD_SHIFT},	// Left Single Quotation Mark
  {0x00b3, 0x28 | MOD_SHIFT},	// Superscript Three
  {0x00a9, 0x64 | MOD_SHIFT},	// Copyright Sign
  {0x0396, 0x1d | MOD_SHIFT},	// Greek Capital Letter Zeta
  {0x03a7, 0x1b | MOD_SHIFT},	// Greek Capital Letter Chi
  {0x03a8, 0x06 | MOD_SHIFT},	// Greek Capital Letter Psi
  {0x03a9, 0x19 | MOD_SHIFT},	// Greek Capital Letter Omega
  {0x0392, 0x05 | MOD_SHIFT},	// Greek Capital Letter Beta
  {0x039d, 0x11 | MOD_SHIFT},	// Greek Capital Letter Nu
  {0x039c, 0x10 | MOD_SHIFT},	// Greek Capital Letter Mu
  {0x003b, 0x36 | MOD_SHIFT},	// Semicolon
  {0x003a, 0x37 | MOD_SHIFT},	// Colon
  {0x005f, 0x38 | MOD_SHIFT},	// Low Line
  {0x00bd, 0x35},	// Vulgar Fraction One Half
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
  {0x0027, 0x2d},	// Apostrophe
  {0x002b, 0x2e},	// Plus Sign
  {0x00b7, 0x14},	// Middle Dot
  {0x03c2, 0x1a},	// Greek Small Letter Final Sigma
  {0x03b5, 0x08},	// Greek Small Letter Epsilon
  {0x03c1, 0x15},	// Greek Small Letter Rho
  {0x03c4, 0x17},	// Greek Small Letter Tau
  {0x03c5, 0x1c},	// Greek Small Letter Upsilon
  {0x03b8, 0xa0},	// Greek Small Letter Theta
  {0x03b9, 0x0c},	// Greek Small Letter Iota
  {0x03bf, 0x12},	// Greek Small Letter Omicron
  {0x03c0, 0x13},	// Greek Small Letter Pi
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x30},	// Right Square Bracket
  {0x03b1, 0x04},	// Greek Small Letter Alpha
  {0x03c3, 0x16},	// Greek Small Letter Sigma
  {0x03b4, 0x07},	// Greek Small Letter Delta
  {0x03c6, 0x09},	// Greek Small Letter Phi
  {0x03b3, 0x0a},	// Greek Small Letter Gamma
  {0x03b7, 0x0b},	// Greek Small Letter Eta
  {0x03be, 0x0d},	// Greek Small Letter Xi
  {0x03ba, 0x0e},	// Greek Small Letter Kappa
  {0x03bb, 0x0f},	// Greek Small Letter Lamda
  {0x2019, 0x34},	// Right Single Quotation Mark
  {0x00b2, 0x28},	// Superscript Two
  {0x00a7, 0x64},	// Section Sign
  {0x03b6, 0x1d},	// Greek Small Letter Zeta
  {0x03c7, 0x1b},	// Greek Small Letter Chi
  {0x03c8, 0x06},	// Greek Small Letter Psi
  {0x03c9, 0x19},	// Greek Small Letter Omega
  {0x03b2, 0x05},	// Greek Small Letter Beta
  {0x03bd, 0x11},	// Greek Small Letter Nu
  {0x03bc, 0x10},	// Greek Small Letter Mu
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x002d, 0x38},	// Hyphen-Minus
};

const DeadkeyLookup kbdhe319_deadkeys[] PROGMEM = 
{
  {0x0385, 0x0385, 0x33 | MOD_ALTGR},	// ΅  accent
  {0x0390, 0x0390, 0x33 | MOD_ALTGR},	// ΐ  accent
  {0x03b0, 0x03b0, 0x33 | MOD_ALTGR},	// ΰ  accent
  {0x00a8, 0x00a8, 0x33 | MOD_SHIFT},	// ¨  accent
  {0x03ca, 0x03ca, 0x33 | MOD_SHIFT},	// ϊ  accent
  {0x03aa, 0x03aa, 0x33 | MOD_SHIFT},	// Ϊ  accent
  {0x03cb, 0x03cb, 0x33 | MOD_SHIFT},	// ϋ  accent
  {0x03ab, 0x03ab, 0x33 | MOD_SHIFT},	// Ϋ  accent
  {0x0384, 0x0384, 0x33},	// ΄  accent
  {0x03ac, 0x03ac, 0x33},	// ά  accent
  {0x0386, 0x0386, 0x33},	// Ά  accent
  {0x03ad, 0x03ad, 0x33},	// έ  accent
  {0x0388, 0x0388, 0x33},	// Έ  accent
  {0x03ae, 0x03ae, 0x33},	// ή  accent
  {0x0389, 0x0389, 0x33},	// Ή  accent
  {0x03af, 0x03af, 0x33},	// ί  accent
  {0x038a, 0x038a, 0x33},	// Ί  accent
  {0x03cc, 0x03cc, 0x33},	// ό  accent
  {0x038c, 0x038c, 0x33},	// Ό  accent
  {0x03cd, 0x03cd, 0x33},	// ύ  accent
  {0x038e, 0x038e, 0x33},	// Ύ  accent
  {0x03ce, 0x03ce, 0x33},	// ώ  accent
  {0x038f, 0x038f, 0x33},	// Ώ  accent
};

KeyboardUTF8 Keyboard_HE319(kbdhe319, sizeof kbdhe319 / sizeof kbdhe319[0], kbdhe319_deadkeys, sizeof kbdhe319_deadkeys / sizeof kbdhe319_deadkeys[0]);
