#include <KeyboardUTF8.h>

// Latin American

const UnicodeLookup kbdla[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x00ac, 0x35 | MOD_ALTGR},	// Not Sign
  {0x005c, 0x2d | MOD_ALTGR},	// Reverse Solidus
  {0x0040, 0x14 | MOD_ALTGR},	// Commercial At
  {0x007e, 0x30 | MOD_ALTGR},	// Tilde
  {0x00b0, 0x35 | MOD_SHIFT},	// Degree Sign
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0022, 0x1f | MOD_SHIFT},	// Quotation Mark
  {0x0023, 0x20 | MOD_SHIFT},	// Number Sign
  {0x0024, 0x21 | MOD_SHIFT},	// Dollar Sign
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x0026, 0x23 | MOD_SHIFT},	// Ampersand
  {0x002f, 0x24 | MOD_SHIFT},	// Solidus
  {0x0028, 0x25 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x003d, 0x27 | MOD_SHIFT},	// Equals Sign
  {0x003f, 0x2d | MOD_SHIFT},	// Question Mark
  {0x00a1, 0x2e | MOD_SHIFT},	// Inverted Exclamation Mark
  {0x0051, 0x14 | MOD_SHIFT},	// Latin Capital Letter Q
  {0x0057, 0x1a | MOD_SHIFT},	// Latin Capital Letter W
  {0x0045, 0x08 | MOD_SHIFT},	// Latin Capital Letter E
  {0x0052, 0x15 | MOD_SHIFT},	// Latin Capital Letter R
  {0x0054, 0x17 | MOD_SHIFT},	// Latin Capital Letter T
  {0x0059, 0x1c | MOD_SHIFT},	// Latin Capital Letter Y
  {0x0055, 0xa0 | MOD_SHIFT},	// Latin Capital Letter U
  {0x0049, 0x0c | MOD_SHIFT},	// Latin Capital Letter I
  {0x004f, 0x12 | MOD_SHIFT},	// Latin Capital Letter O
  {0x0050, 0x13 | MOD_SHIFT},	// Latin Capital Letter P
  {0x002a, 0x30 | MOD_SHIFT},	// Asterisk
  {0x0041, 0x04 | MOD_SHIFT},	// Latin Capital Letter A
  {0x0053, 0x16 | MOD_SHIFT},	// Latin Capital Letter S
  {0x0044, 0x07 | MOD_SHIFT},	// Latin Capital Letter D
  {0x0046, 0x09 | MOD_SHIFT},	// Latin Capital Letter F
  {0x0047, 0x0a | MOD_SHIFT},	// Latin Capital Letter G
  {0x0048, 0x0b | MOD_SHIFT},	// Latin Capital Letter H
  {0x004a, 0x0d | MOD_SHIFT},	// Latin Capital Letter J
  {0x004b, 0x0e | MOD_SHIFT},	// Latin Capital Letter K
  {0x004c, 0x0f | MOD_SHIFT},	// Latin Capital Letter L
  {0x00d1, 0x33 | MOD_SHIFT},	// Latin Capital Letter N With Tilde
  {0x005b, 0x34 | MOD_SHIFT},	// Left Square Bracket
  {0x005d, 0x28 | MOD_SHIFT},	// Right Square Bracket
  {0x003e, 0x64 | MOD_SHIFT},	// Greater-Than Sign
  {0x005a, 0x1d | MOD_SHIFT},	// Latin Capital Letter Z
  {0x0058, 0x1b | MOD_SHIFT},	// Latin Capital Letter X
  {0x0043, 0x06 | MOD_SHIFT},	// Latin Capital Letter C
  {0x0056, 0x19 | MOD_SHIFT},	// Latin Capital Letter V
  {0x0042, 0x05 | MOD_SHIFT},	// Latin Capital Letter B
  {0x004e, 0x11 | MOD_SHIFT},	// Latin Capital Letter N
  {0x004d, 0x10 | MOD_SHIFT},	// Latin Capital Letter M
  {0x003b, 0x36 | MOD_SHIFT},	// Semicolon
  {0x003a, 0x37 | MOD_SHIFT},	// Colon
  {0x005f, 0x38 | MOD_SHIFT},	// Low Line
  {0x007c, 0x35},	// Vertical Line
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
  {0x00bf, 0x2e},	// Inverted Question Mark
  {0x0071, 0x14},	// Latin Small Letter Q
  {0x0077, 0x1a},	// Latin Small Letter W
  {0x0065, 0x08},	// Latin Small Letter E
  {0x0072, 0x15},	// Latin Small Letter R
  {0x0074, 0x17},	// Latin Small Letter T
  {0x0079, 0x1c},	// Latin Small Letter Y
  {0x0075, 0xa0},	// Latin Small Letter U
  {0x0069, 0x0c},	// Latin Small Letter I
  {0x006f, 0x12},	// Latin Small Letter O
  {0x0070, 0x13},	// Latin Small Letter P
  {0x002b, 0x30},	// Plus Sign
  {0x0061, 0x04},	// Latin Small Letter A
  {0x0073, 0x16},	// Latin Small Letter S
  {0x0064, 0x07},	// Latin Small Letter D
  {0x0066, 0x09},	// Latin Small Letter F
  {0x0067, 0x0a},	// Latin Small Letter G
  {0x0068, 0x0b},	// Latin Small Letter H
  {0x006a, 0x0d},	// Latin Small Letter J
  {0x006b, 0x0e},	// Latin Small Letter K
  {0x006c, 0x0f},	// Latin Small Letter L
  {0x00f1, 0x33},	// Latin Small Letter N With Tilde
  {0x007b, 0x34},	// Left Curly Bracket
  {0x007d, 0x28},	// Right Curly Bracket
  {0x003c, 0x64},	// Less-Than Sign
  {0x007a, 0x1d},	// Latin Small Letter Z
  {0x0078, 0x1b},	// Latin Small Letter X
  {0x0063, 0x06},	// Latin Small Letter C
  {0x0076, 0x19},	// Latin Small Letter V
  {0x0062, 0x05},	// Latin Small Letter B
  {0x006e, 0x11},	// Latin Small Letter N
  {0x006d, 0x10},	// Latin Small Letter M
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x002d, 0x38},	// Hyphen-Minus
};

const DeadkeyLookup kbdla_deadkeys[] PROGMEM = 
{
  {0x005e, 0x005e, 0x34 | MOD_ALTGR},	// ^  accent
  {0x00e2, 0x0061, 0x34 | MOD_ALTGR},	// â Small A Circumflex
  {0x00c2, 0x0041, 0x34 | MOD_ALTGR},	// Â Capital A Circumflex
  {0x00ea, 0x0065, 0x34 | MOD_ALTGR},	// ê Small E Circumflex
  {0x00ca, 0x0045, 0x34 | MOD_ALTGR},	// Ê Capital E Circumflex
  {0x00ee, 0x0069, 0x34 | MOD_ALTGR},	// î Small I Circumflex
  {0x00ce, 0x0049, 0x34 | MOD_ALTGR},	// Î Capital I Circumflex
  {0x00f4, 0x006f, 0x34 | MOD_ALTGR},	// ô Small O Circumflex
  {0x00d4, 0x004f, 0x34 | MOD_ALTGR},	// Ô Capital O Circumflex
  {0x00fb, 0x0075, 0x34 | MOD_ALTGR},	// û Small U Circumflex
  {0x00db, 0x0055, 0x34 | MOD_ALTGR},	// Û Capital U Circumflex
  {0x0060, 0x0060, 0x28 | MOD_ALTGR},	// `  accent
  {0x00e0, 0x0061, 0x28 | MOD_ALTGR},	// à Small A Grave
  {0x00c0, 0x0041, 0x28 | MOD_ALTGR},	// À Capital A Grave
  {0x00e8, 0x0065, 0x28 | MOD_ALTGR},	// è Small E Grave
  {0x00c8, 0x0045, 0x28 | MOD_ALTGR},	// È Capital E Grave
  {0x00ec, 0x0069, 0x28 | MOD_ALTGR},	// ì Small I Grave
  {0x00cc, 0x0049, 0x28 | MOD_ALTGR},	// Ì Capital I Grave
  {0x00f2, 0x006f, 0x28 | MOD_ALTGR},	// ò Small O Grave
  {0x00d2, 0x004f, 0x28 | MOD_ALTGR},	// Ò Capital O Grave
  {0x00f9, 0x0075, 0x28 | MOD_ALTGR},	// ù Small U Grave
  {0x00d9, 0x0055, 0x28 | MOD_ALTGR},	// Ù Capital U Grave
  {0x00a8, 0x00a8, 0x2f | MOD_SHIFT},	// ¨  accent
  {0x00e4, 0x0061, 0x2f | MOD_SHIFT},	// ä Small A Diaeresis
  {0x00c4, 0x0041, 0x2f | MOD_SHIFT},	// Ä Capital A Diaeresis
  {0x00eb, 0x0065, 0x2f | MOD_SHIFT},	// ë Small E Diaeresis
  {0x00cb, 0x0045, 0x2f | MOD_SHIFT},	// Ë Capital E Diaeresis
  {0x00ef, 0x0069, 0x2f | MOD_SHIFT},	// ï Small I Diaeresis
  {0x00cf, 0x0049, 0x2f | MOD_SHIFT},	// Ï Capital I Diaeresis
  {0x00f6, 0x006f, 0x2f | MOD_SHIFT},	// ö Small O Diaeresis
  {0x00d6, 0x004f, 0x2f | MOD_SHIFT},	// Ö Capital O Diaeresis
  {0x00fc, 0x0075, 0x2f | MOD_SHIFT},	// ü Small U Diaeresis
  {0x00dc, 0x0055, 0x2f | MOD_SHIFT},	// Ü Capital U Diaeresis
  {0x00ff, 0x0079, 0x2f | MOD_SHIFT},	// ÿ Small Y Diaeresis
  {0x00b4, 0x00b4, 0x2f},	// ´  accent
  {0x00e1, 0x0061, 0x2f},	// á Small A Acute
  {0x00c1, 0x0041, 0x2f},	// Á Capital A Acute
  {0x00e9, 0x0065, 0x2f},	// é Small E Acute
  {0x00c9, 0x0045, 0x2f},	// É Capital E Acute
  {0x00ed, 0x0069, 0x2f},	// í Small I Acute
  {0x00cd, 0x0049, 0x2f},	// Í Capital I Acute
  {0x00f3, 0x006f, 0x2f},	// ó Small O Acute
  {0x00d3, 0x004f, 0x2f},	// Ó Capital O Acute
  {0x00fa, 0x0075, 0x2f},	// ú Small U Acute
  {0x00da, 0x0055, 0x2f},	// Ú Capital U Acute
  {0x00fd, 0x0079, 0x2f},	// ý Small Y Acute
  {0x00dd, 0x0059, 0x2f},	// Ý Capital Y Acute
};

KeyboardUTF8 Keyboard_LA(kbdla, sizeof kbdla / sizeof kbdla[0], kbdla_deadkeys, sizeof kbdla_deadkeys / sizeof kbdla_deadkeys[0]);
