#include <KeyboardUTF8.h>

// Russian - Mnemonic

const UnicodeLookup kbdrum[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x20bd, 0x25 | MOD_ALTGR},	// <Null>
  {0x2019, 0x34 | MOD_ALTGR},	// Right Single Quotation Mark
  {0x042a, 0x35 | MOD_SHIFT},	// Cyrillic Capital Letter Hard Sign
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0022, 0x1f | MOD_SHIFT},	// Quotation Mark
  {0x2116, 0x20 | MOD_SHIFT},	// Numero Sign
  {0x003b, 0x33},	// Semicolon
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x042f, 0x14 | MOD_SHIFT},	// Cyrillic Capital Letter Ya
  {0x0428, 0x1a | MOD_SHIFT},	// Cyrillic Capital Letter Sha
  {0x0415, 0x08 | MOD_SHIFT},	// Cyrillic Capital Letter Ie
  {0x0420, 0x15 | MOD_SHIFT},	// Cyrillic Capital Letter Er
  {0x0422, 0x17 | MOD_SHIFT},	// Cyrillic Capital Letter Te
  {0x0423, 0xa0 | MOD_SHIFT},	// Cyrillic Capital Letter U
  {0x0418, 0x0c | MOD_SHIFT},	// Cyrillic Capital Letter I
  {0x041e, 0x12 | MOD_SHIFT},	// Cyrillic Capital Letter O
  {0x041f, 0x13 | MOD_SHIFT},	// Cyrillic Capital Letter Pe
  {0x007b, 0x2f | MOD_SHIFT},	// Left Curly Bracket
  {0x007d, 0x30 | MOD_SHIFT},	// Right Curly Bracket
  {0x0410, 0x04 | MOD_SHIFT},	// Cyrillic Capital Letter A
  {0x0414, 0x07 | MOD_SHIFT},	// Cyrillic Capital Letter De
  {0x0424, 0x09 | MOD_SHIFT},	// Cyrillic Capital Letter Ef
  {0x0413, 0x0a | MOD_SHIFT},	// Cyrillic Capital Letter Ghe
  {0x0425, 0x0b | MOD_SHIFT},	// Cyrillic Capital Letter Ha
  {0x041a, 0x0e | MOD_SHIFT},	// Cyrillic Capital Letter Ka
  {0x041b, 0x0f | MOD_SHIFT},	// Cyrillic Capital Letter El
  {0x042c, 0x34 | MOD_SHIFT},	// Cyrillic Capital Letter Soft Sign
  {0x002f, 0x38},	// Solidus
  {0x0417, 0x1d | MOD_SHIFT},	// Cyrillic Capital Letter Ze
  {0x0416, 0x1b | MOD_SHIFT},	// Cyrillic Capital Letter Zhe
  {0x0412, 0x19 | MOD_SHIFT},	// Cyrillic Capital Letter Ve
  {0x0411, 0x05 | MOD_SHIFT},	// Cyrillic Capital Letter Be
  {0x041d, 0x11 | MOD_SHIFT},	// Cyrillic Capital Letter En
  {0x041c, 0x10 | MOD_SHIFT},	// Cyrillic Capital Letter Em
  {0x003c, 0x36 | MOD_SHIFT},	// Less-Than Sign
  {0x003e, 0x37 | MOD_SHIFT},	// Greater-Than Sign
  {0x044a, 0x35},	// Cyrillic Small Letter Hard Sign
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
  {0x044f, 0x14},	// Cyrillic Small Letter Ya
  {0x0448, 0x1a},	// Cyrillic Small Letter Sha
  {0x0435, 0x08},	// Cyrillic Small Letter Ie
  {0x0440, 0x15},	// Cyrillic Small Letter Er
  {0x0442, 0x17},	// Cyrillic Small Letter Te
  {0x0443, 0xa0},	// Cyrillic Small Letter U
  {0x0438, 0x0c},	// Cyrillic Small Letter I
  {0x043e, 0x12},	// Cyrillic Small Letter O
  {0x043f, 0x13},	// Cyrillic Small Letter Pe
  {0x005b, 0x2f},	// Left Square Bracket
  {0x005d, 0x30},	// Right Square Bracket
  {0x0430, 0x04},	// Cyrillic Small Letter A
  {0x0434, 0x07},	// Cyrillic Small Letter De
  {0x0444, 0x09},	// Cyrillic Small Letter Ef
  {0x0433, 0x0a},	// Cyrillic Small Letter Ghe
  {0x0445, 0x0b},	// Cyrillic Small Letter Ha
  {0x043a, 0x0e},	// Cyrillic Small Letter Ka
  {0x043b, 0x0f},	// Cyrillic Small Letter El
  {0x044c, 0x34},	// Cyrillic Small Letter Soft Sign
  {0x005c, 0x64},	// Reverse Solidus
  {0x0437, 0x1d},	// Cyrillic Small Letter Ze
  {0x0436, 0x1b},	// Cyrillic Small Letter Zhe
  {0x0432, 0x19},	// Cyrillic Small Letter Ve
  {0x0431, 0x05},	// Cyrillic Small Letter Be
  {0x043d, 0x11},	// Cyrillic Small Letter En
  {0x043c, 0x10},	// Cyrillic Small Letter Em
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37},	// Full Stop
};

const DeadkeyLookup kbdrum_deadkeys[] PROGMEM = 
{
  {0x0060, 0x0060, 0x35 | MOD_ALTGR},	// `  accent
  {0x00a8, 0x00a8, 0x35 | MOD_ALTGR},	// ¨  accent
  {0x0453, 0x0453, 0x35 | MOD_ALTGR},	// ѓ  accent
  {0x0403, 0x0403, 0x35 | MOD_ALTGR},	// Ѓ  accent
  {0x0451, 0x0451, 0x0d},	// ё  accent
  {0x0401, 0x0401, 0x0d | MOD_SHIFT},	// Ё  accent
  {0x0436, 0x0436, 0x35 | MOD_ALTGR},	// ж  accent
  {0x0416, 0x0416, 0x35 | MOD_ALTGR},	// Ж  accent
  {0x0457, 0x0457, 0x35 | MOD_ALTGR},	// ї  accent
  {0x0407, 0x0407, 0x35 | MOD_ALTGR},	// Ї  accent
  {0x045e, 0x045e, 0x35 | MOD_ALTGR},	// ў  accent
  {0x040e, 0x040e, 0x35 | MOD_ALTGR},	// Ў  accent
  {0x0447, 0x0447, 0x06},	// ч  accent
  {0x0427, 0x0427, 0x06 | MOD_SHIFT},	// Ч  accent
  {0x0448, 0x0448, 0x16},	// ш  accent
  {0x0428, 0x0428, 0x16 | MOD_SHIFT},	// Ш  accent
  {0x0449, 0x0449, 0x16},	// щ  accent
  {0x0429, 0x0429, 0x16 | MOD_SHIFT},	// Щ  accent
  {0x044a, 0x044a, 0x35 | MOD_ALTGR},	// ъ  accent
  {0x042a, 0x042a, 0x35 | MOD_ALTGR},	// Ъ  accent
  {0x044d, 0x044d, 0x0d},	// э  accent
  {0x042d, 0x042d, 0x0d | MOD_SHIFT},	// Э  accent
  {0x044e, 0x044e, 0x0d},	// ю  accent
  {0x042e, 0x042e, 0x0d | MOD_SHIFT},	// Ю  accent
  {0x042b, 0x042b, 0x1c | MOD_SHIFT},	// Ы  accent
  {0x042f, 0x042f, 0x0d | MOD_SHIFT},	// Я  accent
  {0x0421, 0x0421, 0x16 | MOD_SHIFT},	// С  accent
  {0x0419, 0x0419, 0x0d | MOD_SHIFT},	// Й  accent
  {0x0426, 0x0426, 0x06 | MOD_SHIFT},	// Ц  accent
  {0x044b, 0x044b, 0x1c},	// ы  accent
  {0x044f, 0x044f, 0x0d},	// я  accent
  {0x0441, 0x0441, 0x16},	// с  accent
  {0x0439, 0x0439, 0x0d},	// й  accent
  {0x0446, 0x0446, 0x06},	// ц  accent
};

KeyboardUTF8 Keyboard_RUM(kbdrum, sizeof kbdrum / sizeof kbdrum[0], kbdrum_deadkeys, sizeof kbdrum_deadkeys / sizeof kbdrum_deadkeys[0]);
