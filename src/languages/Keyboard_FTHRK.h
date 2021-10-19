#include <KeyboardUTF8.h>

// Futhark

const UnicodeLookup kbdfthrk[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x16e6, 0x15 | MOD_SHIFT},	// Runic Letter Long-Branch-Yr
  {0x16ac, 0x04 | MOD_SHIFT},	// Runic Letter Long-Branch-Oss O
  {0x16cb, 0x16 | MOD_SHIFT},	// Runic Letter Sigel Long-Branch-Sol S
  {0x16bc, 0x0b | MOD_SHIFT},	// Runic Letter Long-Branch-Hagall H
  {0x16c5, 0x0d | MOD_SHIFT},	// Runic Letter Long-Branch-Ar Ae
  {0x16b4, 0x0e | MOD_SHIFT},	// Runic Letter Kaun K
  {0x16d8, 0x10 | MOD_SHIFT},	// Runic Letter Long-Branch-Madr M
  {0x16bb, 0x35},	// Runic Letter Haegl H
  {0x16ee, 0x24},	// Runic Arlaug Symbol (Golden Number 17)
  {0x16ef, 0x25},	// Runic Tvimadur Symbol (Golden Number 18)
  {0x16f0, 0x26},	// Runic Belgthor Symbol (Golden Number 19)
  {0x0030, 0x27},	// Digit Zero
  {0x16a6, 0x14},	// Runic Letter Thurisaz Thurs Thorn
  {0x16b9, 0x1a},	// Runic Letter Wunjo Wynn W
  {0x16d6, 0x08},	// Runic Letter Ehwaz Eh E
  {0x16b1, 0x15},	// Runic Letter Raido Rad Reid R
  {0x16cf, 0x17},	// Runic Letter Tiwaz Tir Tyr T
  {0x16c7, 0x1c},	// Runic Letter Iwaz Eoh
  {0x16a2, 0xa0},	// Runic Letter Uruz Ur U
  {0x16c1, 0x0c},	// Runic Letter Isaz Is Iss I
  {0x16df, 0x12},	// Runic Letter Othalan Ethel O
  {0x16c8, 0x13},	// Runic Letter Pertho Peorth P
  {0x16a8, 0x04},	// Runic Letter Ansuz A
  {0x16ca, 0x16},	// Runic Letter Sowilo S
  {0x16de, 0x07},	// Runic Letter Dagaz Daeg D
  {0x16a0, 0x09},	// Runic Letter Fehu Feoh Fe F
  {0x16b7, 0x0a},	// Runic Letter Gebo Gyfu G
  {0x16ba, 0x0b},	// Runic Letter Haglaz H
  {0x16c3, 0x0d},	// Runic Letter Jeran J
  {0x16b2, 0x0e},	// Runic Letter Kauna
  {0x16da, 0x0f},	// Runic Letter Laukaz Lagu Logr L
  {0x16dc, 0x33},	// Runic Letter Ingwaz
  {0x16dd, 0x34},	// Runic Letter Ing
  {0x16c9, 0x1d},	// Runic Letter Algiz Eolhx
  {0x16d2, 0x05},	// Runic Letter Berkanan Beorc Bjarkan B
  {0x16be, 0x11},	// Runic Letter Naudiz Nyd Naud N
  {0x16d7, 0x10},	// Runic Letter Mannaz Man M
  {0x16eb, 0x36},	// Runic Single Punctuation
  {0x16ec, 0x37},	// Runic Multiple Punctuation
  {0x16ed, 0x38},	// Runic Cross Punctuation
};

const DeadkeyLookup kbdfthrk_deadkeys[] PROGMEM = 
{
  {0x007c, 0x007c, 0x28 | MOD_SHIFT},	// |  accent
  {0x16ad, 0x16ad, 0x28},	// ᚭ  accent
  {0x16bd, 0x16bd, 0x28},	// ᚽ  accent
  {0x16c6, 0x16c6, 0x28},	// ᛆ  accent
  {0x16cc, 0x16cc, 0x28},	// ᛌ  accent
  {0x16d3, 0x16d3, 0x28},	// ᛓ  accent
  {0x16d9, 0x16d9, 0x28},	// ᛙ  accent
  {0x16e7, 0x16e7, 0x28},	// ᛧ  accent
  {0x007e, 0x007e, 0x28},	// ~  accent
};

KeyboardUTF8 Keyboard_FTHRK(kbdfthrk, sizeof kbdfthrk / sizeof kbdfthrk[0], kbdfthrk_deadkeys, sizeof kbdfthrk_deadkeys / sizeof kbdfthrk_deadkeys[0]);
