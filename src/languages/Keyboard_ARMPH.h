#include <KeyboardUTF8.h>

// Armenian Phonetic

const UnicodeLookup kbdarmph[] PROGMEM = 
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
  {0x0028, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// Left Parenthesis
  {0x0029, 0x27 | (MOD_SHIFT | MOD_ALTGR)},	// Right Parenthesis
  {0x005f, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Low Line
  {0x002b, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Plus Sign
  {0x007b, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Left Curly Bracket
  {0x007d, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Right Curly Bracket
  {0x003a, 0x33 | (MOD_SHIFT | MOD_ALTGR)},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x007c, 0x28 | (MOD_SHIFT | MOD_ALTGR)},	// Vertical Line
  {0x003c, 0x36 | MOD_SHIFT},	// Less-Than Sign
  {0x003e, 0x37 | MOD_SHIFT},	// Greater-Than Sign
  {0x003f, 0x38 | (MOD_SHIFT | MOD_ALTGR)},	// Question Mark
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
  {0x003d, 0x2e | MOD_ALTGR},	// Equals Sign
  {0x005b, 0x2f | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x30 | MOD_ALTGR},	// Right Square Bracket
  {0x003b, 0x33},	// Semicolon
  {0x0027, 0x34 | MOD_ALTGR},	// Apostrophe
  {0x005c, 0x28 | MOD_ALTGR},	// Reverse Solidus
  {0x002c, 0x36},	// Comma
  {0x002e, 0x37 | MOD_ALTGR},	// Full Stop
  {0x002f, 0x38},	// Solidus
  {0x055c, 0x35 | MOD_SHIFT},	// Armenian Exclamation Mark
  {0x0537, 0x1e | MOD_SHIFT},	// Armenian Capital Letter Eh
  {0x0539, 0x1f | MOD_SHIFT},	// Armenian Capital Letter To
  {0x0553, 0x20 | MOD_SHIFT},	// Armenian Capital Letter Piwr
  {0x0541, 0x21 | MOD_SHIFT},	// Armenian Capital Letter Ja
  {0x054b, 0x22 | MOD_SHIFT},	// Armenian Capital Letter Jheh
  {0x0552, 0xa0 | MOD_SHIFT},	// Armenian Capital Letter Yiwn
  {0x0587, 0x24},	// Armenian Small Ligature Ech Yiwn
  {0x0550, 0x25 | MOD_SHIFT},	// Armenian Capital Letter Reh
  {0x0549, 0x26 | MOD_SHIFT},	// Armenian Capital Letter Cha
  {0x0543, 0x27 | MOD_SHIFT},	// Armenian Capital Letter Cheh
  {0x2014, 0x2d | MOD_SHIFT},	// Em Dash
  {0x053a, 0x2e | MOD_SHIFT},	// Armenian Capital Letter Zhe
  {0x0554, 0x14 | MOD_SHIFT},	// Armenian Capital Letter Keh
  {0x0548, 0x1a | MOD_SHIFT},	// Armenian Capital Letter Vo
  {0x0535, 0x08 | MOD_SHIFT},	// Armenian Capital Letter Ech
  {0x054c, 0x15 | MOD_SHIFT},	// Armenian Capital Letter Ra
  {0x054f, 0x17 | MOD_SHIFT},	// Armenian Capital Letter Tiwn
  {0x0538, 0x1c | MOD_SHIFT},	// Armenian Capital Letter Et
  {0x053b, 0x0c | MOD_SHIFT},	// Armenian Capital Letter Ini
  {0x0555, 0x12 | MOD_SHIFT},	// Armenian Capital Letter Oh
  {0x054a, 0x13 | MOD_SHIFT},	// Armenian Capital Letter Peh
  {0x053d, 0x2f | MOD_SHIFT},	// Armenian Capital Letter Xeh
  {0x053e, 0x30 | MOD_SHIFT},	// Armenian Capital Letter Ca
  {0x0531, 0x04 | MOD_SHIFT},	// Armenian Capital Letter Ayb
  {0x054d, 0x16 | MOD_SHIFT},	// Armenian Capital Letter Seh
  {0x0534, 0x07 | MOD_SHIFT},	// Armenian Capital Letter Da
  {0x0556, 0x09 | MOD_SHIFT},	// Armenian Capital Letter Feh
  {0x0533, 0x0a | MOD_SHIFT},	// Armenian Capital Letter Gim
  {0x0540, 0x0b | MOD_SHIFT},	// Armenian Capital Letter Ho
  {0x0545, 0x0d | MOD_SHIFT},	// Armenian Capital Letter Yi
  {0x053f, 0x0e | MOD_SHIFT},	// Armenian Capital Letter Ken
  {0x053c, 0x0f | MOD_SHIFT},	// Armenian Capital Letter Liwn
  {0x0589, 0x33 | MOD_SHIFT},	// Armenian Full Stop
  {0x0547, 0x28 | MOD_SHIFT},	// Armenian Capital Letter Sha
  {0x00ab, 0x64 | MOD_SHIFT},	// Left-Pointing Double Angle Quotation Mark *
  {0x0536, 0x1d | MOD_SHIFT},	// Armenian Capital Letter Za
  {0x0542, 0x1b | MOD_SHIFT},	// Armenian Capital Letter Ghad
  {0x0551, 0x06 | MOD_SHIFT},	// Armenian Capital Letter Co
  {0x054e, 0x19 | MOD_SHIFT},	// Armenian Capital Letter Vew
  {0x0532, 0x05 | MOD_SHIFT},	// Armenian Capital Letter Ben
  {0x0546, 0x11 | MOD_SHIFT},	// Armenian Capital Letter Now
  {0x0544, 0x10 | MOD_SHIFT},	// Armenian Capital Letter Men
  {0x055e, 0x38 | MOD_SHIFT},	// Armenian Question Mark
  {0x055d, 0x35},	// Armenian Comma
  {0x0567, 0x1e},	// Armenian Small Letter Eh
  {0x0569, 0x1f},	// Armenian Small Letter To
  {0x0583, 0x20},	// Armenian Small Letter Piwr
  {0x0571, 0x21},	// Armenian Small Letter Ja
  {0x057b, 0x22},	// Armenian Small Letter Jheh
  {0x0582, 0xa0},	// Armenian Small Letter Yiwn
  {0x0580, 0x25},	// Armenian Small Letter Reh
  {0x0579, 0x26},	// Armenian Small Letter Cha
  {0x0573, 0x27},	// Armenian Small Letter Cheh
  {0x056a, 0x2e},	// Armenian Small Letter Zhe
  {0x0584, 0x14},	// Armenian Small Letter Keh
  {0x0578, 0x1a},	// Armenian Small Letter Vo
  {0x0565, 0x08},	// Armenian Small Letter Ech
  {0x057c, 0x15},	// Armenian Small Letter Ra
  {0x057f, 0x17},	// Armenian Small Letter Tiwn
  {0x0568, 0x1c},	// Armenian Small Letter Et
  {0x056b, 0x0c},	// Armenian Small Letter Ini
  {0x0585, 0x12},	// Armenian Small Letter Oh
  {0x057a, 0x13},	// Armenian Small Letter Peh
  {0x056d, 0x2f},	// Armenian Small Letter Xeh
  {0x056e, 0x30},	// Armenian Small Letter Ca
  {0x0561, 0x04},	// Armenian Small Letter Ayb
  {0x057d, 0x16},	// Armenian Small Letter Seh
  {0x0564, 0x07},	// Armenian Small Letter Da
  {0x0586, 0x09},	// Armenian Small Letter Feh
  {0x0563, 0x0a},	// Armenian Small Letter Gim
  {0x0570, 0x0b},	// Armenian Small Letter Ho
  {0x0575, 0x0d},	// Armenian Small Letter Yi
  {0x056f, 0x0e},	// Armenian Small Letter Ken
  {0x056c, 0x0f},	// Armenian Small Letter Liwn
  {0x055b, 0x34},	// Armenian Emphasis Mark
  {0x0577, 0x28},	// Armenian Small Letter Sha
  {0x00bb, 0x64},	// Right-Pointing Double Angle Quotation Mark *
  {0x0566, 0x1d},	// Armenian Small Letter Za
  {0x0572, 0x1b},	// Armenian Small Letter Ghad
  {0x0581, 0x06},	// Armenian Small Letter Co
  {0x057e, 0x19},	// Armenian Small Letter Vew
  {0x0562, 0x05},	// Armenian Small Letter Ben
  {0x0576, 0x11},	// Armenian Small Letter Now
  {0x0574, 0x10},	// Armenian Small Letter Men
  {0x2024, 0x37},	// One Dot Leader
};

const DeadkeyLookup kbdarmph_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_ARMPH(kbdarmph, sizeof kbdarmph / sizeof kbdarmph[0], kbdarmph_deadkeys, sizeof kbdarmph_deadkeys / sizeof kbdarmph_deadkeys[0]);
