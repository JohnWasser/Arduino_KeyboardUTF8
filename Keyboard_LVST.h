#include <KeyboardUTF8.h>

// Latvian (Standard)

const UnicodeLookup kbdlvst[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x00a7, 0x21 | (MOD_SHIFT | MOD_ALTGR)},	// Section Sign
  {0x00b0, 0x22 | (MOD_SHIFT | MOD_ALTGR)},	// Degree Sign
  {0x00b1, 0x24 | (MOD_SHIFT | MOD_ALTGR)},	// Plus-Minus Sign
  {0x00d7, 0x25 | (MOD_SHIFT | MOD_ALTGR)},	// Multiplication Sign
  {0x2014, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Em Dash
  {0x0112, 0x08 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter E With Macron
  {0x0156, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter R With Cedilla
  {0x016a, 0xa0 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter U With Macron
  {0x012a, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter I With Macron
  {0x014c, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter O With Macron
  {0x0100, 0x04 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter A With Macron
  {0x0160, 0x16 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter S With Caron
  {0x0122, 0x0a | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter G With Cedilla
  {0x0136, 0x0e | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter K With Cedilla
  {0x013b, 0x0f | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter L With Cedilla
  {0x017d, 0x1d | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter Z With Caron
  {0x010c, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter C With Caron
  {0x0145, 0x11 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter N With Cedilla
  {0x00ad, 0x35 | MOD_ALTGR},	// Soft Hyphen
  {0x00a0, 0x1e | MOD_ALTGR},	// No-Break Space
  {0x00ab, 0x1f | MOD_ALTGR},	// Left-Pointing Double Angle Quotation Mark *
  {0x00bb, 0x20 | MOD_ALTGR},	// Right-Pointing Double Angle Quotation Mark *
  {0x20ac, 0x21 | MOD_ALTGR},	// Euro Sign
  {0x2019, 0x23 | MOD_ALTGR},	// Right Single Quotation Mark
  {0x2013, 0x2d | MOD_ALTGR},	// En Dash
  {0x0113, 0x08 | MOD_ALTGR},	// Latin Small Letter E With Macron
  {0x0157, 0x15 | MOD_ALTGR},	// Latin Small Letter R With Cedilla
  {0x016b, 0xa0 | MOD_ALTGR},	// Latin Small Letter U With Macron
  {0x012b, 0x0c | MOD_ALTGR},	// Latin Small Letter I With Macron
  {0x014d, 0x12 | MOD_ALTGR},	// Latin Small Letter O With Macron
  {0x0101, 0x04 | MOD_ALTGR},	// Latin Small Letter A With Macron
  {0x0161, 0x16 | MOD_ALTGR},	// Latin Small Letter S With Caron
  {0x0123, 0x0a | MOD_ALTGR},	// Latin Small Letter G With Cedilla
  {0x0137, 0x0e | MOD_ALTGR},	// Latin Small Letter K With Cedilla
  {0x013c, 0x0f | MOD_ALTGR},	// Latin Small Letter L With Cedilla
  {0x017e, 0x1d | MOD_ALTGR},	// Latin Small Letter Z With Caron
  {0x010d, 0x06 | MOD_ALTGR},	// Latin Small Letter C With Caron
  {0x0146, 0x11 | MOD_ALTGR},	// Latin Small Letter N With Cedilla
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
  {0x007b, 0x2f | MOD_SHIFT},	// Left Curly Bracket
  {0x007d, 0x30 | MOD_SHIFT},	// Right Curly Bracket
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
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x005a, 0x1d | MOD_SHIFT},	// Latin Capital Letter Z
  {0x0058, 0x1b | MOD_SHIFT},	// Latin Capital Letter X
  {0x0043, 0x06 | MOD_SHIFT},	// Latin Capital Letter C
  {0x0056, 0x19 | MOD_SHIFT},	// Latin Capital Letter V
  {0x0042, 0x05 | MOD_SHIFT},	// Latin Capital Letter B
  {0x004e, 0x11 | MOD_SHIFT},	// Latin Capital Letter N
  {0x004d, 0x10 | MOD_SHIFT},	// Latin Capital Letter M
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
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x30},	// Right Square Bracket
  {0x0061, 0x04},	// Latin Small Letter A
  {0x0073, 0x16},	// Latin Small Letter S
  {0x0064, 0x07},	// Latin Small Letter D
  {0x0066, 0x09},	// Latin Small Letter F
  {0x0067, 0x0a},	// Latin Small Letter G
  {0x0068, 0x0b},	// Latin Small Letter H
  {0x006a, 0x0d},	// Latin Small Letter J
  {0x006b, 0x0e},	// Latin Small Letter K
  {0x006c, 0x0f},	// Latin Small Letter L
  {0x003b, 0x33},	// Semicolon
  {0x005c, 0x64},	// Reverse Solidus
  {0x007a, 0x1d},	// Latin Small Letter Z
  {0x0078, 0x1b},	// Latin Small Letter X
  {0x0063, 0x06},	// Latin Small Letter C
  {0x0076, 0x19},	// Latin Small Letter V
  {0x0062, 0x05},	// Latin Small Letter B
  {0x006e, 0x11},	// Latin Small Letter N
  {0x006d, 0x10},	// Latin Small Letter M
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbdlvst_deadkeys[] PROGMEM = 
{
  {0x2014, 0x2014, 0x34},	// —  accent
  {0x00a8, 0x00a8, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// ¨  accent
  {0x00b1, 0x00b1, 0x34},	// ±  accent
  {0x00d7, 0x00d7, 0x34},	// ×  accent
  {0x00a7, 0x00a7, 0x34},	// §  accent
  {0x00b0, 0x00b0, 0x34},	// °  accent
  {0x0100, 0x0041, 0x34},	// Ā Capital A Macron
  {0x010c, 0x0043, 0x34},	// Č Capital C Caron
  {0x0112, 0x0045, 0x34},	// Ē Capital E Macron
  {0x0122, 0x0047, 0x34},	// Ģ Capital G Cedilla
  {0x012a, 0x0049, 0x34},	// Ī Capital I Macron
  {0x0136, 0x004b, 0x34},	// Ķ Capital K Cedilla
  {0x013b, 0x004c, 0x34},	// Ļ Capital L Cedilla
  {0x0145, 0x004e, 0x34},	// Ņ Capital N Cedilla
  {0x014c, 0x004f, 0x34},	// Ō Capital O Macron
  {0x0156, 0x0052, 0x34},	// Ŗ Capital R Cedilla
  {0x0160, 0x0053, 0x34},	// Š Capital S Caron
  {0x016a, 0x0055, 0x34},	// Ū Capital U Macron
  {0x017d, 0x005a, 0x34},	// Ž Capital Z Caron
  {0x00a0, 0x00a0, 0x34},	//    accent
  {0x00ad, 0x00ad, 0x34},	// ­  accent
  {0x2013, 0x2013, 0x34},	// –  accent
  {0x00b4, 0x00b4, 0x34 | MOD_ALTGR},	// ´  accent
  {0x2019, 0x2019, 0x34},	// ’  accent
  {0x00ab, 0x00ab, 0x34},	// «  accent
  {0x00bb, 0x00bb, 0x34},	// »  accent
  {0x0101, 0x0061, 0x34},	// ā Small A Macron
  {0x010d, 0x0063, 0x34},	// č Small C Caron
  {0x0113, 0x0065, 0x34},	// ē Small E Macron
  {0x0123, 0x0067, 0x34},	// ģ Small G Cedilla
  {0x012b, 0x0069, 0x34},	// ī Small I Macron
  {0x0137, 0x006b, 0x34},	// ķ Small K Cedilla
  {0x013c, 0x006c, 0x34},	// ļ Small L Cedilla
  {0x0146, 0x006e, 0x34},	// ņ Small N Cedilla
  {0x014d, 0x006f, 0x34},	// ō Small O Macron
  {0x0157, 0x0072, 0x34},	// ŗ Small R Cedilla
  {0x0161, 0x0073, 0x34},	// š Small S Caron
  {0x016b, 0x0075, 0x34},	// ū Small U Macron
  {0x017e, 0x007a, 0x34},	// ž Small Z Caron
  {0x0022, 0x0022, 0x34 | MOD_SHIFT},	// "  accent
  {0x005c, 0x005c, 0x34},	// \  accent
  {0x0027, 0x0027, 0x34},	// '  accent
};

KeyboardUTF8 Keyboard_LVST(kbdlvst, sizeof kbdlvst / sizeof kbdlvst[0], kbdlvst_deadkeys, sizeof kbdlvst_deadkeys / sizeof kbdlvst_deadkeys[0]);
