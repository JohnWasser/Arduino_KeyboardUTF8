#include <KeyboardUTF8.h>

// Urdu

const UnicodeLookup kbdurdu[] PROGMEM = 
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
  {0x06d6, 0x24 | MOD_SHIFT},	// Arabic Small High Ligature Sad With Lam With Alef Maksura
  {0x066d, 0x25 | MOD_SHIFT},	// Arabic Five Pointed Star
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x0028, 0x27 | MOD_SHIFT},	// Left Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x0638, 0x14 | MOD_SHIFT},	// Arabic Letter Zah
  {0x0636, 0x1a | MOD_SHIFT},	// Arabic Letter Dad
  {0x0630, 0x08 | MOD_SHIFT},	// Arabic Letter Thal
  {0x0688, 0x15 | MOD_SHIFT},	// Arabic Letter Ddal
  {0x062b, 0x17 | MOD_SHIFT},	// Arabic Letter Theh
  {0x0651, 0x1c | MOD_SHIFT},	// Arabic Shadda
  {0x06c3, 0xa0 | MOD_SHIFT},	// Arabic Letter Teh Marbuta Goal
  {0x0640, 0x0c | MOD_SHIFT},	// Arabic Tatweel
  {0x0686, 0x12 | MOD_SHIFT},	// Arabic Letter Tcheh
  {0x062e, 0x13 | MOD_SHIFT},	// Arabic Letter Khah
  {0x007d, 0x2f | MOD_SHIFT},	// Right Curly Bracket
  {0x007b, 0x30 | MOD_SHIFT},	// Left Curly Bracket
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x0698, 0x04 | MOD_SHIFT},	// Arabic Letter Jeh
  {0x0632, 0x16 | MOD_SHIFT},	// Arabic Letter Zain
  {0x0691, 0x07 | MOD_SHIFT},	// Arabic Letter Rreh
  {0x06ba, 0x09 | MOD_SHIFT},	// Arabic Letter Noon Ghunna
  {0x06c2, 0x0a | MOD_SHIFT},	// Arabic Letter Heh Goal With Hamza Above
  {0x0621, 0x0b | MOD_SHIFT},	// Arabic Letter Hamza
  {0x0622, 0x0d | MOD_SHIFT},	// Arabic Letter Alef With Madda Above
  {0x06af, 0x0e | MOD_SHIFT},	// Arabic Letter Gaf *
  {0x064a, 0x0f | MOD_SHIFT},	// Arabic Letter Yeh
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x200d, 0x1d | MOD_SHIFT},	// Zero Width Joiner
  {0x200c, 0x1b | MOD_SHIFT},	// Zero Width Non-Joiner
  {0x06d3, 0x06 | MOD_SHIFT},	// Arabic Letter Yeh Barree With Hamza Above
  {0x200e, 0x19 | MOD_SHIFT},	// Left-To-Right Mark
  {0x0624, 0x05 | MOD_SHIFT},	// Arabic Letter Waw With Hamza Above
  {0x0626, 0x11 | MOD_SHIFT},	// Arabic Letter Yeh With Hamza Above
  {0x200f, 0x10 | MOD_SHIFT},	// Right-To-Left Mark
  {0x003e, 0x36 | MOD_SHIFT},	// Greater-Than Sign
  {0x003c, 0x37 | MOD_SHIFT},	// Less-Than Sign
  {0x061f, 0x38 | MOD_SHIFT},	// Arabic Question Mark
  {0x0060, 0x35},	// Grave Accent
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
  {0x003d, 0x2e},	// Equals Sign
  {0x0637, 0x14},	// Arabic Letter Tah
  {0x0635, 0x1a},	// Arabic Letter Sad
  {0x06be, 0x08},	// Arabic Letter Heh Doachashmee
  {0x062f, 0x15},	// Arabic Letter Dal
  {0x0679, 0x17},	// Arabic Letter Tteh
  {0x067e, 0x1c},	// Arabic Letter Peh
  {0x062a, 0xa0},	// Arabic Letter Teh
  {0x0628, 0x0c},	// Arabic Letter Beh
  {0x062c, 0x12},	// Arabic Letter Jeem
  {0x062d, 0x13},	// Arabic Letter Hah
  {0x005d, 0x2f},	// Right Square Bracket
  {0x005b, 0x30},	// Left Square Bracket
  {0x005c, 0x64},	// Reverse Solidus
  {0x0645, 0x04},	// Arabic Letter Meem
  {0x0648, 0x16},	// Arabic Letter Waw
  {0x0631, 0x07},	// Arabic Letter Reh
  {0x0646, 0x09},	// Arabic Letter Noon
  {0x0644, 0x0a},	// Arabic Letter Lam
  {0x06c1, 0x0b},	// Arabic Letter Heh Goal
  {0x0627, 0x0d},	// Arabic Letter Alef
  {0x06a9, 0x0e},	// Arabic Letter Keheh
  {0x06cc, 0x0f},	// Arabic Letter Farsi Yeh
  {0x061b, 0x33},	// Arabic Semicolon
  {0x0027, 0x34},	// Apostrophe
  {0x0642, 0x1d},	// Arabic Letter Qaf
  {0x0641, 0x1b},	// Arabic Letter Feh
  {0x06d2, 0x06},	// Arabic Letter Yeh Barree
  {0x0633, 0x19},	// Arabic Letter Seen
  {0x0634, 0x05},	// Arabic Letter Sheen
  {0x063a, 0x11},	// Arabic Letter Ghain
  {0x0639, 0x10},	// Arabic Letter Ain
  {0x060c, 0x36},	// Arabic Comma
  {0x06d4, 0x37},	// Arabic Full Stop
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbdurdu_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_URDU(kbdurdu, sizeof kbdurdu / sizeof kbdurdu[0], kbdurdu_deadkeys, sizeof kbdurdu_deadkeys / sizeof kbdurdu_deadkeys[0]);
