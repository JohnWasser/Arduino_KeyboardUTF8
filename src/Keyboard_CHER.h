#include <KeyboardUTF8.h>

// Cherokee Nation

const UnicodeLookup kbdcher[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007e, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Tilde
  {0x0021, 0x1e | (MOD_SHIFT | MOD_ALTGR)},	// Exclamation Mark
  {0x0040, 0x1f | (MOD_SHIFT | MOD_ALTGR)},	// Commercial At
  {0x0023, 0x20 | (MOD_SHIFT | MOD_ALTGR)},	// Number Sign
  {0x0024, 0x21 | (MOD_SHIFT | MOD_ALTGR)},	// Dollar Sign
  {0x0025, 0x22 | (MOD_SHIFT | MOD_ALTGR)},	// Percent Sign
  {0x005e, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// Circumflex Accent
  {0x0026, 0x24 | (MOD_SHIFT | MOD_ALTGR)},	// Ampersand
  {0x002a, 0x25 | (MOD_SHIFT | MOD_ALTGR)},	// Asterisk
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x005f, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Low Line
  {0x002b, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Plus Sign
  {0x0051, 0x14 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter Q
  {0x0057, 0x1a | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter W
  {0x0045, 0x08 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter E
  {0x0052, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter R
  {0x0054, 0x17 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter T
  {0x0059, 0x1c | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter Y
  {0x0055, 0xa0 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter U
  {0x0049, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter I
  {0x004f, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter O
  {0x0050, 0x13 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter P
  {0x007b, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Left Curly Bracket
  {0x007d, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Right Curly Bracket
  {0x0041, 0x04 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter A
  {0x0053, 0x16 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter S
  {0x0044, 0x07 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter D
  {0x0046, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter F
  {0x0047, 0x0a | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter G
  {0x0048, 0x0b | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter H
  {0x004a, 0x0d | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter J
  {0x004b, 0x0e | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter K
  {0x004c, 0x0f | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter L
  {0x003a, 0x33 | (MOD_SHIFT | MOD_ALTGR)},	// Colon
  {0x007c, 0x28 | (MOD_SHIFT | MOD_ALTGR)},	// Vertical Line
  {0x005a, 0x1d | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter Z
  {0x0058, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter X
  {0x0043, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter C
  {0x0056, 0x19 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter V
  {0x0042, 0x05 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter B
  {0x004e, 0x11 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter N
  {0x004d, 0x10 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter M
  {0x003f, 0x38 | (MOD_SHIFT | MOD_ALTGR)},	// Question Mark
  {0x13c0, 0x35 | MOD_ALTGR},	// Cherokee Letter Nah
  {0x0031, 0x1e | MOD_ALTGR},	// Digit One
  {0x0032, 0x1f | MOD_ALTGR},	// Digit Two
  {0x0033, 0x20 | MOD_ALTGR},	// Digit Three
  {0x0034, 0x21 | MOD_ALTGR},	// Digit Four
  {0x0035, 0x22 | MOD_ALTGR},	// Digit Five
  {0x0036, 0x23 | MOD_ALTGR},	// Digit Six
  {0x0037, 0x24 | MOD_ALTGR},	// Digit Seven
  {0x0038, 0x25 | MOD_ALTGR},	// Digit Eight
  {0x0039, 0x26 | MOD_ALTGR},	// Digit Nine
  {0x0030, 0x27 | MOD_ALTGR},	// Digit Zero
  {0x002d, 0x2d | MOD_ALTGR},	// Hyphen-Minus
  {0x003d, 0x2e | MOD_ALTGR},	// Equals Sign
  {0x0071, 0x14 | MOD_ALTGR},	// Latin Small Letter Q
  {0x0077, 0x1a | MOD_ALTGR},	// Latin Small Letter W
  {0x0065, 0x08 | MOD_ALTGR},	// Latin Small Letter E
  {0x0072, 0x15 | MOD_ALTGR},	// Latin Small Letter R
  {0x0074, 0x17 | MOD_ALTGR},	// Latin Small Letter T
  {0x0079, 0x1c | MOD_ALTGR},	// Latin Small Letter Y
  {0x0075, 0xa0 | MOD_ALTGR},	// Latin Small Letter U
  {0x0069, 0x0c | MOD_ALTGR},	// Latin Small Letter I
  {0x006f, 0x12 | MOD_ALTGR},	// Latin Small Letter O
  {0x0070, 0x13 | MOD_ALTGR},	// Latin Small Letter P
  {0x005b, 0x2f | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x30 | MOD_ALTGR},	// Right Square Bracket
  {0x0061, 0x04 | MOD_ALTGR},	// Latin Small Letter A
  {0x0073, 0x16 | MOD_ALTGR},	// Latin Small Letter S
  {0x0064, 0x07 | MOD_ALTGR},	// Latin Small Letter D
  {0x0066, 0x09 | MOD_ALTGR},	// Latin Small Letter F
  {0x0067, 0x0a | MOD_ALTGR},	// Latin Small Letter G
  {0x0068, 0x0b | MOD_ALTGR},	// Latin Small Letter H
  {0x006a, 0x0d | MOD_ALTGR},	// Latin Small Letter J
  {0x006b, 0x0e | MOD_ALTGR},	// Latin Small Letter K
  {0x006c, 0x0f | MOD_ALTGR},	// Latin Small Letter L
  {0x003b, 0x33 | MOD_ALTGR},	// Semicolon
  {0x005c, 0x28 | MOD_ALTGR},	// Reverse Solidus
  {0x007a, 0x1d | MOD_ALTGR},	// Latin Small Letter Z
  {0x0078, 0x1b | MOD_ALTGR},	// Latin Small Letter X
  {0x0063, 0x06 | MOD_ALTGR},	// Latin Small Letter C
  {0x0076, 0x19 | MOD_ALTGR},	// Latin Small Letter V
  {0x0062, 0x05 | MOD_ALTGR},	// Latin Small Letter B
  {0x006e, 0x11 | MOD_ALTGR},	// Latin Small Letter N
  {0x006d, 0x10 | MOD_ALTGR},	// Latin Small Letter M
  {0x003c, 0x36 | MOD_ALTGR},	// Less-Than Sign
  {0x003e, 0x37 | MOD_ALTGR},	// Greater-Than Sign
  {0x002f, 0x38 | MOD_ALTGR},	// Solidus
  {0x13ca, 0x35 | MOD_SHIFT},	// Cherokee Letter Quu
  {0x13b1, 0x1e | MOD_SHIFT},	// Cherokee Letter Hu
  {0x13c7, 0x1f | MOD_SHIFT},	// Cherokee Letter Que
  {0x13e7, 0x20 | MOD_SHIFT},	// Cherokee Letter Tsu
  {0x13b0, 0x21 | MOD_SHIFT},	// Cherokee Letter Ho
  {0x13b9, 0x22 | MOD_SHIFT},	// Cherokee Letter Ma
  {0x13dd, 0x23 | MOD_SHIFT},	// Cherokee Letter Tla
  {0x13e1, 0x24 | MOD_SHIFT},	// Cherokee Letter Tlu
  {0x13ba, 0x25 | MOD_SHIFT},	// Cherokee Letter Me
  {0x13bc, 0x2d | MOD_SHIFT},	// Cherokee Letter Mo
  {0x13bd, 0x2e | MOD_SHIFT},	// Cherokee Letter Mu
  {0x13c6, 0x14 | MOD_SHIFT},	// Cherokee Letter Qua
  {0x13eb, 0x1a | MOD_SHIFT},	// Cherokee Letter Wi
  {0x13e3, 0x08 | MOD_SHIFT},	// Cherokee Letter Tsa
  {0x13cf, 0x15 | MOD_SHIFT},	// Cherokee Letter Si
  {0x13d8, 0x17 | MOD_SHIFT},	// Cherokee Letter Ti
  {0x13f2, 0x1c | MOD_SHIFT},	// Cherokee Letter Yo
  {0x13ad, 0xa0 | MOD_SHIFT},	// Cherokee Letter Ha
  {0x13f1, 0x0c | MOD_SHIFT},	// Cherokee Letter Yi
  {0x13ec, 0x12 | MOD_SHIFT},	// Cherokee Letter Wo
  {0x13ea, 0x13 | MOD_SHIFT},	// Cherokee Letter We
  {0x13d1, 0x2f | MOD_SHIFT},	// Cherokee Letter Su
  {0x13e4, 0x30 | MOD_SHIFT},	// Cherokee Letter Tse
  {0x13cc, 0x04 | MOD_SHIFT},	// Cherokee Letter Sa
  {0x13ce, 0x16 | MOD_SHIFT},	// Cherokee Letter Se
  {0x13d0, 0x07 | MOD_SHIFT},	// Cherokee Letter So
  {0x13c8, 0x09 | MOD_SHIFT},	// Cherokee Letter Qui
  {0x13e5, 0x0a | MOD_SHIFT},	// Cherokee Letter Tsi
  {0x13b2, 0x0b | MOD_SHIFT},	// Cherokee Letter Hv
  {0x13ab, 0x0d | MOD_SHIFT},	// Cherokee Letter Gu
  {0x13a7, 0x0e | MOD_SHIFT},	// Cherokee Letter Ka
  {0x13ae, 0x0f | MOD_SHIFT},	// Cherokee Letter He
  {0x13e0, 0x33 | MOD_SHIFT},	// Cherokee Letter Tlo
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x13ee, 0x28 | MOD_SHIFT},	// Cherokee Letter Wv
  {0x13c3, 0x1d | MOD_SHIFT},	// Cherokee Letter No
  {0x13ed, 0x1b | MOD_SHIFT},	// Cherokee Letter Wu
  {0x13df, 0x06 | MOD_SHIFT},	// Cherokee Letter Tli
  {0x13de, 0x19 | MOD_SHIFT},	// Cherokee Letter Tle
  {0x13f0, 0x05 | MOD_SHIFT},	// Cherokee Letter Ye
  {0x13bb, 0x11 | MOD_SHIFT},	// Cherokee Letter Mi
  {0x13b7, 0x10 | MOD_SHIFT},	// Cherokee Letter Lu
  {0x13e2, 0x36 | MOD_SHIFT},	// Cherokee Letter Tlv
  {0x13b4, 0x37 | MOD_SHIFT},	// Cherokee Letter Le
  {0x13c9, 0x38 | MOD_SHIFT},	// Cherokee Letter Quo
  {0x0060, 0x35},	// Grave Accent
  {0x13d9, 0x21},	// Cherokee Letter Do
  {0x13e6, 0x22},	// Cherokee Letter Tso
  {0x13dc, 0x23},	// Cherokee Letter Dla
  {0x13cb, 0x24},	// Cherokee Letter Quv
  {0x13d6, 0x25},	// Cherokee Letter Te
  {0x13d2, 0x26},	// Cherokee Letter Sv
  {0x13c4, 0x27},	// Cherokee Letter Nu
  {0x13bf, 0x2d},	// Cherokee Letter Hna
  {0x13f3, 0x2e},	// Cherokee Letter Yu
  {0x13aa, 0x14},	// Cherokee Letter Go
  {0x13b3, 0x1a},	// Cherokee Letter La
  {0x13a1, 0x08},	// Cherokee Letter E
  {0x13db, 0x15},	// Cherokee Letter Dv
  {0x13d4, 0x17},	// Cherokee Letter Ta
  {0x13ef, 0x1c},	// Cherokee Letter Ya
  {0x13a4, 0xa0},	// Cherokee Letter U
  {0x13a2, 0x0c},	// Cherokee Letter I
  {0x13a3, 0x12},	// Cherokee Letter O
  {0x13c1, 0x13},	// Cherokee Letter Ne
  {0x13d5, 0x2f},	// Cherokee Letter De
  {0x13b6, 0x30},	// Cherokee Letter Lo
  {0x13a0, 0x04},	// Cherokee Letter A
  {0x13cd, 0x16},	// Cherokee Letter S
  {0x13d7, 0x07},	// Cherokee Letter Di
  {0x13a9, 0x09},	// Cherokee Letter Gi
  {0x13a6, 0x0a},	// Cherokee Letter Ga
  {0x13af, 0x0b},	// Cherokee Letter Hi
  {0x13da, 0x0d},	// Cherokee Letter Du
  {0x13b8, 0x0e},	// Cherokee Letter Lv
  {0x13b5, 0x0f},	// Cherokee Letter Li
  {0x13e8, 0x33},	// Cherokee Letter Tsv
  {0x0027, 0x34},	// Apostrophe
  {0x13e9, 0x28},	// Cherokee Letter Wa
  {0x13ac, 0x1d},	// Cherokee Letter Gv
  {0x13f4, 0x1b},	// Cherokee Letter Yv
  {0x13d3, 0x06},	// Cherokee Letter Da
  {0x13a5, 0x19},	// Cherokee Letter V
  {0x13a8, 0x05},	// Cherokee Letter Ge
  {0x13be, 0x11},	// Cherokee Letter Na
  {0x13c5, 0x10},	// Cherokee Letter Nv
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x13c2, 0x38},	// Cherokee Letter Ni
};

const DeadkeyLookup kbdcher_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_CHER(kbdcher, sizeof kbdcher / sizeof kbdcher[0], kbdcher_deadkeys, sizeof kbdcher_deadkeys / sizeof kbdcher_deadkeys[0]);
