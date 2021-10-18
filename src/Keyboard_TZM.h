#include <KeyboardUTF8.h>

// Central Atlas Tamazight

const UnicodeLookup kbdtzm[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0023, 0x20 | MOD_ALTGR},	// Number Sign
  {0x007b, 0x21 | MOD_ALTGR},	// Left Curly Bracket
  {0x005b, 0x22 | MOD_ALTGR},	// Left Square Bracket
  {0x007c, 0x23 | MOD_ALTGR},	// Vertical Line
  {0x005c, 0x25 | MOD_ALTGR},	// Reverse Solidus
  {0x005e, 0x26 | MOD_ALTGR},	// Circumflex Accent
  {0x0040, 0x27 | MOD_ALTGR},	// Commercial At
  {0x005d, 0x2d | MOD_ALTGR},	// Right Square Bracket
  {0x007d, 0x2e | MOD_ALTGR},	// Right Curly Bracket
  {0x20ac, 0x08 | MOD_ALTGR},	// Euro Sign
  {0x00a4, 0x30 | MOD_ALTGR},	// Currency Sign
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
  {0x00b0, 0x2d | MOD_SHIFT},	// Degree Sign
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x0041, 0x14 | MOD_SHIFT},	// Latin Capital Letter A
  {0x005a, 0x1a | MOD_SHIFT},	// Latin Capital Letter Z
  {0x0045, 0x08 | MOD_SHIFT},	// Latin Capital Letter E
  {0x0052, 0x15 | MOD_SHIFT},	// Latin Capital Letter R
  {0x0054, 0x17 | MOD_SHIFT},	// Latin Capital Letter T
  {0x0059, 0x1c | MOD_SHIFT},	// Latin Capital Letter Y
  {0x0055, 0xa0 | MOD_SHIFT},	// Latin Capital Letter U
  {0x0049, 0x0c | MOD_SHIFT},	// Latin Capital Letter I
  {0x004f, 0x12 | MOD_SHIFT},	// Latin Capital Letter O
  {0x0050, 0x13 | MOD_SHIFT},	// Latin Capital Letter P
  {0x00a3, 0x30 | MOD_SHIFT},	// Pound Sign
  {0x0051, 0x04 | MOD_SHIFT},	// Latin Capital Letter Q
  {0x0053, 0x16 | MOD_SHIFT},	// Latin Capital Letter S
  {0x0044, 0x07 | MOD_SHIFT},	// Latin Capital Letter D
  {0x0046, 0x09 | MOD_SHIFT},	// Latin Capital Letter F
  {0x0047, 0x0a | MOD_SHIFT},	// Latin Capital Letter G
  {0x0048, 0x0b | MOD_SHIFT},	// Latin Capital Letter H
  {0x004a, 0x0d | MOD_SHIFT},	// Latin Capital Letter J
  {0x004b, 0x0e | MOD_SHIFT},	// Latin Capital Letter K
  {0x004c, 0x0f | MOD_SHIFT},	// Latin Capital Letter L
  {0x004d, 0x33 | MOD_SHIFT},	// Latin Capital Letter M
  {0x0025, 0x34 | MOD_SHIFT},	// Percent Sign
  {0x00b5, 0x28 | MOD_SHIFT},	// Micro Sign
  {0x003e, 0x64 | MOD_SHIFT},	// Greater-Than Sign
  {0x0057, 0x1d | MOD_SHIFT},	// Latin Capital Letter W
  {0x0058, 0x1b | MOD_SHIFT},	// Latin Capital Letter X
  {0x0043, 0x06 | MOD_SHIFT},	// Latin Capital Letter C
  {0x0056, 0x19 | MOD_SHIFT},	// Latin Capital Letter V
  {0x0042, 0x05 | MOD_SHIFT},	// Latin Capital Letter B
  {0x004e, 0x11 | MOD_SHIFT},	// Latin Capital Letter N
  {0x003f, 0x10 | MOD_SHIFT},	// Question Mark
  {0x002e, 0x36 | MOD_SHIFT},	// Full Stop
  {0x002f, 0x37 | MOD_SHIFT},	// Solidus
  {0x00a7, 0x38 | MOD_SHIFT},	// Section Sign
  {0x00b2, 0x35},	// Superscript Two
  {0x0026, 0x1e},	// Ampersand
  {0x00e9, 0x1f},	// Latin Small Letter E With Acute
  {0x0022, 0x20},	// Quotation Mark
  {0x0027, 0x21},	// Apostrophe
  {0x0028, 0x22},	// Left Parenthesis
  {0x002d, 0x23},	// Hyphen-Minus
  {0x00e8, 0x24},	// Latin Small Letter E With Grave
  {0x005f, 0x25},	// Low Line
  {0x00e7, 0x26},	// Latin Small Letter C With Cedilla
  {0x00e0, 0x27},	// Latin Small Letter A With Grave
  {0x0029, 0x2d},	// Right Parenthesis
  {0x003d, 0x2e},	// Equals Sign
  {0x0061, 0x14},	// Latin Small Letter A
  {0x007a, 0x1a},	// Latin Small Letter Z
  {0x0065, 0x08},	// Latin Small Letter E
  {0x0072, 0x15},	// Latin Small Letter R
  {0x0074, 0x17},	// Latin Small Letter T
  {0x0079, 0x1c},	// Latin Small Letter Y
  {0x0075, 0xa0},	// Latin Small Letter U
  {0x0069, 0x0c},	// Latin Small Letter I
  {0x006f, 0x12},	// Latin Small Letter O
  {0x0070, 0x13},	// Latin Small Letter P
  {0x0024, 0x30},	// Dollar Sign
  {0x0071, 0x04},	// Latin Small Letter Q
  {0x0073, 0x16},	// Latin Small Letter S
  {0x0064, 0x07},	// Latin Small Letter D
  {0x0066, 0x09},	// Latin Small Letter F
  {0x0067, 0x0a},	// Latin Small Letter G
  {0x0068, 0x0b},	// Latin Small Letter H
  {0x006a, 0x0d},	// Latin Small Letter J
  {0x006b, 0x0e},	// Latin Small Letter K
  {0x006c, 0x0f},	// Latin Small Letter L
  {0x006d, 0x33},	// Latin Small Letter M
  {0x00f9, 0x34},	// Latin Small Letter U With Grave
  {0x002a, 0x28},	// Asterisk
  {0x003c, 0x64},	// Less-Than Sign
  {0x0077, 0x1d},	// Latin Small Letter W
  {0x0078, 0x1b},	// Latin Small Letter X
  {0x0063, 0x06},	// Latin Small Letter C
  {0x0076, 0x19},	// Latin Small Letter V
  {0x0062, 0x05},	// Latin Small Letter B
  {0x006e, 0x11},	// Latin Small Letter N
  {0x002c, 0x10},	// Comma
  {0x003b, 0x36},	// Semicolon
  {0x003a, 0x37},	// Colon
  {0x0021, 0x38},	// Exclamation Mark
};

const DeadkeyLookup kbdtzm_deadkeys[] PROGMEM = 
{
  {0x007e, 0x007e, 0x1f | MOD_ALTGR},	// ~  accent
  {0x00e3, 0x0061, 0x1f | MOD_ALTGR},	// ã Small A Tilde
  {0x00c3, 0x0041, 0x1f | MOD_ALTGR},	// Ã Capital A Tilde
  {0x00f1, 0x006e, 0x1f | MOD_ALTGR},	// ñ Small N Tilde
  {0x00d1, 0x004e, 0x1f | MOD_ALTGR},	// Ñ Capital N Tilde
  {0x00f5, 0x006f, 0x1f | MOD_ALTGR},	// õ Small O Tilde
  {0x00d5, 0x004f, 0x1f | MOD_ALTGR},	// Õ Capital O Tilde
  {0x0060, 0x0060, 0x24 | MOD_ALTGR},	// `  accent
  {0x00e0, 0x0061, 0x24 | MOD_ALTGR},	// à Small A Grave
  {0x00c0, 0x0041, 0x24 | MOD_ALTGR},	// À Capital A Grave
  {0x00e8, 0x0065, 0x24 | MOD_ALTGR},	// è Small E Grave
  {0x00c8, 0x0045, 0x24 | MOD_ALTGR},	// È Capital E Grave
  {0x00ec, 0x0069, 0x24 | MOD_ALTGR},	// ì Small I Grave
  {0x00cc, 0x0049, 0x24 | MOD_ALTGR},	// Ì Capital I Grave
  {0x00f2, 0x006f, 0x24 | MOD_ALTGR},	// ò Small O Grave
  {0x00d2, 0x004f, 0x24 | MOD_ALTGR},	// Ò Capital O Grave
  {0x00f9, 0x0075, 0x24 | MOD_ALTGR},	// ù Small U Grave
  {0x00d9, 0x0055, 0x24 | MOD_ALTGR},	// Ù Capital U Grave
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
  {0x005e, 0x005e, 0x2f},	// ^  accent
  {0x010d, 0x0063, 0x2f},	// č Small C Caron
  {0x010c, 0x0043, 0x2f},	// Č Capital C Caron
  {0x1e0d, 0x0064, 0x2f},	// ḍ Small D Dot Below
  {0x1e0c, 0x0044, 0x2f},	// Ḍ Capital D Dot Below
  {0x025b, 0x025b, 0x2f},	// ɛ  accent
  {0x0190, 0x0190, 0x2f},	// Ɛ  accent
  {0x01e7, 0x0067, 0x2f},	// ǧ Small G Caron
  {0x01e6, 0x0047, 0x2f},	// Ǧ Capital G Caron
  {0x0263, 0x0263, 0x2f},	// ɣ  accent
  {0x0194, 0x0194, 0x2f},	// Ɣ  accent
  {0x1e25, 0x0068, 0x2f},	// ḥ Small H Dot Below
  {0x1e24, 0x0048, 0x2f},	// Ḥ Capital H Dot Below
  {0x0159, 0x0072, 0x2f},	// ř Small R Caron
  {0x0158, 0x0052, 0x2f},	// Ř Capital R Caron
  {0x1e5b, 0x0072, 0x2f},	// ṛ Small R Dot Below
  {0x1e5a, 0x0052, 0x2f},	// Ṛ Capital R Dot Below
  {0x1e63, 0x0073, 0x2f},	// ṣ Small S Dot Below
  {0x1e62, 0x0053, 0x2f},	// Ṣ Capital S Dot Below
  {0x1e6d, 0x0074, 0x2f},	// ṭ Small T Dot Below
  {0x1e6c, 0x0054, 0x2f},	// Ṭ Capital T Dot Below
  {0x02b7, 0x02b7, 0x2f},	// ʷ  accent
  {0x1e93, 0x007a, 0x2f},	// ẓ Small Z Dot Below
  {0x1e92, 0x005a, 0x2f},	// Ẓ Capital Z Dot Below
};

KeyboardUTF8 Keyboard_TZM(kbdtzm, sizeof kbdtzm / sizeof kbdtzm[0], kbdtzm_deadkeys, sizeof kbdtzm_deadkeys / sizeof kbdtzm_deadkeys[0]);
