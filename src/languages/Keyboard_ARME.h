#include <KeyboardUTF8.h>

// Armenian Eastern (Legacy)

const UnicodeLookup kbdarme[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x055c, 0x35 | MOD_SHIFT},	// Armenian Exclamation Mark
  {0x0031, 0x1e | MOD_SHIFT},	// Digit One
  {0x0541, 0x1f | MOD_SHIFT},	// Armenian Capital Letter Ja
  {0x0545, 0x20 | MOD_SHIFT},	// Armenian Capital Letter Yi
  {0x0033, 0x21 | MOD_SHIFT},	// Digit Three
  {0x0034, 0x22 | MOD_SHIFT},	// Digit Four
  {0x0039, 0x23 | MOD_SHIFT},	// Digit Nine
  {0x0587, 0x24 | MOD_SHIFT},	// Armenian Small Ligature Ech Yiwn
  {0x0028, 0x25 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x0555, 0x27 | MOD_SHIFT},	// Armenian Capital Letter Oh
  {0x054c, 0x2d | MOD_SHIFT},	// Armenian Capital Letter Ra
  {0x053a, 0x2e | MOD_SHIFT},	// Armenian Capital Letter Zhe
  {0x053d, 0x14 | MOD_SHIFT},	// Armenian Capital Letter Xeh
  {0x0552, 0x1a | MOD_SHIFT},	// Armenian Capital Letter Yiwn
  {0x0537, 0x08 | MOD_SHIFT},	// Armenian Capital Letter Eh
  {0x0550, 0x15 | MOD_SHIFT},	// Armenian Capital Letter Reh
  {0x054f, 0x17 | MOD_SHIFT},	// Armenian Capital Letter Tiwn
  {0x0535, 0x1c | MOD_SHIFT},	// Armenian Capital Letter Ech
  {0x0538, 0xa0 | MOD_SHIFT},	// Armenian Capital Letter Et
  {0x053b, 0x0c | MOD_SHIFT},	// Armenian Capital Letter Ini
  {0x0548, 0x12 | MOD_SHIFT},	// Armenian Capital Letter Vo
  {0x054a, 0x13 | MOD_SHIFT},	// Armenian Capital Letter Peh
  {0x0549, 0x2f | MOD_SHIFT},	// Armenian Capital Letter Cha
  {0x054b, 0x30 | MOD_SHIFT},	// Armenian Capital Letter Jheh
  {0x055e, 0x64 | MOD_SHIFT},	// Armenian Question Mark
  {0x0531, 0x04 | MOD_SHIFT},	// Armenian Capital Letter Ayb
  {0x054d, 0x16 | MOD_SHIFT},	// Armenian Capital Letter Seh
  {0x0534, 0x07 | MOD_SHIFT},	// Armenian Capital Letter Da
  {0x0556, 0x09 | MOD_SHIFT},	// Armenian Capital Letter Feh
  {0x0554, 0x0a | MOD_SHIFT},	// Armenian Capital Letter Keh
  {0x0540, 0x0b | MOD_SHIFT},	// Armenian Capital Letter Ho
  {0x0543, 0x0d | MOD_SHIFT},	// Armenian Capital Letter Cheh
  {0x053f, 0x0e | MOD_SHIFT},	// Armenian Capital Letter Ken
  {0x053c, 0x0f | MOD_SHIFT},	// Armenian Capital Letter Liwn
  {0x0539, 0x33 | MOD_SHIFT},	// Armenian Capital Letter To
  {0x0553, 0x34 | MOD_SHIFT},	// Armenian Capital Letter Piwr
  {0x0536, 0x1d | MOD_SHIFT},	// Armenian Capital Letter Za
  {0x0551, 0x1b | MOD_SHIFT},	// Armenian Capital Letter Co
  {0x0533, 0x06 | MOD_SHIFT},	// Armenian Capital Letter Gim
  {0x054e, 0x19 | MOD_SHIFT},	// Armenian Capital Letter Vew
  {0x0532, 0x05 | MOD_SHIFT},	// Armenian Capital Letter Ben
  {0x0546, 0x11 | MOD_SHIFT},	// Armenian Capital Letter Now
  {0x0544, 0x10 | MOD_SHIFT},	// Armenian Capital Letter Men
  {0x0547, 0x36 | MOD_SHIFT},	// Armenian Capital Letter Sha
  {0x0542, 0x37 | MOD_SHIFT},	// Armenian Capital Letter Ghad
  {0x053e, 0x38 | MOD_SHIFT},	// Armenian Capital Letter Ca
  {0x055d, 0x35},	// Armenian Comma
  {0x003a, 0x1e},	// Colon
  {0x0571, 0x1f},	// Armenian Small Letter Ja
  {0x0575, 0x20},	// Armenian Small Letter Yi
  {0x055b, 0x21},	// Armenian Emphasis Mark
  {0x002c, 0x22},	// Comma
  {0x002d, 0x23},	// Hyphen-Minus
  {0x002e, 0x24},	// Full Stop
  {0x00ab, 0x25},	// Left-Pointing Double Angle Quotation Mark *
  {0x00bb, 0x26},	// Right-Pointing Double Angle Quotation Mark *
  {0x0585, 0x27},	// Armenian Small Letter Oh
  {0x057c, 0x2d},	// Armenian Small Letter Ra
  {0x056a, 0x2e},	// Armenian Small Letter Zhe
  {0x056d, 0x14},	// Armenian Small Letter Xeh
  {0x0582, 0x1a},	// Armenian Small Letter Yiwn
  {0x0567, 0x08},	// Armenian Small Letter Eh
  {0x0580, 0x15},	// Armenian Small Letter Reh
  {0x057f, 0x17},	// Armenian Small Letter Tiwn
  {0x0565, 0x1c},	// Armenian Small Letter Ech
  {0x0568, 0xa0},	// Armenian Small Letter Et
  {0x056b, 0x0c},	// Armenian Small Letter Ini
  {0x0578, 0x12},	// Armenian Small Letter Vo
  {0x057a, 0x13},	// Armenian Small Letter Peh
  {0x0579, 0x2f},	// Armenian Small Letter Cha
  {0x057b, 0x30},	// Armenian Small Letter Jheh
  {0x0027, 0x64},	// Apostrophe
  {0x0561, 0x04},	// Armenian Small Letter Ayb
  {0x057d, 0x16},	// Armenian Small Letter Seh
  {0x0564, 0x07},	// Armenian Small Letter Da
  {0x0586, 0x09},	// Armenian Small Letter Feh
  {0x0584, 0x0a},	// Armenian Small Letter Keh
  {0x0570, 0x0b},	// Armenian Small Letter Ho
  {0x0573, 0x0d},	// Armenian Small Letter Cheh
  {0x056f, 0x0e},	// Armenian Small Letter Ken
  {0x056c, 0x0f},	// Armenian Small Letter Liwn
  {0x0569, 0x33},	// Armenian Small Letter To
  {0x0583, 0x34},	// Armenian Small Letter Piwr
  {0x0566, 0x1d},	// Armenian Small Letter Za
  {0x0581, 0x1b},	// Armenian Small Letter Co
  {0x0563, 0x06},	// Armenian Small Letter Gim
  {0x057e, 0x19},	// Armenian Small Letter Vew
  {0x0562, 0x05},	// Armenian Small Letter Ben
  {0x0576, 0x11},	// Armenian Small Letter Now
  {0x0574, 0x10},	// Armenian Small Letter Men
  {0x0577, 0x36},	// Armenian Small Letter Sha
  {0x0572, 0x37},	// Armenian Small Letter Ghad
  {0x056e, 0x38},	// Armenian Small Letter Ca
};

const DeadkeyLookup kbdarme_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_ARME(kbdarme, sizeof kbdarme / sizeof kbdarme[0], kbdarme_deadkeys, sizeof kbdarme_deadkeys / sizeof kbdarme_deadkeys[0]);
