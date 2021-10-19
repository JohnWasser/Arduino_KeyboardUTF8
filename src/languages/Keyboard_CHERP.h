#include <KeyboardUTF8.h>

// Cherokee Phonetic

const UnicodeLookup kbdcherp[] PROGMEM = 
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
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x005e, 0x23 | MOD_SHIFT},	// Circumflex Accent
  {0x0026, 0x24 | MOD_SHIFT},	// Ampersand
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x13a1, 0x08},	// Cherokee Letter E
  {0x13a4, 0xa0},	// Cherokee Letter U
  {0x13a2, 0x0c},	// Cherokee Letter I
  {0x13a3, 0x12},	// Cherokee Letter O
  {0x007b, 0x2f | MOD_SHIFT},	// Left Curly Bracket
  {0x007d, 0x30 | MOD_SHIFT},	// Right Curly Bracket
  {0x13a0, 0x04},	// Cherokee Letter A
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x13a5, 0x19},	// Cherokee Letter V
  {0x003c, 0x36 | MOD_SHIFT},	// Less-Than Sign
  {0x003e, 0x37 | MOD_SHIFT},	// Greater-Than Sign
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
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
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x30},	// Right Square Bracket
  {0x003b, 0x33},	// Semicolon
  {0x0027, 0x34},	// Apostrophe
  {0x005c, 0x64},	// Reverse Solidus
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbdcherp_deadkeys[] PROGMEM = 
{
  {0x13c6, 0x13c6, 0x14},	// Ꮖ  accent
  {0x13c7, 0x13c7, 0x14},	// Ꮗ  accent
  {0x13c8, 0x13c8, 0x14},	// Ꮘ  accent
  {0x13c9, 0x13c9, 0x14},	// Ꮙ  accent
  {0x13ca, 0x13ca, 0x14},	// Ꮚ  accent
  {0x13cb, 0x13cb, 0x14},	// Ꮛ  accent
  {0x13e9, 0x13e9, 0x1a},	// Ꮹ  accent
  {0x13ea, 0x13ea, 0x1a},	// Ꮺ  accent
  {0x13eb, 0x13eb, 0x1a},	// Ꮻ  accent
  {0x13ec, 0x13ec, 0x1a},	// Ꮼ  accent
  {0x13ed, 0x13ed, 0x1a},	// Ꮽ  accent
  {0x13ee, 0x13ee, 0x1a},	// Ꮾ  accent
  {0x13d4, 0x13d4, 0x17},	// Ꮤ  accent
  {0x13d6, 0x13d6, 0x17},	// Ꮦ  accent
  {0x13d8, 0x13d8, 0x17},	// Ꮨ  accent
  {0x13da, 0x13da, 0x07},	// Ꮪ  accent
  {0x13db, 0x13db, 0x07},	// Ꮫ  accent
  {0x13ef, 0x13ef, 0x1c},	// Ꮿ  accent
  {0x13f0, 0x13f0, 0x1c},	// Ᏸ  accent
  {0x13f1, 0x13f1, 0x1c},	// Ᏹ  accent
  {0x13f2, 0x13f2, 0x1c},	// Ᏺ  accent
  {0x13f3, 0x13f3, 0x1c},	// Ᏻ  accent
  {0x13f4, 0x13f4, 0x1c},	// Ᏼ  accent
  {0x13cc, 0x13cc, 0x16},	// Ꮜ  accent
  {0x13cd, 0x13cd, 0x16},	// Ꮝ  accent
  {0x13ce, 0x13ce, 0x16},	// Ꮞ  accent
  {0x13cf, 0x13cf, 0x16},	// Ꮟ  accent
  {0x13d0, 0x13d0, 0x16},	// Ꮠ  accent
  {0x13d1, 0x13d1, 0x16},	// Ꮡ  accent
  {0x13d2, 0x13d2, 0x16},	// Ꮢ  accent
  {0x002c, 0x002c, 0x07},	// ,  accent
  {0x003a, 0x003a, 0x07},	// :  accent
  {0x003b, 0x003b, 0x07},	// ;  accent
  {0x005b, 0x005b, 0x07},	// [  accent
  {0x007b, 0x007b, 0x07},	// {  accent
  {0x007c, 0x007c, 0x07},	// |  accent
  {0x003c, 0x003c, 0x07},	// <  accent
  {0x0064, 0x0064, 0x07},	// d  accent
  {0x0044, 0x0044, 0x07},	// D  accent
  {0x006e, 0x006e, 0x07},	// n  accent
  {0x004e, 0x004e, 0x07},	// N  accent
  {0x13d3, 0x13d3, 0x07},	// Ꮣ  accent
  {0x13d5, 0x13d5, 0x07},	// Ꮥ  accent
  {0x13d7, 0x13d7, 0x07},	// Ꮧ  accent
  {0x13d9, 0x13d9, 0x07},	// Ꮩ  accent
  {0x13a6, 0x13a6, 0x0a},	// Ꭶ  accent
  {0x13a8, 0x13a8, 0x0a},	// Ꭸ  accent
  {0x13a9, 0x13a9, 0x0a},	// Ꭹ  accent
  {0x13aa, 0x13aa, 0x0e},	// Ꭺ  accent
  {0x13ab, 0x13ab, 0x0a},	// Ꭻ  accent
  {0x13ac, 0x13ac, 0x0a},	// Ꭼ  accent
  {0x13ad, 0x13ad, 0x0b},	// Ꭽ  accent
  {0x13ae, 0x13ae, 0x0b},	// Ꭾ  accent
  {0x13af, 0x13af, 0x0b},	// Ꭿ  accent
  {0x13b0, 0x13b0, 0x0b},	// Ꮀ  accent
  {0x13b1, 0x13b1, 0x0b},	// Ꮁ  accent
  {0x13b2, 0x13b2, 0x0b},	// Ꮂ  accent
  {0x13e3, 0x13e3, 0x0d},	// Ꮳ  accent
  {0x13e4, 0x13e4, 0x0d},	// Ꮴ  accent
  {0x13e5, 0x13e5, 0x0d},	// Ꮵ  accent
  {0x13e6, 0x13e6, 0x0d},	// Ꮶ  accent
  {0x13e7, 0x13e7, 0x0d},	// Ꮷ  accent
  {0x13e8, 0x13e8, 0x0d},	// Ꮸ  accent
  {0x13a7, 0x13a7, 0x06},	// Ꭷ  accent
  {0x13b3, 0x13b3, 0x0f},	// Ꮃ  accent
  {0x13b4, 0x13b4, 0x0f},	// Ꮄ  accent
  {0x13b5, 0x13b5, 0x0f},	// Ꮅ  accent
  {0x13b6, 0x13b6, 0x0f},	// Ꮆ  accent
  {0x13b7, 0x13b7, 0x0f},	// Ꮇ  accent
  {0x13b8, 0x13b8, 0x0f},	// Ꮈ  accent
  {0x0058, 0x0058, 0x1b | MOD_SHIFT},	// X  accent
  {0x13be, 0x13be, 0x11},	// Ꮎ  accent
  {0x13c0, 0x13c0, 0x11},	// Ꮐ  accent
  {0x13c1, 0x13c1, 0x11},	// Ꮑ  accent
  {0x13c2, 0x13c2, 0x11},	// Ꮒ  accent
  {0x13c3, 0x13c3, 0x11},	// Ꮓ  accent
  {0x13c4, 0x13c4, 0x11},	// Ꮔ  accent
  {0x13c5, 0x13c5, 0x11},	// Ꮕ  accent
  {0x13b9, 0x13b9, 0x10},	// Ꮉ  accent
  {0x13ba, 0x13ba, 0x10},	// Ꮊ  accent
  {0x13bb, 0x13bb, 0x10},	// Ꮋ  accent
  {0x13bc, 0x13bc, 0x10},	// Ꮌ  accent
  {0x13bd, 0x13bd, 0x10},	// Ꮍ  accent
  {0x0078, 0x0078, 0x1b},	// x  accent
};

KeyboardUTF8 Keyboard_CHERP(kbdcherp, sizeof kbdcherp / sizeof kbdcherp[0], kbdcherp_deadkeys, sizeof kbdcherp_deadkeys / sizeof kbdcherp_deadkeys[0]);