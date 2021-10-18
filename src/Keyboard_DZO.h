#include <KeyboardUTF8.h>

// Dzongkha

const UnicodeLookup kbddzo[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0fd0, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Bska- Shog Gi Mgo Rgyan (Ka Shog Gi Go Gyen)
  {0x0fd3, 0x1e | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Initial Brda Rnying Yig Mgo Mdun Ma
  {0x0fd4, 0x1f | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Closing Brda Rnying Yig Mgo Sgab Ma
  {0x0f3a, 0x20 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Gug Rtags Gyon (Gug Ta Yun)
  {0x0f3b, 0x21 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Gug Rtags Gyas (Gug Ta Ye)
  {0x0f85, 0x22 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Paluta
  {0x0f01, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Gter Yig Mgo Truncated A (Ter Yik Go A Thung)
  {0x0f8a, 0x24 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Gru Can Rgyings (Tru Chen Ging)
  {0x002a, 0x25 | (MOD_SHIFT | MOD_ALTGR)},	// Asterisk
  {0x0fd2, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Nyis Tsheg
  {0x002b, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Plus Sign
  {0x0f8d, 0x14 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Sign Lce Tsa Can
  {0x0f8e, 0x1a | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Sign Mchu Can
  {0x0f8f, 0x08 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Sign Inverted Mchu Can
  {0x0f82, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Nyi Zla Naa Da (Nyi Da Na Da)
  {0x0f17, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Astrological Sign Sgra Gcan -Char Rtags (Trachen Char Ta)
  {0x0f18, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Astrological Sign -Khyud Pa (Kyu Pa)
  {0x0f19, 0x13 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Astrological Sign Sdong Tshugs (Dong Tsu)
  {0x0f3f, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Mar Tshes (Mar Tse)
  {0x0f3e, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Yar Tshes (Yar Tse)
  {0x0f9a, 0x04 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Tta
  {0x0f9b, 0x16 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Ttha
  {0x0f9c, 0x07 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Dda
  {0x0f9e, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Nna
  {0x0f35, 0x0d | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Ngas Bzung Nyi Zla (Nge Zung Nyi Da)
  {0x0f87, 0x0e | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Yang Rtags (Yang Ta)
  {0x0f86, 0x0f | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Lci Rtags (Ji Ta)
  {0x003a, 0x33 | (MOD_SHIFT | MOD_ALTGR)},	// Colon
  {0x0022, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Quotation Mark
  {0x0fba, 0x28 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Fixed-Form Wa *
  {0x0f36, 0x1d | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Caret -Dzud Rtags Bzhi Mig Can (Dzu Ta Shi Mig Chen)
  {0x0fbf, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Ku Ru Kha Bzhi Mig Can (Kuruka Shi Mik Chen)
  {0x0fb0, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter -A
  {0x0fbb, 0x19 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Fixed-Form Ya *
  {0x0fbc, 0x05 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Fixed-Form Ra *
  {0x0fb5, 0x10 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Ssa
  {0x0fd9, 0x36 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Leading Mchan Rtags
  {0x0fda, 0x37 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Trailing Mchan Rtags
  {0x003f, 0x38 | (MOD_SHIFT | MOD_ALTGR)},	// Question Mark
  {0x0fd1, 0x35 | MOD_ALTGR},	// Tibetan Mark Mnyam Yig Gi Mgo Rgyan (Nyam Yig Gi Go Gyen)
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
  {0x002d, 0x2d | MOD_ALTGR},	// Hyphen-Minus
  {0x003d, 0x2e | MOD_ALTGR},	// Equals Sign
  {0x0f88, 0x14 | MOD_ALTGR},	// Tibetan Sign Lce Tsa Can (Che Tsa Chen)
  {0x0f89, 0x1a | MOD_ALTGR},	// Tibetan Sign Mchu Can (Chu Chen)
  {0x0f8c, 0x08 | MOD_ALTGR},	// Tibetan Sign Inverted Mchu Can
  {0x0f83, 0x15 | MOD_ALTGR},	// Tibetan Sign Sna Ldan (Nan De)
  {0x0f1a, 0x17 | MOD_ALTGR},	// Tibetan Sign Rdel Dkar Gcig (Deka Chig)
  {0x0f1b, 0x1c | MOD_ALTGR},	// Tibetan Sign Rdel Dkar Gnyis (Deka Nyi)
  {0x0f1c, 0xa0 | MOD_ALTGR},	// Tibetan Sign Rdel Dkar Gsum (Deka Sum)
  {0x0f1d, 0x0c | MOD_ALTGR},	// Tibetan Sign Rdel Nag Gcig (Dena Chig)
  {0x0f1e, 0x12 | MOD_ALTGR},	// Tibetan Sign Rdel Nag Gnyis (Dena Nyi)
  {0x0f1f, 0x13 | MOD_ALTGR},	// Tibetan Sign Rdel Dkar Rdel Nag (Deka Dena)
  {0x0028, 0x2f | MOD_ALTGR},	// Left Parenthesis
  {0x0029, 0x30 | MOD_ALTGR},	// Right Parenthesis
  {0x0f4a, 0x04 | MOD_ALTGR},	// Tibetan Letter Tta
  {0x0f4b, 0x16 | MOD_ALTGR},	// Tibetan Letter Ttha
  {0x0f4c, 0x07 | MOD_ALTGR},	// Tibetan Letter Dda
  {0x0f4e, 0x09 | MOD_ALTGR},	// Tibetan Letter Nna
  {0x0f37, 0x0d | MOD_ALTGR},	// Tibetan Mark Ngas Bzung Sgor Rtags (Nge Zung Gor Ta)
  {0x0f7e, 0x0e | MOD_ALTGR},	// Tibetan Sign Rjes Su Nga Ro (Je Su Nga Ro)
  {0x0f39, 0x0f | MOD_ALTGR},	// Tibetan Mark Tsa -Phru (Tsa Tru)
  {0x003b, 0x33 | MOD_ALTGR},	// Semicolon
  {0x0027, 0x34 | MOD_ALTGR},	// Apostrophe
  {0x005c, 0x28 | MOD_ALTGR},	// Reverse Solidus
  {0x0f13, 0x1d | MOD_ALTGR},	// Tibetan Mark Caret -Dzud Rtags Me Long Can (Dzu Ta Me Long Chen)
  {0x0fbe, 0x1b | MOD_ALTGR},	// Tibetan Ku Ru Kha (Kuruka)
  {0x0f03, 0x06 | MOD_ALTGR},	// Tibetan Mark Gter Yig Mgo -Um Gter Tsheg Ma (Ter Yik Go Wum Ter Tsek Ma)
  {0x0f0f, 0x19 | MOD_ALTGR},	// Tibetan Mark Tsheg Shad (Tsek Shey)
  {0x0f6a, 0x05 | MOD_ALTGR},	// Tibetan Letter Fixed-Form Ra *
  {0x0f12, 0x11 | MOD_ALTGR},	// Tibetan Mark Rgya Gram Shad (Gya Tram Shey)
  {0x0f65, 0x10 | MOD_ALTGR},	// Tibetan Letter Ssa
  {0x002c, 0x36 | MOD_ALTGR},	// Comma
  {0x002e, 0x37 | MOD_ALTGR},	// Full Stop
  {0x002f, 0x38 | MOD_ALTGR},	// Solidus
  {0x0f0a, 0x35 | MOD_SHIFT},	// Tibetan Mark Bka- Shog Yig Mgo (Ka Sho Yik Go)
  {0x0f04, 0x1e | MOD_SHIFT},	// Tibetan Mark Initial Yig Mgo Mdun Ma (Yik Go Dun Ma)
  {0x0f05, 0x1f | MOD_SHIFT},	// Tibetan Mark Closing Yig Mgo Sgab Ma (Yik Go Kab Ma)
  {0x0f06, 0x20 | MOD_SHIFT},	// Tibetan Mark Caret Yig Mgo Phur Shad Ma (Yik Go Pur Shey Ma)
  {0x0f0e, 0x22 | MOD_SHIFT},	// Tibetan Mark Nyis Shad (Nyi Shey)
  {0x0f08, 0x23 | MOD_SHIFT},	// Tibetan Mark Sbrul Shad (Drul Shey)
  {0x0f38, 0x24 | MOD_SHIFT},	// Tibetan Mark Che Mgo (Che Go)
  {0x0f34, 0x25 | MOD_SHIFT},	// Tibetan Mark Bsdus Rtags (Du Ta)
  {0x0f3c, 0x26 | MOD_SHIFT},	// Tibetan Mark Ang Khang Gyon (Ang Kang Yun)
  {0x0f3d, 0x27 | MOD_SHIFT},	// Tibetan Mark Ang Khang Gyas (Ang Kang Ye)
  {0x0f7f, 0x2d | MOD_SHIFT},	// Tibetan Sign Rnam Bcad (Nam Chey)
  {0x0f11, 0x2e | MOD_SHIFT},	// Tibetan Mark Rin Chen Spungs Shad (Rinchen Pung Shey)
  {0x0f90, 0x14 | MOD_SHIFT},	// Tibetan Subjoined Letter Ka
  {0x0f91, 0x1a | MOD_SHIFT},	// Tibetan Subjoined Letter Kha
  {0x0f92, 0x08 | MOD_SHIFT},	// Tibetan Subjoined Letter Ga
  {0x0f94, 0x15 | MOD_SHIFT},	// Tibetan Subjoined Letter Nga
  {0x0f80, 0x17 | MOD_SHIFT},	// Tibetan Vowel Sign Reversed I
  {0x0f84, 0x1c | MOD_SHIFT},	// Tibetan Mark Halanta
  {0x0f7b, 0xa0 | MOD_SHIFT},	// Tibetan Vowel Sign Ee
  {0x0f7d, 0x0c | MOD_SHIFT},	// Tibetan Vowel Sign Oo
  {0x0f95, 0x12 | MOD_SHIFT},	// Tibetan Subjoined Letter Ca
  {0x0f96, 0x13 | MOD_SHIFT},	// Tibetan Subjoined Letter Cha
  {0x0f97, 0x2f | MOD_SHIFT},	// Tibetan Subjoined Letter Ja
  {0x0f99, 0x30 | MOD_SHIFT},	// Tibetan Subjoined Letter Nya
  {0x0f9f, 0x04 | MOD_SHIFT},	// Tibetan Subjoined Letter Ta
  {0x0fa0, 0x16 | MOD_SHIFT},	// Tibetan Subjoined Letter Tha
  {0x0fa1, 0x07 | MOD_SHIFT},	// Tibetan Subjoined Letter Da
  {0x0fa3, 0x09 | MOD_SHIFT},	// Tibetan Subjoined Letter Na
  {0x0fa4, 0x0a | MOD_SHIFT},	// Tibetan Subjoined Letter Pa
  {0x0fa5, 0x0b | MOD_SHIFT},	// Tibetan Subjoined Letter Pha
  {0x0fa6, 0x0d | MOD_SHIFT},	// Tibetan Subjoined Letter Ba
  {0x0fa8, 0x0e | MOD_SHIFT},	// Tibetan Subjoined Letter Ma
  {0x0fa9, 0x0f | MOD_SHIFT},	// Tibetan Subjoined Letter Tsa
  {0x0faa, 0x33 | MOD_SHIFT},	// Tibetan Subjoined Letter Tsha
  {0x0fab, 0x34 | MOD_SHIFT},	// Tibetan Subjoined Letter Dza
  {0x0fad, 0x28 | MOD_SHIFT},	// Tibetan Subjoined Letter Wa *
  {0x0fae, 0x1d | MOD_SHIFT},	// Tibetan Subjoined Letter Zha
  {0x0faf, 0x1b | MOD_SHIFT},	// Tibetan Subjoined Letter Za
  {0x0f71, 0x06 | MOD_SHIFT},	// Tibetan Vowel Sign Aa
  {0x0fb1, 0x19 | MOD_SHIFT},	// Tibetan Subjoined Letter Ya *
  {0x0fb2, 0x05 | MOD_SHIFT},	// Tibetan Subjoined Letter Ra *
  {0x0fb3, 0x11 | MOD_SHIFT},	// Tibetan Subjoined Letter La
  {0x0fb4, 0x10 | MOD_SHIFT},	// Tibetan Subjoined Letter Sha
  {0x0fb6, 0x36 | MOD_SHIFT},	// Tibetan Subjoined Letter Sa
  {0x0fb7, 0x37 | MOD_SHIFT},	// Tibetan Subjoined Letter Ha
  {0x0fb8, 0x38 | MOD_SHIFT},	// Tibetan Subjoined Letter A
  {0x0f09, 0x35},	// Tibetan Mark Bskur Yig Mgo (Kur Yik Go)
  {0x0f21, 0x1e},	// Tibetan Digit One
  {0x0f22, 0x1f},	// Tibetan Digit Two
  {0x0f23, 0x20},	// Tibetan Digit Three
  {0x0f24, 0x21},	// Tibetan Digit Four
  {0x0f25, 0x22},	// Tibetan Digit Five
  {0x0f26, 0x23},	// Tibetan Digit Six
  {0x0f27, 0x24},	// Tibetan Digit Seven
  {0x0f28, 0x25},	// Tibetan Digit Eight
  {0x0f29, 0x26},	// Tibetan Digit Nine
  {0x0f20, 0x27},	// Tibetan Digit Zero
  {0x0f14, 0x2d},	// Tibetan Mark Gter Tsheg (Ter Tsek)
  {0x0f0d, 0x2e},	// Tibetan Mark Shad (Shey)
  {0x0f40, 0x14},	// Tibetan Letter Ka
  {0x0f41, 0x1a},	// Tibetan Letter Kha
  {0x0f42, 0x08},	// Tibetan Letter Ga
  {0x0f44, 0x15},	// Tibetan Letter Nga
  {0x0f72, 0x17},	// Tibetan Vowel Sign I
  {0x0f74, 0x1c},	// Tibetan Vowel Sign U
  {0x0f7a, 0xa0},	// Tibetan Vowel Sign E
  {0x0f7c, 0x0c},	// Tibetan Vowel Sign O
  {0x0f45, 0x12},	// Tibetan Letter Ca
  {0x0f46, 0x13},	// Tibetan Letter Cha
  {0x0f47, 0x2f},	// Tibetan Letter Ja
  {0x0f49, 0x30},	// Tibetan Letter Nya
  {0x0f4f, 0x04},	// Tibetan Letter Ta
  {0x0f50, 0x16},	// Tibetan Letter Tha
  {0x0f51, 0x07},	// Tibetan Letter Da
  {0x0f53, 0x09},	// Tibetan Letter Na
  {0x0f54, 0x0a},	// Tibetan Letter Pa
  {0x0f55, 0x0b},	// Tibetan Letter Pha
  {0x0f56, 0x0d},	// Tibetan Letter Ba
  {0x0f58, 0x0e},	// Tibetan Letter Ma
  {0x0f59, 0x0f},	// Tibetan Letter Tsa
  {0x0f5a, 0x33},	// Tibetan Letter Tsha
  {0x0f5b, 0x34},	// Tibetan Letter Dza
  {0x0f5d, 0x28},	// Tibetan Letter Wa
  {0x0f5e, 0x1d},	// Tibetan Letter Zha
  {0x0f5f, 0x1b},	// Tibetan Letter Za
  {0x0f60, 0x06},	// Tibetan Letter -A
  {0x0f61, 0x19},	// Tibetan Letter Ya
  {0x0f62, 0x05},	// Tibetan Letter Ra *
  {0x0f63, 0x11},	// Tibetan Letter La
  {0x0f64, 0x10},	// Tibetan Letter Sha
  {0x0f66, 0x36},	// Tibetan Letter Sa
  {0x0f67, 0x37},	// Tibetan Letter Ha
  {0x0f68, 0x38},	// Tibetan Letter A
};

const DeadkeyLookup kbddzo_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_DZO(kbddzo, sizeof kbddzo / sizeof kbddzo[0], kbddzo_deadkeys, sizeof kbddzo_deadkeys / sizeof kbddzo_deadkeys[0]);
