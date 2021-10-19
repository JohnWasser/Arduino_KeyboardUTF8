#include <KeyboardUTF8.h>

// Tatar (Legacy)

const UnicodeLookup kbdtat[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0401, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Cyrillic Capital Letter Io
  {0x20bd, 0x25 | (MOD_SHIFT | MOD_ALTGR)},	// <Null>
  {0x0426, 0x1a | (MOD_SHIFT | MOD_ALTGR)},	// Cyrillic Capital Letter Tse
  {0x04a0, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Cyrillic Capital Letter Bashkir Ka
  {0x0492, 0xa0 | (MOD_SHIFT | MOD_ALTGR)},	// Cyrillic Capital Letter Ghe With Stroke
  {0x0429, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Cyrillic Capital Letter Shcha
  {0x042a, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Cyrillic Capital Letter Hard Sign
  {0x0416, 0x33 | (MOD_SHIFT | MOD_ALTGR)},	// Cyrillic Capital Letter Zhe
  {0x042c, 0x10 | (MOD_SHIFT | MOD_ALTGR)},	// Cyrillic Capital Letter Soft Sign
  {0x0451, 0x35 | MOD_ALTGR},	// Cyrillic Small Letter Io
  {0x0040, 0x1f | MOD_ALTGR},	// Commercial At
  {0x0023, 0x20 | MOD_ALTGR},	// Number Sign
  {0x0024, 0x21 | MOD_ALTGR},	// Dollar Sign
  {0x005b, 0x24 | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x25 | MOD_ALTGR},	// Right Square Bracket
  {0x007b, 0x26 | MOD_ALTGR},	// Left Curly Bracket
  {0x007d, 0x27 | MOD_ALTGR},	// Right Curly Bracket
  {0x0446, 0x1a | MOD_ALTGR},	// Cyrillic Small Letter Tse
  {0x04a1, 0x15 | MOD_ALTGR},	// Cyrillic Small Letter Bashkir Ka
  {0x0493, 0xa0 | MOD_ALTGR},	// Cyrillic Small Letter Ghe With Stroke
  {0x0449, 0x12 | MOD_ALTGR},	// Cyrillic Small Letter Shcha
  {0x044a, 0x30 | MOD_ALTGR},	// Cyrillic Small Letter Hard Sign
  {0x0436, 0x33 | MOD_ALTGR},	// Cyrillic Small Letter Zhe
  {0x0027, 0x34 | MOD_ALTGR},	// Apostrophe
  {0x044c, 0x10 | MOD_ALTGR},	// Cyrillic Small Letter Soft Sign
  {0x003c, 0x36 | MOD_ALTGR},	// Less-Than Sign
  {0x003e, 0x37 | MOD_ALTGR},	// Greater-Than Sign
  {0x04ba, 0x35 | MOD_SHIFT},	// Cyrillic Capital Letter Shha
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0022, 0x1f | MOD_SHIFT},	// Quotation Mark
  {0x2116, 0x20 | MOD_SHIFT},	// Numero Sign
  {0x003b, 0x21 | MOD_SHIFT},	// Semicolon
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x003a, 0x23 | MOD_SHIFT},	// Colon
  {0x003f, 0x24 | MOD_SHIFT},	// Question Mark
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x0419, 0x14 | MOD_SHIFT},	// Cyrillic Capital Letter Short I
  {0x04e8, 0x1a | MOD_SHIFT},	// Cyrillic Capital Letter Barred O
  {0x0423, 0x08 | MOD_SHIFT},	// Cyrillic Capital Letter U
  {0x041a, 0x15 | MOD_SHIFT},	// Cyrillic Capital Letter Ka
  {0x0415, 0x17 | MOD_SHIFT},	// Cyrillic Capital Letter Ie
  {0x041d, 0x1c | MOD_SHIFT},	// Cyrillic Capital Letter En
  {0x0413, 0xa0 | MOD_SHIFT},	// Cyrillic Capital Letter Ghe
  {0x0428, 0x0c | MOD_SHIFT},	// Cyrillic Capital Letter Sha
  {0x04d8, 0x12 | MOD_SHIFT},	// Cyrillic Capital Letter Schwa
  {0x0417, 0x13 | MOD_SHIFT},	// Cyrillic Capital Letter Ze
  {0x0425, 0x2f | MOD_SHIFT},	// Cyrillic Capital Letter Ha
  {0x04ae, 0x30 | MOD_SHIFT},	// Cyrillic Capital Letter Straight U
  {0x0424, 0x04 | MOD_SHIFT},	// Cyrillic Capital Letter Ef
  {0x042b, 0x16 | MOD_SHIFT},	// Cyrillic Capital Letter Yeru
  {0x0412, 0x07 | MOD_SHIFT},	// Cyrillic Capital Letter Ve
  {0x0410, 0x09 | MOD_SHIFT},	// Cyrillic Capital Letter A
  {0x041f, 0x0a | MOD_SHIFT},	// Cyrillic Capital Letter Pe
  {0x0420, 0x0b | MOD_SHIFT},	// Cyrillic Capital Letter Er
  {0x041e, 0x0d | MOD_SHIFT},	// Cyrillic Capital Letter O
  {0x041b, 0x0e | MOD_SHIFT},	// Cyrillic Capital Letter El
  {0x0414, 0x0f | MOD_SHIFT},	// Cyrillic Capital Letter De
  {0x04a2, 0x33 | MOD_SHIFT},	// Cyrillic Capital Letter En With Descender
  {0x042d, 0x34 | MOD_SHIFT},	// Cyrillic Capital Letter E
  {0x002f, 0x28 | MOD_SHIFT},	// Solidus
  {0x0490, 0x64 | MOD_SHIFT},	// Cyrillic Capital Letter Ghe With Upturn
  {0x042f, 0x1d | MOD_SHIFT},	// Cyrillic Capital Letter Ya
  {0x0427, 0x1b | MOD_SHIFT},	// Cyrillic Capital Letter Che
  {0x0421, 0x06 | MOD_SHIFT},	// Cyrillic Capital Letter Es
  {0x041c, 0x19 | MOD_SHIFT},	// Cyrillic Capital Letter Em
  {0x0418, 0x05 | MOD_SHIFT},	// Cyrillic Capital Letter I
  {0x0422, 0x11 | MOD_SHIFT},	// Cyrillic Capital Letter Te
  {0x0496, 0x10 | MOD_SHIFT},	// Cyrillic Capital Letter Zhe With Descender
  {0x0411, 0x36 | MOD_SHIFT},	// Cyrillic Capital Letter Be
  {0x042e, 0x37 | MOD_SHIFT},	// Cyrillic Capital Letter Yu
  {0x002c, 0x38 | MOD_SHIFT},	// Comma
  {0x04bb, 0x35},	// Cyrillic Small Letter Shha
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
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x003d, 0x2e},	// Equals Sign
  {0x0439, 0x14},	// Cyrillic Small Letter Short I
  {0x04e9, 0x1a},	// Cyrillic Small Letter Barred O
  {0x0443, 0x08},	// Cyrillic Small Letter U
  {0x043a, 0x15},	// Cyrillic Small Letter Ka
  {0x0435, 0x17},	// Cyrillic Small Letter Ie
  {0x043d, 0x1c},	// Cyrillic Small Letter En
  {0x0433, 0xa0},	// Cyrillic Small Letter Ghe
  {0x0448, 0x0c},	// Cyrillic Small Letter Sha
  {0x04d9, 0x12},	// Cyrillic Small Letter Schwa
  {0x0437, 0x13},	// Cyrillic Small Letter Ze
  {0x0445, 0x2f},	// Cyrillic Small Letter Ha
  {0x04af, 0x30},	// Cyrillic Small Letter Straight U
  {0x0444, 0x04},	// Cyrillic Small Letter Ef
  {0x044b, 0x16},	// Cyrillic Small Letter Yeru
  {0x0432, 0x07},	// Cyrillic Small Letter Ve
  {0x0430, 0x09},	// Cyrillic Small Letter A
  {0x043f, 0x0a},	// Cyrillic Small Letter Pe
  {0x0440, 0x0b},	// Cyrillic Small Letter Er
  {0x043e, 0x0d},	// Cyrillic Small Letter O
  {0x043b, 0x0e},	// Cyrillic Small Letter El
  {0x0434, 0x0f},	// Cyrillic Small Letter De
  {0x04a3, 0x33},	// Cyrillic Small Letter En With Descender
  {0x044d, 0x34},	// Cyrillic Small Letter E
  {0x005c, 0x28},	// Reverse Solidus
  {0x0491, 0x64},	// Cyrillic Small Letter Ghe With Upturn
  {0x044f, 0x1d},	// Cyrillic Small Letter Ya
  {0x0447, 0x1b},	// Cyrillic Small Letter Che
  {0x0441, 0x06},	// Cyrillic Small Letter Es
  {0x043c, 0x19},	// Cyrillic Small Letter Em
  {0x0438, 0x05},	// Cyrillic Small Letter I
  {0x0442, 0x11},	// Cyrillic Small Letter Te
  {0x0497, 0x10},	// Cyrillic Small Letter Zhe With Descender
  {0x0431, 0x36},	// Cyrillic Small Letter Be
  {0x044e, 0x37},	// Cyrillic Small Letter Yu
  {0x002e, 0x38},	// Full Stop
};

const DeadkeyLookup kbdtat_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_TAT(kbdtat, sizeof kbdtat / sizeof kbdtat[0], kbdtat_deadkeys, sizeof kbdtat_deadkeys / sizeof kbdtat_deadkeys[0]);
