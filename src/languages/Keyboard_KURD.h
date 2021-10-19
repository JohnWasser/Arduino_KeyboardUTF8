#include <KeyboardUTF8.h>

// Central Kurdish

const UnicodeLookup kbdkurd[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007e, 0x35 | MOD_SHIFT},	// Tilde
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0040, 0x1f | MOD_SHIFT},	// Commercial At
  {0x0023, 0x20 | MOD_SHIFT},	// Number Sign
  {0x0024, 0x21 | MOD_SHIFT},	// Dollar Sign
  {0x066a, 0x22 | MOD_SHIFT},	// Arabic Percent Sign
  {0x005e, 0x23 | MOD_SHIFT},	// Circumflex Accent
  {0x0026, 0x24 | MOD_SHIFT},	// Ampersand
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x0028, 0x27 | MOD_SHIFT},	// Left Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x0060, 0x35},	// Grave Accent
  {0x064a, 0x08 | MOD_SHIFT},	// Arabic Letter Yeh
  {0x0695, 0x15 | MOD_SHIFT},	// Arabic Letter Reh With Small V Below
  {0x0637, 0x17 | MOD_SHIFT},	// Arabic Letter Tah
  {0x06ce, 0x1c | MOD_SHIFT},	// Arabic Letter Yeh With Small V
  {0x0621, 0xa0 | MOD_SHIFT},	// Arabic Letter Hamza
  {0x0639, 0x0c | MOD_SHIFT},	// Arabic Letter Ain
  {0x0624, 0x12 | MOD_SHIFT},	// Arabic Letter Waw With Hamza Above
  {0x062b, 0x13 | MOD_SHIFT},	// Arabic Letter Theh
  {0x007d, 0x2f | MOD_SHIFT},	// Right Curly Bracket
  {0x007b, 0x30 | MOD_SHIFT},	// Left Curly Bracket
  {0x0622, 0x04 | MOD_SHIFT},	// Arabic Letter Alef With Madda Above
  {0x0634, 0x16 | MOD_SHIFT},	// Arabic Letter Sheen
  {0x0630, 0x07 | MOD_SHIFT},	// Arabic Letter Thal
  {0x0625, 0x09 | MOD_SHIFT},	// Arabic Letter Alef With Hamza Below
  {0x063a, 0x0a | MOD_SHIFT},	// Arabic Letter Ghain
  {0x200c, 0x0b | MOD_SHIFT},	// Zero Width Non-Joiner
  {0x0623, 0x0d | MOD_SHIFT},	// Arabic Letter Alef With Hamza Above
  {0x0643, 0x0e | MOD_SHIFT},	// Arabic Letter Kaf
  {0x06b5, 0x0f | MOD_SHIFT},	// Arabic Letter Lam With Small V
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x007c, 0x28 | MOD_SHIFT},	// Vertical Line
  {0x002f, 0x38},	// Solidus
  {0x0636, 0x1d | MOD_SHIFT},	// Arabic Letter Dad
  {0x0635, 0x1b | MOD_SHIFT},	// Arabic Letter Sad
  {0x0686, 0x06 | MOD_SHIFT},	// Arabic Letter Tcheh
  {0x0638, 0x19 | MOD_SHIFT},	// Arabic Letter Zah
  {0x0649, 0x05 | MOD_SHIFT},	// Arabic Letter Alef Maksura
  {0x0629, 0x11 | MOD_SHIFT},	// Arabic Letter Teh Marbuta
  {0x0640, 0x10 | MOD_SHIFT},	// Arabic Tatweel
  {0x003e, 0x36 | MOD_SHIFT},	// Greater-Than Sign
  {0x003c, 0x37 | MOD_SHIFT},	// Less-Than Sign
  {0x061f, 0x38 | MOD_SHIFT},	// Arabic Question Mark
  {0x0661, 0x1e},	// Arabic-Indic Digit One
  {0x0662, 0x1f},	// Arabic-Indic Digit Two
  {0x0663, 0x20},	// Arabic-Indic Digit Three
  {0x0664, 0x21},	// Arabic-Indic Digit Four
  {0x0665, 0x22},	// Arabic-Indic Digit Five
  {0x0666, 0x23},	// Arabic-Indic Digit Six
  {0x0667, 0x24},	// Arabic-Indic Digit Seven
  {0x0668, 0x25},	// Arabic-Indic Digit Eight
  {0x0669, 0x26},	// Arabic-Indic Digit Nine
  {0x0660, 0x27},	// Arabic-Indic Digit Zero
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x003d, 0x2e},	// Equals Sign
  {0x0642, 0x14},	// Arabic Letter Qaf
  {0x0648, 0x1a},	// Arabic Letter Waw
  {0x06d5, 0x08},	// Arabic Letter Ae
  {0x0631, 0x15},	// Arabic Letter Reh
  {0x062a, 0x17},	// Arabic Letter Teh
  {0x06cc, 0x1c},	// Arabic Letter Farsi Yeh
  {0x0626, 0xa0},	// Arabic Letter Yeh With Hamza Above
  {0x062d, 0x0c},	// Arabic Letter Hah
  {0x06c6, 0x12},	// Arabic Letter Oe
  {0x067e, 0x13},	// Arabic Letter Peh
  {0x005d, 0x2f},	// Right Square Bracket
  {0x005b, 0x30},	// Left Square Bracket
  {0x0627, 0x04},	// Arabic Letter Alef
  {0x0633, 0x16},	// Arabic Letter Seen
  {0x062f, 0x07},	// Arabic Letter Dal
  {0x0641, 0x09},	// Arabic Letter Feh
  {0x06af, 0x0a},	// Arabic Letter Gaf *
  {0x0647, 0x0b},	// Arabic Letter Heh
  {0x0698, 0x0d},	// Arabic Letter Jeh
  {0x06a9, 0x0e},	// Arabic Letter Keheh
  {0x0644, 0x0f},	// Arabic Letter Lam
  {0x061b, 0x33},	// Arabic Semicolon
  {0x0027, 0x34},	// Apostrophe
  {0x005c, 0x64},	// Reverse Solidus
  {0x0632, 0x1d},	// Arabic Letter Zain
  {0x062e, 0x1b},	// Arabic Letter Khah
  {0x062c, 0x06},	// Arabic Letter Jeem
  {0x06a4, 0x19},	// Arabic Letter Veh
  {0x0628, 0x05},	// Arabic Letter Beh
  {0x0646, 0x11},	// Arabic Letter Noon
  {0x0645, 0x10},	// Arabic Letter Meem
  {0x060c, 0x36},	// Arabic Comma
  {0x002e, 0x37},	// Full Stop
};

const DeadkeyLookup kbdkurd_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_KURD(kbdkurd, sizeof kbdkurd / sizeof kbdkurd[0], kbdkurd_deadkeys, sizeof kbdkurd_deadkeys / sizeof kbdkurd_deadkeys[0]);
