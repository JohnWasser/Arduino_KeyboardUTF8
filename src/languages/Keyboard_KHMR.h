#include <KeyboardUTF8.h>

// Khmer

const UnicodeLookup kbdkhmr[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x19e0, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pathamasat
  {0x19e1, 0x1e | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Muoy Koet
  {0x19e2, 0x1f | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pii Koet
  {0x19e3, 0x20 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Bei Koet
  {0x19e4, 0x21 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Buon Koet
  {0x19e5, 0x22 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pram Koet
  {0x19e6, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pram-Muoy Koet
  {0x19e7, 0x24 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pram-Pii Koet
  {0x19e8, 0x25 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pram-Bei Koet
  {0x19e9, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pram-Buon Koet
  {0x19ea, 0x27 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap Koet
  {0x19eb, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap-Muoy Koet
  {0x19ec, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap-Pii Koet
  {0x19ed, 0x14 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap-Bei Koet
  {0x19ee, 0x1a | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap-Buon Koet
  {0x19ef, 0x08 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap-Pram Koet
  {0x17f0, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Lek Attak Son
  {0x17f1, 0x17 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Lek Attak Muoy
  {0x17f2, 0x1c | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Lek Attak Pii
  {0x17f3, 0xa0 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Lek Attak Bei
  {0x17f4, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Lek Attak Buon
  {0x17f5, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Lek Attak Pram
  {0x17f6, 0x13 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Lek Attak Pram-Muoy
  {0x17f7, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Lek Attak Pram-Pii
  {0x17f8, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Lek Attak Pram-Bei
  {0x19f0, 0x04 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Tuteyasat
  {0x19f1, 0x16 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Muoy Roc
  {0x19f2, 0x07 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pii Roc
  {0x19f3, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Bei Roc
  {0x19f4, 0x0a | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Buon Roc
  {0x19f5, 0x0b | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pram Roc
  {0x19f6, 0x0d | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pram-Muoy Roc
  {0x19f7, 0x0e | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pram-Pii Roc
  {0x19f8, 0x0f | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pram-Bei Roc
  {0x19f9, 0x33 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Pram-Buon Roc
  {0x19fa, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap Roc
  {0x17f9, 0x28 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Lek Attak Pram-Buon
  {0x19fb, 0x1d | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap-Muoy Roc
  {0x19fc, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap-Pii Roc
  {0x19fd, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap-Bei Roc
  {0x19fe, 0x19 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap-Buon Roc
  {0x19ff, 0x05 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Symbol Dap-Pram Roc
  {0x179d, 0x37 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Letter Sha
  {0x179e, 0x38 | (MOD_SHIFT | MOD_ALTGR)},	// Khmer Letter Sso
  {0x17d9, 0x35 | MOD_ALTGR},	// Khmer Sign Phnaek Muan
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
  {0x007b, 0x2d | MOD_ALTGR},	// Left Curly Bracket
  {0x007d, 0x2e | MOD_ALTGR},	// Right Curly Bracket
  {0x002a, 0x14 | MOD_ALTGR},	// Asterisk
  {0x17af, 0x08 | MOD_ALTGR},	// Khmer Independent Vowel Qe
  {0x17ab, 0x15 | MOD_ALTGR},	// Khmer Independent Vowel Ry
  {0x17a6, 0x17 | MOD_ALTGR},	// Khmer Independent Vowel Qii
  {0x17a7, 0xa0 | MOD_ALTGR},	// Khmer Independent Vowel Qu
  {0x17a5, 0x0c | MOD_ALTGR},	// Khmer Independent Vowel Qi
  {0x17b1, 0x12 | MOD_ALTGR},	// Khmer Independent Vowel Qoo Type One
  {0x17b3, 0x13 | MOD_ALTGR},	// Khmer Independent Vowel Qau
  {0x005b, 0x2f | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x30 | MOD_ALTGR},	// Right Square Bracket
  {0x17a9, 0x04 | MOD_ALTGR},	// Khmer Independent Vowel Quu
  {0x17aa, 0x16 | MOD_ALTGR},	// Khmer Independent Vowel Quuv
  {0x17ae, 0x0d | MOD_ALTGR},	// Khmer Independent Vowel Lyy
  {0x17ad, 0x0e | MOD_ALTGR},	// Khmer Independent Vowel Ly
  {0x17b0, 0x0f | MOD_ALTGR},	// Khmer Independent Vowel Qai
  {0x003b, 0x33 | MOD_ALTGR},	// Semicolon
  {0x17dd, 0x34 | MOD_ALTGR},	// Khmer Sign Atthacan
  {0x17da, 0x28 | MOD_ALTGR},	// Khmer Sign Koomuut
  {0x0023, 0x1d | MOD_ALTGR},	// Number Sign
  {0x0040, 0x1b | MOD_ALTGR},	// Commercial At
  {0x0026, 0x06 | MOD_ALTGR},	// Ampersand
  {0x0024, 0x19 | MOD_ALTGR},	// Dollar Sign
  {0x0025, 0x05 | MOD_ALTGR},	// Percent Sign
  {0x0028, 0x11 | MOD_ALTGR},	// Left Parenthesis
  {0x0029, 0x10 | MOD_ALTGR},	// Right Parenthesis
  {0x2039, 0x36 | MOD_ALTGR},	// Single Left-Pointing Angle Quotation Mark
  {0x203a, 0x37 | MOD_ALTGR},	// Single Right-Pointing Angle Quotation Mark
  {0x17d5, 0x38 | MOD_ALTGR},	// Khmer Sign Bariyoosan
  {0x200d, 0x35 | MOD_SHIFT},	// Zero Width Joiner
  {0x0021, 0x1e | MOD_SHIFT},	// Exclamation Mark
  {0x17d7, 0x1f | MOD_SHIFT},	// Khmer Sign Lek Too
  {0x17ca, 0x20 | MOD_SHIFT},	// Khmer Sign Triisap
  {0x17db, 0x21 | MOD_SHIFT},	// Khmer Currency Symbol Riel
  {0x17d0, 0x22 | MOD_SHIFT},	// Khmer Sign Samyok Sannya
  {0x17cc, 0x23 | MOD_SHIFT},	// Khmer Sign Robat
  {0x17cd, 0x24 | MOD_SHIFT},	// Khmer Sign Toandakhiat
  {0x17cf, 0x25 | MOD_SHIFT},	// Khmer Sign Ahsda
  {0x17ce, 0x26 | MOD_SHIFT},	// Khmer Sign Kakabat
  {0x17d1, 0x27 | MOD_SHIFT},	// Khmer Sign Viriam
  {0x005f, 0x2d | MOD_SHIFT},	// Low Line
  {0x002b, 0x2e | MOD_SHIFT},	// Plus Sign
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
  {0x17c0, 0x30 | MOD_SHIFT},	// Khmer Vowel Sign Ie
  {0x17c3, 0x04 | MOD_SHIFT},	// Khmer Vowel Sign Ai
  {0x178c, 0x07 | MOD_SHIFT},	// Khmer Letter Do
  {0x1792, 0x09 | MOD_SHIFT},	// Khmer Letter Tho
  {0x17c7, 0x0b | MOD_SHIFT},	// Khmer Sign Reahmuk
  {0x1782, 0x0e | MOD_SHIFT},	// Khmer Letter Ko
  {0x17a1, 0x0f | MOD_SHIFT},	// Khmer Letter La
  {0x17d6, 0x33 | MOD_SHIFT},	// Khmer Sign Camnuc Pii Kuuh
  {0x17c9, 0x34 | MOD_SHIFT},	// Khmer Sign Muusikatoan
  {0x002f, 0x28 | MOD_SHIFT},	// Solidus
  {0x178d, 0x1d | MOD_SHIFT},	// Khmer Letter Ttho
  {0x1783, 0x1b | MOD_SHIFT},	// Khmer Letter Kho
  {0x1787, 0x06 | MOD_SHIFT},	// Khmer Letter Co
  {0x1796, 0x05 | MOD_SHIFT},	// Khmer Letter Po
  {0x178e, 0x11 | MOD_SHIFT},	// Khmer Letter Nno
  {0x17c6, 0x10 | MOD_SHIFT},	// Khmer Sign Nikahit
  {0x002c, 0x36 | MOD_SHIFT},	// Comma
  {0x002e, 0x37 | MOD_SHIFT},	// Full Stop
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
  {0x200c, 0x35},	// Zero Width Non-Joiner
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
  {0x002d, 0x2d},	// Hyphen-Minus
  {0x003d, 0x2e},	// Equals Sign
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
  {0x17be, 0x2f},	// Khmer Vowel Sign Oe
  {0x17bf, 0x30},	// Khmer Vowel Sign Ya
  {0x17b6, 0x04},	// Khmer Vowel Sign Aa
  {0x179f, 0x16},	// Khmer Letter Sa
  {0x178a, 0x07},	// Khmer Letter Da
  {0x1790, 0x09},	// Khmer Letter Tha
  {0x1784, 0x0a},	// Khmer Letter Ngo
  {0x17a0, 0x0b},	// Khmer Letter Ha
  {0x1789, 0x0d},	// Khmer Letter Nyo
  {0x1780, 0x0e},	// Khmer Letter Ka
  {0x179b, 0x0f},	// Khmer Letter Lo
  {0x17c8, 0x33},	// Khmer Sign Yuukaleapintu
  {0x17cb, 0x34},	// Khmer Sign Bantoc
  {0x005c, 0x28},	// Reverse Solidus
  {0x178b, 0x1d},	// Khmer Letter Ttha
  {0x1781, 0x1b},	// Khmer Letter Kha
  {0x1785, 0x06},	// Khmer Letter Ca
  {0x179c, 0x19},	// Khmer Letter Vo
  {0x1794, 0x05},	// Khmer Letter Ba
  {0x1793, 0x11},	// Khmer Letter No
  {0x1798, 0x10},	// Khmer Letter Mo
  {0x17a2, 0x36},	// Khmer Letter Qa
  {0x17d4, 0x37},	// Khmer Sign Khan
  {0x200b, 0x38},	// Zero Width Space
};

const DeadkeyLookup kbdkhmr_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_KHMR(kbdkhmr, sizeof kbdkhmr / sizeof kbdkhmr[0], kbdkhmr_deadkeys, sizeof kbdkhmr_deadkeys / sizeof kbdkhmr_deadkeys[0]);
