#pragma once

#include <Arduino.h>  // This includes the Print class
#include <Keyboard.h>

//#define KEY_LEFT_CTRL   0x80
//#define KEY_LEFT_SHIFT    0x81
//#define KEY_LEFT_ALT    0x82
//#define KEY_LEFT_GUI    0x83
//#define KEY_RIGHT_CTRL    0x84
//#define KEY_RIGHT_SHIFT   0x85
//#define KEY_RIGHT_ALT   0x86
//#define KEY_RIGHT_GUI   0x87

const uint16_t MOD_SHIFT = 1 << (8 + (KEY_LEFT_SHIFT & 0x0F));
const uint16_t MOD_ALTGR = 1 << (8 + (KEY_RIGHT_ALT & 0x0F));
const uint16_t MOD_ALT = 1 << (8 + (KEY_LEFT_ALT & 0x0F));

// Structures for lookup tables
struct UnicodeLookup
{
  uint16_t UnicodeCodepoint;
  uint16_t USBKeycodeWithModifiers;
};

struct DeadkeyLookup
{
  uint16_t UnicodeCodepoint;
  uint16_t BaseKeyCodepoint;
  uint16_t DeadkeyKeycodeWithModifiers;
};

class KeyboardUTF8 : public Print
{
  public:
    KeyboardUTF8(const UnicodeLookup *ul, const size_t uls, const DeadkeyLookup *dl, const size_t dls);
    size_t writeUnicode(uint32_t codepoint);
    size_t writeUnicodeHex(uint32_t codepoint);  // Hold 'ALT' and type four hex digits
    size_t write(uint8_t);

  private:
    const UnicodeLookup *UnicodeTable;
    const size_t UnicodeTableSize;
    const DeadkeyLookup *DeadkeyTable;
    const size_t DeadkeyTableSize;
    uint16_t FindKeycode(uint32_t codepoint);
    size_t writeKeycode(uint8_t keycode);
    size_t writeKeycodeWithModifiers(uint16_t keycode);
    enum UTF8States
    {
      UTF8_Idle,
      UTF8_2of2,
      UTF8_2of3,
      UTF8_3of3,
      UTF8_2of4,
      UTF8_3of4,
      UTF8_4of4
    } UTF8State;
    uint32_t UnicodeCodepoint;  // Accumulated Unicode bits
    uint16_t HexKeycodes[16];  // Keycodes and modifiers for typing hex
};
