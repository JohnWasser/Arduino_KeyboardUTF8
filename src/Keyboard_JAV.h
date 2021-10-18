#include <KeyboardUTF8.h>

// Javanese

const UnicodeLookup kbdjav[] PROGMEM = 
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
  {0x002a, 0x25 | (MOD_SHIFT | MOD_ALTGR)},	// Asterisk
  {0x005f, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Low Line
  {0x002b, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Plus Sign
  {0xa9bb, 0x08 | (MOD_SHIFT | MOD_ALTGR)},	// Javanese Vowel Sign Dirga Mure
  {0xa9b9, 0xa0 | (MOD_SHIFT | MOD_ALTGR)},	// Javanese Vowel Sign Suku Mendut
  {0xa9b7, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Javanese Vowel Sign Wulu Melik
  {0xa9b5, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Javanese Vowel Sign Tolong
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
  {0x002d, 0x2d | MOD_ALTGR},	// Hyphen-Minus
  {0x003d, 0x2e | MOD_ALTGR},	// Equals Sign
  {0xa985, 0x14 | MOD_ALTGR},	// Javanese Letter I Kawi
  {0xa98d, 0x08 | MOD_ALTGR},	// Javanese Letter Ai
  {0xa9ac, 0x15 | MOD_ALTGR},	// Javanese Letter Ra Agung
  {0xa987, 0x0c | MOD_ALTGR},	// Javanese Letter Ii
  {0xa9cc, 0x2f | MOD_ALTGR},	// Javanese Pada Piseleh
  {0xa9cd, 0x30 | MOD_ALTGR},	// Javanese Turned Pada Piseleh
  {0xa9b0, 0x16 | MOD_ALTGR},	// Javanese Letter Sa Mahaprana
  {0xa999, 0x0d | MOD_ALTGR},	// Javanese Letter Ja Mahaprana
  {0xa990, 0x0e | MOD_ALTGR},	// Javanese Letter Ka Sasak
  {0xa980, 0x1b | MOD_ALTGR},	// Javanese Sign Panyangga
  {0xa98b, 0x19 | MOD_ALTGR},	// Javanese Letter Nga Lelet Raswadi
  {0x002f, 0x38 | MOD_ALTGR},	// Solidus
  {0xa9ca, 0x35 | MOD_SHIFT},	// Javanese Pada Adeg
  {0xa9cf, 0x1f | MOD_SHIFT},	// Javanese Pangrangkep
  {0xa9c6, 0x20 | MOD_SHIFT},	// Javanese Pada Windu
  {0xa9de, 0x21 | MOD_SHIFT},	// Javanese Pada Tirta Tumetes
  {0xa9df, 0x22 | MOD_SHIFT},	// Javanese Pada Isen-Isen
  {0xa9c3, 0x23 | MOD_SHIFT},	// Javanese Pada Andap
  {0xa9c4, 0x24 | MOD_SHIFT},	// Javanese Pada Madya
  {0xa9c5, 0x25 | MOD_SHIFT},	// Javanese Pada Luhur
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0xa9bc, 0x14 | MOD_SHIFT},	// Javanese Vowel Sign Pepet
  {0xa9ba, 0x08 | MOD_SHIFT},	// Javanese Vowel Sign Taling
  {0xa9bf, 0x15 | MOD_SHIFT},	// Javanese Consonant Sign Cakra
  {0xa9a1, 0x17 | MOD_SHIFT},	// Javanese Letter Ta Murda
  {0xa9be, 0x1c | MOD_SHIFT},	// Javanese Consonant Sign Pengkal
  {0xa9b8, 0xa0 | MOD_SHIFT},	// Javanese Vowel Sign Suku
  {0xa9b6, 0x0c | MOD_SHIFT},	// Javanese Vowel Sign Wulu
  {0xa9a6, 0x13 | MOD_SHIFT},	// Javanese Letter Pa Murda
  {0xa9c1, 0x2f | MOD_SHIFT},	// Javanese Left Rerenggan
  {0xa9c2, 0x30 | MOD_SHIFT},	// Javanese Right Rerenggan
  {0xa9b4, 0x04 | MOD_SHIFT},	// Javanese Vowel Sign Tarung
  {0xa9af, 0x16 | MOD_SHIFT},	// Javanese Letter Sa Murda
  {0xa9a3, 0x07 | MOD_SHIFT},	// Javanese Letter Da Mahaprana
  {0xa9bd, 0x09 | MOD_SHIFT},	// Javanese Consonant Sign Keret
  {0xa993, 0x0a | MOD_SHIFT},	// Javanese Letter Ga Murda
  {0xa983, 0x0b | MOD_SHIFT},	// Javanese Sign Wignyan
  {0xa998, 0x0d | MOD_SHIFT},	// Javanese Letter Nya Murda
  {0xa991, 0x0e | MOD_SHIFT},	// Javanese Letter Ka Murda
  {0xa99c, 0x33 | MOD_SHIFT},	// Javanese Letter Tta Mahaprana
  {0xa99e, 0x34 | MOD_SHIFT},	// Javanese Letter Dda Mahaprana
  {0x007c, 0x28 | MOD_SHIFT},	// Vertical Line
  {0xa982, 0x1d | MOD_SHIFT},	// Javanese Sign Layar
  {0xa981, 0x1b | MOD_SHIFT},	// Javanese Sign Cecak
  {0xa996, 0x06 | MOD_SHIFT},	// Javanese Letter Ca Murda
  {0xa9a8, 0x05 | MOD_SHIFT},	// Javanese Letter Ba Murda
  {0xa99f, 0x11 | MOD_SHIFT},	// Javanese Letter Na Murda
  {0xa9b3, 0x10 | MOD_SHIFT},	// Javanese Sign Cecak Telu
  {0xa9c7, 0x36 | MOD_SHIFT},	// Javanese Pada Pangkat
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
  {0xa9cb, 0x35},	// Javanese Pada Adeg Adeg
  {0xa9d1, 0x1e},	// Javanese Digit One
  {0xa9d2, 0x1f},	// Javanese Digit Two
  {0xa9d3, 0x20},	// Javanese Digit Three
  {0xa9d4, 0x21},	// Javanese Digit Four
  {0xa9d5, 0x22},	// Javanese Digit Five
  {0xa9d6, 0x23},	// Javanese Digit Six
  {0xa9d7, 0x24},	// Javanese Digit Seven
  {0xa9d8, 0x25},	// Javanese Digit Eight
  {0xa9d9, 0x26},	// Javanese Digit Nine
  {0xa9d0, 0x27},	// Javanese Digit Zero
  {0xa9ae, 0x1a},	// Javanese Letter Wa
  {0xa98c, 0x08},	// Javanese Letter E
  {0xa9ab, 0x15},	// Javanese Letter Ra
  {0xa9a0, 0x17},	// Javanese Letter Ta
  {0xa9aa, 0x1c},	// Javanese Letter Ya
  {0xa988, 0xa0},	// Javanese Letter U
  {0xa986, 0x0c},	// Javanese Letter I
  {0xa98e, 0x12},	// Javanese Letter O
  {0xa9a5, 0x13},	// Javanese Letter Pa
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x30},	// Right Square Bracket
  {0xa984, 0x04},	// Javanese Letter A
  {0xa9b1, 0x16},	// Javanese Letter Sa
  {0xa9a2, 0x07},	// Javanese Letter Da
  {0xa989, 0x09},	// Javanese Letter Pa Cerek
  {0xa992, 0x0a},	// Javanese Letter Ga
  {0xa9b2, 0x0b},	// Javanese Letter Ha
  {0xa997, 0x0d},	// Javanese Letter Ja
  {0xa98f, 0x0e},	// Javanese Letter Ka
  {0xa9ad, 0x0f},	// Javanese Letter La
  {0xa99b, 0x33},	// Javanese Letter Tta
  {0xa99d, 0x34},	// Javanese Letter Dda
  {0x005c, 0x28},	// Reverse Solidus
  {0xa99a, 0x1d},	// Javanese Letter Nya
  {0xa994, 0x1b},	// Javanese Letter Nga
  {0xa995, 0x06},	// Javanese Letter Ca
  {0xa98a, 0x19},	// Javanese Letter Nga Lelet
  {0xa9a7, 0x05},	// Javanese Letter Ba
  {0xa9a4, 0x11},	// Javanese Letter Na
  {0xa9a9, 0x10},	// Javanese Letter Ma
  {0xa9c8, 0x36},	// Javanese Pada Lingsa
  {0xa9c9, 0x37},	// Javanese Pada Lungsi
  {0xa9c0, 0x38},	// Javanese Pangkon
};

const DeadkeyLookup kbdjav_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_JAV(kbdjav, sizeof kbdjav / sizeof kbdjav[0], kbdjav_deadkeys, sizeof kbdjav_deadkeys / sizeof kbdjav_deadkeys[0]);
