#include <KeyboardUTF8.h>

// Latvian

const UnicodeLookup kbdlv[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0040, 0x1f | (MOD_SHIFT | MOD_ALTGR)},	// Commercial At
  {0x0023, 0x20 | (MOD_SHIFT | MOD_ALTGR)},	// Number Sign
  {0x0024, 0x21 | MOD_SHIFT},	// Dollar Sign
  {0x005e, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// Circumflex Accent
  {0x00b1, 0x24 | (MOD_SHIFT | MOD_ALTGR)},	// Plus-Minus Sign
  {0x2014, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Em Dash
  {0x003b, 0x36 | MOD_SHIFT},	// Semicolon
  {0x0051, 0x14 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter Q
  {0x0122, 0x64 | MOD_SHIFT},	// Latin Capital Letter G With Cedilla
  {0x0156, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter R With Cedilla
  {0x0057, 0x17 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter W
  {0x0059, 0x1c | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter Y
  {0x007b, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Left Curly Bracket
  {0x007d, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Right Curly Bracket
  {0x007c, 0x64 | (MOD_SHIFT | MOD_ALTGR)},	// Vertical Line
  {0x0058, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter X
  {0x0136, 0x31 | MOD_SHIFT},	// Latin Capital Letter K With Cedilla
  {0x00d5, 0x11 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter O With Tilde
  {0x00ab, 0x1f | MOD_SHIFT},	// Left-Pointing Double Angle Quotation Mark *
  {0x20ac, 0x0f | MOD_ALTGR},	// Euro Sign
  {0x0022, 0x22 | MOD_ALTGR},	// Quotation Mark
  {0x2019, 0x23 | MOD_ALTGR},	// Right Single Quotation Mark
  {0x003a, 0x37 | MOD_SHIFT},	// Colon
  {0x2013, 0x2d | MOD_ALTGR},	// En Dash
  {0x003d, 0x2e | MOD_ALTGR},	// Equals Sign
  {0x0071, 0x14 | MOD_ALTGR},	// Latin Small Letter Q
  {0x0123, 0x64},	// Latin Small Letter G With Cedilla
  {0x0157, 0x15 | MOD_ALTGR},	// Latin Small Letter R With Cedilla
  {0x0077, 0x17 | MOD_ALTGR},	// Latin Small Letter W
  {0x0079, 0x1c | MOD_ALTGR},	// Latin Small Letter Y
  {0x005b, 0x2f | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x30 | MOD_ALTGR},	// Right Square Bracket
  {0x005c, 0x64 | MOD_ALTGR},	// Reverse Solidus
  {0x0078, 0x1b | MOD_ALTGR},	// Latin Small Letter X
  {0x0137, 0x31},	// Latin Small Letter K With Cedilla
  {0x00f5, 0x11 | MOD_ALTGR},	// Latin Small Letter O With Tilde
  {0x003c, 0x36 | MOD_ALTGR},	// Less-Than Sign
  {0x003e, 0x37 | MOD_ALTGR},	// Greater-Than Sign
  {0x003f, 0x35 | MOD_SHIFT},	// Question Mark
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x00bb, 0x20 | MOD_SHIFT},	// Right-Pointing Double Angle Quotation Mark *
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x002f, 0x23 | MOD_SHIFT},	// Solidus
  {0x0026, 0x24 | MOD_SHIFT},	// Ampersand
  {0x00d7, 0x25 | MOD_SHIFT},	// Multiplication Sign
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x0046, 0x2e | MOD_SHIFT},	// Latin Capital Letter F
  {0x016a, 0x14 | MOD_SHIFT},	// Latin Capital Letter U With Macron
  {0x0047, 0x1a | MOD_SHIFT},	// Latin Capital Letter G
  {0x004a, 0x08 | MOD_SHIFT},	// Latin Capital Letter J
  {0x0052, 0x15 | MOD_SHIFT},	// Latin Capital Letter R
  {0x004d, 0x17 | MOD_SHIFT},	// Latin Capital Letter M
  {0x0056, 0x1c | MOD_SHIFT},	// Latin Capital Letter V
  {0x004e, 0xa0 | MOD_SHIFT},	// Latin Capital Letter N
  {0x005a, 0x0c | MOD_SHIFT},	// Latin Capital Letter Z
  {0x0112, 0x12 | MOD_SHIFT},	// Latin Capital Letter E With Macron
  {0x010c, 0x13 | MOD_SHIFT},	// Latin Capital Letter C With Caron
  {0x017d, 0x2f | MOD_SHIFT},	// Latin Capital Letter Z With Caron
  {0x0048, 0x30 | MOD_SHIFT},	// Latin Capital Letter H
  {0x0160, 0x04 | MOD_SHIFT},	// Latin Capital Letter S With Caron
  {0x0055, 0x16 | MOD_SHIFT},	// Latin Capital Letter U
  {0x0053, 0x07 | MOD_SHIFT},	// Latin Capital Letter S
  {0x0049, 0x09 | MOD_SHIFT},	// Latin Capital Letter I
  {0x004c, 0x0a | MOD_SHIFT},	// Latin Capital Letter L
  {0x0044, 0x0b | MOD_SHIFT},	// Latin Capital Letter D
  {0x0041, 0x0d | MOD_SHIFT},	// Latin Capital Letter A
  {0x0054, 0x0e | MOD_SHIFT},	// Latin Capital Letter T
  {0x0045, 0x0f | MOD_SHIFT},	// Latin Capital Letter E
  {0x0043, 0x33 | MOD_SHIFT},	// Latin Capital Letter C
  {0x0145, 0x1d | MOD_SHIFT},	// Latin Capital Letter N With Cedilla
  {0x0042, 0x1b | MOD_SHIFT},	// Latin Capital Letter B
  {0x012a, 0x06 | MOD_SHIFT},	// Latin Capital Letter I With Macron
  {0x004b, 0x19 | MOD_SHIFT},	// Latin Capital Letter K
  {0x0050, 0x05 | MOD_SHIFT},	// Latin Capital Letter P
  {0x004f, 0x11 | MOD_SHIFT},	// Latin Capital Letter O
  {0x0100, 0x10 | MOD_SHIFT},	// Latin Capital Letter A With Macron
  {0x013b, 0x38 | MOD_SHIFT},	// Latin Capital Letter L With Cedilla
  {0x00ad, 0x35},	// Soft Hyphen
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
  {0x0066, 0x2e},	// Latin Small Letter F
  {0x016b, 0x14},	// Latin Small Letter U With Macron
  {0x0067, 0x1a},	// Latin Small Letter G
  {0x006a, 0x08},	// Latin Small Letter J
  {0x0072, 0x15},	// Latin Small Letter R
  {0x006d, 0x17},	// Latin Small Letter M
  {0x0076, 0x1c},	// Latin Small Letter V
  {0x006e, 0xa0},	// Latin Small Letter N
  {0x007a, 0x0c},	// Latin Small Letter Z
  {0x0113, 0x12},	// Latin Small Letter E With Macron
  {0x010d, 0x13},	// Latin Small Letter C With Caron
  {0x017e, 0x2f},	// Latin Small Letter Z With Caron
  {0x0068, 0x30},	// Latin Small Letter H
  {0x0161, 0x04},	// Latin Small Letter S With Caron
  {0x0075, 0x16},	// Latin Small Letter U
  {0x0073, 0x07},	// Latin Small Letter S
  {0x0069, 0x09},	// Latin Small Letter I
  {0x006c, 0x0a},	// Latin Small Letter L
  {0x0064, 0x0b},	// Latin Small Letter D
  {0x0061, 0x0d},	// Latin Small Letter A
  {0x0074, 0x0e},	// Latin Small Letter T
  {0x0065, 0x0f},	// Latin Small Letter E
  {0x0063, 0x33},	// Latin Small Letter C
  {0x0146, 0x1d},	// Latin Small Letter N With Cedilla
  {0x0062, 0x1b},	// Latin Small Letter B
  {0x012b, 0x06},	// Latin Small Letter I With Macron
  {0x006b, 0x19},	// Latin Small Letter K
  {0x0070, 0x05},	// Latin Small Letter P
  {0x006f, 0x11},	// Latin Small Letter O
  {0x0101, 0x10},	// Latin Small Letter A With Macron
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x013c, 0x38},	// Latin Small Letter L With Cedilla
};

const DeadkeyLookup kbdlv_deadkeys[] PROGMEM = 
{
  {0x007e, 0x007e, 0x22 | (MOD_SHIFT | MOD_ALTGR)},	// ~  accent
  {0x00f5, 0x006f, 0x22 | (MOD_SHIFT | MOD_ALTGR)},	// õ Small O Tilde
  {0x00d5, 0x004f, 0x22 | (MOD_SHIFT | MOD_ALTGR)},	// Õ Capital O Tilde
  {0x00a8, 0x00a8, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// ¨  accent
  {0x00e4, 0x0061, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// ä Small A Diaeresis
  {0x00c4, 0x0041, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Ä Capital A Diaeresis
  {0x00f6, 0x006f, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// ö Small O Diaeresis
  {0x00d6, 0x004f, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Ö Capital O Diaeresis
  {0x00fc, 0x0075, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// ü Small U Diaeresis
  {0x00dc, 0x0055, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Ü Capital U Diaeresis
  {0x00b4, 0x00b4, 0x34},	// ´  accent
  {0x0107, 0x0063, 0x34},	// ć Small C Acute
  {0x0106, 0x0043, 0x34},	// Ć Capital C Acute
  {0x00e9, 0x0065, 0x34},	// é Small E Acute
  {0x00c9, 0x0045, 0x34},	// É Capital E Acute
  {0x0144, 0x006e, 0x34},	// ń Small N Acute
  {0x0143, 0x004e, 0x34},	// Ń Capital N Acute
  {0x00f3, 0x006f, 0x34},	// ó Small O Acute
  {0x00d3, 0x004f, 0x34},	// Ó Capital O Acute
  {0x015b, 0x0073, 0x34},	// ś Small S Acute
  {0x015a, 0x0053, 0x34},	// Ś Capital S Acute
  {0x017a, 0x007a, 0x34},	// ź Small Z Acute
  {0x0179, 0x005a, 0x34},	// Ź Capital Z Acute
  {0x00b0, 0x00b0, 0x34 | MOD_SHIFT},	// °  accent
  {0x00e5, 0x0061, 0x34 | MOD_SHIFT},	// å Small A Ring Above,
  {0x00c5, 0x0041, 0x34 | MOD_SHIFT},	// Å Capital A Ring Above,
  {0x0117, 0x0065, 0x34 | MOD_SHIFT},	// ė Small E Dot Above
  {0x0116, 0x0045, 0x34 | MOD_SHIFT},	// Ė Capital E Dot Above
  {0x0121, 0x0067, 0x34 | MOD_SHIFT},	// ġ Small G Dot Above
  {0x017c, 0x007a, 0x34 | MOD_SHIFT},	// ż Small Z Dot Above
  {0x017b, 0x005a, 0x34 | MOD_SHIFT},	// Ż Capital Z Dot Above
};

KeyboardUTF8 Keyboard_LV(kbdlv, sizeof kbdlv / sizeof kbdlv[0], kbdlv_deadkeys, sizeof kbdlv_deadkeys / sizeof kbdlv_deadkeys[0]);
