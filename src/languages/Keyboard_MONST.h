#include <KeyboardUTF8.h>

// Traditional Mongolian (Standard)

const UnicodeLookup kbdmonst[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007e, 0x35 | MOD_SHIFT},	// Tilde
  {0xfe15, 0x1e | MOD_SHIFT},	// Presentation Form For Vertical Exclamation Mark
  {0x2048, 0x1f | MOD_SHIFT},	// Question Exclamation Mark
  {0x2049, 0x20 | MOD_SHIFT},	// Exclamation Question Mark
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x200c, 0x23 | MOD_SHIFT},	// Zero Width Non-Joiner
  {0x180a, 0x24 | MOD_SHIFT},	// Mongolian Nirugu
  {0x200d, 0x25 | MOD_SHIFT},	// Zero Width Joiner
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x180e, 0x2d | MOD_SHIFT},	// Mongolian Vowel Separator
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x1842, 0x14 | MOD_SHIFT},	// Mongolian Letter Chi
  {0x1827, 0x08 | MOD_SHIFT},	// Mongolian Letter Ee
  {0x183f, 0x15 | MOD_SHIFT},	// Mongolian Letter Zra
  {0x3008, 0x2f | MOD_SHIFT},	// Left Angle Bracket
  {0x3009, 0x30 | MOD_SHIFT},	// Right Angle Bracket
  {0x183e, 0x0b | MOD_SHIFT},	// Mongolian Letter Haa
  {0x183b, 0x0e | MOD_SHIFT},	// Mongolian Letter Kha
  {0x1840, 0x0f | MOD_SHIFT},	// Mongolian Letter Lha
  {0x1804, 0x33 | MOD_SHIFT},	// Mongolian Colon
  {0x180c, 0x34 | MOD_SHIFT},	// Mongolian Free Variation Selector Two
  {0xfe31, 0x28 | MOD_SHIFT},	// Presentation Form For Vertical Em Dash
  {0x1841, 0x1d | MOD_SHIFT},	// Mongolian Letter Zhi
  {0x183c, 0x06 | MOD_SHIFT},	// Mongolian Letter Tsa
  {0x1829, 0x11 | MOD_SHIFT},	// Mongolian Letter Ang
  {0x300a, 0x36 | MOD_SHIFT},	// Left Double Angle Bracket
  {0x300b, 0x37 | MOD_SHIFT},	// Right Double Angle Bracket
  {0xfe16, 0x38 | MOD_SHIFT},	// Presentation Form For Vertical Question Mark
  {0x180d, 0x35},	// Mongolian Free Variation Selector Three
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
  {0x202f, 0x2d},	// Narrow No-Break Space
  {0x003d, 0x2e},	// Equals Sign
  {0x1823, 0x14},	// Mongolian Letter O
  {0x1838, 0x1a},	// Mongolian Letter Wa
  {0x1821, 0x08},	// Mongolian Letter E
  {0x1837, 0x15},	// Mongolian Letter Ra
  {0x1832, 0x17},	// Mongolian Letter Ta
  {0x1836, 0x1c},	// Mongolian Letter Ya
  {0x1826, 0xa0},	// Mongolian Letter Ue
  {0x1822, 0x0c},	// Mongolian Letter I
  {0x1825, 0x12},	// Mongolian Letter Oe
  {0x182b, 0x13},	// Mongolian Letter Pa
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x30},	// Right Square Bracket
  {0x1820, 0x04},	// Mongolian Letter A
  {0x1830, 0x16},	// Mongolian Letter Sa
  {0x1833, 0x07},	// Mongolian Letter Da
  {0x1839, 0x09},	// Mongolian Letter Fa
  {0x182d, 0x0a},	// Mongolian Letter Ga
  {0x182c, 0x0b},	// Mongolian Letter Qa
  {0x1835, 0x0d},	// Mongolian Letter Ja
  {0x183a, 0x0e},	// Mongolian Letter Ka
  {0x182f, 0x0f},	// Mongolian Letter La
  {0xfe14, 0x33},	// Presentation Form For Vertical Semicolon
  {0x180b, 0x34},	// Mongolian Free Variation Selector One
  {0x1801, 0x28},	// Mongolian Ellipsis
  {0x183d, 0x1d},	// Mongolian Letter Za
  {0x1831, 0x1b},	// Mongolian Letter Sha
  {0x1834, 0x06},	// Mongolian Letter Cha
  {0x1824, 0x19},	// Mongolian Letter U
  {0x182a, 0x05},	// Mongolian Letter Ba
  {0x1828, 0x11},	// Mongolian Letter Na
  {0x182e, 0x10},	// Mongolian Letter Ma
  {0x1802, 0x36},	// Mongolian Comma
  {0x1803, 0x37},	// Mongolian Full Stop
  {0x00b7, 0x38},	// Middle Dot
};

const DeadkeyLookup kbdmonst_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_MONST(kbdmonst, sizeof kbdmonst / sizeof kbdmonst[0], kbdmonst_deadkeys, sizeof kbdmonst_deadkeys / sizeof kbdmonst_deadkeys[0]);
