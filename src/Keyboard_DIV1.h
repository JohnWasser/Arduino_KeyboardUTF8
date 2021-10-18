#include <KeyboardUTF8.h>

// Divehi Phonetic

const UnicodeLookup kbddiv1[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x003b, 0x33 | MOD_ALTGR},	// Semicolon
  {0x200d, 0x19 | MOD_ALTGR},	// Zero Width Joiner
  {0x200c, 0x05 | MOD_ALTGR},	// Zero Width Non-Joiner
  {0x200e, 0x11 | MOD_ALTGR},	// Left-To-Right Mark
  {0x200f, 0x10 | MOD_ALTGR},	// Right-To-Left Mark
  {0x002c, 0x36 | MOD_ALTGR},	// Comma
  {0x007e, 0x35 | MOD_SHIFT},	// Tilde
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0040, 0x1f | MOD_SHIFT},	// Commercial At
  {0x0023, 0x20 | MOD_SHIFT},	// Number Sign
  {0x0024, 0x21 | MOD_SHIFT},	// Dollar Sign
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x005e, 0x23 | MOD_SHIFT},	// Circumflex Accent
  {0x0026, 0x24 | MOD_SHIFT},	// Ampersand
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x0028, 0x27 | MOD_SHIFT},	// Left Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x07a4, 0x14 | MOD_SHIFT},	// Thaana Letter Qaafu
  {0x07a2, 0x1a | MOD_SHIFT},	// Thaana Letter Ainu
  {0x07ad, 0x08 | MOD_SHIFT},	// Thaana Eybeyfili
  {0x079c, 0x15 | MOD_SHIFT},	// Thaana Letter Zaa
  {0x0793, 0x17 | MOD_SHIFT},	// Thaana Letter Taviyani
  {0x07a0, 0x1c | MOD_SHIFT},	// Thaana Letter To
  {0x07ab, 0xa0 | MOD_SHIFT},	// Thaana Ooboofili
  {0x07a9, 0x0c | MOD_SHIFT},	// Thaana Eebeefili
  {0x07af, 0x12 | MOD_SHIFT},	// Thaana Oaboafili
  {0x00f7, 0x13 | MOD_SHIFT},	// Division Sign
  {0x007d, 0x2f | MOD_SHIFT},	// Right Curly Bracket
  {0x007b, 0x30 | MOD_SHIFT},	// Left Curly Bracket
  {0x007c, 0x64 | MOD_SHIFT},	// Vertical Line
  {0x07a7, 0x04 | MOD_SHIFT},	// Thaana Aabaafili
  {0x0781, 0x16 | MOD_SHIFT},	// Thaana Letter Shaviyani
  {0x0791, 0x07 | MOD_SHIFT},	// Thaana Letter Daviyani
  {0xfdf2, 0x09 | MOD_SHIFT},	// Arabic Ligature Allah Isolated Form
  {0x07a3, 0x0a | MOD_SHIFT},	// Thaana Letter Ghainu
  {0x0799, 0x0b | MOD_SHIFT},	// Thaana Letter Hhaa
  {0x079b, 0x0d | MOD_SHIFT},	// Thaana Letter Thaalu
  {0x079a, 0x0e | MOD_SHIFT},	// Thaana Letter Khaa
  {0x0785, 0x0f | MOD_SHIFT},	// Thaana Letter Lhaviyani
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0x07a1, 0x1d | MOD_SHIFT},	// Thaana Letter Zo
  {0x0798, 0x1b | MOD_SHIFT},	// Thaana Letter Ttaa
  {0x079d, 0x06 | MOD_SHIFT},	// Thaana Letter Sheenu
  {0x07a5, 0x19 | MOD_SHIFT},	// Thaana Letter Waavu
  {0x079e, 0x05 | MOD_SHIFT},	// Thaana Letter Saadhu
  {0x078f, 0x11 | MOD_SHIFT},	// Thaana Letter Gnaviyani
  {0x079f, 0x10 | MOD_SHIFT},	// Thaana Letter Daadhu
  {0x003e, 0x36 | MOD_SHIFT},	// Greater-Than Sign
  {0x003c, 0x37 | MOD_SHIFT},	// Less-Than Sign
  {0x061f, 0x38 | MOD_SHIFT},	// Arabic Question Mark
  {0x0060, 0x35},	// Grave Accent
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
  {0x07b0, 0x14},	// Thaana Sukun
  {0x0787, 0x1a},	// Thaana Letter Alifu
  {0x07ac, 0x08},	// Thaana Ebefili
  {0x0783, 0x15},	// Thaana Letter Raa
  {0x078c, 0x17},	// Thaana Letter Thaa
  {0x0794, 0x1c},	// Thaana Letter Yaa
  {0x07aa, 0xa0},	// Thaana Ubufili
  {0x07a8, 0x0c},	// Thaana Ibifili
  {0x07ae, 0x12},	// Thaana Obofili
  {0x0795, 0x13},	// Thaana Letter Paviyani
  {0x005d, 0x2f},	// Right Square Bracket
  {0x005b, 0x30},	// Left Square Bracket
  {0x005c, 0x64},	// Reverse Solidus
  {0x07a6, 0x04},	// Thaana Abafili
  {0x0790, 0x16},	// Thaana Letter Seenu
  {0x078b, 0x07},	// Thaana Letter Dhaalu
  {0x078a, 0x09},	// Thaana Letter Faafu
  {0x078e, 0x0a},	// Thaana Letter Gaafu
  {0x0780, 0x0b},	// Thaana Letter Haa
  {0x0796, 0x0d},	// Thaana Letter Javiyani
  {0x0786, 0x0e},	// Thaana Letter Kaafu
  {0x078d, 0x0f},	// Thaana Letter Laamu
  {0x061b, 0x33},	// Arabic Semicolon
  {0x0027, 0x34},	// Apostrophe
  {0x0792, 0x1d},	// Thaana Letter Zaviyani
  {0x00d7, 0x1b},	// Multiplication Sign
  {0x0797, 0x06},	// Thaana Letter Chaviyani
  {0x0788, 0x19},	// Thaana Letter Vaavu
  {0x0784, 0x05},	// Thaana Letter Baa
  {0x0782, 0x11},	// Thaana Letter Noonu
  {0x0789, 0x10},	// Thaana Letter Meemu
  {0x060c, 0x36},	// Arabic Comma
  {0x002e, 0x37},	// Full Stop
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbddiv1_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_DIV1(kbddiv1, sizeof kbddiv1 / sizeof kbddiv1[0], kbddiv1_deadkeys, sizeof kbddiv1_deadkeys / sizeof kbddiv1_deadkeys[0]);
