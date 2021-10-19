#include <KeyboardUTF8.h>
#include <languages/Keyboard_GR.h>

// Keyboard_GR Keyboard_german;

void setup()
{
  keyboard_ge.begin();
  Keyboard_GR.println("This is a test: ABCDEFGHIJKLMNOPQRSTUVWXYZ");
}

void loop() {}
