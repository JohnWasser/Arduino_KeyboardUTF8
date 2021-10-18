#include <KeyboardUTF8.h>

// Czech (QWERTY)

const UnicodeLookup kbdcz1[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007e, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Tilde
  {0x005f, 0x38 | MOD_SHIFT},	// Low Line
  {0x002b, 0x1e},	// Plus Sign
  {0x007b, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Left Curly Bracket
  {0x007d, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Right Curly Bracket
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x003a, 0x37 | MOD_SHIFT},	// Colon
  {0x00d7, 0x36 | (MOD_SHIFT | MOD_ALTGR)},	// Multiplication Sign
  {0x00f7, 0x37 | (MOD_SHIFT | MOD_ALTGR)},	// Division Sign
  {0x003f, 0x36 | MOD_SHIFT},	// Question Mark
  {0x0060, 0x35 | MOD_ALTGR},	// Grave Accent
  {0x0021, 0x34 | MOD_SHIFT},	// Exclamation Mark
  {0x0040, 0x1f | MOD_ALTGR},	// Commercial At
  {0x0023, 0x20 | MOD_ALTGR},	// Number Sign
  {0x0024, 0x21 | MOD_ALTGR},	// Dollar Sign
  {0x0025, 0x2d | MOD_SHIFT},	// Percent Sign
  {0x005e, 0x23 | MOD_ALTGR},	// Circumflex Accent
  {0x0026, 0x24 | MOD_ALTGR},	// Ampersand
  {0x002a, 0x25 | MOD_ALTGR},	// Asterisk
  {0x0028, 0x30 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x30},	// Right Parenthesis
  {0x002d, 0x38},	// Hyphen-Minus
  {0x003d, 0x2d},	// Equals Sign
  {0x20ac, 0x08 | MOD_ALTGR},	// Euro Sign
  {0x005b, 0x2f | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x30 | MOD_ALTGR},	// Right Square Bracket
  {0x005c, 0x64},	// Reverse Solidus
  {0x003b, 0x35},	// Semicolon
  {0x00a4, 0x34 | MOD_ALTGR},	// Currency Sign
  {0x00df, 0x64 | MOD_ALTGR},	// Latin Small Letter Sharp S (German)
  {0x003c, 0x36 | MOD_ALTGR},	// Less-Than Sign
  {0x003e, 0x37 | MOD_ALTGR},	// Greater-Than Sign
  {0x002f, 0x2f | MOD_SHIFT},	// Solidus
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
  {0x0027, 0x31 | MOD_SHIFT},	// Apostrophe
  {0x0041, 0x04 | MOD_SHIFT},	// Latin Capital Letter A
  {0x0053, 0x16 | MOD_SHIFT},	// Latin Capital Letter S
  {0x0044, 0x07 | MOD_SHIFT},	// Latin Capital Letter D
  {0x0046, 0x09 | MOD_SHIFT},	// Latin Capital Letter F
  {0x0047, 0x0a | MOD_SHIFT},	// Latin Capital Letter G
  {0x0048, 0x0b | MOD_SHIFT},	// Latin Capital Letter H
  {0x004a, 0x0d | MOD_SHIFT},	// Latin Capital Letter J
  {0x004b, 0x0e | MOD_SHIFT},	// Latin Capital Letter K
  {0x004c, 0x0f | MOD_SHIFT},	// Latin Capital Letter L
  {0x0022, 0x33 | MOD_SHIFT},	// Quotation Mark
  {0x005a, 0x1d | MOD_SHIFT},	// Latin Capital Letter Z
  {0x0058, 0x1b | MOD_SHIFT},	// Latin Capital Letter X
  {0x0043, 0x06 | MOD_SHIFT},	// Latin Capital Letter C
  {0x0056, 0x19 | MOD_SHIFT},	// Latin Capital Letter V
  {0x0042, 0x05 | MOD_SHIFT},	// Latin Capital Letter B
  {0x004e, 0x11 | MOD_SHIFT},	// Latin Capital Letter N
  {0x004d, 0x10 | MOD_SHIFT},	// Latin Capital Letter M
  {0x011b, 0x1f},	// Latin Small Letter E With Caron
  {0x0161, 0x20},	// Latin Small Letter S With Caron
  {0x010d, 0x21},	// Latin Small Letter C With Caron
  {0x0159, 0x22},	// Latin Small Letter R With Caron
  {0x017e, 0x23},	// Latin Small Letter Z With Caron
  {0x00fd, 0x24},	// Latin Small Letter Y With Acute
  {0x00e1, 0x25},	// Latin Small Letter A With Acute
  {0x00ed, 0x26},	// Latin Small Letter I With Acute
  {0x00e9, 0x27},	// Latin Small Letter E With Acute
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
  {0x00fa, 0x2f},	// Latin Small Letter U With Acute
  {0x0061, 0x04},	// Latin Small Letter A
  {0x0073, 0x16},	// Latin Small Letter S
  {0x0064, 0x07},	// Latin Small Letter D
  {0x0066, 0x09},	// Latin Small Letter F
  {0x0067, 0x0a},	// Latin Small Letter G
  {0x0068, 0x0b},	// Latin Small Letter H
  {0x006a, 0x0d},	// Latin Small Letter J
  {0x006b, 0x0e},	// Latin Small Letter K
  {0x006c, 0x0f},	// Latin Small Letter L
  {0x016f, 0x33},	// Latin Small Letter U With Ring Above
  {0x00a7, 0x34},	// Section Sign
  {0x007a, 0x1d},	// Latin Small Letter Z
  {0x0078, 0x1b},	// Latin Small Letter X
  {0x0063, 0x06},	// Latin Small Letter C
  {0x0076, 0x19},	// Latin Small Letter V
  {0x0062, 0x05},	// Latin Small Letter B
  {0x006e, 0x11},	// Latin Small Letter N
  {0x006d, 0x10},	// Latin Small Letter M
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
};

const DeadkeyLookup kbdcz1_deadkeys[] PROGMEM = 
{
  {0x005e, 0x005e, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// ^  accent
  {0x00e2, 0x0061, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// â Small A Circumflex
  {0x00c2, 0x0041, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Â Capital A Circumflex
  {0x00ea, 0x0065, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// ê Small E Circumflex
  {0x00ca, 0x0045, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Ê Capital E Circumflex
  {0x00ee, 0x0069, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// î Small I Circumflex
  {0x00ce, 0x0049, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Î Capital I Circumflex
  {0x00f4, 0x006f, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// ô Small O Circumflex
  {0x00d4, 0x004f, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Ô Capital O Circumflex
  {0x00fb, 0x0075, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// û Small U Circumflex
  {0x00db, 0x0055, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Û Capital U Circumflex
  {0x02dd, 0x02dd, 0x64 | (MOD_SHIFT | MOD_ALTGR)},	// ˝  accent
  {0x0151, 0x006f, 0x64 | (MOD_SHIFT | MOD_ALTGR)},	// ő Small O Double Acute
  {0x0150, 0x004f, 0x64 | (MOD_SHIFT | MOD_ALTGR)},	// Ő Capital O Double Acute
  {0x0171, 0x0075, 0x64 | (MOD_SHIFT | MOD_ALTGR)},	// ű Small U Double Acute
  {0x0170, 0x0055, 0x64 | (MOD_SHIFT | MOD_ALTGR)},	// Ű Capital U Double Acute
  {0x00b0, 0x00b0, 0x35 | MOD_SHIFT},	// °  accent
  {0x00e5, 0x0061, 0x35 | MOD_SHIFT},	// å Small A Ring Above,
  {0x00c5, 0x0041, 0x35 | MOD_SHIFT},	// Å Capital A Ring Above,
  {0x016f, 0x0075, 0x35 | MOD_SHIFT},	// ů Small U Ring Above
  {0x016e, 0x0055, 0x35 | MOD_SHIFT},	// Ů Capital U Ring Above,
  {0x02c7, 0x02c7, 0x2e | MOD_SHIFT},	// ˇ  accent
  {0x010d, 0x0063, 0x2e | MOD_SHIFT},	// č Small C Caron
  {0x010c, 0x0043, 0x2e | MOD_SHIFT},	// Č Capital C Caron
  {0x010f, 0x0064, 0x2e | MOD_SHIFT},	// ď Small D Caron
  {0x010e, 0x0044, 0x2e | MOD_SHIFT},	// Ď Capital D Caron
  {0x011b, 0x0065, 0x2e | MOD_SHIFT},	// ě Small E Caron
  {0x011a, 0x0045, 0x2e | MOD_SHIFT},	// Ě Capital E Caron
  {0x013e, 0x006c, 0x2e | MOD_SHIFT},	// ľ Small L Caron
  {0x013d, 0x004c, 0x2e | MOD_SHIFT},	// Ľ Capital L Caron
  {0x0148, 0x006e, 0x2e | MOD_SHIFT},	// ň Small N Caron
  {0x0147, 0x004e, 0x2e | MOD_SHIFT},	// Ň Capital N Caron
  {0x0159, 0x0072, 0x2e | MOD_SHIFT},	// ř Small R Caron
  {0x0158, 0x0052, 0x2e | MOD_SHIFT},	// Ř Capital R Caron
  {0x0161, 0x0073, 0x2e | MOD_SHIFT},	// š Small S Caron
  {0x0160, 0x0053, 0x2e | MOD_SHIFT},	// Š Capital S Caron
  {0x0165, 0x0074, 0x2e | MOD_SHIFT},	// ť Small T Caron
  {0x0164, 0x0054, 0x2e | MOD_SHIFT},	// Ť Capital T Caron
  {0x017e, 0x007a, 0x2e | MOD_SHIFT},	// ž Small Z Caron
  {0x017d, 0x005a, 0x2e | MOD_SHIFT},	// Ž Capital Z Caron
  {0x00b4, 0x00b4, 0x2e},	// ´  accent
  {0x00e1, 0x0061, 0x2e},	// á Small A Acute
  {0x00c1, 0x0041, 0x2e},	// Á Capital A Acute
  {0x0107, 0x0063, 0x2e},	// ć Small C Acute
  {0x0106, 0x0043, 0x2e},	// Ć Capital C Acute
  {0x00e9, 0x0065, 0x2e},	// é Small E Acute
  {0x00c9, 0x0045, 0x2e},	// É Capital E Acute
  {0x00ed, 0x0069, 0x2e},	// í Small I Acute
  {0x00cd, 0x0049, 0x2e},	// Í Capital I Acute
  {0x013a, 0x006c, 0x2e},	// ĺ Small L Acute
  {0x0139, 0x004c, 0x2e},	// Ĺ Capital L Acute
  {0x0144, 0x006e, 0x2e},	// ń Small N Acute
  {0x0143, 0x004e, 0x2e},	// Ń Capital N Acute
  {0x00f3, 0x006f, 0x2e},	// ó Small O Acute
  {0x00d3, 0x004f, 0x2e},	// Ó Capital O Acute
  {0x0155, 0x0072, 0x2e},	// ŕ Small R Acute
  {0x0154, 0x0052, 0x2e},	// Ŕ Capital R Acute
  {0x015b, 0x0073, 0x2e},	// ś Small S Acute
  {0x015a, 0x0053, 0x2e},	// Ś Capital S Acute
  {0x00fa, 0x0075, 0x2e},	// ú Small U Acute
  {0x00da, 0x0055, 0x2e},	// Ú Capital U Acute
  {0x00fd, 0x0079, 0x2e},	// ý Small Y Acute
  {0x00dd, 0x0059, 0x2e},	// Ý Capital Y Acute
  {0x017a, 0x007a, 0x2e},	// ź Small Z Acute
  {0x0179, 0x005a, 0x2e},	// Ź Capital Z Acute
  {0x00a8, 0x00a8, 0x31},	// ¨  accent
  {0x00e4, 0x0061, 0x31},	// ä Small A Diaeresis
  {0x00c4, 0x0041, 0x31},	// Ä Capital A Diaeresis
  {0x00eb, 0x0065, 0x31},	// ë Small E Diaeresis
  {0x00cb, 0x0045, 0x31},	// Ë Capital E Diaeresis
  {0x00ef, 0x0069, 0x31},	// ï Small I Diaeresis
  {0x00cf, 0x0049, 0x31},	// Ï Capital I Diaeresis
  {0x00f6, 0x006f, 0x31},	// ö Small O Diaeresis
  {0x00d6, 0x004f, 0x31},	// Ö Capital O Diaeresis
  {0x00fc, 0x0075, 0x31},	// ü Small U Diaeresis
  {0x00dc, 0x0055, 0x31},	// Ü Capital U Diaeresis
  {0x00ff, 0x0079, 0x31},	// ÿ Small Y Diaeresis
  {0x0178, 0x0059, 0x31},	// Ÿ Capital Y Diaeresis
};

KeyboardUTF8 Keyboard_CZ1(kbdcz1, sizeof kbdcz1 / sizeof kbdcz1[0], kbdcz1_deadkeys, sizeof kbdcz1_deadkeys / sizeof kbdcz1_deadkeys[0]);
