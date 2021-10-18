#include <KeyboardUTF8.h>

// New Tai Lue

const UnicodeLookup kbdntl[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x19b9, 0x08 | MOD_ALTGR},	// New Tai Lue Vowel Sign Ue
  {0x19be, 0x15 | MOD_ALTGR},	// New Tai Lue Vowel Sign Oay
  {0x19bb, 0x1c | MOD_ALTGR},	// New Tai Lue Vowel Sign Aay
  {0x19bc, 0xa0 | MOD_ALTGR},	// New Tai Lue Vowel Sign Uy
  {0x19bf, 0x0c | MOD_ALTGR},	// New Tai Lue Vowel Sign Uey
  {0x19bd, 0x12 | MOD_ALTGR},	// New Tai Lue Vowel Sign Oy
  {0x19ab, 0x04 | MOD_ALTGR},	// New Tai Lue Letter Low Sua
  {0x19aa, 0x16 | MOD_ALTGR},	// New Tai Lue Letter High Sua
  {0x19c6, 0x07 | MOD_ALTGR},	// New Tai Lue Letter Final D
  {0x19c2, 0x0a | MOD_ALTGR},	// New Tai Lue Letter Final Ng
  {0x19a6, 0x0b | MOD_ALTGR},	// New Tai Lue Letter High Kva
  {0x19a8, 0x0d | MOD_ALTGR},	// New Tai Lue Letter Low Kva
  {0x19c5, 0x0e | MOD_ALTGR},	// New Tai Lue Letter Final K
  {0x19ba, 0x0f | MOD_ALTGR},	// New Tai Lue Vowel Sign Ay
  {0x19a7, 0x1b | MOD_ALTGR},	// New Tai Lue Letter High Xva
  {0x19a9, 0x06 | MOD_ALTGR},	// New Tai Lue Letter Low Xva
  {0x19c1, 0x19 | MOD_ALTGR},	// New Tai Lue Letter Final V
  {0x19c7, 0x05 | MOD_ALTGR},	// New Tai Lue Letter Final B
  {0x19c3, 0x11 | MOD_ALTGR},	// New Tai Lue Letter Final N
  {0x19c4, 0x10 | MOD_ALTGR},	// New Tai Lue Letter Final M
  {0x19da, 0x35 | MOD_SHIFT},	// New Tai Lue Tham Digit One
  {0x19d1, 0x1e | MOD_SHIFT},	// New Tai Lue Digit One
  {0x19d2, 0x1f | MOD_SHIFT},	// New Tai Lue Digit Two
  {0x19d3, 0x20 | MOD_SHIFT},	// New Tai Lue Digit Three
  {0x19d4, 0x21 | MOD_SHIFT},	// New Tai Lue Digit Four
  {0x19d5, 0x22 | MOD_SHIFT},	// New Tai Lue Digit Five
  {0x19d6, 0x23 | MOD_SHIFT},	// New Tai Lue Digit Six
  {0x19d7, 0x24 | MOD_SHIFT},	// New Tai Lue Digit Seven
  {0x19d8, 0x25 | MOD_SHIFT},	// New Tai Lue Digit Eight
  {0x19d9, 0x26 | MOD_SHIFT},	// New Tai Lue Digit Nine
  {0x19d0, 0x27 | MOD_SHIFT},	// New Tai Lue Digit Zero
  {0x002d, 0x2d | MOD_SHIFT},	// Hyphen-Minus
  {0x003d, 0x2e | MOD_SHIFT},	// Equals Sign
  {0x1981, 0x14 | MOD_SHIFT},	// New Tai Lue Letter Low Qa
  {0x19c9, 0x1a | MOD_SHIFT},	// New Tai Lue Tone Mark-2
  {0x19b6, 0x08 | MOD_SHIFT},	// New Tai Lue Vowel Sign Ae
  {0x1992, 0x15 | MOD_SHIFT},	// New Tai Lue Letter Low Tha
  {0x1991, 0x17 | MOD_SHIFT},	// New Tai Lue Letter Low Ta
  {0x198d, 0x1c | MOD_SHIFT},	// New Tai Lue Letter Low Ya
  {0x19b4, 0xa0 | MOD_SHIFT},	// New Tai Lue Vowel Sign Uu
  {0x19c0, 0x0c | MOD_SHIFT},	// New Tai Lue Vowel Sign Iy
  {0x19b8, 0x12 | MOD_SHIFT},	// New Tai Lue Vowel Sign Oa
  {0x1997, 0x13 | MOD_SHIFT},	// New Tai Lue Letter Low Pa
  {0x007b, 0x2f | MOD_SHIFT},	// Left Curly Bracket
  {0x007d, 0x30 | MOD_SHIFT},	// Right Curly Bracket
  {0x19b1, 0x04 | MOD_SHIFT},	// New Tai Lue Vowel Sign Aa
  {0x198c, 0x16 | MOD_SHIFT},	// New Tai Lue Letter Low Sa
  {0x19a4, 0x07 | MOD_SHIFT},	// New Tai Lue Letter Low Da
  {0x199d, 0x09 | MOD_SHIFT},	// New Tai Lue Letter Low Fa
  {0x1987, 0x0a | MOD_SHIFT},	// New Tai Lue Letter Low Nga
  {0x19a3, 0x0b | MOD_SHIFT},	// New Tai Lue Letter Low Ha
  {0x1998, 0x0d | MOD_SHIFT},	// New Tai Lue Letter Low Pha
  {0x1985, 0x0e | MOD_SHIFT},	// New Tai Lue Letter Low Ka
  {0x199f, 0x0f | MOD_SHIFT},	// New Tai Lue Letter Low La
  {0xff1a, 0x33 | MOD_SHIFT},	// Fullwidth Colon
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x19df, 0x1d | MOD_SHIFT},	// New Tai Lue Sign Laev
  {0x1986, 0x1b | MOD_SHIFT},	// New Tai Lue Letter Low Xa
  {0x198b, 0x06 | MOD_SHIFT},	// New Tai Lue Letter Low Tsa
  {0x199e, 0x19 | MOD_SHIFT},	// New Tai Lue Letter Low Va
  {0x19a5, 0x05 | MOD_SHIFT},	// New Tai Lue Letter Low Ba
  {0x1993, 0x11 | MOD_SHIFT},	// New Tai Lue Letter Low Na
  {0x1999, 0x10 | MOD_SHIFT},	// New Tai Lue Letter Low Ma
  {0x300a, 0x36 | MOD_SHIFT},	// Left Double Angle Bracket
  {0x300b, 0x37 | MOD_SHIFT},	// Right Double Angle Bracket
  {0xff1f, 0x38 | MOD_SHIFT},	// Fullwidth Question Mark
  {0xff5e, 0x35},	// Fullwidth Tilde
  {0xff01, 0x1e},	// Fullwidth Exclamation Mark
  {0xff20, 0x1f},	// Fullwidth Commercial At
  {0xff03, 0x20},	// Fullwidth Number Sign
  {0xff04, 0x21},	// Fullwidth Dollar Sign
  {0xff05, 0x22},	// Fullwidth Percent Sign
  {0x2026, 0x23},	// Horizontal Ellipsis
  {0xff06, 0x24},	// Fullwidth Ampersand
  {0x002a, 0x25},	// Asterisk
  {0xff08, 0x26},	// Fullwidth Left Parenthesis
  {0xff09, 0x27},	// Fullwidth Right Parenthesis
  {0x2014, 0x2d},	// Em Dash
  {0x002b, 0x2e},	// Plus Sign
  {0x1980, 0x14},	// New Tai Lue Letter High Qa
  {0x19c8, 0x1a},	// New Tai Lue Tone Mark-1
  {0x19b5, 0x08},	// New Tai Lue Vowel Sign E
  {0x198f, 0x15},	// New Tai Lue Letter High Tha
  {0x198e, 0x17},	// New Tai Lue Letter High Ta
  {0x198a, 0x1c},	// New Tai Lue Letter High Ya
  {0x19b3, 0xa0},	// New Tai Lue Vowel Sign U
  {0x19b2, 0x0c},	// New Tai Lue Vowel Sign Ii
  {0x19b7, 0x12},	// New Tai Lue Vowel Sign O
  {0x1994, 0x13},	// New Tai Lue Letter High Pa
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x30},	// Right Square Bracket
  {0x19b0, 0x04},	// New Tai Lue Vowel Sign Vowel Shortener
  {0x1989, 0x16},	// New Tai Lue Letter High Sa
  {0x19a1, 0x07},	// New Tai Lue Letter High Da
  {0x199a, 0x09},	// New Tai Lue Letter High Fa
  {0x1984, 0x0a},	// New Tai Lue Letter High Nga
  {0x19a0, 0x0b},	// New Tai Lue Letter High Ha
  {0x1995, 0x0d},	// New Tai Lue Letter High Pha
  {0x1982, 0x0e},	// New Tai Lue Letter High Ka
  {0x199c, 0x0f},	// New Tai Lue Letter High La
  {0xff1b, 0x33},	// Fullwidth Semicolon
  {0x3001, 0x28},	// Ideographic Comma
  {0x19de, 0x1d},	// New Tai Lue Sign Lae
  {0x1983, 0x1b},	// New Tai Lue Letter High Xa
  {0x1988, 0x06},	// New Tai Lue Letter High Tsa
  {0x199b, 0x19},	// New Tai Lue Letter High Va
  {0x19a2, 0x05},	// New Tai Lue Letter High Ba
  {0x1990, 0x11},	// New Tai Lue Letter High Na
  {0x1996, 0x10},	// New Tai Lue Letter High Ma
  {0xff0c, 0x36},	// Fullwidth Comma
  {0x3002, 0x37},	// Ideographic Full Stop
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbdntl_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_NTL(kbdntl, sizeof kbdntl / sizeof kbdntl[0], kbdntl_deadkeys, sizeof kbdntl_deadkeys / sizeof kbdntl_deadkeys[0]);
