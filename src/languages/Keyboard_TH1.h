#include <KeyboardUTF8.h>

// Thai Pattachote

const UnicodeLookup kbdth1[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0e3f, 0x35 | MOD_SHIFT},	// Thai Currency Symbol Baht
  {0x002b, 0x1e | MOD_SHIFT},	// Plus Sign
  {0x0022, 0x1f | MOD_SHIFT},	// Quotation Mark
  {0x002f, 0x20 | MOD_SHIFT},	// Solidus
  {0x002c, 0x21 | MOD_SHIFT},	// Comma
  {0x003f, 0x22 | MOD_SHIFT},	// Question Mark
  {0x0e38, 0x23 | MOD_SHIFT},	// Thai Character Sara U
  {0x005f, 0x35},	// Low Line
  {0x002e, 0x25 | MOD_SHIFT},	// Full Stop
  {0x0028, 0x26 | MOD_SHIFT},	// Left Parenthesis
  {0x0029, 0x27 | MOD_SHIFT},	// Right Parenthesis
  {0x002d, 0x2d | MOD_SHIFT},	// Hyphen-Minus
  {0x0025, 0x2e | MOD_SHIFT},	// Percent Sign
  {0x0e4a, 0x14 | MOD_SHIFT},	// Thai Character Mai Tri
  {0x0e24, 0x1a | MOD_SHIFT},	// Thai Character Ru
  {0x0e46, 0x08 | MOD_SHIFT},	// Thai Character Maiyamok (Mai Yamok)
  {0x0e0d, 0x15 | MOD_SHIFT},	// Thai Character Yo Ying
  {0x0e29, 0x17 | MOD_SHIFT},	// Thai Character So Rusi
  {0x0e36, 0x1c | MOD_SHIFT},	// Thai Character Sara Ue
  {0x0e1d, 0xa0 | MOD_SHIFT},	// Thai Character Fo Fa
  {0x0e0b, 0x0c | MOD_SHIFT},	// Thai Character So So
  {0x0e16, 0x12 | MOD_SHIFT},	// Thai Character Tho Thung
  {0x0e12, 0x13 | MOD_SHIFT},	// Thai Character Tho Phuthao
  {0x0e2f, 0x2f | MOD_SHIFT},	// Thai Character Paiyannoi (Paiyan Noi)
  {0x0e26, 0x30 | MOD_SHIFT},	// Thai Character Lu
  {0x0e4d, 0x64 | MOD_SHIFT},	// Thai Character Nikhahit (Nikkhahit)
  {0x0e4b, 0x04 | MOD_SHIFT},	// Thai Character Mai Chattawa
  {0x0e18, 0x16 | MOD_SHIFT},	// Thai Character Tho Thong
  {0x0e33, 0x07 | MOD_SHIFT},	// Thai Character Sara Am
  {0x0e13, 0x09 | MOD_SHIFT},	// Thai Character No Nen
  {0x0e4c, 0x0a | MOD_SHIFT},	// Thai Character Thanthakhat
  {0x0e37, 0x0b | MOD_SHIFT},	// Thai Character Sara Uee (Sara Uue)
  {0x0e1c, 0x0d | MOD_SHIFT},	// Thai Character Pho Phung
  {0x0e0a, 0x0e | MOD_SHIFT},	// Thai Character Cho Chang
  {0x0e42, 0x0f | MOD_SHIFT},	// Thai Character Sara O
  {0x0e06, 0x33 | MOD_SHIFT},	// Thai Character Kho Rakhang
  {0x0e11, 0x34 | MOD_SHIFT},	// Thai Character Tho Nangmontho
  {0x0e0e, 0x1d | MOD_SHIFT},	// Thai Character Do Chada
  {0x0e0f, 0x1b | MOD_SHIFT},	// Thai Character To Patak
  {0x0e10, 0x06 | MOD_SHIFT},	// Thai Character Tho Than
  {0x0e20, 0x19 | MOD_SHIFT},	// Thai Character Pho Samphao
  {0x0e31, 0x0a},	// Thai Character Mai Han-Akat
  {0x0e28, 0x11 | MOD_SHIFT},	// Thai Character So Sala
  {0x0e2e, 0x10 | MOD_SHIFT},	// Thai Character Ho Nokhuk
  {0x0e1f, 0x36 | MOD_SHIFT},	// Thai Character Fo Fan
  {0x0e09, 0x37 | MOD_SHIFT},	// Thai Character Cho Ching
  {0x0e2c, 0x38 | MOD_SHIFT},	// Thai Character Lo Chula
  {0x003d, 0x1e},	// Equals Sign
  {0x0e52, 0x1f},	// Thai Digit Two
  {0x0e53, 0x20},	// Thai Digit Three
  {0x0e54, 0x21},	// Thai Digit Four
  {0x0e55, 0x22},	// Thai Digit Five
  {0x0e39, 0x23},	// Thai Character Sara Uu
  {0x0e57, 0x24},	// Thai Digit Seven
  {0x0e58, 0x25},	// Thai Digit Eight
  {0x0e59, 0x26},	// Thai Digit Nine
  {0x0e50, 0x27},	// Thai Digit Zero
  {0x0e51, 0x2d},	// Thai Digit One
  {0x0e56, 0x2e},	// Thai Digit Six
  {0x0e47, 0x14},	// Thai Character Maitaikhu (Mai Taikhu)
  {0x0e15, 0x1a},	// Thai Character To Tao
  {0x0e22, 0x08},	// Thai Character Yo Yak
  {0x0e2d, 0x15},	// Thai Character O Ang
  {0x0e23, 0x17},	// Thai Character Ro Rua
  {0x0e48, 0x1c},	// Thai Character Mai Ek
  {0x0e14, 0xa0},	// Thai Character Do Dek
  {0x0e21, 0x0c},	// Thai Character Mo Ma
  {0x0e27, 0x12},	// Thai Character Wo Waen
  {0x0e41, 0x13},	// Thai Character Sara Ae
  {0x0e43, 0x2f},	// Thai Character Sara Ai Maimuan (Sara Ai Mai Muan)
  {0x0e0c, 0x30},	// Thai Character Cho Choe
  {0xf8c7, 0x64},	// Private Use 
  {0x0e49, 0x04},	// Thai Character Mai Tho
  {0x0e17, 0x16},	// Thai Character Tho Thahan
  {0x0e07, 0x07},	// Thai Character Ngo Ngu
  {0x0e01, 0x09},	// Thai Character Ko Kai
  {0x0e35, 0x0b},	// Thai Character Sara Ii
  {0x0e32, 0x0d},	// Thai Character Sara Aa
  {0x0e19, 0x0e},	// Thai Character No Nu
  {0x0e40, 0x0f},	// Thai Character Sara E
  {0x0e44, 0x33},	// Thai Character Sara Ai Maimalai (Sara Ai Mai Malai)
  {0x0e02, 0x34},	// Thai Character Kho Khai
  {0x0e1a, 0x1d},	// Thai Character Bo Baimai
  {0x0e1b, 0x1b},	// Thai Character Po Pla
  {0x0e25, 0x06},	// Thai Character Lo Ling
  {0x0e2b, 0x19},	// Thai Character Ho Hip
  {0x0e34, 0x05},	// Thai Character Sara I
  {0x0e04, 0x11},	// Thai Character Kho Khwai
  {0x0e2a, 0x10},	// Thai Character So Sua
  {0x0e30, 0x36},	// Thai Character Sara A
  {0x0e08, 0x37},	// Thai Character Cho Chan
  {0x0e1e, 0x38},	// Thai Character Pho Phan
};

const DeadkeyLookup kbdth1_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_TH1(kbdth1, sizeof kbdth1 / sizeof kbdth1[0], kbdth1_deadkeys, sizeof kbdth1_deadkeys / sizeof kbdth1_deadkeys[0]);
