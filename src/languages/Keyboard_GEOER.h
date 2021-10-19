#include <KeyboardUTF8.h>

// Georgian (Ergonomic)

const UnicodeLookup kbdgeoer[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007e, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Tilde
  {0x00a7, 0x31 | MOD_SHIFT},	// Section Sign
  {0x00b0, 0x25 | (MOD_SHIFT | MOD_ALTGR)},	// Degree Sign
  {0x00ab, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// Left-Pointing Double Angle Quotation Mark *
  {0x00bb, 0x27 | (MOD_SHIFT | MOD_ALTGR)},	// Right-Pointing Double Angle Quotation Mark *
  {0x005f, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Low Line
  {0x0049, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter I
  {0x007b, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Left Curly Bracket
  {0x007d, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Right Curly Bracket
  {0x007c, 0x31 | (MOD_SHIFT | MOD_ALTGR)},	// Vertical Line
  {0x0044, 0x07 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter D
  {0x004c, 0x0f | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter L
  {0x0022, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Quotation Mark
  {0x0058, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter X
  {0x0043, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter C
  {0x0056, 0x19 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter V
  {0x004d, 0x10 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter M
  {0x003c, 0x36 | (MOD_SHIFT | MOD_ALTGR)},	// Less-Than Sign
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
  {0x10fc, 0x0c | MOD_ALTGR},	// Modifier Letter Georgian Nar
  {0x10f3, 0x12 | MOD_ALTGR},	// Georgian Letter We
  {0x005b, 0x2f | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x30 | MOD_ALTGR},	// Right Square Bracket
  {0x005c, 0x64},	// Reverse Solidus
  {0x10f4, 0x04 | MOD_ALTGR},	// Georgian Letter Har
  {0x10f2, 0x16 | MOD_ALTGR},	// Georgian Letter Hie
  {0x10fa, 0x07 | MOD_ALTGR},	// Georgian Letter Ain
  {0x10f1, 0x09 | MOD_ALTGR},	// Georgian Letter He
  {0x10f9, 0x34 | MOD_ALTGR},	// Georgian Letter Turned Gan
  {0x10f5, 0x1b | MOD_ALTGR},	// Georgian Letter Hoe
  {0x10f8, 0x06 | MOD_ALTGR},	// Georgian Letter Elifi
  {0x10f7, 0x19 | MOD_ALTGR},	// Georgian Letter Yn
  {0x10f6, 0x37 | MOD_ALTGR},	// Georgian Letter Fi
  {0x10fb, 0x38 | MOD_ALTGR},	// Georgian Paragraph Separator
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
  {0x002f, 0x31},	// Solidus
  {0x201e, 0x35},	// Double Low-9 Quotation Mark
  {0x2116, 0x1f},	// Numero Sign
  {0x002c, 0x20},	// Comma
  {0x003b, 0x21},	// Semicolon
  {0x0025, 0x22},	// Percent Sign
  {0x003a, 0x23},	// Colon
  {0x003f, 0x24},	// Question Mark
  {0x002e, 0x25},	// Full Stop
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x201c, 0x2e},	// Left Double Quotation Mark
  {0x10e9, 0x14},	// Georgian Letter Chin
  {0x10de, 0x1a},	// Georgian Letter Par
  {0x10e3, 0x08},	// Georgian Letter Un
  {0x10eb, 0x15},	// Georgian Letter Jil
  {0x10ed, 0x17},	// Georgian Letter Char
  {0x10e2, 0x1c},	// Georgian Letter Tar
  {0x10d7, 0xa0},	// Georgian Letter Tan
  {0x10dc, 0x0c},	// Georgian Letter Nar
  {0x10d5, 0x12},	// Georgian Letter Vin
  {0x10e8, 0x13},	// Georgian Letter Shin
  {0x10d9, 0x2f},	// Georgian Letter Kan
  {0x10e5, 0x30},	// Georgian Letter Khar
  {0x10ee, 0x04},	// Georgian Letter Xan
  {0x10d8, 0x16},	// Georgian Letter In
  {0x10d0, 0x07},	// Georgian Letter An
  {0x10d4, 0x09},	// Georgian Letter En
  {0x10dd, 0x0a},	// Georgian Letter On
  {0x10d3, 0x0b},	// Georgian Letter Don
  {0x10db, 0x0d},	// Georgian Letter Man
  {0x10e1, 0x0e},	// Georgian Letter San
  {0x10e0, 0x0f},	// Georgian Letter Rae
  {0x10d1, 0x33},	// Georgian Letter Ban
  {0x10d2, 0x34},	// Georgian Letter Gan
  {0x10ef, 0x1d},	// Georgian Letter Jhan
  {0x10f0, 0x1b},	// Georgian Letter Hae
  {0x10e7, 0x06},	// Georgian Letter Qar
  {0x10e6, 0x19},	// Georgian Letter Ghan
  {0x10df, 0x05},	// Georgian Letter Zhar
  {0x10d6, 0x11},	// Georgian Letter Zen
  {0x10ea, 0x10},	// Georgian Letter Can
  {0x10da, 0x36},	// Georgian Letter Las
  {0x10e4, 0x37},	// Georgian Letter Phar
  {0x10ec, 0x38},	// Georgian Letter Cil
};

const DeadkeyLookup kbdgeoer_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_GEOER(kbdgeoer, sizeof kbdgeoer / sizeof kbdgeoer[0], kbdgeoer_deadkeys, sizeof kbdgeoer_deadkeys / sizeof kbdgeoer_deadkeys[0]);
