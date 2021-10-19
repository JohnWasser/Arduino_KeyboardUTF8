#include <KeyboardUTF8.h>

// Tai Le

const UnicodeLookup kbdtaile[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x002d, 0x2d | MOD_ALTGR},	// Hyphen-Minus
  {0x003d, 0x2e | MOD_ALTGR},	// Equals Sign
  {0x007b, 0x2f | MOD_ALTGR},	// Left Curly Bracket
  {0x007d, 0x30 | MOD_ALTGR},	// Right Curly Bracket
  {0xff1a, 0x33 | MOD_ALTGR},	// Fullwidth Colon
  {0x00b7, 0x28 | MOD_ALTGR},	// Middle Dot
  {0x300a, 0x36 | MOD_ALTGR},	// Left Double Angle Bracket
  {0x300b, 0x37 | MOD_ALTGR},	// Right Double Angle Bracket
  {0xff1f, 0x38 | MOD_ALTGR},	// Fullwidth Question Mark
  {0xff5e, 0x35 | MOD_SHIFT},	// Fullwidth Tilde
  {0xff01, 0x1e | MOD_SHIFT},	// Fullwidth Exclamation Mark
  {0xff20, 0x1f | MOD_SHIFT},	// Fullwidth Commercial At
  {0xff03, 0x20 | MOD_SHIFT},	// Fullwidth Number Sign
  {0xff04, 0x21 | MOD_SHIFT},	// Fullwidth Dollar Sign
  {0xff05, 0x22 | MOD_SHIFT},	// Fullwidth Percent Sign
  {0x2026, 0x23 | MOD_SHIFT},	// Horizontal Ellipsis
  {0xff06, 0x24 | MOD_SHIFT},	// Fullwidth Ampersand
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0xff08, 0x26 | MOD_SHIFT},	// Fullwidth Left Parenthesis
  {0xff09, 0x27 | MOD_SHIFT},	// Fullwidth Right Parenthesis
  {0x2014, 0x2d | MOD_SHIFT},	// Em Dash
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x005b, 0x2f | MOD_SHIFT},	// Left Square Bracket
  {0x005d, 0x30 | MOD_SHIFT},	// Right Square Bracket
  {0xff1b, 0x33 | MOD_SHIFT},	// Fullwidth Semicolon
  {0x3001, 0x28 | MOD_SHIFT},	// Ideographic Comma
  {0xff0c, 0x36 | MOD_SHIFT},	// Fullwidth Comma
  {0x3002, 0x37 | MOD_SHIFT},	// Ideographic Full Stop
  {0x002f, 0x38 | MOD_SHIFT},	// Solidus
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
  {0x1970, 0x2d},	// Tai Le Letter Tone-2
  {0x1971, 0x2e},	// Tai Le Letter Tone-3
  {0x196a, 0x14},	// Tai Le Letter Ue
  {0x1969, 0x1a},	// Tai Le Letter O
  {0x1965, 0x08},	// Tai Le Letter Ee
  {0x196b, 0x15},	// Tai Le Letter E
  {0x1957, 0x17},	// Tai Le Letter Tha
  {0x1955, 0x1c},	// Tai Le Letter Ya
  {0x1967, 0xa0},	// Tai Le Letter U
  {0x1964, 0x0c},	// Tai Le Letter I
  {0x1968, 0x12},	// Tai Le Letter Oo
  {0x195a, 0x13},	// Tai Le Letter Pha
  {0x1972, 0x2f},	// Tai Le Letter Tone-4
  {0x1973, 0x30},	// Tai Le Letter Tone-5
  {0x1963, 0x04},	// Tai Le Letter A
  {0x1954, 0x16},	// Tai Le Letter Sa
  {0x1956, 0x07},	// Tai Le Letter Ta
  {0x195c, 0x09},	// Tai Le Letter Fa
  {0x1950, 0x0a},	// Tai Le Letter Ka
  {0x195e, 0x0b},	// Tai Le Letter Ha
  {0x1953, 0x0d},	// Tai Le Letter Tsa
  {0x1951, 0x0e},	// Tai Le Letter Xa
  {0x1958, 0x0f},	// Tai Le Letter La
  {0x196d, 0x33},	// Tai Le Letter Ai
  {0x1974, 0x34},	// Tai Le Letter Tone-6
  {0x195f, 0x1d},	// Tai Le Letter Qa
  {0x1966, 0x1b},	// Tai Le Letter Eh
  {0x196c, 0x06},	// Tai Le Letter Aue
  {0x195d, 0x19},	// Tai Le Letter Va
  {0x1959, 0x05},	// Tai Le Letter Pa
  {0x1952, 0x11},	// Tai Le Letter Nga
  {0x195b, 0x10},	// Tai Le Letter Ma
  {0x1962, 0x36},	// Tai Le Letter Na
  {0x1961, 0x37},	// Tai Le Letter Tsha
  {0x1960, 0x38},	// Tai Le Letter Kha
};

const DeadkeyLookup kbdtaile_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_TAILE(kbdtaile, sizeof kbdtaile / sizeof kbdtaile[0], kbdtaile_deadkeys, sizeof kbdtaile_deadkeys / sizeof kbdtaile_deadkeys[0]);
