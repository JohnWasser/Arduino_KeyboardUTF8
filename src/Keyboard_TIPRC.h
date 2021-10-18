#include <KeyboardUTF8.h>

// Tibetan (PRC)

const UnicodeLookup kbdtiprc[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x0f00, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Syllable Om
  {0x0f76, 0x1e | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Vowel Sign Vocalic R
  {0x0f77, 0x1f | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Vowel Sign Vocalic Rr
  {0x0f78, 0x20 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Vowel Sign Vocalic L
  {0x0f79, 0x21 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Vowel Sign Vocalic Ll
  {0x0f73, 0x0c | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Vowel Sign Ii
  {0x0f09, 0x23 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Bskur Yig Mgo (Kur Yik Go)
  {0x0f0a, 0x24 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Bka- Shog Yig Mgo (Ka Sho Yik Go)
  {0x0f0f, 0x25 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Tsheg Shad (Tsek Shey)
  {0x0f10, 0x26 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Nyis Tsheg Shad (Nyi Tsek Shey)
  {0x0f12, 0x27 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Rgya Gram Shad (Gya Tram Shey)
  {0x0f0c, 0x2d | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Delimiter Tsheg Bstar (Tsek Tar)
  {0x0f13, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Caret -Dzud Rtags Me Long Can (Dzu Ta Me Long Chen)
  {0x0f89, 0x14 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Mchu Can (Chu Chen)
  {0x0f88, 0x1a | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Lce Tsa Can (Che Tsa Chen)
  {0x0fbe, 0x08 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Ku Ru Kha (Kuruka)
  {0x0f6a, 0x15 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Letter Fixed-Form Ra *
  {0x0f9a, 0x17 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Tta
  {0x0fbf, 0x1c | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Ku Ru Kha Bzhi Mig Can (Kuruka Shi Mik Chen)
  {0x0f75, 0xa0 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Vowel Sign Uu
  {0x0fc0, 0x12 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Cantillation Sign Heavy Beat
  {0x0fc1, 0x13 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Cantillation Sign Light Beat
  {0x0fc2, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Cantillation Sign Cang Te-U (Chang Tyu)
  {0x0fc3, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Cantillation Sign Sbub -Chal (Bub Chey)
  {0x0f5c, 0x31 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Letter Dzha
  {0x0fc4, 0x04 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Symbol Dril Bu (Drilbu)
  {0x0fc5, 0x16 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Symbol Rdo Rje (Dorje)
  {0x0f9c, 0x07 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Dda
  {0x0f57, 0x09 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Letter Bha
  {0x0fc6, 0x0a | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Symbol Padma Gdan (Pema Den)
  {0x0fc7, 0x0b | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Symbol Rdo Rje Rgya Gram (Dorje Gya Dram)
  {0x0fc8, 0x0d | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Symbol Phur Pa (Phurba)
  {0x0f43, 0x0e | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Letter Gha
  {0x0fc9, 0x0f | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Symbol Nor Bu (Norbu)
  {0x0fca, 0x33 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Symbol Nor Bu Nyis -Khyil (Norbu Nyi Khyi)
  {0x0fcb, 0x34 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Symbol Nor Bu Gsum -Khyil (Norbu Sum Khyi)
  {0x0fcc, 0x1d | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Symbol Nor Bu Bzhi -Khyil (Norbu Shi Khyi)
  {0x0fb5, 0x1b | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Ssa
  {0x0fb9, 0x06 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Kssa
  {0x0f36, 0x19 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Mark Caret -Dzud Rtags Bzhi Mig Can (Dzu Ta Shi Mig Chen)
  {0x0f82, 0x05 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Nyi Zla Naa Da (Nyi Da Na Da)
  {0x0f9e, 0x11 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Nna
  {0x0f52, 0x10 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Letter Dha
  {0x0f9b, 0x36 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Subjoined Letter Ttha
  {0x0f8b, 0x37 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Gru Med Rgyings (Tru Me Ging)
  {0x0f8a, 0x38 | (MOD_SHIFT | MOD_ALTGR)},	// Tibetan Sign Gru Can Rgyings (Tru Chen Ging)
  {0x0f01, 0x35 | MOD_SHIFT},	// Tibetan Mark Gter Yig Mgo Truncated A (Ter Yik Go A Thung)
  {0x0f2a, 0x1e | MOD_SHIFT},	// Tibetan Digit Half One
  {0x0f2b, 0x1f | MOD_SHIFT},	// Tibetan Digit Half Two
  {0x0f2c, 0x20 | MOD_SHIFT},	// Tibetan Digit Half Three
  {0x0f2d, 0x21 | MOD_SHIFT},	// Tibetan Digit Half Four
  {0x0f2e, 0x22 | MOD_SHIFT},	// Tibetan Digit Half Five
  {0x0f2f, 0x23 | MOD_SHIFT},	// Tibetan Digit Half Six
  {0x0f30, 0x24 | MOD_SHIFT},	// Tibetan Digit Half Seven
  {0x0f31, 0x25 | MOD_SHIFT},	// Tibetan Digit Half Eight
  {0x0f32, 0x26 | MOD_SHIFT},	// Tibetan Digit Half Nine
  {0x0f33, 0x27 | MOD_SHIFT},	// Tibetan Digit Half Zero
  {0x0f3c, 0x2d | MOD_SHIFT},	// Tibetan Mark Ang Khang Gyon (Ang Kang Yun)
  {0x0f3d, 0x2e | MOD_SHIFT},	// Tibetan Mark Ang Khang Gyas (Ang Kang Ye)
  {0x0f15, 0x14 | MOD_SHIFT},	// Tibetan Logotype Sign Chad Rtags (Che Ta)
  {0x0f16, 0x1a | MOD_SHIFT},	// Tibetan Logotype Sign Lhag Rtags (Hlak Ta)
  {0x0f17, 0x08 | MOD_SHIFT},	// Tibetan Astrological Sign Sgra Gcan -Char Rtags (Trachen Char Ta)
  {0x0fbc, 0x15 | MOD_SHIFT},	// Tibetan Subjoined Letter Fixed-Form Ra *
  {0x0f4a, 0x17 | MOD_SHIFT},	// Tibetan Letter Tta
  {0x0fbb, 0x1c | MOD_SHIFT},	// Tibetan Subjoined Letter Fixed-Form Ya *
  {0x0f18, 0xa0 | MOD_SHIFT},	// Tibetan Astrological Sign -Khyud Pa (Kyu Pa)
  {0x0f19, 0x0c | MOD_SHIFT},	// Tibetan Astrological Sign Sdong Tshugs (Dong Tsu)
  {0x0f1a, 0x12 | MOD_SHIFT},	// Tibetan Sign Rdel Dkar Gcig (Deka Chig)
  {0x0f1b, 0x13 | MOD_SHIFT},	// Tibetan Sign Rdel Dkar Gnyis (Deka Nyi)
  {0x0f1c, 0x2f | MOD_SHIFT},	// Tibetan Sign Rdel Dkar Gsum (Deka Sum)
  {0x0f1d, 0x30 | MOD_SHIFT},	// Tibetan Sign Rdel Nag Gcig (Dena Chig)
  {0x0f1e, 0x31 | MOD_SHIFT},	// Tibetan Sign Rdel Nag Gnyis (Dena Nyi)
  {0x0f71, 0x04 | MOD_SHIFT},	// Tibetan Vowel Sign Aa
  {0x0f1f, 0x16 | MOD_SHIFT},	// Tibetan Sign Rdel Dkar Rdel Nag (Deka Dena)
  {0x0f4c, 0x07 | MOD_SHIFT},	// Tibetan Letter Dda
  {0x0f3e, 0x09 | MOD_SHIFT},	// Tibetan Sign Yar Tshes (Yar Tse)
  {0x0f3f, 0x0a | MOD_SHIFT},	// Tibetan Sign Mar Tshes (Mar Tse)
  {0x0fcf, 0x0b | MOD_SHIFT},	// Tibetan Sign Rdel Nag Gsum (Dena Sum)
  {0x0f02, 0x0d | MOD_SHIFT},	// Tibetan Mark Gter Yig Mgo -Um Rnam Bcad Ma (Ter Yik Go Wum Nam Chey Ma)
  {0x0f03, 0x0e | MOD_SHIFT},	// Tibetan Mark Gter Yig Mgo -Um Gter Tsheg Ma (Ter Yik Go Wum Ter Tsek Ma)
  {0x0f06, 0x0f | MOD_SHIFT},	// Tibetan Mark Caret Yig Mgo Phur Shad Ma (Yik Go Pur Shey Ma)
  {0x0f07, 0x33 | MOD_SHIFT},	// Tibetan Mark Yig Mgo Tsheg Shad Ma (Yik Go Tsek Shey Ma)
  {0x0f38, 0x34 | MOD_SHIFT},	// Tibetan Mark Che Mgo (Che Go)
  {0x0f34, 0x1d | MOD_SHIFT},	// Tibetan Mark Bsdus Rtags (Du Ta)
  {0x0f65, 0x1b | MOD_SHIFT},	// Tibetan Letter Ssa
  {0x0f69, 0x06 | MOD_SHIFT},	// Tibetan Letter Kssa
  {0x0f87, 0x19 | MOD_SHIFT},	// Tibetan Sign Yang Rtags (Yang Ta)
  {0x0f86, 0x05 | MOD_SHIFT},	// Tibetan Sign Lci Rtags (Ji Ta)
  {0x0f4e, 0x11 | MOD_SHIFT},	// Tibetan Letter Nna
  {0x0f4b, 0x36 | MOD_SHIFT},	// Tibetan Letter Ttha
  {0x0f3a, 0x37 | MOD_SHIFT},	// Tibetan Mark Gug Rtags Gyon (Gug Ta Yun)
  {0x0f3b, 0x38 | MOD_SHIFT},	// Tibetan Mark Gug Rtags Gyas (Gug Ta Ye)
  {0x0f68, 0x35},	// Tibetan Letter A
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
  {0x0f67, 0x2d},	// Tibetan Letter Ha
  {0x0f5d, 0x2e},	// Tibetan Letter Wa
  {0x0f45, 0x14},	// Tibetan Letter Ca
  {0x0f46, 0x1a},	// Tibetan Letter Cha
  {0x0f7a, 0x08},	// Tibetan Vowel Sign E
  {0x0f62, 0x15},	// Tibetan Letter Ra *
  {0x0f4f, 0x17},	// Tibetan Letter Ta
  {0x0f61, 0x1c},	// Tibetan Letter Ya
  {0x0f74, 0xa0},	// Tibetan Vowel Sign U
  {0x0f72, 0x0c},	// Tibetan Vowel Sign I
  {0x0f7c, 0x12},	// Tibetan Vowel Sign O
  {0x0f55, 0x13},	// Tibetan Letter Pha
  {0x0f59, 0x2f},	// Tibetan Letter Tsa
  {0x0f5a, 0x30},	// Tibetan Letter Tsha
  {0x0f5b, 0x31},	// Tibetan Letter Dza
  {0x0f60, 0x04},	// Tibetan Letter -A
  {0x0f66, 0x16},	// Tibetan Letter Sa
  {0x0f51, 0x07},	// Tibetan Letter Da
  {0x0f56, 0x09},	// Tibetan Letter Ba
  {0x0f44, 0x0a},	// Tibetan Letter Nga
  {0x0f58, 0x0b},	// Tibetan Letter Ma
  {0x0f0b, 0x0d},	// Tibetan Mark Intersyllabic Tsheg (Tsek)
  {0x0f42, 0x0e},	// Tibetan Letter Ga
  {0x0f63, 0x0f},	// Tibetan Letter La
  {0x0f5e, 0x33},	// Tibetan Letter Zha
  {0x0f0d, 0x34},	// Tibetan Mark Shad (Shey)
  {0x0f5f, 0x1d},	// Tibetan Letter Za
  {0x0f64, 0x1b},	// Tibetan Letter Sha
  {0x0f40, 0x06},	// Tibetan Letter Ka
  {0x0f41, 0x19},	// Tibetan Letter Kha
  {0x0f54, 0x05},	// Tibetan Letter Pa
  {0x0f53, 0x11},	// Tibetan Letter Na
  {0x0f50, 0x36},	// Tibetan Letter Tha
  {0x0f47, 0x37},	// Tibetan Letter Ja
  {0x0f49, 0x38},	// Tibetan Letter Nya
};

const DeadkeyLookup kbdtiprc_deadkeys[] PROGMEM = 
{
  {0x0f39, 0x0f39, 0x10 | MOD_SHIFT},	// ༹  accent
  {0x0f4d, 0x0f4d, 0x10 | MOD_SHIFT},	// ཌྷ  accent
  {0x0f93, 0x0f93, 0x10 | MOD_SHIFT},	// ྒྷ  accent
  {0x0fa2, 0x0fa2, 0x10 | MOD_SHIFT},	// ྡྷ  accent
  {0x0f9d, 0x0f9d, 0x10 | MOD_SHIFT},	// ྜྷ  accent
  {0x0fa7, 0x0fa7, 0x10 | MOD_SHIFT},	// ྦྷ  accent
  {0x0fac, 0x0fac, 0x10 | MOD_SHIFT},	// ྫྷ  accent
  {0x0f84, 0x0f84, 0x10},	// ྄  accent
  {0x0f7f, 0x0f7f, 0x10},	// ཿ  accent
  {0x0f85, 0x0f85, 0x10},	// ྅  accent
  {0x0f04, 0x0f04, 0x10},	// ༄  accent
  {0x0f05, 0x0f05, 0x10},	// ༅  accent
  {0x0f08, 0x0f08, 0x10},	// ༈  accent
  {0x0f0e, 0x0f0e, 0x10},	// ༎  accent
  {0x0f11, 0x0f11, 0x10},	// ༑  accent
  {0x0f14, 0x0f14, 0x10},	// ༔  accent
  {0x0f35, 0x0f35, 0x10},	// ༵  accent
  {0x0f37, 0x0f37, 0x10},	// ༷  accent
  {0x0f83, 0x0f83, 0x10},	// ྃ  accent
  {0x0f7e, 0x0f7e, 0x10},	// ཾ  accent
  {0x0f80, 0x0f80, 0x10},	// ྀ  accent
  {0x0f7b, 0x0f7b, 0x10},	// ཻ  accent
  {0x0f7d, 0x0f7d, 0x10},	// ཽ  accent
  {0x0f90, 0x0f90, 0x10},	// ྐ  accent
  {0x0f91, 0x0f91, 0x10},	// ྑ  accent
  {0x0f92, 0x0f92, 0x10},	// ྒ  accent
  {0x0f94, 0x0f94, 0x10},	// ྔ  accent
  {0x0f95, 0x0f95, 0x10},	// ྕ  accent
  {0x0f96, 0x0f96, 0x10},	// ྖ  accent
  {0x0f97, 0x0f97, 0x10},	// ྗ  accent
  {0x0f99, 0x0f99, 0x10},	// ྙ  accent
  {0x0f9f, 0x0f9f, 0x10},	// ྟ  accent
  {0x0fa0, 0x0fa0, 0x10},	// ྠ  accent
  {0x0fa1, 0x0fa1, 0x10},	// ྡ  accent
  {0x0fa3, 0x0fa3, 0x10},	// ྣ  accent
  {0x0fa4, 0x0fa4, 0x10},	// ྤ  accent
  {0x0fa5, 0x0fa5, 0x10},	// ྥ  accent
  {0x0fa6, 0x0fa6, 0x10},	// ྦ  accent
  {0x0fa8, 0x0fa8, 0x10},	// ྨ  accent
  {0x0fa9, 0x0fa9, 0x10},	// ྩ  accent
  {0x0faa, 0x0faa, 0x10},	// ྪ  accent
  {0x0fab, 0x0fab, 0x10},	// ྫ  accent
  {0x0fba, 0x0fba, 0x10},	// ྺ  accent
  {0x0fad, 0x0fad, 0x10},	// ྭ  accent
  {0x0fae, 0x0fae, 0x10},	// ྮ  accent
  {0x0faf, 0x0faf, 0x10},	// ྯ  accent
  {0x0fb0, 0x0fb0, 0x10},	// ྰ  accent
  {0x0fb1, 0x0fb1, 0x10},	// ྱ  accent
  {0x0fb2, 0x0fb2, 0x10},	// ྲ  accent
  {0x0fb3, 0x0fb3, 0x10},	// ླ  accent
  {0x0fb4, 0x0fb4, 0x10},	// ྴ  accent
  {0x0fb6, 0x0fb6, 0x10},	// ྶ  accent
  {0x0fb7, 0x0fb7, 0x10},	// ྷ  accent
  {0x0fb8, 0x0fb8, 0x10},	// ྸ  accent
};

KeyboardUTF8 Keyboard_TIPRC(kbdtiprc, sizeof kbdtiprc / sizeof kbdtiprc[0], kbdtiprc_deadkeys, sizeof kbdtiprc_deadkeys / sizeof kbdtiprc_deadkeys[0]);
