#include <KeyboardUTF8.h>

// Pashto (Afghanistan)

const UnicodeLookup kbdpash[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0060, 0x35 | MOD_ALTGR},	// Grave Accent
  {0x007e, 0x1e | MOD_ALTGR},	// Tilde
  {0x0040, 0x1f | MOD_ALTGR},	// Commercial At
  {0x0023, 0x20 | MOD_ALTGR},	// Number Sign
  {0x0024, 0x21 | MOD_ALTGR},	// Dollar Sign
  {0x0025, 0x22 | MOD_ALTGR},	// Percent Sign
  {0x005e, 0x23 | MOD_ALTGR},	// Circumflex Accent
  {0x0026, 0x24 | MOD_ALTGR},	// Ampersand
  {0x066d, 0x25 | MOD_ALTGR},	// Arabic Five Pointed Star
  {0x2022, 0x26 | MOD_ALTGR},	// Bullet
  {0x00b0, 0x27 | MOD_ALTGR},	// Degree Sign
  {0x005f, 0x2d | MOD_ALTGR},	// Low Line
  {0x00f7, 0x2e | MOD_ALTGR},	// Division Sign
  {0x20ac, 0x14 | MOD_ALTGR},	// Euro Sign
  {0x0671, 0x1a | MOD_ALTGR},	// Arabic Letter Alef Wasla
  {0x0649, 0x08 | MOD_ALTGR},	// Arabic Letter Alef Maksura
  {0x200e, 0x15 | MOD_ALTGR},	// Left-To-Right Mark
  {0x200f, 0x17 | MOD_ALTGR},	// Right-To-Left Mark
  {0x0653, 0x1c | MOD_ALTGR},	// Arabic Maddah Above
  {0x0659, 0xa0 | MOD_ALTGR},	// Arabic Zwarakay
  {0x0670, 0x0c | MOD_ALTGR},	// Arabic Letter Superscript Alef
  {0x0027, 0x12 | MOD_ALTGR},	// Apostrophe
  {0x0022, 0x13 | MOD_ALTGR},	// Quotation Mark
  {0x007d, 0x2f | MOD_ALTGR},	// Right Curly Bracket
  {0x007b, 0x30 | MOD_ALTGR},	// Left Curly Bracket
  {0x007c, 0x31 | MOD_ALTGR},	// Vertical Line
  {0x06d2, 0x07 | MOD_ALTGR},	// Arabic Letter Yeh Barree
  {0x06ba, 0x09 | MOD_ALTGR},	// Arabic Letter Noon Ghunna
  {0x06b7, 0x0a | MOD_ALTGR},	// Arabic Letter Lam With Three Dots Above
  {0x0625, 0x0b | MOD_ALTGR},	// Arabic Letter Alef With Hamza Below
  {0x0679, 0x0d | MOD_ALTGR},	// Arabic Letter Tteh
  {0x003e, 0x0e | MOD_ALTGR},	// Greater-Than Sign
  {0x003c, 0x0f | MOD_ALTGR},	// Less-Than Sign
  {0x0643, 0x33 | MOD_ALTGR},	// Arabic Letter Kaf
  {0x06af, 0x34 | MOD_ALTGR},	// Arabic Letter Gaf *
  {0x003f, 0x1d | MOD_ALTGR},	// Question Mark
  {0x003b, 0x1b | MOD_ALTGR},	// Semicolon
  {0x0688, 0x11 | MOD_ALTGR},	// Arabic Letter Ddal
  {0x0691, 0x10 | MOD_ALTGR},	// Arabic Letter Rreh
  {0x002c, 0x36 | MOD_ALTGR},	// Comma
  {0x06c7, 0x37 | MOD_ALTGR},	// Arabic Letter U
  {0x06c9, 0x38 | MOD_ALTGR},	// Arabic Letter Kirghiz Yu
  {0x0654, 0x35 | MOD_SHIFT},	// Arabic Hamza Above
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x066c, 0x1f | MOD_SHIFT},	// Arabic Thousands Separator
  {0x066b, 0x20 | MOD_SHIFT},	// Arabic Decimal Separator
  {0x060b, 0x21 | MOD_SHIFT},	// Afghani Sign
  {0x066a, 0x22 | MOD_SHIFT},	// Arabic Percent Sign
  {0x00d7, 0x23 | MOD_SHIFT},	// Multiplication Sign
  {0x00bb, 0x24 | MOD_SHIFT},	// Right-Pointing Double Angle Quotation Mark *
  {0x00ab, 0x25 | MOD_SHIFT},	// Left-Pointing Double Angle Quotation Mark *
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x0028, 0x27 | MOD_SHIFT},	// Left Parenthesis
  {0x0640, 0x2d | MOD_SHIFT},	// Arabic Tatweel
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x0652, 0x14 | MOD_SHIFT},	// Arabic Sukun
  {0x064c, 0x1a | MOD_SHIFT},	// Arabic Dammatan
  {0x064d, 0x08 | MOD_SHIFT},	// Arabic Kasratan
  {0x064b, 0x15 | MOD_SHIFT},	// Arabic Fathatan
  {0x064f, 0x17 | MOD_SHIFT},	// Arabic Damma
  {0x0650, 0x1c | MOD_SHIFT},	// Arabic Kasra
  {0x064e, 0xa0 | MOD_SHIFT},	// Arabic Fatha
  {0x0651, 0x0c | MOD_SHIFT},	// Arabic Shadda
  {0x0681, 0x12 | MOD_SHIFT},	// Arabic Letter Hah With Hamza Above
  {0x0685, 0x13 | MOD_SHIFT},	// Arabic Letter Hah With Three Dots Above
  {0x005d, 0x2f | MOD_SHIFT},	// Right Square Bracket
  {0x005b, 0x30 | MOD_SHIFT},	// Left Square Bracket
  {0x002a, 0x31 | MOD_SHIFT},	// Asterisk
  {0x069a, 0x04 | MOD_SHIFT},	// Arabic Letter Seen With Dot Below And Dot Above
  {0x06cd, 0x16 | MOD_SHIFT},	// Arabic Letter Yeh With Tail
  {0x064a, 0x07 | MOD_SHIFT},	// Arabic Letter Yeh
  {0x067e, 0x09 | MOD_SHIFT},	// Arabic Letter Peh
  {0x0623, 0x0a | MOD_SHIFT},	// Arabic Letter Alef With Hamza Above
  {0x0622, 0x0b | MOD_SHIFT},	// Arabic Letter Alef With Madda Above
  {0x067c, 0x0d | MOD_SHIFT},	// Arabic Letter Teh With Ring
  {0x06bc, 0x0e | MOD_SHIFT},	// Arabic Letter Noon With Ring
  {0x0629, 0x0f | MOD_SHIFT},	// Arabic Letter Teh Marbuta
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x061b, 0x34 | MOD_SHIFT},	// Arabic Semicolon
  {0x0626, 0x1d | MOD_SHIFT},	// Arabic Letter Yeh With Hamza Above
  {0x06d0, 0x1b | MOD_SHIFT},	// Arabic Letter E *
  {0x0698, 0x06 | MOD_SHIFT},	// Arabic Letter Jeh
  {0x0621, 0x19 | MOD_SHIFT},	// Arabic Letter Hamza
  {0x200c, 0x05 | MOD_SHIFT},	// Zero Width Non-Joiner
  {0x0689, 0x11 | MOD_SHIFT},	// Arabic Letter Dal With Ring
  {0x0624, 0x10 | MOD_SHIFT},	// Arabic Letter Waw With Hamza Above
  {0x060c, 0x36 | MOD_SHIFT},	// Arabic Comma
  {0x002e, 0x37 | MOD_SHIFT},	// Full Stop
  {0x061f, 0x38 | MOD_SHIFT},	// Arabic Question Mark
  {0x200d, 0x35},	// Zero Width Joiner
  {0x06f1, 0x1e},	// Extended Arabic-Indic Digit One
  {0x06f2, 0x1f},	// Extended Arabic-Indic Digit Two
  {0x06f3, 0x20},	// Extended Arabic-Indic Digit Three
  {0x06f4, 0x21},	// Extended Arabic-Indic Digit Four
  {0x06f5, 0x22},	// Extended Arabic-Indic Digit Five
  {0x06f6, 0x23},	// Extended Arabic-Indic Digit Six
  {0x06f7, 0x24},	// Extended Arabic-Indic Digit Seven
  {0x06f8, 0x25},	// Extended Arabic-Indic Digit Eight
  {0x06f9, 0x26},	// Extended Arabic-Indic Digit Nine
  {0x06f0, 0x27},	// Extended Arabic-Indic Digit Zero
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x003d, 0x2e},	// Equals Sign
  {0x0636, 0x14},	// Arabic Letter Dad
  {0x0635, 0x1a},	// Arabic Letter Sad
  {0x062b, 0x08},	// Arabic Letter Theh
  {0x0642, 0x15},	// Arabic Letter Qaf
  {0x0641, 0x17},	// Arabic Letter Feh
  {0x063a, 0x1c},	// Arabic Letter Ghain
  {0x0639, 0xa0},	// Arabic Letter Ain
  {0x0647, 0x0c},	// Arabic Letter Heh
  {0x062e, 0x12},	// Arabic Letter Khah
  {0x062d, 0x13},	// Arabic Letter Hah
  {0x062c, 0x2f},	// Arabic Letter Jeem
  {0x0686, 0x30},	// Arabic Letter Tcheh
  {0x005c, 0x31},	// Reverse Solidus
  {0x0634, 0x04},	// Arabic Letter Sheen
  {0x0633, 0x16},	// Arabic Letter Seen
  {0x06cc, 0x07},	// Arabic Letter Farsi Yeh
  {0x0628, 0x09},	// Arabic Letter Beh
  {0x0644, 0x0a},	// Arabic Letter Lam
  {0x0627, 0x0b},	// Arabic Letter Alef
  {0x062a, 0x0d},	// Arabic Letter Teh
  {0x0646, 0x0e},	// Arabic Letter Noon
  {0x0645, 0x0f},	// Arabic Letter Meem
  {0x06a9, 0x33},	// Arabic Letter Keheh
  {0x06ab, 0x34},	// Arabic Letter Kaf With Ring
  {0x0638, 0x1d},	// Arabic Letter Zah
  {0x0637, 0x1b},	// Arabic Letter Tah
  {0x0632, 0x06},	// Arabic Letter Zain
  {0x0631, 0x19},	// Arabic Letter Reh
  {0x0630, 0x05},	// Arabic Letter Thal
  {0x062f, 0x11},	// Arabic Letter Dal
  {0x0693, 0x10},	// Arabic Letter Reh With Ring
  {0x0648, 0x36},	// Arabic Letter Waw
  {0x0696, 0x37},	// Arabic Letter Reh With Dot Below And Dot Above
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbdpash_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_PASH(kbdpash, sizeof kbdpash / sizeof kbdpash[0], kbdpash_deadkeys, sizeof kbdpash_deadkeys / sizeof kbdpash_deadkeys[0]);
