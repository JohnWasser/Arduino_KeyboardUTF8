#include <KeyboardUTF8.h>

// N'Ko

const UnicodeLookup kbdnko[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x07f9, 0x1e | MOD_SHIFT},	// Nko Exclamation Mark
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x07e9, 0x14 | MOD_SHIFT},	// Nko Letter Jona Cha
  {0x07e8, 0x1a | MOD_SHIFT},	// Nko Letter Jona Ja
  {0x07da, 0x1c | MOD_SHIFT},	// Nko Letter Rra
  {0x00f7, 0x0c | MOD_SHIFT},	// Division Sign
  {0x00d7, 0x12 | MOD_SHIFT},	// Multiplication Sign
  {0x07ea, 0x13 | MOD_SHIFT},	// Nko Letter Jona Ra
  {0x2039, 0x2f | MOD_SHIFT},	// Single Left-Pointing Angle Quotation Mark
  {0x203a, 0x30 | MOD_SHIFT},	// Single Right-Pointing Angle Quotation Mark
  {0x07f6, 0x04 | MOD_SHIFT},	// Nko Symbol Oo Dennen
  {0x00b0, 0x16 | MOD_SHIFT},	// Degree Sign
  {0x005b, 0x07 | MOD_SHIFT},	// Left Square Bracket
  {0x005d, 0x09 | MOD_SHIFT},	// Right Square Bracket
  {0xfd3e, 0x0a | MOD_SHIFT},	// Ornate Left Parenthesis
  {0xfd3f, 0x0b | MOD_SHIFT},	// Ornate Right Parenthesis
  {0x07fa, 0x0d | MOD_SHIFT},	// Nko Lajanyalan
  {0x060c, 0x0e | MOD_SHIFT},	// Arabic Comma
  {0x002f, 0x0f | MOD_SHIFT},	// Solidus
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x07f3, 0x1d | MOD_SHIFT},	// Nko Combining Double Dot Above
  {0x07f1, 0x1b | MOD_SHIFT},	// Nko Combining Long Rising Tone
  {0x07ed, 0x06 | MOD_SHIFT},	// Nko Combining Short Rising Tone
  {0x07ee, 0x19 | MOD_SHIFT},	// Nko Combining Long Descending Tone
  {0x07f0, 0x05 | MOD_SHIFT},	// Nko Combining Long Low Tone
  {0x07ef, 0x11 | MOD_SHIFT},	// Nko Combining Long High Tone
  {0x07f8, 0x10 | MOD_SHIFT},	// Nko Comma
  {0x07d1, 0x36 | MOD_SHIFT},	// Nko Letter Dagbasinna
  {0x002e, 0x37 | MOD_SHIFT},	// Full Stop
  {0x061f, 0x38 | MOD_SHIFT},	// Arabic Question Mark
  {0x07f7, 0x35},	// Nko Symbol Gbakurunen
  {0x07c1, 0x1e},	// Nko Digit One
  {0x07c2, 0x1f},	// Nko Digit Two
  {0x07c3, 0x20},	// Nko Digit Three
  {0x07c4, 0x21},	// Nko Digit Four
  {0x07c5, 0x22},	// Nko Digit Five
  {0x07c6, 0x23},	// Nko Digit Six
  {0x07c7, 0x24},	// Nko Digit Seven
  {0x07c8, 0x25},	// Nko Digit Eight
  {0x07c9, 0x26},	// Nko Digit Nine
  {0x07c0, 0x27},	// Nko Digit Zero
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x003d, 0x2e},	// Equals Sign
  {0x07d4, 0x14},	// Nko Letter Pa
  {0x07e7, 0x1a},	// Nko Letter Nya Woloso
  {0x07e0, 0x08},	// Nko Letter Na Woloso
  {0x07e5, 0x15},	// Nko Letter Wa
  {0x07e6, 0x17},	// Nko Letter Ya
  {0x07d9, 0x1c},	// Nko Letter Ra
  {0x07d7, 0xa0},	// Nko Letter Cha
  {0x07dc, 0x0c},	// Nko Letter Gba
  {0x07e2, 0x12},	// Nko Letter Nya
  {0x07e1, 0x13},	// Nko Letter Ma
  {0x07e4, 0x2f},	// Nko Letter Ha
  {0x07d2, 0x30},	// Nko Letter N
  {0x07cf, 0x04},	// Nko Letter Oo
  {0x07ce, 0x16},	// Nko Letter U
  {0x07cd, 0x07},	// Nko Letter E
  {0x07cc, 0x09},	// Nko Letter I
  {0x07cb, 0x0a},	// Nko Letter Ee
  {0x07ca, 0x0b},	// Nko Letter A
  {0x07d6, 0x0d},	// Nko Letter Ja
  {0x07dd, 0x0e},	// Nko Letter Fa
  {0x07e3, 0x0f},	// Nko Letter Na
  {0x07d5, 0x33},	// Nko Letter Ta
  {0x07d3, 0x34},	// Nko Letter Ba
  {0x005c, 0x64},	// Reverse Solidus
  {0x07d0, 0x1d},	// Nko Letter O
  {0x07f2, 0x1b},	// Nko Combining Nasalization Mark
  {0x07f5, 0x06},	// Nko Low Tone Apostrophe
  {0x07f4, 0x19},	// Nko High Tone Apostrophe
  {0x07ec, 0x05},	// Nko Combining Short Low Tone
  {0x07eb, 0x11},	// Nko Combining Short High Tone
  {0x07df, 0x10},	// Nko Letter La
  {0x07db, 0x36},	// Nko Letter Sa
  {0x07d8, 0x37},	// Nko Letter Da
  {0x07de, 0x38},	// Nko Letter Ka
};

const DeadkeyLookup kbdnko_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_NKO(kbdnko, sizeof kbdnko / sizeof kbdnko[0], kbdnko_deadkeys, sizeof kbdnko_deadkeys / sizeof kbdnko_deadkeys[0]);
