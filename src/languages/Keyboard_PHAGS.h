#include <KeyboardUTF8.h>

// Phags-pa

const UnicodeLookup kbdphags[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0xa86a, 0x17 | (MOD_SHIFT | MOD_ALTGR)},	// Phags-Pa Letter Ttha
  {0xa851, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Phags-Pa Letter Tsha
  {0x200b, 0x2d | MOD_ALTGR},	// Zero Width Space
  {0xa871, 0x15 | MOD_ALTGR},	// Phags-Pa Subjoined Letter Ra
  {0xa869, 0x17 | MOD_ALTGR},	// Phags-Pa Letter Tta
  {0xa86d, 0x1c | MOD_ALTGR},	// Phags-Pa Letter Alternate Ya
  {0x300a, 0x2f | MOD_ALTGR},	// Left Double Angle Bracket
  {0x300b, 0x30 | MOD_ALTGR},	// Right Double Angle Bracket
  {0xa86e, 0x16 | MOD_ALTGR},	// Phags-Pa Letter Voiceless Sha
  {0xa86b, 0x07 | MOD_ALTGR},	// Phags-Pa Letter Dda
  {0xa852, 0x0d | MOD_ALTGR},	// Phags-Pa Letter Dza
  {0xa850, 0x06 | MOD_ALTGR},	// Phags-Pa Letter Tsa
  {0xa86c, 0x11 | MOD_ALTGR},	// Phags-Pa Letter Nna
  {0x1804, 0x37 | MOD_ALTGR},	// Mongolian Colon
  {0xa875, 0x35 | MOD_SHIFT},	// Phags-Pa Double Head Mark
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x2048, 0x1f | MOD_SHIFT},	// Question Exclamation Mark
  {0x2049, 0x20 | MOD_SHIFT},	// Exclamation Question Mark
  {0x2014, 0x21 | MOD_SHIFT},	// Em Dash
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x200c, 0x23 | MOD_SHIFT},	// Zero Width Non-Joiner
  {0x0026, 0x24 | MOD_SHIFT},	// Ampersand
  {0x200d, 0x25 | MOD_SHIFT},	// Zero Width Joiner
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x00a0, 0x2d | MOD_SHIFT},	// No-Break Space
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0xa867, 0x19},	// Phags-Pa Subjoined Letter Wa
  {0xa866, 0x08 | MOD_SHIFT},	// Phags-Pa Letter Ee
  {0xa872, 0x15 | MOD_SHIFT},	// Phags-Pa Superfixed Letter Ra
  {0xa849, 0x17 | MOD_SHIFT},	// Phags-Pa Letter Tha
  {0xa868, 0x1c | MOD_SHIFT},	// Phags-Pa Subjoined Letter Ya
  {0xa84d, 0x13 | MOD_SHIFT},	// Phags-Pa Letter Pha
  {0x3008, 0x2f | MOD_SHIFT},	// Left Angle Bracket
  {0x3009, 0x30 | MOD_SHIFT},	// Right Angle Bracket
  {0xa85d, 0x04 | MOD_SHIFT},	// Phags-Pa Letter A
  {0xa85a, 0x16 | MOD_SHIFT},	// Phags-Pa Letter Sha
  {0xa870, 0x09 | MOD_SHIFT},	// Phags-Pa Letter Aspirated Fa
  {0xa865, 0x0a | MOD_SHIFT},	// Phags-Pa Letter Gga
  {0xa86f, 0x0b | MOD_SHIFT},	// Phags-Pa Letter Voiced Ha
  {0xa841, 0x0e | MOD_SHIFT},	// Phags-Pa Letter Kha
  {0xa847, 0x33 | MOD_SHIFT},	// Phags-Pa Letter Nya
  {0xa877, 0x34 | MOD_SHIFT},	// Phags-Pa Mark Double Shad
  {0xfe00, 0x28 | MOD_SHIFT},	// Variation Selector-1
  {0xa854, 0x1d | MOD_SHIFT},	// Phags-Pa Letter Zha
  {0xa845, 0x06 | MOD_SHIFT},	// Phags-Pa Letter Cha
  {0xa873, 0x10 | MOD_SHIFT},	// Phags-Pa Letter Candrabindu
  {0x3001, 0x36 | MOD_SHIFT},	// Ideographic Comma
  {0x3002, 0x37 | MOD_SHIFT},	// Ideographic Full Stop
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
  {0xa874, 0x35},	// Phags-Pa Single Head Mark
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
  {0xa862, 0x14},	// Phags-Pa Letter Qa
  {0xa853, 0x1a},	// Phags-Pa Letter Wa
  {0xa860, 0x08},	// Phags-Pa Letter E
  {0xa858, 0x15},	// Phags-Pa Letter Ra
  {0xa848, 0x17},	// Phags-Pa Letter Ta
  {0xa857, 0x1c},	// Phags-Pa Letter Ya
  {0xa85f, 0xa0},	// Phags-Pa Letter U
  {0xa85e, 0x0c},	// Phags-Pa Letter I
  {0xa861, 0x12},	// Phags-Pa Letter O
  {0xa84c, 0x13},	// Phags-Pa Letter Pa
  {0x3014, 0x2f},	// Left Tortoise Shell Bracket
  {0x3015, 0x30},	// Right Tortoise Shell Bracket
  {0xa856, 0x04},	// Phags-Pa Letter Small A
  {0xa85b, 0x16},	// Phags-Pa Letter Sa
  {0xa84a, 0x07},	// Phags-Pa Letter Da
  {0xa864, 0x09},	// Phags-Pa Letter Fa
  {0xa842, 0x0a},	// Phags-Pa Letter Ga
  {0xa85c, 0x0b},	// Phags-Pa Letter Ha
  {0xa846, 0x0d},	// Phags-Pa Letter Ja
  {0xa840, 0x0e},	// Phags-Pa Letter Ka
  {0xa859, 0x0f},	// Phags-Pa Letter La
  {0xa843, 0x33},	// Phags-Pa Letter Nga
  {0xa876, 0x34},	// Phags-Pa Mark Shad
  {0x1801, 0x28},	// Mongolian Ellipsis
  {0xa855, 0x1d},	// Phags-Pa Letter Za
  {0xa863, 0x1b},	// Phags-Pa Letter Xa
  {0xa844, 0x06},	// Phags-Pa Letter Ca
  {0xa84e, 0x05},	// Phags-Pa Letter Ba
  {0xa84b, 0x11},	// Phags-Pa Letter Na
  {0xa84f, 0x10},	// Phags-Pa Letter Ma
  {0x1802, 0x36},	// Mongolian Comma
  {0x1803, 0x37},	// Mongolian Full Stop
  {0x1805, 0x38},	// Mongolian Four Dots
};

const DeadkeyLookup kbdphags_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_PHAGS(kbdphags, sizeof kbdphags / sizeof kbdphags[0], kbdphags_deadkeys, sizeof kbdphags_deadkeys / sizeof kbdphags_deadkeys[0]);
