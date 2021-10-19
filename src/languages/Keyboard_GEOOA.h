#include <KeyboardUTF8.h>

// Georgian (Old Alphabets)

const UnicodeLookup kbdgeooa[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007e, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Tilde
  {0x00a7, 0x28 | MOD_SHIFT},	// Section Sign
  {0x00b0, 0x25 | (MOD_SHIFT | MOD_ALTGR)},	// Degree Sign
  {0x00ab, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// Left-Pointing Double Angle Quotation Mark *
  {0x00bb, 0x27 | (MOD_SHIFT | MOD_ALTGR)},	// Right-Pointing Double Angle Quotation Mark *
  {0x005f, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Low Line
  {0x007b, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Left Curly Bracket
  {0x007d, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Right Curly Bracket
  {0x10c4, 0x04 | (MOD_SHIFT | MOD_ALTGR)},	// Georgian Capital Letter Har (Khutsuri)
  {0x10c1, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Georgian Capital Letter He (Khutsuri)
  {0x0022, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Quotation Mark
  {0x007c, 0x28 | (MOD_SHIFT | MOD_ALTGR)},	// Vertical Line
  {0x003e, 0x37 | (MOD_SHIFT | MOD_ALTGR)},	// Greater-Than Sign
  {0x0060, 0x35 | MOD_ALTGR},	// Grave Accent
  {0x0021, 0x1e},	// Exclamation Mark
  {0x0040, 0x1f | MOD_ALTGR},	// Commercial At
  {0x0023, 0x20 | MOD_ALTGR},	// Number Sign
  {0x0024, 0x21 | MOD_ALTGR},	// Dollar Sign
  {0x20ac, 0x22 | MOD_ALTGR},	// Euro Sign
  {0x005e, 0x23 | MOD_ALTGR},	// Circumflex Accent
  {0x0026, 0x24 | MOD_ALTGR},	// Ampersand
  {0x002a, 0x25 | MOD_ALTGR},	// Asterisk
  {0x0028, 0x26},	// Left Parenthesis
  {0x0029, 0x27},	// Right Parenthesis
  {0x2014, 0x2d | MOD_ALTGR},	// Em Dash
  {0x003d, 0x2e | MOD_SHIFT},	// Equals Sign
  {0x2116, 0x1a | MOD_ALTGR},	// Numero Sign
  {0x10fc, 0x0c | MOD_ALTGR},	// Modifier Letter Georgian Nar
  {0x10f3, 0x12 | MOD_ALTGR},	// Georgian Letter We
  {0x005b, 0x2f | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x30 | MOD_ALTGR},	// Right Square Bracket
  {0x2d24, 0x04 | MOD_ALTGR},	// Georgian Small Letter Har (Khutsuri)
  {0x2d22, 0x16 | MOD_ALTGR},	// Georgian Small Letter Hie (Khutsuri)
  {0x10fa, 0x07 | MOD_ALTGR},	// Georgian Letter Ain
  {0x2d21, 0x09 | MOD_ALTGR},	// Georgian Small Letter He (Khutsuri)
  {0x10f9, 0x34 | MOD_ALTGR},	// Georgian Letter Turned Gan
  {0x005c, 0x64},	// Reverse Solidus
  {0x2d25, 0x1b | MOD_ALTGR},	// Georgian Small Letter Hoe (Khutsuri)
  {0x10f8, 0x06 | MOD_ALTGR},	// Georgian Letter Elifi
  {0x10f6, 0x37 | MOD_ALTGR},	// Georgian Letter Fi
  {0x10fb, 0x1f},	// Georgian Paragraph Separator
  {0x0027, 0x35 | MOD_SHIFT},	// Apostrophe
  {0x0031, 0x1e | MOD_SHIFT},	// Digit One
  {0x0032, 0x1f | MOD_SHIFT},	// Digit Two
  {0x0033, 0x20 | MOD_SHIFT},	// Digit Three
  {0x0034, 0x21 | MOD_SHIFT},	// Digit Four
  {0x0035, 0x22 | MOD_SHIFT},	// Digit Five
  {0x0036, 0x23 | MOD_SHIFT},	// Digit Six
  {0x0037, 0x24 | MOD_SHIFT},	// Digit Seven
  {0x0038, 0x25 | MOD_SHIFT},	// Digit Eight
  {0x0039, 0x26 | MOD_SHIFT},	// Digit Nine
  {0x0030, 0x27 | MOD_SHIFT},	// Digit Zero
  {0x002b, 0x2d | MOD_SHIFT},	// Plus Sign
  {0x10b9, 0x14 | MOD_SHIFT},	// Georgian Capital Letter Chin (Khutsuri)
  {0x10ae, 0x1a | MOD_SHIFT},	// Georgian Capital Letter Par (Khutsuri)
  {0x10b3, 0x08 | MOD_SHIFT},	// Georgian Capital Letter Un (Khutsuri)
  {0x10bb, 0x15 | MOD_SHIFT},	// Georgian Capital Letter Jil (Khutsuri)
  {0x10bd, 0x17 | MOD_SHIFT},	// Georgian Capital Letter Char (Khutsuri)
  {0x10b2, 0x1c | MOD_SHIFT},	// Georgian Capital Letter Tar (Khutsuri)
  {0x10a7, 0xa0 | MOD_SHIFT},	// Georgian Capital Letter Tan (Khutsuri)
  {0x10ac, 0x0c | MOD_SHIFT},	// Georgian Capital Letter Nar (Khutsuri)
  {0x10a5, 0x12 | MOD_SHIFT},	// Georgian Capital Letter Vin (Khutsuri)
  {0x10b8, 0x13 | MOD_SHIFT},	// Georgian Capital Letter Shin (Khutsuri)
  {0x10a9, 0x2f | MOD_SHIFT},	// Georgian Capital Letter Kan (Khutsuri)
  {0x10b5, 0x30 | MOD_SHIFT},	// Georgian Capital Letter Khar (Khutsuri)
  {0x10be, 0x04 | MOD_SHIFT},	// Georgian Capital Letter Xan (Khutsuri)
  {0x10a8, 0x16 | MOD_SHIFT},	// Georgian Capital Letter In (Khutsuri)
  {0x10a0, 0x07 | MOD_SHIFT},	// Georgian Capital Letter An (Khutsuri)
  {0x10a4, 0x09 | MOD_SHIFT},	// Georgian Capital Letter En (Khutsuri)
  {0x10ad, 0x0a | MOD_SHIFT},	// Georgian Capital Letter On (Khutsuri)
  {0x10a3, 0x0b | MOD_SHIFT},	// Georgian Capital Letter Don (Khutsuri)
  {0x10ab, 0x0d | MOD_SHIFT},	// Georgian Capital Letter Man (Khutsuri)
  {0x10b1, 0x1d | MOD_SHIFT},	// Georgian Capital Letter San (Khutsuri)
  {0x10b0, 0x0f | MOD_SHIFT},	// Georgian Capital Letter Rae (Khutsuri)
  {0x10a1, 0x33 | MOD_SHIFT},	// Georgian Capital Letter Ban (Khutsuri)
  {0x10a2, 0x34 | MOD_SHIFT},	// Georgian Capital Letter Gan (Khutsuri)
  {0x002f, 0x28},	// Solidus
  {0x10c0, 0x1b | MOD_SHIFT},	// Georgian Capital Letter Hae (Khutsuri)
  {0x10b7, 0x06 | MOD_SHIFT},	// Georgian Capital Letter Qar (Khutsuri)
  {0x10b6, 0x19 | MOD_SHIFT},	// Georgian Capital Letter Ghan (Khutsuri)
  {0x10af, 0x05 | MOD_SHIFT},	// Georgian Capital Letter Zhar (Khutsuri)
  {0x10a6, 0x11 | MOD_SHIFT},	// Georgian Capital Letter Zen (Khutsuri)
  {0x10ba, 0x10 | MOD_SHIFT},	// Georgian Capital Letter Can (Khutsuri)
  {0x10aa, 0x36 | MOD_SHIFT},	// Georgian Capital Letter Las (Khutsuri)
  {0x10b4, 0x37 | MOD_SHIFT},	// Georgian Capital Letter Phar (Khutsuri)
  {0x10bc, 0x38 | MOD_SHIFT},	// Georgian Capital Letter Cil (Khutsuri)
  {0x201e, 0x35},	// Double Low-9 Quotation Mark
  {0x002c, 0x20},	// Comma
  {0x003b, 0x21},	// Semicolon
  {0x0025, 0x22},	// Percent Sign
  {0x003a, 0x23},	// Colon
  {0x003f, 0x24},	// Question Mark
  {0x002e, 0x25},	// Full Stop
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x201c, 0x2e},	// Left Double Quotation Mark
  {0x2d19, 0x14},	// Georgian Small Letter Chin (Khutsuri)
  {0x2d0e, 0x1a},	// Georgian Small Letter Par (Khutsuri)
  {0x2d13, 0x08},	// Georgian Small Letter Un (Khutsuri)
  {0x2d1b, 0x15},	// Georgian Small Letter Jil (Khutsuri)
  {0x2d1d, 0x17},	// Georgian Small Letter Char (Khutsuri)
  {0x2d12, 0x1c},	// Georgian Small Letter Tar (Khutsuri)
  {0x2d07, 0xa0},	// Georgian Small Letter Tan (Khutsuri)
  {0x2d0c, 0x0c},	// Georgian Small Letter Nar (Khutsuri)
  {0x2d05, 0x12},	// Georgian Small Letter Vin (Khutsuri)
  {0x2d18, 0x13},	// Georgian Small Letter Shin (Khutsuri)
  {0x2d09, 0x2f},	// Georgian Small Letter Kan (Khutsuri)
  {0x2d15, 0x30},	// Georgian Small Letter Khar (Khutsuri)
  {0x2d1e, 0x04},	// Georgian Small Letter Xan (Khutsuri)
  {0x2d08, 0x16},	// Georgian Small Letter In (Khutsuri)
  {0x2d00, 0x07},	// Georgian Small Letter An (Khutsuri)
  {0x2d04, 0x09},	// Georgian Small Letter En (Khutsuri)
  {0x2d0d, 0x0a},	// Georgian Small Letter On (Khutsuri)
  {0x2d03, 0x0b},	// Georgian Small Letter Don (Khutsuri)
  {0x2d0b, 0x0d},	// Georgian Small Letter Man (Khutsuri)
  {0x2d11, 0x0e},	// Georgian Small Letter San (Khutsuri)
  {0x2d10, 0x0f},	// Georgian Small Letter Rae (Khutsuri)
  {0x2d01, 0x33},	// Georgian Small Letter Ban (Khutsuri)
  {0x2d02, 0x34},	// Georgian Small Letter Gan (Khutsuri)
  {0x2d1f, 0x1d},	// Georgian Small Letter Jhan (Khutsuri)
  {0x2d20, 0x1b},	// Georgian Small Letter Hae (Khutsuri)
  {0x2d17, 0x06},	// Georgian Small Letter Qar (Khutsuri)
  {0x2d16, 0x19},	// Georgian Small Letter Ghan (Khutsuri)
  {0x2d0f, 0x05},	// Georgian Small Letter Zhar (Khutsuri)
  {0x2d06, 0x11},	// Georgian Small Letter Zen (Khutsuri)
  {0x2d1a, 0x10},	// Georgian Small Letter Can (Khutsuri)
  {0x2d0a, 0x36},	// Georgian Small Letter Las (Khutsuri)
  {0x2d14, 0x37},	// Georgian Small Letter Phar (Khutsuri)
  {0x2d1c, 0x38},	// Georgian Small Letter Cil (Khutsuri)
};

const DeadkeyLookup kbdgeooa_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_GEOOA(kbdgeooa, sizeof kbdgeooa / sizeof kbdgeooa[0], kbdgeooa_deadkeys, sizeof kbdgeooa_deadkeys / sizeof kbdgeooa_deadkeys[0]);
