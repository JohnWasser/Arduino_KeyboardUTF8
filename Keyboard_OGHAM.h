#include <KeyboardUTF8.h>

// Ogham

const UnicodeLookup kbdogham[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x169c, 0x28 | MOD_SHIFT},	// Ogham Reversed Feather Mark
  {0x168a, 0x14},	// Ogham Letter Ceirt
  {0x1695, 0x1a},	// Ogham Letter Eabhadh
  {0x1693, 0x08},	// Ogham Letter Eadhadh
  {0x168f, 0x15},	// Ogham Letter Ruis
  {0x1688, 0x17},	// Ogham Letter Tinne
  {0x1698, 0x1c},	// Ogham Letter Ifin
  {0x1692, 0xa0},	// Ogham Letter Ur
  {0x1694, 0x0c},	// Ogham Letter Iodhadh
  {0x1691, 0x12},	// Ogham Letter Onn
  {0x169a, 0x13},	// Ogham Letter Peith
  {0x1690, 0x04},	// Ogham Letter Ailm
  {0x1684, 0x16},	// Ogham Letter Sail
  {0x1687, 0x07},	// Ogham Letter Dair
  {0x1683, 0x09},	// Ogham Letter Fearn
  {0x168c, 0x0a},	// Ogham Letter Gort
  {0x1686, 0x0b},	// Ogham Letter Uath
  {0x1697, 0x0d},	// Ogham Letter Uilleann
  {0x1696, 0x0e},	// Ogham Letter Or
  {0x1682, 0x0f},	// Ogham Letter Luis
  {0x1680, 0x34},	// Ogham Space Mark
  {0x169b, 0x28},	// Ogham Feather Mark
  {0x168e, 0x1d},	// Ogham Letter Straif
  {0x1699, 0x1b},	// Ogham Letter Eamhancholl
  {0x1689, 0x06},	// Ogham Letter Coll
  {0x168d, 0x19},	// Ogham Letter Ngeadal
  {0x1681, 0x05},	// Ogham Letter Beith
  {0x1685, 0x11},	// Ogham Letter Nion
  {0x168b, 0x10},	// Ogham Letter Muin
};

const DeadkeyLookup kbdogham_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_OGHAM(kbdogham, sizeof kbdogham / sizeof kbdogham[0], kbdogham_deadkeys, sizeof kbdogham_deadkeys / sizeof kbdogham_deadkeys[0]);
