#include <KeyboardUTF8.h>

// Syriac

const UnicodeLookup kbdsyr1[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0651, 0x35 | MOD_ALTGR},	// Arabic Shadda
  {0x0701, 0x1e | MOD_ALTGR},	// Syriac Supralinear Full Stop
  {0x0702, 0x1f | MOD_ALTGR},	// Syriac Sublinear Full Stop
  {0x0703, 0x20 | MOD_ALTGR},	// Syriac Supralinear Colon
  {0x0704, 0x21 | MOD_ALTGR},	// Syriac Sublinear Colon
  {0x0705, 0x22 | MOD_ALTGR},	// Syriac Horizontal Colon
  {0x0708, 0x23 | MOD_ALTGR},	// Syriac Supralinear Colon Skewed Left
  {0x0709, 0x24 | MOD_ALTGR},	// Syriac Sublinear Colon Skewed Right
  {0x070b, 0x25 | MOD_ALTGR},	// Syriac Harklean Obelus
  {0x070c, 0x26 | MOD_ALTGR},	// Syriac Harklean Metobelus
  {0x070d, 0x27 | MOD_ALTGR},	// Syriac Harklean Asteriscus
  {0x250c, 0x2d | MOD_ALTGR},	// Box Drawings Light Down And Right
  {0x2510, 0x2e | MOD_ALTGR},	// Box Drawings Light Down And Left
  {0x064e, 0x14 | MOD_ALTGR},	// Arabic Fatha
  {0x064b, 0x1a | MOD_ALTGR},	// Arabic Fathatan
  {0x064f, 0x08 | MOD_ALTGR},	// Arabic Damma
  {0x064c, 0x15 | MOD_ALTGR},	// Arabic Dammatan
  {0x0653, 0x17 | MOD_ALTGR},	// Arabic Maddah Above
  {0x0654, 0x1c | MOD_ALTGR},	// Arabic Hamza Above
  {0x0747, 0xa0 | MOD_ALTGR},	// Syriac Oblique Line Above
  {0x0743, 0x0c | MOD_ALTGR},	// Syriac Two Vertical Dots Above
  {0x0745, 0x12 | MOD_ALTGR},	// Syriac Three Dots Above
  {0x032d, 0x13 | MOD_ALTGR},	// Combining Circumflex Accent Below
  {0x0650, 0x04 | MOD_ALTGR},	// Arabic Kasra
  {0x064d, 0x16 | MOD_ALTGR},	// Arabic Kasratan
  {0x0621, 0x09 | MOD_ALTGR},	// Arabic Letter Hamza
  {0x0655, 0x0a | MOD_ALTGR},	// Arabic Hamza Below
  {0x0670, 0x0b | MOD_ALTGR},	// Arabic Letter Superscript Alef
  {0x0748, 0x0d | MOD_ALTGR},	// Syriac Oblique Line Below
  {0x0744, 0x0e | MOD_ALTGR},	// Syriac Two Vertical Dots Below
  {0x0746, 0x0f | MOD_ALTGR},	// Syriac Three Dots Below
  {0x0652, 0x1b | MOD_ALTGR},	// Arabic Sukun
  {0x200d, 0x19 | MOD_ALTGR},	// Zero Width Joiner
  {0x200c, 0x05 | MOD_ALTGR},	// Zero Width Non-Joiner
  {0x200e, 0x11 | MOD_ALTGR},	// Left-To-Right Mark
  {0x200f, 0x10 | MOD_ALTGR},	// Right-To-Left Mark
  {0x032e, 0x35 | MOD_SHIFT},	// Combining Breve Below
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x030a, 0x1f | MOD_SHIFT},	// Combining Ring Above
  {0x0325, 0x20 | MOD_SHIFT},	// Combining Ring Below
  {0x0749, 0x21 | MOD_SHIFT},	// Syriac Music
  {0x2670, 0x22 | MOD_SHIFT},	// West Syriac Cross
  {0x2671, 0x23 | MOD_SHIFT},	// East Syriac Cross
  {0x070a, 0x24 | MOD_SHIFT},	// Syriac Contraction
  {0x00bb, 0x25 | MOD_SHIFT},	// Right-Pointing Double Angle Quotation Mark *
  {0x0029, 0x26 | MOD_SHIFT},	// Right Parenthesis
  {0x0028, 0x27 | MOD_SHIFT},	// Left Parenthesis
  {0x00ab, 0x2d | MOD_SHIFT},	// Left-Pointing Double Angle Quotation Mark *
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
  {0x0730, 0x14 | MOD_SHIFT},	// Syriac Pthaha Above
  {0x0733, 0x1a | MOD_SHIFT},	// Syriac Zqapha Above
  {0x0736, 0x08 | MOD_SHIFT},	// Syriac Rbasa Above
  {0x073a, 0x15 | MOD_SHIFT},	// Syriac Hbasa Above
  {0x073d, 0x17 | MOD_SHIFT},	// Syriac Esasa Above
  {0x0740, 0x1c | MOD_SHIFT},	// Syriac Feminine Dot
  {0x0741, 0xa0 | MOD_SHIFT},	// Syriac Qushshaya
  {0x0308, 0x0c | MOD_SHIFT},	// Combining Diaeresis (Dialytika)
  {0x0304, 0x12 | MOD_SHIFT},	// Combining Macron
  {0x0307, 0x13 | MOD_SHIFT},	// Combining Dot Above
  {0x0303, 0x2f | MOD_SHIFT},	// Combining Tilde
  {0x074a, 0x30 | MOD_SHIFT},	// Syriac Barrekh
  {0x003a, 0x64 | MOD_SHIFT},	// Colon
  {0x0731, 0x04 | MOD_SHIFT},	// Syriac Pthaha Below
  {0x0734, 0x16 | MOD_SHIFT},	// Syriac Zqapha Below
  {0x0737, 0x07 | MOD_SHIFT},	// Syriac Rbasa Below
  {0x073b, 0x09 | MOD_SHIFT},	// Syriac Hbasa Below
  {0x073e, 0x0a | MOD_SHIFT},	// Syriac Esasa Below
  {0x0711, 0x0b | MOD_SHIFT},	// Syriac Letter Superscript Alaph
  {0x0640, 0x0d | MOD_SHIFT},	// Arabic Tatweel
  {0x0324, 0x0e | MOD_SHIFT},	// Combining Diaeresis Below
  {0x0331, 0x0f | MOD_SHIFT},	// Combining Macron Below
  {0x0323, 0x33 | MOD_SHIFT},	// Combining Dot Below
  {0x0330, 0x34 | MOD_SHIFT},	// Combining Tilde Below
  {0x0732, 0x1d | MOD_SHIFT},	// Syriac Pthaha Dotted
  {0x0735, 0x1b | MOD_SHIFT},	// Syriac Zqapha Dotted
  {0x0738, 0x06 | MOD_SHIFT},	// Syriac Dotted Zlama Horizontal
  {0x073c, 0x19 | MOD_SHIFT},	// Syriac Hbasa-Esasa Dotted
  {0x073f, 0x05 | MOD_SHIFT},	// Syriac Rwaha
  {0x0739, 0x11 | MOD_SHIFT},	// Syriac Dotted Zlama Angular
  {0x0742, 0x10 | MOD_SHIFT},	// Syriac Rukkakha
  {0x060c, 0x36 | MOD_SHIFT},	// Arabic Comma
  {0x061b, 0x37 | MOD_SHIFT},	// Arabic Semicolon
  {0x061f, 0x38 | MOD_SHIFT},	// Arabic Question Mark
  {0x070f, 0x35},	// Syriac Abbreviation Mark
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
  {0x0714, 0x14},	// Syriac Letter Gamal Garshuni
  {0x0728, 0x1a},	// Syriac Letter Sadhe
  {0x0716, 0x08},	// Syriac Letter Dotless Dalath Rish
  {0x0729, 0x15},	// Syriac Letter Qaph
  {0x0726, 0x17},	// Syriac Letter Pe
  {0x071c, 0x1c},	// Syriac Letter Teth Garshuni
  {0x0725, 0xa0},	// Syriac Letter E
  {0x0717, 0x0c},	// Syriac Letter He
  {0x071e, 0x12},	// Syriac Letter Yudh He
  {0x071a, 0x13},	// Syriac Letter Heth
  {0x0713, 0x2f},	// Syriac Letter Gamal
  {0x0715, 0x30},	// Syriac Letter Dalath
  {0x0706, 0x64},	// Syriac Colon Skewed Left
  {0x072b, 0x04},	// Syriac Letter Shin
  {0x0723, 0x16},	// Syriac Letter Semkath
  {0x071d, 0x07},	// Syriac Letter Yudh
  {0x0712, 0x09},	// Syriac Letter Beth
  {0x0720, 0x0a},	// Syriac Letter Lamadh
  {0x0710, 0x0b},	// Syriac Letter Alaph
  {0x072c, 0x0d},	// Syriac Letter Taw
  {0x0722, 0x0e},	// Syriac Letter Nun
  {0x0721, 0x0f},	// Syriac Letter Mim
  {0x071f, 0x33},	// Syriac Letter Kaph
  {0x071b, 0x34},	// Syriac Letter Teth
  {0x005d, 0x1d},	// Right Square Bracket
  {0x005b, 0x1b},	// Left Square Bracket
  {0x0724, 0x06},	// Syriac Letter Final Semkath
  {0x072a, 0x19},	// Syriac Letter Rish
  {0x0727, 0x05},	// Syriac Letter Reversed Pe
  {0x0700, 0x11},	// Syriac End Of Paragraph
  {0x002e, 0x10},	// Full Stop
  {0x0718, 0x36},	// Syriac Letter Waw
  {0x0719, 0x37},	// Syriac Letter Zain
  {0x0707, 0x38},	// Syriac Colon Skewed Right
};

const DeadkeyLookup kbdsyr1_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_SYR1(kbdsyr1, sizeof kbdsyr1 / sizeof kbdsyr1[0], kbdsyr1_deadkeys, sizeof kbdsyr1_deadkeys / sizeof kbdsyr1_deadkeys[0]);
