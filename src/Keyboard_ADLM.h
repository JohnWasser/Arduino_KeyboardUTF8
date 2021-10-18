#include <KeyboardUTF8.h>

// ADLaM

const UnicodeLookup kbdadlm[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0xef5e, 0x1e | MOD_ALTGR},	// Private Use 
  {0xef20, 0x13 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xef21, 0x16 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xef1d, 0x0e | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0x0022, 0x34 | MOD_SHIFT},	// Quotation Mark
  {0xef1f, 0x1d | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xef1c, 0x19 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xef1e, 0x05 | (MOD_SHIFT | MOD_ALTGR)},	// Private Use 
  {0xef5f, 0x38 | MOD_ALTGR},	// Private Use 
  {0x2e28, 0x26 | MOD_ALTGR},	// Left Double Parenthesis
  {0x2e29, 0x27 | MOD_ALTGR},	// Right Double Parenthesis
  {0xef46, 0x17 | MOD_ALTGR},	// Private Use 
  {0xef49, 0x1c | MOD_ALTGR},	// Private Use 
  {0xef48, 0xa0 | MOD_ALTGR},	// Private Use 
  {0xef45, 0x0c | MOD_ALTGR},	// Private Use 
  {0xef4a, 0x12 | MOD_ALTGR},	// Private Use 
  {0xef42, 0x13 | MOD_ALTGR},	// Private Use 
  {0xef44, 0x04 | MOD_ALTGR},	// Private Use 
  {0xef43, 0x16 | MOD_ALTGR},	// Private Use 
  {0xef3f, 0x0e | MOD_ALTGR},	// Private Use 
  {0x0027, 0x34 | MOD_ALTGR},	// Apostrophe
  {0xef41, 0x1d | MOD_ALTGR},	// Private Use 
  {0xef3e, 0x19 | MOD_ALTGR},	// Private Use 
  {0xef40, 0x05 | MOD_ALTGR},	// Private Use 
  {0x007e, 0x35 | MOD_SHIFT},	// Tilde
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x0040, 0x1f | MOD_SHIFT},	// Commercial At
  {0x0023, 0x20 | MOD_SHIFT},	// Number Sign
  {0x0024, 0x21 | MOD_SHIFT},	// Dollar Sign
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x005e, 0x23 | MOD_SHIFT},	// Circumflex Accent
  {0x0026, 0x24 | MOD_SHIFT},	// Ampersand
  {0x002a, 0x25 | MOD_SHIFT},	// Asterisk
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x1e91, 0x11 | MOD_SHIFT},	//  <Null>
  {0x1e90, 0x10 | MOD_SHIFT},	//  <Null>
  {0x00ab, 0x64 | MOD_SHIFT},	// Left-Pointing Double Angle Quotation Mark *
  {0x003a, 0x33 | MOD_SHIFT},	// Colon
  {0x003c, 0x36 | MOD_SHIFT},	// Less-Than Sign
  {0x003e, 0x37 | MOD_SHIFT},	// Greater-Than Sign
  {0x061f, 0x38 | MOD_SHIFT},	// Arabic Question Mark
  {0x1e95, 0x27},	//  <Null>
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x003d, 0x2e},	// Equals Sign
  {0x1e93, 0x11},	//  <Null>
  {0x1e92, 0x10},	//  <Null>
  {0x00bb, 0x64},	// Right-Pointing Double Angle Quotation Mark *
  {0x204f, 0x33},	// Reversed Semicolon
  {0x1e94, 0x34},	//  <Null>
  {0x2e41, 0x36},	// <Null>
  {0x002e, 0x37},	// Full Stop
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbdadlm_deadkeys[] PROGMEM = 
{
  {0x0060, 0x0060, 0x35},	// `  accent
};

KeyboardUTF8 Keyboard_ADLM(kbdadlm, sizeof kbdadlm / sizeof kbdadlm[0], kbdadlm_deadkeys, sizeof kbdadlm_deadkeys / sizeof kbdadlm_deadkeys[0]);
