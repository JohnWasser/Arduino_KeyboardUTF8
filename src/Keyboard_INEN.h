#include <KeyboardUTF8.h>

// English (India)

const UnicodeLookup kbdinen[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x00c6, 0x14 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter Ae (Ash) *
  {0x0112, 0x08 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter E With Macron
  {0x1e6c, 0x17 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter T With Dot Below
  {0x00d1, 0x1c | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter N With Tilde
  {0x016a, 0xa0 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter U With Macron
  {0x012a, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter I With Macron
  {0x014c, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter O With Macron
  {0x0100, 0x04 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter A With Macron
  {0x015a, 0x16 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter S With Acute
  {0x1e0c, 0x07 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter D With Dot Below
  {0x1e44, 0x0a | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter N With Dot Above
  {0x1e24, 0x0b | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter H With Dot Below
  {0x1e62, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter S With Dot Below
  {0x1e46, 0x11 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter N With Dot Below
  {0x1e40, 0x10 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter M With Dot Above
  {0x20b9, 0x21 | MOD_ALTGR},	// Indian Rupee Sign
  {0x00e6, 0x14 | MOD_ALTGR},	// Latin Small Letter Ae (Ash) *
  {0x0113, 0x08 | MOD_ALTGR},	// Latin Small Letter E With Macron
  {0x1e6d, 0x17 | MOD_ALTGR},	// Latin Small Letter T With Dot Below
  {0x00f1, 0x1c | MOD_ALTGR},	// Latin Small Letter N With Tilde
  {0x016b, 0xa0 | MOD_ALTGR},	// Latin Small Letter U With Macron
  {0x012b, 0x0c | MOD_ALTGR},	// Latin Small Letter I With Macron
  {0x014d, 0x12 | MOD_ALTGR},	// Latin Small Letter O With Macron
  {0x0101, 0x04 | MOD_ALTGR},	// Latin Small Letter A With Macron
  {0x015b, 0x16 | MOD_ALTGR},	// Latin Small Letter S With Acute
  {0x1e0d, 0x07 | MOD_ALTGR},	// Latin Small Letter D With Dot Below
  {0x1e45, 0x0a | MOD_ALTGR},	// Latin Small Letter N With Dot Above
  {0x1e25, 0x0b | MOD_ALTGR},	// Latin Small Letter H With Dot Below
  {0x1e63, 0x1b | MOD_ALTGR},	// Latin Small Letter S With Dot Below
  {0x1e47, 0x11 | MOD_ALTGR},	// Latin Small Letter N With Dot Below
  {0x1e41, 0x10 | MOD_ALTGR},	// Latin Small Letter M With Dot Above
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
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
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
  {0x0027, 0x34},	// Apostrophe
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

const DeadkeyLookup kbdinen_deadkeys[] PROGMEM = 
{
  {0x007e, 0x007e, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// ~  accent
  {0x00f1, 0x006e, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// ñ Small N Tilde
  {0x00d1, 0x004e, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Ñ Capital N Tilde
  {0x005e, 0x005e, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// ^  accent
  {0x00ea, 0x0065, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// ê Small E Circumflex
  {0x00ca, 0x0045, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// Ê Capital E Circumflex
  {0x00f4, 0x006f, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// ô Small O Circumflex
  {0x00d4, 0x004f, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// Ô Capital O Circumflex
  {0x0028, 0x0028, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// (  accent
  {0x0115, 0x0065, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// ĕ Small E Breve
  {0x0114, 0x0045, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// Ĕ Capital E Breve
  {0x1e2b, 0x0068, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// ḫ Small H Breve Below
  {0x1e2a, 0x0048, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// Ḫ Capital H Breve Below
  {0x014f, 0x006f, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// ŏ Small O Breve
  {0x014e, 0x004f, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// Ŏ Capital O Breve
  {0x016d, 0x0075, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// ŭ Small U Breve
  {0x016c, 0x0055, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// Ŭ Capital U Breve
  {0x005f, 0x005f, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// _  accent
  {0x1e0f, 0x0064, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// ḏ Small D Line Below
  {0x1e0e, 0x0044, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Ḏ Capital D Line Below
  {0x1e96, 0x0068, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// ẖ Small H Line Below
  {0x1e35, 0x006b, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// ḵ Small K Line Below
  {0x1e34, 0x004b, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Ḵ Capital K Line Below
  {0x1e3b, 0x006c, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// ḻ Small L Line Below
  {0x1e3a, 0x004c, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Ḻ Capital L Line Below
  {0x1e49, 0x006e, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// ṉ Small N Line Below
  {0x1e48, 0x004e, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Ṉ Capital N Line Below
  {0x1e5f, 0x0072, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// ṟ Small R Line Below
  {0x1e5e, 0x0052, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Ṟ Capital R Line Below
  {0x1e6f, 0x0074, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// ṯ Small T Line Below
  {0x1e6e, 0x0054, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Ṯ Capital T Line Below
  {0x003c, 0x003c, 0x36 | (MOD_SHIFT | MOD_ALTGR)},	// <  accent
  {0x017e, 0x007a, 0x36 | (MOD_SHIFT | MOD_ALTGR)},	// ž Small Z Caron
  {0x017d, 0x005a, 0x36 | (MOD_SHIFT | MOD_ALTGR)},	// Ž Capital Z Caron
  {0x002d, 0x002d, 0x2d | MOD_ALTGR},	// -  accent
  {0x0101, 0x0061, 0x2d | MOD_ALTGR},	// ā Small A Macron
  {0x0100, 0x0041, 0x2d | MOD_ALTGR},	// Ā Capital A Macron
  {0x0113, 0x0065, 0x2d | MOD_ALTGR},	// ē Small E Macron
  {0x0112, 0x0045, 0x2d | MOD_ALTGR},	// Ē Capital E Macron
  {0x012b, 0x0069, 0x2d | MOD_ALTGR},	// ī Small I Macron
  {0x012a, 0x0049, 0x2d | MOD_ALTGR},	// Ī Capital I Macron
  {0x014d, 0x006f, 0x2d | MOD_ALTGR},	// ō Small O Macron
  {0x014c, 0x004f, 0x2d | MOD_ALTGR},	// Ō Capital O Macron
  {0x016b, 0x0075, 0x2d | MOD_ALTGR},	// ū Small U Macron
  {0x016a, 0x0055, 0x2d | MOD_ALTGR},	// Ū Capital U Macron
  {0x0301, 0x0301, 0x36 | MOD_ALTGR},	// ́  accent
  {0x0300, 0x0300, 0x36 | MOD_ALTGR},	// ̀  accent
  {0x0307, 0x0307, 0x36 | MOD_ALTGR},	// ̇  accent
  {0x0302, 0x0302, 0x36 | MOD_ALTGR},	// ̂  accent
  {0x0306, 0x0306, 0x36 | MOD_ALTGR},	// ̆  accent
  {0x0304, 0x0304, 0x36 | MOD_ALTGR},	// ̄  accent
  {0x0303, 0x0303, 0x36 | MOD_ALTGR},	// ̃  accent
  {0x0310, 0x0310, 0x36 | MOD_ALTGR},	// ̐  accent
  {0x0323, 0x0323, 0x36 | MOD_ALTGR},	// ̣  accent
  {0x0324, 0x0324, 0x36 | MOD_ALTGR},	// ̤  accent
  {0x0325, 0x0325, 0x36 | MOD_ALTGR},	// ̥  accent
  {0x032e, 0x032e, 0x36 | MOD_ALTGR},	// ̮  accent
  {0x0331, 0x0331, 0x36 | MOD_ALTGR},	// ̱  accent
  {0x0332, 0x0332, 0x36 | MOD_ALTGR},	// ̲  accent
  {0x002c, 0x002c, 0x36 | MOD_ALTGR},	// ,  accent
  {0x002e, 0x002e, 0x37 | MOD_ALTGR},	// .  accent
  {0x1e0d, 0x0064, 0x37 | MOD_ALTGR},	// ḍ Small D Dot Below
  {0x1e0c, 0x0044, 0x37 | MOD_ALTGR},	// Ḍ Capital D Dot Below
  {0x1e25, 0x0068, 0x37 | MOD_ALTGR},	// ḥ Small H Dot Below
  {0x1e24, 0x0048, 0x37 | MOD_ALTGR},	// Ḥ Capital H Dot Below
  {0x1e37, 0x006c, 0x37 | MOD_ALTGR},	// ḷ Small L Dot Below
  {0x1e36, 0x004c, 0x37 | MOD_ALTGR},	// Ḷ Capital L Dot Below
  {0x1e43, 0x006d, 0x37 | MOD_ALTGR},	// ṃ Small M Dot Below
  {0x1e42, 0x004d, 0x37 | MOD_ALTGR},	// Ṃ Capital M Dot Below
  {0x1e47, 0x006e, 0x37 | MOD_ALTGR},	// ṇ Small N Dot Below
  {0x1e46, 0x004e, 0x37 | MOD_ALTGR},	// Ṇ Capital N Dot Below
  {0x1e5b, 0x0072, 0x37 | MOD_ALTGR},	// ṛ Small R Dot Below
  {0x1e5a, 0x0052, 0x37 | MOD_ALTGR},	// Ṛ Capital R Dot Below
  {0x1e63, 0x0073, 0x37 | MOD_ALTGR},	// ṣ Small S Dot Below
  {0x1e62, 0x0053, 0x37 | MOD_ALTGR},	// Ṣ Capital S Dot Below
  {0x1e6d, 0x0074, 0x37 | MOD_ALTGR},	// ṭ Small T Dot Below
  {0x1e6c, 0x0054, 0x37 | MOD_ALTGR},	// Ṭ Capital T Dot Below
};

KeyboardUTF8 Keyboard_INEN(kbdinen, sizeof kbdinen / sizeof kbdinen[0], kbdinen_deadkeys, sizeof kbdinen_deadkeys / sizeof kbdinen_deadkeys[0]);
