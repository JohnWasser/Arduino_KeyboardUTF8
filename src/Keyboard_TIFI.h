#include <KeyboardUTF8.h>

// Tifinagh (Basic)

const UnicodeLookup kbdtifi[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007e, 0x1f | MOD_ALTGR},	// Tilde
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
  {0x2d65, 0x1a | MOD_SHIFT},	// Tifinagh Letter Yazz
  {0x2d55, 0x15 | MOD_SHIFT},	// Tifinagh Letter Yarr
  {0x2d5f, 0x17 | MOD_SHIFT},	// Tifinagh Letter Yatt
  {0x00a3, 0x30 | MOD_SHIFT},	// Pound Sign
  {0x2d5a, 0x16 | MOD_SHIFT},	// Tifinagh Letter Yass
  {0x2d39, 0x07 | MOD_SHIFT},	// Tifinagh Letter Yadd
  {0x0025, 0x34 | MOD_SHIFT},	// Percent Sign
  {0x00b5, 0x28 | MOD_SHIFT},	// Micro Sign
  {0x003e, 0x64 | MOD_SHIFT},	// Greater-Than Sign
  {0x003f, 0x10 | MOD_SHIFT},	// Question Mark
  {0x002e, 0x36 | MOD_SHIFT},	// Full Stop
  {0x002f, 0x37 | MOD_SHIFT},	// Solidus
  {0x00a7, 0x38 | MOD_SHIFT},	// Section Sign
  {0x00b2, 0x35},	// Superscript Two
  {0x0026, 0x1e},	// Ampersand
  {0x0022, 0x20},	// Quotation Mark
  {0x0027, 0x21},	// Apostrophe
  {0x0028, 0x22},	// Left Parenthesis
  {0x002d, 0x23},	// Hyphen-Minus
  {0x005f, 0x25},	// Low Line
  {0x0029, 0x2d},	// Right Parenthesis
  {0x003d, 0x2e},	// Equals Sign
  {0x2d30, 0x14},	// Tifinagh Letter Ya
  {0x2d63, 0x1a},	// Tifinagh Letter Yaz
  {0x2d3b, 0x08},	// Tifinagh Letter Yey
  {0x2d54, 0x15},	// Tifinagh Letter Yar
  {0x2d5c, 0x17},	// Tifinagh Letter Yat
  {0x2d62, 0x1c},	// Tifinagh Letter Yay
  {0x2d53, 0xa0},	// Tifinagh Letter Yu (Tuareg Yaw)
  {0x2d49, 0x0c},	// Tifinagh Letter Yi
  {0x2d44, 0x12},	// Tifinagh Letter Yaa
  {0x2d43, 0x13},	// Tifinagh Letter Yahh
  {0x2d6f, 0x2f},	// Tifinagh Modifier Letter Labialization Mark (Tamatart)
  {0x0024, 0x30},	// Dollar Sign
  {0x2d47, 0x04},	// Tifinagh Letter Yaq
  {0x2d59, 0x16},	// Tifinagh Letter Yas
  {0x2d37, 0x07},	// Tifinagh Letter Yad
  {0x2d3c, 0x09},	// Tifinagh Letter Yaf
  {0x2d33, 0x0a},	// Tifinagh Letter Yag
  {0x2d40, 0x0b},	// Tifinagh Letter Yah (Tuareg Yab)
  {0x2d4a, 0x0d},	// Tifinagh Letter Yazh
  {0x2d3d, 0x0e},	// Tifinagh Letter Yak
  {0x2d4d, 0x0f},	// Tifinagh Letter Yal
  {0x2d4e, 0x33},	// Tifinagh Letter Yam
  {0x002a, 0x28},	// Asterisk
  {0x003c, 0x64},	// Less-Than Sign
  {0x2d61, 0x1d},	// Tifinagh Letter Yaw
  {0x2d45, 0x1b},	// Tifinagh Letter Yakh
  {0x2d5b, 0x06},	// Tifinagh Letter Yash
  {0x2d56, 0x19},	// Tifinagh Letter Yagh
  {0x2d31, 0x05},	// Tifinagh Letter Yab
  {0x2d4f, 0x11},	// Tifinagh Letter Yan
  {0x002c, 0x10},	// Comma
  {0x003b, 0x36},	// Semicolon
  {0x003a, 0x37},	// Colon
  {0x0021, 0x38},	// Exclamation Mark
};

const DeadkeyLookup kbdtifi_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_TIFI(kbdtifi, sizeof kbdtifi / sizeof kbdtifi[0], kbdtifi_deadkeys, sizeof kbdtifi_deadkeys / sizeof kbdtifi_deadkeys[0]);
