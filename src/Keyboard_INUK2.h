#include <KeyboardUTF8.h>

// Inuktitut - Naqittaut

const UnicodeLookup kbdinuk2[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007e, 0x35 | MOD_SHIFT},	// Tilde
  {0x00a2, 0x1e | (MOD_SHIFT | MOD_ALTGR)},	// Cent Sign
  {0x00ae, 0x1f | (MOD_SHIFT | MOD_ALTGR)},	// Registered Sign
  {0x00bc, 0x20 | (MOD_SHIFT | MOD_ALTGR)},	// Vulgar Fraction One Quarter
  {0x00bd, 0x21 | (MOD_SHIFT | MOD_ALTGR)},	// Vulgar Fraction One Half
  {0x00be, 0x22 | (MOD_SHIFT | MOD_ALTGR)},	// Vulgar Fraction Three Quarters
  {0x005e, 0x23 | MOD_SHIFT},	// Circumflex Accent
  {0x2154, 0x24 | (MOD_SHIFT | MOD_ALTGR)},	// Vulgar Fraction Two Thirds
  {0x00a9, 0x25 | (MOD_SHIFT | MOD_ALTGR)},	// Copyright Sign
  {0x00f7, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// Division Sign
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x148c, 0x14 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Cii
  {0x1432, 0x1a | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Pii
  {0x1547, 0x08 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Rii
  {0x1672, 0x17 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Nngii
  {0x1674, 0x1c | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Nngoo
  {0x1676, 0xa0 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Nngaa
  {0x15a5, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Lhaa
  {0x15a1, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Lhii
  {0x201d, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Right Double Quotation Mark
  {0x2019, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Right Single Quotation Mark
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x148e, 0x04 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Coo
  {0x1434, 0x16 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Poo
  {0x1549, 0x07 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Roo
  {0x1556, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Fii
  {0x152b, 0x0d | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Yoo
  {0x1558, 0x0e | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Foo
  {0x15a3, 0x0f | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Lhoo
  {0x0141, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter L With Stroke
  {0x1491, 0x1d | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Caa
  {0x1439, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Paa
  {0x154c, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Raa
  {0x007b, 0x2f | MOD_SHIFT},	// Left Curly Bracket
  {0x007d, 0x05 | (MOD_SHIFT | MOD_ALTGR)},	// Right Curly Bracket
  {0x14c8, 0x11 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Naa
  {0x14db, 0x10 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Laa
  {0x155a, 0x38 | (MOD_SHIFT | MOD_ALTGR)},	// Canadian Syllabics Faa
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0040, 0x1f | MOD_SHIFT},	// Commercial At
  {0x0023, 0x20 | MOD_SHIFT},	// Number Sign
  {0x0024, 0x21 | MOD_SHIFT},	// Dollar Sign
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0026, 0x24 | MOD_SHIFT},	// Ampersand
  {0x2022, 0x25 | MOD_ALTGR},	// Bullet
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x27 | MOD_ALTGR},	// Right Square Bracket
  {0x003d, 0x2e},	// Equals Sign
  {0x1590, 0x14 | MOD_ALTGR},	// Canadian Syllabics Ngii
  {0x1404, 0x1a | MOD_ALTGR},	// Canadian Syllabics Ii
  {0x1580, 0x08 | MOD_ALTGR},	// Canadian Syllabics Qii
  {0x146e, 0x15 | MOD_ALTGR},	// Canadian Syllabics Kii
  {0x144f, 0x17 | MOD_ALTGR},	// Canadian Syllabics Tii
  {0x14f0, 0x1c | MOD_ALTGR},	// Canadian Syllabics Sii
  {0x14a6, 0xa0 | MOD_ALTGR},	// Canadian Syllabics Mii
  {0x14c3, 0x0c | MOD_ALTGR},	// Canadian Syllabics Nii
  {0x14d6, 0x12 | MOD_ALTGR},	// Canadian Syllabics Lii
  {0x1529, 0x13 | MOD_ALTGR},	// Canadian Syllabics Yii
  {0x201c, 0x2f | MOD_ALTGR},	// Left Double Quotation Mark
  {0x2018, 0x30 | MOD_ALTGR},	// Left Single Quotation Mark
  {0x1592, 0x04 | MOD_ALTGR},	// Canadian Syllabics Ngoo
  {0x1406, 0x16 | MOD_ALTGR},	// Canadian Syllabics Oo
  {0x1582, 0x07 | MOD_ALTGR},	// Canadian Syllabics Qoo
  {0x1470, 0x09 | MOD_ALTGR},	// Canadian Syllabics Koo
  {0x1451, 0x0a | MOD_ALTGR},	// Canadian Syllabics Too
  {0x14f2, 0x0b | MOD_ALTGR},	// Canadian Syllabics Soo
  {0x14a8, 0x0d | MOD_ALTGR},	// Canadian Syllabics Moo
  {0x14c5, 0x0e | MOD_ALTGR},	// Canadian Syllabics Noo
  {0x14d8, 0x0f | MOD_ALTGR},	// Canadian Syllabics Loo
  {0x014b, 0x33 | MOD_ALTGR},	// Latin Small Letter Eng (Sami)
  {0x0142, 0x34 | MOD_ALTGR},	// Latin Small Letter L With Stroke
  {0x1594, 0x1d | MOD_ALTGR},	// Canadian Syllabics Ngaa
  {0x140b, 0x1b | MOD_ALTGR},	// Canadian Syllabics Aa
  {0x1584, 0x06 | MOD_ALTGR},	// Canadian Syllabics Qaa
  {0x1473, 0x19 | MOD_ALTGR},	// Canadian Syllabics Kaa
  {0x1456, 0x05 | MOD_ALTGR},	// Canadian Syllabics Taa
  {0x14f5, 0x11 | MOD_ALTGR},	// Canadian Syllabics Saa
  {0x14ab, 0x10 | MOD_ALTGR},	// Canadian Syllabics Maa
  {0x152e, 0x38 | MOD_ALTGR},	// Canadian Syllabics Yaa
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
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
  {0x005c, 0x64},	// Reverse Solidus
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

const DeadkeyLookup kbdinuk2_deadkeys[] PROGMEM = 
{
  {0x1404, 0x1404, 0x30},	// ᐄ  accent
  {0x1406, 0x1406, 0x30},	// ᐆ  accent
  {0x140b, 0x140b, 0x30},	// ᐋ  accent
  {0x1432, 0x1432, 0x30},	// ᐲ  accent
  {0x1434, 0x1434, 0x30},	// ᐴ  accent
  {0x1439, 0x1439, 0x30},	// ᐹ  accent
  {0x1451, 0x1451, 0x30},	// ᑑ  accent
  {0x1456, 0x1456, 0x30},	// ᑖ  accent
  {0x146e, 0x146e, 0x30},	// ᑮ  accent
  {0x1470, 0x1470, 0x30},	// ᑰ  accent
  {0x1473, 0x1473, 0x30},	// ᑳ  accent
  {0x148e, 0x148e, 0x30},	// ᒎ  accent
  {0x1491, 0x1491, 0x30},	// ᒑ  accent
  {0x14a6, 0x14a6, 0x30},	// ᒦ  accent
  {0x14a8, 0x14a8, 0x30},	// ᒨ  accent
  {0x14ab, 0x14ab, 0x30},	// ᒫ  accent
  {0x14c5, 0x14c5, 0x30},	// ᓅ  accent
  {0x14c8, 0x14c8, 0x30},	// ᓈ  accent
  {0x14f2, 0x14f2, 0x30},	// ᓲ  accent
  {0x14f5, 0x14f5, 0x30},	// ᓵ  accent
  {0x14d8, 0x14d8, 0x30},	// ᓘ  accent
  {0x14db, 0x14db, 0x30},	// ᓛ  accent
  {0x1529, 0x1529, 0x30},	// ᔩ  accent
  {0x152b, 0x152b, 0x30},	// ᔫ  accent
  {0x152e, 0x152e, 0x30},	// ᔮ  accent
  {0x1556, 0x1556, 0x30},	// ᕖ  accent
  {0x1558, 0x1558, 0x30},	// ᕘ  accent
  {0x155a, 0x155a, 0x30},	// ᕚ  accent
  {0x1547, 0x1547, 0x30},	// ᕇ  accent
  {0x1549, 0x1549, 0x30},	// ᕉ  accent
  {0x154c, 0x154c, 0x30},	// ᕌ  accent
  {0x1580, 0x1580, 0x30},	// ᖀ  accent
  {0x1582, 0x1582, 0x30},	// ᖂ  accent
  {0x1584, 0x1584, 0x30},	// ᖄ  accent
  {0x1592, 0x1592, 0x30},	// ᖒ  accent
  {0x1594, 0x1594, 0x30},	// ᖔ  accent
  {0x1676, 0x1676, 0x30},	// ᙶ  accent
  {0x15a3, 0x15a3, 0x30},	// ᖣ  accent
};

KeyboardUTF8 Keyboard_INUK2(kbdinuk2, sizeof kbdinuk2 / sizeof kbdinuk2[0], kbdinuk2_deadkeys, sizeof kbdinuk2_deadkeys / sizeof kbdinuk2_deadkeys[0]);
