#include <KeyboardUTF8.h>

// Georgian (Legacy)

const UnicodeLookup kbdgeo[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x10f1, 0x17 | MOD_ALTGR},	// Georgian Letter He
  {0x10f4, 0x2f | MOD_ALTGR},	// Georgian Letter Har
  {0x10f6, 0x04 | MOD_ALTGR},	// Georgian Letter Fi
  {0x10f3, 0x07 | MOD_ALTGR},	// Georgian Letter We
  {0x10f2, 0x11 | MOD_ALTGR},	// Georgian Letter Hie
  {0x10f5, 0x38 | MOD_ALTGR},	// Georgian Letter Hoe
  {0x201c, 0x35 | MOD_SHIFT},	// Left Double Quotation Mark
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
  {0x002d, 0x2d | MOD_SHIFT},	// Hyphen-Minus
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x10e6, 0x14},	// Georgian Letter Ghan
  {0x10ef, 0x1a},	// Georgian Letter Jhan
  {0x10e3, 0x08},	// Georgian Letter Un
  {0x10d9, 0x15},	// Georgian Letter Kan
  {0x10d4, 0x17},	// Georgian Letter En
  {0x10dc, 0x1c},	// Georgian Letter Nar
  {0x10d2, 0xa0},	// Georgian Letter Gan
  {0x10e8, 0x0c},	// Georgian Letter Shin
  {0x10ec, 0x12},	// Georgian Letter Cil
  {0x10d6, 0x13},	// Georgian Letter Zen
  {0x10ee, 0x2f},	// Georgian Letter Xan
  {0x10ea, 0x30},	// Georgian Letter Can
  {0x0029, 0x64 | MOD_SHIFT},	// Right Parenthesis
  {0x10e4, 0x04},	// Georgian Letter Phar
  {0x10eb, 0x16},	// Georgian Letter Jil
  {0x10d5, 0x07},	// Georgian Letter Vin
  {0x10d7, 0x09},	// Georgian Letter Tan
  {0x10d0, 0x0a},	// Georgian Letter An
  {0x10de, 0x0b},	// Georgian Letter Par
  {0x10e0, 0x0d},	// Georgian Letter Rae
  {0x10dd, 0x0e},	// Georgian Letter On
  {0x10da, 0x0f},	// Georgian Letter Las
  {0x10d3, 0x33},	// Georgian Letter Don
  {0x10df, 0x34},	// Georgian Letter Zhar
  {0x10ed, 0x1d},	// Georgian Letter Char
  {0x10e9, 0x1b},	// Georgian Letter Chin
  {0x10e7, 0x06},	// Georgian Letter Qar
  {0x10e1, 0x19},	// Georgian Letter San
  {0x10db, 0x05},	// Georgian Letter Man
  {0x10d8, 0x11},	// Georgian Letter In
  {0x10e2, 0x10},	// Georgian Letter Tar
  {0x10e5, 0x36},	// Georgian Letter Khar
  {0x10d1, 0x37},	// Georgian Letter Ban
  {0x10f0, 0x38},	// Georgian Letter Hae
  {0x201e, 0x35},	// Double Low-9 Quotation Mark
  {0x0021, 0x1e},	// Exclamation Mark
  {0x003f, 0x1f},	// Question Mark
  {0x2116, 0x20},	// Numero Sign
  {0x00a7, 0x21},	// Section Sign
  {0x0025, 0x22},	// Percent Sign
  {0x003a, 0x23},	// Colon
  {0x002e, 0x24},	// Full Stop
  {0x003b, 0x25},	// Semicolon
  {0x002c, 0x26},	// Comma
  {0x002f, 0x27},	// Solidus
  {0x2013, 0x2d},	// En Dash
  {0x003d, 0x2e},	// Equals Sign
  {0x0028, 0x64},	// Left Parenthesis
};

const DeadkeyLookup kbdgeo_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_GEO(kbdgeo, sizeof kbdgeo / sizeof kbdgeo[0], kbdgeo_deadkeys, sizeof kbdgeo_deadkeys / sizeof kbdgeo_deadkeys[0]);
