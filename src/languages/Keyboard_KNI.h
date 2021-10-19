#include <KeyboardUTF8.h>

// Khmer (NIDA)

const UnicodeLookup kbdkni[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x200d, 0x35 | MOD_ALTGR},	// Zero Width Joiner
  {0x200c, 0x1e | MOD_ALTGR},	// Zero Width Non-Joiner
  {0x0040, 0x1f | MOD_ALTGR},	// Commercial At
  {0x17d1, 0x20 | MOD_ALTGR},	// Khmer Sign Viriam
  {0x0024, 0x21 | MOD_ALTGR},	// Dollar Sign
  {0x20ac, 0x22 | MOD_ALTGR},	// Euro Sign
  {0x17d9, 0x23 | MOD_ALTGR},	// Khmer Sign Phnaek Muan
  {0x17da, 0x24 | MOD_ALTGR},	// Khmer Sign Koomuut
  {0x002a, 0x25 | MOD_ALTGR},	// Asterisk
  {0x007b, 0x26 | MOD_ALTGR},	// Left Curly Bracket
  {0x007d, 0x27 | MOD_ALTGR},	// Right Curly Bracket
  {0x00d7, 0x2d | MOD_ALTGR},	// Multiplication Sign
  {0x17ce, 0x2e | MOD_ALTGR},	// Khmer Sign Kakabat
  {0x17af, 0x08 | MOD_ALTGR},	// Khmer Independent Vowel Qe
  {0x17ab, 0x15 | MOD_ALTGR},	// Khmer Independent Vowel Ry
  {0x17a6, 0x0c | MOD_ALTGR},	// Khmer Independent Vowel Qii
  {0x17b1, 0x12 | MOD_ALTGR},	// Khmer Independent Vowel Qoo Type One
  {0x17b0, 0x13 | MOD_ALTGR},	// Khmer Independent Vowel Qai
  {0x17a9, 0x2f | MOD_ALTGR},	// Khmer Independent Vowel Quu
  {0x17b3, 0x30 | MOD_ALTGR},	// Khmer Independent Vowel Qau
  {0x17d6, 0x33 | MOD_ALTGR},	// Khmer Sign Camnuc Pii Kuuh
  {0x17c8, 0x34 | MOD_ALTGR},	// Khmer Sign Yuukaleapintu
  {0x005c, 0x28 | MOD_ALTGR},	// Reverse Solidus
  {0x002c, 0x36 | MOD_ALTGR},	// Comma
  {0x002e, 0x37 | MOD_ALTGR},	// Full Stop
  {0x002f, 0x38 | MOD_ALTGR},	// Solidus
  {0x00bb, 0x35 | MOD_SHIFT},	// Right-Pointing Double Angle Quotation Mark *
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x17d7, 0x1f | MOD_SHIFT},	// Khmer Sign Lek Too
  {0x0022, 0x20 | MOD_SHIFT},	// Quotation Mark
  {0x17db, 0x21 | MOD_SHIFT},	// Khmer Currency Symbol Riel
  {0x0025, 0x22 | MOD_SHIFT},	// Percent Sign
  {0x17cd, 0x23 | MOD_SHIFT},	// Khmer Sign Toandakhiat
  {0x17d0, 0x24 | MOD_SHIFT},	// Khmer Sign Samyok Sannya
  {0x17cf, 0x25 | MOD_SHIFT},	// Khmer Sign Ahsda
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x17cc, 0x2d | MOD_SHIFT},	// Khmer Sign Robat
  {0x003d, 0x2e | MOD_SHIFT},	// Equals Sign
  {0x1788, 0x14 | MOD_SHIFT},	// Khmer Letter Cho
  {0x17ba, 0x1a | MOD_SHIFT},	// Khmer Vowel Sign Yy
  {0x17c2, 0x08 | MOD_SHIFT},	// Khmer Vowel Sign Ae
  {0x17ac, 0x15 | MOD_SHIFT},	// Khmer Independent Vowel Ryy
  {0x1791, 0x17 | MOD_SHIFT},	// Khmer Letter To
  {0x17bd, 0x1c | MOD_SHIFT},	// Khmer Vowel Sign Ua
  {0x17bc, 0xa0 | MOD_SHIFT},	// Khmer Vowel Sign Uu
  {0x17b8, 0x0c | MOD_SHIFT},	// Khmer Vowel Sign Ii
  {0x17c5, 0x12 | MOD_SHIFT},	// Khmer Vowel Sign Au
  {0x1797, 0x13 | MOD_SHIFT},	// Khmer Letter Pho
  {0x17bf, 0x2f | MOD_SHIFT},	// Khmer Vowel Sign Ya
  {0x17a7, 0x30 | MOD_SHIFT},	// Khmer Independent Vowel Qu
  {0x17c3, 0x16 | MOD_SHIFT},	// Khmer Vowel Sign Ai
  {0x178c, 0x07 | MOD_SHIFT},	// Khmer Letter Do
  {0x1792, 0x09 | MOD_SHIFT},	// Khmer Letter Tho
  {0x17a2, 0x0a | MOD_SHIFT},	// Khmer Letter Qa
  {0x17c7, 0x0b | MOD_SHIFT},	// Khmer Sign Reahmuk
  {0x1789, 0x0d | MOD_SHIFT},	// Khmer Letter Nyo
  {0x1782, 0x0e | MOD_SHIFT},	// Khmer Letter Ko
  {0x17a1, 0x0f | MOD_SHIFT},	// Khmer Letter La
  {0x17c9, 0x34 | MOD_SHIFT},	// Khmer Sign Muusikatoan
  {0x17ad, 0x28 | MOD_SHIFT},	// Khmer Independent Vowel Ly
  {0x178d, 0x1d | MOD_SHIFT},	// Khmer Letter Ttho
  {0x1783, 0x1b | MOD_SHIFT},	// Khmer Letter Kho
  {0x1787, 0x06 | MOD_SHIFT},	// Khmer Letter Co
  {0x1796, 0x05 | MOD_SHIFT},	// Khmer Letter Po
  {0x178e, 0x11 | MOD_SHIFT},	// Khmer Letter Nno
  {0x17c6, 0x10 | MOD_SHIFT},	// Khmer Sign Nikahit
  {0x17d5, 0x37 | MOD_SHIFT},	// Khmer Sign Bariyoosan
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
  {0x00ab, 0x35},	// Left-Pointing Double Angle Quotation Mark *
  {0x17e1, 0x1e},	// Khmer Digit One
  {0x17e2, 0x1f},	// Khmer Digit Two
  {0x17e3, 0x20},	// Khmer Digit Three
  {0x17e4, 0x21},	// Khmer Digit Four
  {0x17e5, 0x22},	// Khmer Digit Five
  {0x17e6, 0x23},	// Khmer Digit Six
  {0x17e7, 0x24},	// Khmer Digit Seven
  {0x17e8, 0x25},	// Khmer Digit Eight
  {0x17e9, 0x26},	// Khmer Digit Nine
  {0x17e0, 0x27},	// Khmer Digit Zero
  {0x17a5, 0x2d},	// Khmer Independent Vowel Qi
  {0x17b2, 0x2e},	// Khmer Independent Vowel Qoo Type Two
  {0x1786, 0x14},	// Khmer Letter Cha
  {0x17b9, 0x1a},	// Khmer Vowel Sign Y
  {0x17c1, 0x08},	// Khmer Vowel Sign E
  {0x179a, 0x15},	// Khmer Letter Ro
  {0x178f, 0x17},	// Khmer Letter Ta
  {0x1799, 0x1c},	// Khmer Letter Yo
  {0x17bb, 0xa0},	// Khmer Vowel Sign U
  {0x17b7, 0x0c},	// Khmer Vowel Sign I
  {0x17c4, 0x12},	// Khmer Vowel Sign Oo
  {0x1795, 0x13},	// Khmer Letter Pha
  {0x17c0, 0x2f},	// Khmer Vowel Sign Ie
  {0x17aa, 0x30},	// Khmer Independent Vowel Quuv
  {0x17b6, 0x04},	// Khmer Vowel Sign Aa
  {0x179f, 0x16},	// Khmer Letter Sa
  {0x178a, 0x07},	// Khmer Letter Da
  {0x1790, 0x09},	// Khmer Letter Tha
  {0x1784, 0x0a},	// Khmer Letter Ngo
  {0x17a0, 0x0b},	// Khmer Letter Ha
  {0x17d2, 0x0d},	// Khmer Sign Coeng
  {0x1780, 0x0e},	// Khmer Letter Ka
  {0x179b, 0x0f},	// Khmer Letter Lo
  {0x17be, 0x33},	// Khmer Vowel Sign Oe
  {0x17cb, 0x34},	// Khmer Sign Bantoc
  {0x17ae, 0x28},	// Khmer Independent Vowel Lyy
  {0x178b, 0x1d},	// Khmer Letter Ttha
  {0x1781, 0x1b},	// Khmer Letter Kha
  {0x1785, 0x06},	// Khmer Letter Ca
  {0x179c, 0x19},	// Khmer Letter Vo
  {0x1794, 0x05},	// Khmer Letter Ba
  {0x1793, 0x11},	// Khmer Letter No
  {0x1798, 0x10},	// Khmer Letter Mo
  {0x17d4, 0x37},	// Khmer Sign Khan
  {0x17ca, 0x38},	// Khmer Sign Triisap
};

const DeadkeyLookup kbdkni_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_KNI(kbdkni, sizeof kbdkni / sizeof kbdkni[0], kbdkni_deadkeys, sizeof kbdkni_deadkeys / sizeof kbdkni_deadkeys[0]);
