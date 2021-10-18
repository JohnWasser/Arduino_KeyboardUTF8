#include <KeyboardUTF8.h>

// Myanmar (Visual order)

const UnicodeLookup kbdmyan_2[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007e, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Tilde
  {0x0021, 0x1e | (MOD_SHIFT | MOD_ALTGR)},	// Exclamation Mark
  {0x0040, 0x1f | (MOD_SHIFT | MOD_ALTGR)},	// Commercial At
  {0x0023, 0x20 | (MOD_SHIFT | MOD_ALTGR)},	// Number Sign
  {0x0024, 0x21 | (MOD_SHIFT | MOD_ALTGR)},	// Dollar Sign
  {0x0025, 0x22 | (MOD_SHIFT | MOD_ALTGR)},	// Percent Sign
  {0x005e, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// Circumflex Accent
  {0x0026, 0x24 | (MOD_SHIFT | MOD_ALTGR)},	// Ampersand
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x0051, 0x14 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter Q
  {0x0057, 0x1a | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter W
  {0x0045, 0x08 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter E
  {0x0052, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter R
  {0x0054, 0x17 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter T
  {0x0059, 0x1c | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter Y
  {0x0055, 0xa0 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter U
  {0x0049, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter I
  {0x004f, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter O
  {0x0050, 0x13 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter P
  {0x007b, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Left Curly Bracket
  {0x007d, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Right Curly Bracket
  {0x0041, 0x04 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter A
  {0x0053, 0x16 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter S
  {0x0044, 0x07 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter D
  {0x0046, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter F
  {0x0047, 0x0a | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter G
  {0x0048, 0x0b | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter H
  {0x004a, 0x0d | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter J
  {0x004b, 0x0e | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter K
  {0x004c, 0x0f | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter L
  {0x003a, 0x33 | (MOD_SHIFT | MOD_ALTGR)},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x007c, 0x64 | (MOD_SHIFT | MOD_ALTGR)},	// Vertical Line
  {0x005a, 0x1d | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter Z
  {0x0058, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter X
  {0x0043, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter C
  {0x0056, 0x19 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter V
  {0x0042, 0x05 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter B
  {0x004e, 0x11 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter N
  {0x004d, 0x10 | (MOD_SHIFT | MOD_ALTGR)},	// Latin Capital Letter M
  {0x003c, 0x36 | (MOD_SHIFT | MOD_ALTGR)},	// Less-Than Sign
  {0x003e, 0x37 | (MOD_SHIFT | MOD_ALTGR)},	// Greater-Than Sign
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
  {0x0060, 0x35 | MOD_ALTGR},	// Grave Accent
  {0x0031, 0x1e | MOD_ALTGR},	// Digit One
  {0x0032, 0x1f | MOD_ALTGR},	// Digit Two
  {0x0033, 0x20 | MOD_ALTGR},	// Digit Three
  {0x0034, 0x21 | MOD_ALTGR},	// Digit Four
  {0x0035, 0x22 | MOD_ALTGR},	// Digit Five
  {0x0036, 0x23 | MOD_ALTGR},	// Digit Six
  {0x0037, 0x24 | MOD_ALTGR},	// Digit Seven
  {0x0038, 0x25 | MOD_ALTGR},	// Digit Eight
  {0x0039, 0x26 | MOD_ALTGR},	// Digit Nine
  {0x0030, 0x27 | MOD_ALTGR},	// Digit Zero
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x003d, 0x2e},	// Equals Sign
  {0x0071, 0x14 | MOD_ALTGR},	// Latin Small Letter Q
  {0x0077, 0x1a | MOD_ALTGR},	// Latin Small Letter W
  {0x0065, 0x08 | MOD_ALTGR},	// Latin Small Letter E
  {0x0072, 0x15 | MOD_ALTGR},	// Latin Small Letter R
  {0x0074, 0x17 | MOD_ALTGR},	// Latin Small Letter T
  {0x0079, 0x1c | MOD_ALTGR},	// Latin Small Letter Y
  {0x0075, 0xa0 | MOD_ALTGR},	// Latin Small Letter U
  {0x0069, 0x0c | MOD_ALTGR},	// Latin Small Letter I
  {0x006f, 0x12 | MOD_ALTGR},	// Latin Small Letter O
  {0x0070, 0x13 | MOD_ALTGR},	// Latin Small Letter P
  {0x005b, 0x2f | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x30 | MOD_ALTGR},	// Right Square Bracket
  {0x0061, 0x04 | MOD_ALTGR},	// Latin Small Letter A
  {0x0073, 0x16 | MOD_ALTGR},	// Latin Small Letter S
  {0x0064, 0x07 | MOD_ALTGR},	// Latin Small Letter D
  {0x0066, 0x09 | MOD_ALTGR},	// Latin Small Letter F
  {0x0067, 0x0a | MOD_ALTGR},	// Latin Small Letter G
  {0x0068, 0x0b | MOD_ALTGR},	// Latin Small Letter H
  {0x006a, 0x0d | MOD_ALTGR},	// Latin Small Letter J
  {0x006b, 0x0e | MOD_ALTGR},	// Latin Small Letter K
  {0x006c, 0x0f | MOD_ALTGR},	// Latin Small Letter L
  {0x003b, 0x33 | MOD_ALTGR},	// Semicolon
  {0x0027, 0x34},	// Apostrophe
  {0x005c, 0x64 | MOD_ALTGR},	// Reverse Solidus
  {0x007a, 0x1d | MOD_ALTGR},	// Latin Small Letter Z
  {0x0078, 0x1b | MOD_ALTGR},	// Latin Small Letter X
  {0x0063, 0x06 | MOD_ALTGR},	// Latin Small Letter C
  {0x0076, 0x19 | MOD_ALTGR},	// Latin Small Letter V
  {0x0062, 0x05 | MOD_ALTGR},	// Latin Small Letter B
  {0x006e, 0x11 | MOD_ALTGR},	// Latin Small Letter N
  {0x006d, 0x10 | MOD_ALTGR},	// Latin Small Letter M
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
  {0x002f, 0x38},	// Solidus
  {0x100e, 0x35 | MOD_SHIFT},	// Myanmar Letter Ddha
  {0x100d, 0x1e | MOD_SHIFT},	// Myanmar Letter Dda
  {0x1052, 0x1f | MOD_SHIFT},	// Myanmar Letter Vocalic R
  {0x100b, 0x20 | MOD_SHIFT},	// Myanmar Letter Tta
  {0x1053, 0x21 | MOD_SHIFT},	// Myanmar Letter Vocalic Rr
  {0x1054, 0x22 | MOD_SHIFT},	// Myanmar Letter Vocalic L
  {0x1055, 0x23 | MOD_SHIFT},	// Myanmar Letter Vocalic Ll
  {0x101b, 0x24 | MOD_SHIFT},	// Myanmar Letter Ra
  {0x1008, 0x14 | MOD_SHIFT},	// Myanmar Letter Jha
  {0x101d, 0x1a | MOD_SHIFT},	// Myanmar Letter Wa
  {0x1023, 0x08 | MOD_SHIFT},	// Myanmar Letter I
  {0x104e, 0x15 | MOD_SHIFT},	// Myanmar Symbol Aforementioned
  {0x1024, 0x17 | MOD_SHIFT},	// Myanmar Letter Ii
  {0x104c, 0x1c | MOD_SHIFT},	// Myanmar Symbol Locative
  {0x1025, 0xa0 | MOD_SHIFT},	// Myanmar Letter U
  {0x104d, 0x0c | MOD_SHIFT},	// Myanmar Symbol Completed
  {0x103f, 0x12 | MOD_SHIFT},	// Myanmar Letter Great Sa
  {0x100f, 0x13 | MOD_SHIFT},	// Myanmar Letter Nna
  {0x1027, 0x2f | MOD_SHIFT},	// Myanmar Letter E
  {0x102a, 0x30 | MOD_SHIFT},	// Myanmar Letter Au
  {0x1017, 0x04 | MOD_SHIFT},	// Myanmar Letter Ba
  {0x103e, 0x16 | MOD_SHIFT},	// Myanmar Consonant Sign Medial Ha
  {0x102e, 0x07 | MOD_SHIFT},	// Myanmar Vowel Sign Ii
  {0x1039, 0x09 | MOD_SHIFT},	// Myanmar Sign Virama
  {0x103d, 0x0a | MOD_SHIFT},	// Myanmar Consonant Sign Medial Wa
  {0x1036, 0x0b | MOD_SHIFT},	// Myanmar Sign Anusvara
  {0x1032, 0x0d | MOD_SHIFT},	// Myanmar Vowel Sign Ai
  {0x1012, 0x0e | MOD_SHIFT},	// Myanmar Letter Da
  {0x1013, 0x0f | MOD_SHIFT},	// Myanmar Letter Dha
  {0x1002, 0x33 | MOD_SHIFT},	// Myanmar Letter Ga
  {0x1051, 0x64 | MOD_SHIFT},	// Myanmar Letter Ssa
  {0x1007, 0x1d | MOD_SHIFT},	// Myanmar Letter Ja
  {0x100c, 0x1b | MOD_SHIFT},	// Myanmar Letter Ttha
  {0x1003, 0x06 | MOD_SHIFT},	// Myanmar Letter Gha
  {0x1020, 0x19 | MOD_SHIFT},	// Myanmar Letter Lla
  {0x101a, 0x05 | MOD_SHIFT},	// Myanmar Letter Ya
  {0x1009, 0x11 | MOD_SHIFT},	// Myanmar Letter Nya
  {0x1026, 0x10 | MOD_SHIFT},	// Myanmar Letter Uu
  {0x104a, 0x36 | MOD_SHIFT},	// Myanmar Sign Little Section
  {0x104b, 0x37 | MOD_SHIFT},	// Myanmar Sign Section
  {0x1050, 0x35},	// Myanmar Letter Sha
  {0x1041, 0x1e},	// Myanmar Digit One
  {0x1042, 0x1f},	// Myanmar Digit Two
  {0x1043, 0x20},	// Myanmar Digit Three
  {0x1044, 0x21},	// Myanmar Digit Four
  {0x1045, 0x22},	// Myanmar Digit Five
  {0x1046, 0x23},	// Myanmar Digit Six
  {0x1047, 0x24},	// Myanmar Digit Seven
  {0x1048, 0x25},	// Myanmar Digit Eight
  {0x1049, 0x26},	// Myanmar Digit Nine
  {0x1040, 0x27},	// Myanmar Digit Zero
  {0x1006, 0x14},	// Myanmar Letter Cha
  {0x1010, 0x1a},	// Myanmar Letter Ta
  {0x1014, 0x08},	// Myanmar Letter Na
  {0x1019, 0x15},	// Myanmar Letter Ma
  {0x1021, 0x17},	// Myanmar Letter A
  {0x1015, 0x1c},	// Myanmar Letter Pa
  {0x1000, 0xa0},	// Myanmar Letter Ka
  {0x1004, 0x0c},	// Myanmar Letter Nga
  {0x101e, 0x12},	// Myanmar Letter Sa
  {0x1005, 0x13},	// Myanmar Letter Ca
  {0x101f, 0x2f},	// Myanmar Letter Ha
  {0x1029, 0x30},	// Myanmar Letter O
  {0x1031, 0x04},	// Myanmar Vowel Sign E
  {0x103b, 0x16},	// Myanmar Consonant Sign Medial Ya
  {0x102d, 0x07},	// Myanmar Vowel Sign I
  {0x103a, 0x09},	// Myanmar Sign Asat
  {0x102b, 0x0a},	// Myanmar Vowel Sign Tall Aa
  {0x1037, 0x0b},	// Myanmar Sign Dot Below
  {0x103c, 0x0d},	// Myanmar Consonant Sign Medial Ra
  {0x102f, 0x0e},	// Myanmar Vowel Sign U
  {0x1030, 0x0f},	// Myanmar Vowel Sign Uu
  {0x1038, 0x33},	// Myanmar Sign Visarga
  {0x104f, 0x64},	// Myanmar Symbol Genitive
  {0x1016, 0x1d},	// Myanmar Letter Pha
  {0x1011, 0x1b},	// Myanmar Letter Tha
  {0x1001, 0x06},	// Myanmar Letter Kha
  {0x101c, 0x19},	// Myanmar Letter La
  {0x1018, 0x05},	// Myanmar Letter Bha
  {0x100a, 0x11},	// Myanmar Letter Nnya
  {0x102c, 0x10},	// Myanmar Vowel Sign Aa
};

const DeadkeyLookup kbdmyan_2_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_MYAN_2(kbdmyan_2, sizeof kbdmyan_2 / sizeof kbdmyan_2[0], kbdmyan_2_deadkeys, sizeof kbdmyan_2_deadkeys / sizeof kbdmyan_2_deadkeys[0]);
