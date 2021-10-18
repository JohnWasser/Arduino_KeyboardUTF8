#include <KeyboardUTF8.h>

// Hebrew (Standard)

const UnicodeLookup kbdhebl3[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x05ba, 0xa0 | (MOD_SHIFT | MOD_ALTGR)},	// Hebrew Point Holam Haser For Vav
  {0x200d, 0x0d | (MOD_SHIFT | MOD_ALTGR)},	// Zero Width Joiner
  {0x201c, 0x0f | (MOD_SHIFT | MOD_ALTGR)},	// Left Double Quotation Mark
  {0x201d, 0x0f | MOD_ALTGR},	// Right Double Quotation Mark
  {0x034f, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Combining Grapheme Joiner
  {0x05c6, 0x05 | (MOD_SHIFT | MOD_ALTGR)},	// Hebrew Punctuation Nun Hafukha
  {0x200c, 0x11 | (MOD_SHIFT | MOD_ALTGR)},	// Zero Width Non-Joiner
  {0x2018, 0x36 | (MOD_SHIFT | MOD_ALTGR)},	// Left Single Quotation Mark
  {0x2019, 0x36 | MOD_ALTGR},	// Right Single Quotation Mark
  {0x05f3, 0x35 | MOD_ALTGR},	// Hebrew Punctuation Geresh
  {0x20ac, 0x20 | MOD_ALTGR},	// Euro Sign
  {0x20aa, 0x21 | MOD_ALTGR},	// New Sheqel Sign
  {0x00b0, 0x22 | MOD_ALTGR},	// Degree Sign
  {0x05ab, 0x23 | MOD_ALTGR},	// Hebrew Accent Ole
  {0x05bd, 0x24 | MOD_ALTGR},	// Hebrew Point Meteg *
  {0x00d7, 0x25 | MOD_ALTGR},	// Multiplication Sign
  {0x200e, 0x26 | MOD_ALTGR},	// Left-To-Right Mark
  {0x200f, 0x27 | MOD_ALTGR},	// Right-To-Left Mark
  {0x05be, 0x2d | MOD_ALTGR},	// Hebrew Punctuation Maqaf
  {0x2013, 0x2e | MOD_ALTGR},	// En Dash
  {0x05c2, 0x14 | MOD_ALTGR},	// Hebrew Point Sin Dot
  {0x05c1, 0x1a | MOD_ALTGR},	// Hebrew Point Shin Dot
  {0x05b8, 0x08 | MOD_ALTGR},	// Hebrew Point Qamats
  {0x05b3, 0x15 | MOD_ALTGR},	// Hebrew Point Hataf Qamats
  {0x05f0, 0x1c | MOD_ALTGR},	// Hebrew Ligature Yiddish Double Vav
  {0x05b9, 0xa0 | MOD_ALTGR},	// Hebrew Point Holam
  {0x05b7, 0x13 | MOD_ALTGR},	// Hebrew Point Patah
  {0x05b2, 0x2f | MOD_ALTGR},	// Hebrew Point Hataf Patah
  {0x05bf, 0x30 | MOD_ALTGR},	// Hebrew Point Rafe
  {0x05b0, 0x04 | MOD_ALTGR},	// Hebrew Point Sheva
  {0x05bc, 0x16 | MOD_ALTGR},	// Hebrew Point Dagesh Or Mapiq (Or Shuruq)
  {0x05f1, 0x0a | MOD_ALTGR},	// Hebrew Ligature Yiddish Vav Yod
  {0x05f2, 0x0b | MOD_ALTGR},	// Hebrew Ligature Yiddish Double Yod
  {0x05b4, 0x0d | MOD_ALTGR},	// Hebrew Point Hiriq
  {0x201e, 0x33 | MOD_ALTGR},	// Double Low-9 Quotation Mark
  {0x05f4, 0x34 | MOD_ALTGR},	// Hebrew Punctuation Gershayim
  {0x05bb, 0x28 | MOD_ALTGR},	// Hebrew Point Qubuts
  {0x05b6, 0x1b | MOD_ALTGR},	// Hebrew Point Segol
  {0x05b1, 0x06 | MOD_ALTGR},	// Hebrew Point Hataf Segol
  {0x05b5, 0x10 | MOD_ALTGR},	// Hebrew Point Tsere
  {0x201a, 0x37 | MOD_ALTGR},	// Single Low-9 Quotation Mark
  {0x00f7, 0x38 | MOD_ALTGR},	// Division Sign
  {0x007e, 0x35 | MOD_SHIFT},	// Tilde
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0040, 0x1f | MOD_SHIFT},	// Commercial At
  {0x0023, 0x20 | MOD_SHIFT},	// Number Sign
  {0x0024, 0x21 | MOD_SHIFT},	// Dollar Sign
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x005e, 0x23 | MOD_SHIFT},	// Circumflex Accent
  {0x0026, 0x24 | MOD_SHIFT},	// Ampersand
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x0028, 0x27 | MOD_SHIFT},	// Left Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
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
  {0x007d, 0x2f | MOD_SHIFT},	// Right Curly Bracket
  {0x007b, 0x30 | MOD_SHIFT},	// Left Curly Bracket
  {0x0041, 0x04 | MOD_SHIFT},	// Latin Capital Letter A
  {0x0053, 0x16 | MOD_SHIFT},	// Latin Capital Letter S
  {0x0044, 0x07 | MOD_SHIFT},	// Latin Capital Letter D
  {0x0046, 0x09 | MOD_SHIFT},	// Latin Capital Letter F
  {0x0047, 0x0a | MOD_SHIFT},	// Latin Capital Letter G
  {0x0048, 0x0b | MOD_SHIFT},	// Latin Capital Letter H
  {0x004a, 0x0d | MOD_SHIFT},	// Latin Capital Letter J
  {0x004b, 0x0e | MOD_SHIFT},	// Latin Capital Letter K
  {0x004c, 0x0f | MOD_SHIFT},	// Latin Capital Letter L
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x005a, 0x1d | MOD_SHIFT},	// Latin Capital Letter Z
  {0x0058, 0x1b | MOD_SHIFT},	// Latin Capital Letter X
  {0x0043, 0x06 | MOD_SHIFT},	// Latin Capital Letter C
  {0x0056, 0x19 | MOD_SHIFT},	// Latin Capital Letter V
  {0x0042, 0x05 | MOD_SHIFT},	// Latin Capital Letter B
  {0x004e, 0x11 | MOD_SHIFT},	// Latin Capital Letter N
  {0x004d, 0x10 | MOD_SHIFT},	// Latin Capital Letter M
  {0x003e, 0x36 | MOD_SHIFT},	// Greater-Than Sign
  {0x003c, 0x37 | MOD_SHIFT},	// Less-Than Sign
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
  {0x003b, 0x35},	// Semicolon
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
  {0x002f, 0x14},	// Solidus
  {0x0027, 0x1a},	// Apostrophe
  {0x05e7, 0x08},	// Hebrew Letter Qof
  {0x05e8, 0x15},	// Hebrew Letter Resh
  {0x05d0, 0x17},	// Hebrew Letter Alef
  {0x05d8, 0x1c},	// Hebrew Letter Tet
  {0x05d5, 0xa0},	// Hebrew Letter Vav
  {0x05df, 0x0c},	// Hebrew Letter Final Nun
  {0x05dd, 0x12},	// Hebrew Letter Final Mem
  {0x05e4, 0x13},	// Hebrew Letter Pe
  {0x005d, 0x2f},	// Right Square Bracket
  {0x005b, 0x30},	// Left Square Bracket
  {0x05e9, 0x04},	// Hebrew Letter Shin
  {0x05d3, 0x16},	// Hebrew Letter Dalet
  {0x05d2, 0x07},	// Hebrew Letter Gimel
  {0x05db, 0x09},	// Hebrew Letter Kaf
  {0x05e2, 0x0a},	// Hebrew Letter Ayin
  {0x05d9, 0x0b},	// Hebrew Letter Yod
  {0x05d7, 0x0d},	// Hebrew Letter Het
  {0x05dc, 0x0e},	// Hebrew Letter Lamed
  {0x05da, 0x0f},	// Hebrew Letter Final Kaf
  {0x05e3, 0x33},	// Hebrew Letter Final Pe
  {0x002c, 0x34},	// Comma
  {0x005c, 0x64},	// Reverse Solidus
  {0x05d6, 0x1d},	// Hebrew Letter Zayin
  {0x05e1, 0x1b},	// Hebrew Letter Samekh
  {0x05d1, 0x06},	// Hebrew Letter Bet
  {0x05d4, 0x19},	// Hebrew Letter He
  {0x05e0, 0x05},	// Hebrew Letter Nun
  {0x05de, 0x11},	// Hebrew Letter Mem
  {0x05e6, 0x10},	// Hebrew Letter Tsadi
  {0x05ea, 0x36},	// Hebrew Letter Tav
  {0x05e5, 0x37},	// Hebrew Letter Final Tsadi
  {0x002e, 0x38},	// Full Stop
};

const DeadkeyLookup kbdhebl3_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_HEBL3(kbdhebl3, sizeof kbdhebl3 / sizeof kbdhebl3[0], kbdhebl3_deadkeys, sizeof kbdhebl3_deadkeys / sizeof kbdhebl3_deadkeys[0]);
