#include <KeyboardUTF8.h>

// Sinhala - Wij 9

const UnicodeLookup kbdsw09[] PROGMEM = 
{
  {0x0008, 0x2a},	// Backspace
  {0x0009, 0x2b},	// Tab
  {0x000a, 0x28},	// LF (Enter)
  {0x000d, 0x28},	// CR (Enter)
  {0x0020, 0x2c},	// Spacebar
  {0x007e, 0x35 | (MOD_SHIFT | MOD_ALTGR)},	// Tilde
  {0x00b9, 0x1e | (MOD_SHIFT | MOD_ALTGR)},	// Superscript One
  {0x00a3, 0x21 | (MOD_SHIFT | MOD_ALTGR)},	// Pound Sign
  {0x00f7, 0x2e | (MOD_SHIFT | MOD_ALTGR)},	// Division Sign
  {0x007b, 0x2f | (MOD_SHIFT | MOD_ALTGR)},	// Left Curly Bracket
  {0x007d, 0x30 | (MOD_SHIFT | MOD_ALTGR)},	// Right Curly Bracket
  {0x007c, 0x31 | (MOD_SHIFT | MOD_ALTGR)},	// Vertical Line
  {0x003c, 0x36 | (MOD_SHIFT | MOD_ALTGR)},	// Less-Than Sign
  {0x003e, 0x37 | (MOD_SHIFT | MOD_ALTGR)},	// Greater-Than Sign
  {0x0060, 0x35 | MOD_ALTGR},	// Grave Accent
  {0x00a1, 0x1e | MOD_ALTGR},	// Inverted Exclamation Mark
  {0x00b2, 0x1f | MOD_ALTGR},	// Superscript Two
  {0x00b3, 0x20 | MOD_ALTGR},	// Superscript Three
  {0x00a4, 0x21 | MOD_ALTGR},	// Currency Sign
  {0x20ac, 0x22 | MOD_ALTGR},	// Euro Sign
  {0x00bc, 0x23 | MOD_ALTGR},	// Vulgar Fraction One Quarter
  {0x00bd, 0x24 | MOD_ALTGR},	// Vulgar Fraction One Half
  {0x00be, 0x25 | MOD_ALTGR},	// Vulgar Fraction Three Quarters
  {0x2018, 0x26 | MOD_ALTGR},	// Left Single Quotation Mark
  {0x2019, 0x27 | MOD_ALTGR},	// Right Single Quotation Mark
  {0x00a5, 0x2d | MOD_ALTGR},	// Yen Sign
  {0x00d7, 0x2e | MOD_ALTGR},	// Multiplication Sign
  {0x0dde, 0x14 | MOD_ALTGR},	// Sinhala Vowel Sign Kombuva Haa Gayanukitta
  {0x0ddc, 0x1a | MOD_ALTGR},	// Sinhala Vowel Sign Kombuva Haa Aela-Pilla
  {0x0ddb, 0x08 | MOD_ALTGR},	// Sinhala Vowel Sign Kombu Deka
  {0x0dda, 0x15 | MOD_ALTGR},	// Sinhala Vowel Sign Diga Kombuva
  {0x0d92, 0x17 | MOD_ALTGR},	// Sinhala Letter Eeyanna
  {0x0d8e, 0x1c | MOD_ALTGR},	// Sinhala Letter Iruuyanna
  {0x0db3, 0x12 | MOD_ALTGR},	// Sinhala Letter Sanyaka Dayanna
  {0x005b, 0x2f | MOD_ALTGR},	// Left Square Bracket
  {0x005d, 0x30 | MOD_ALTGR},	// Right Square Bracket
  {0x005c, 0x31 | MOD_ALTGR},	// Reverse Solidus
  {0x0df3, 0x04 | MOD_ALTGR},	// Sinhala Vowel Sign Diga Gayanukitta
  {0x0ddd, 0x16 | MOD_ALTGR},	// Sinhala Vowel Sign Kombuva Haa Diga Aela-Pilla
  {0x0df2, 0x07 | MOD_ALTGR},	// Sinhala Vowel Sign Diga Gaetta-Pilla
  {0x0d86, 0x09 | MOD_ALTGR},	// Sinhala Letter Aayanna
  {0x0d87, 0x0a | MOD_ALTGR},	// Sinhala Letter Aeyanna
  {0x0d88, 0x0b | MOD_ALTGR},	// Sinhala Letter Aeeyanna
  {0x200d, 0x0d | MOD_ALTGR},	// Zero Width Joiner
  {0x0d93, 0x0e | MOD_ALTGR},	// Sinhala Letter Aiyanna
  {0x0d95, 0x0f | MOD_ALTGR},	// Sinhala Letter Ooyanna
  {0x0d96, 0x33 | MOD_ALTGR},	// Sinhala Letter Auyanna
  {0x0df4, 0x34 | MOD_ALTGR},	// Sinhala Punctuation Kunddaliya
  {0x0d8c, 0x1d | MOD_ALTGR},	// Sinhala Letter Uuyanna
  {0x0d9e, 0x1b | MOD_ALTGR},	// Sinhala Letter Kantaja Naasikyaya
  {0x0da6, 0x06 | MOD_ALTGR},	// Sinhala Letter Sanyaka Jayanna
  {0x0dac, 0x19 | MOD_ALTGR},	// Sinhala Letter Sanyaka Ddayanna
  {0x0d90, 0x05 | MOD_ALTGR},	// Sinhala Letter Iluuyanna
  {0x200c, 0x11 | MOD_ALTGR},	// Zero Width Non-Joiner
  {0x0d8f, 0x36 | MOD_ALTGR},	// Sinhala Letter Iluyanna
  {0x0d9f, 0x37 | MOD_ALTGR},	// Sinhala Letter Sanyaka Gayanna
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
  {0x0dd6, 0x14 | MOD_SHIFT},	// Sinhala Vowel Sign Diga Paa-Pilla
  {0x0d8b, 0x1a | MOD_SHIFT},	// Sinhala Letter Uyanna
  {0x0dd1, 0x08 | MOD_SHIFT},	// Sinhala Vowel Sign Diga Aeda-Pilla
  {0x0d8d, 0x15 | MOD_SHIFT},	// Sinhala Letter Iruyanna
  {0x0d94, 0x17 | MOD_SHIFT},	// Sinhala Letter Oyanna
  {0x0dc1, 0x1c | MOD_SHIFT},	// Sinhala Letter Taaluja Sayanna
  {0x0db9, 0xa0 | MOD_SHIFT},	// Sinhala Letter Amba Bayanna
  {0x0dc2, 0x0c | MOD_SHIFT},	// Sinhala Letter Muurdhaja Sayanna
  {0x0db0, 0x12 | MOD_SHIFT},	// Sinhala Letter Mahaapraana Dayanna
  {0x0da1, 0x13 | MOD_SHIFT},	// Sinhala Letter Mahaapraana Cayanna
  {0x0da5, 0x2f | MOD_SHIFT},	// Sinhala Letter Taaluja Sanyooga Naaksikyaya
  {0x003a, 0x30 | MOD_SHIFT},	// Colon
  {0x0ddf, 0x04 | MOD_SHIFT},	// Sinhala Vowel Sign Gayanukitta
  {0x0dd3, 0x16 | MOD_SHIFT},	// Sinhala Vowel Sign Diga Is-Pilla
  {0x0dd8, 0x07 | MOD_SHIFT},	// Sinhala Vowel Sign Gaetta-Pilla
  {0x0dc6, 0x09 | MOD_SHIFT},	// Sinhala Letter Fayanna
  {0x0da8, 0x0a | MOD_SHIFT},	// Sinhala Letter Mahaapraana Ttayanna
  {0x0dab, 0x0e | MOD_SHIFT},	// Sinhala Letter Muurdhaja Nayanna
  {0x0d9b, 0x0f | MOD_SHIFT},	// Sinhala Letter Mahaapraana Kayanna
  {0x0dae, 0x33 | MOD_SHIFT},	// Sinhala Letter Mahaapraana Tayanna
  {0x002c, 0x34 | MOD_SHIFT},	// Comma
  {0x0022, 0x1d | MOD_SHIFT},	// Quotation Mark
  {0x0d83, 0x1b | MOD_SHIFT},	// Sinhala Sign Visargaya
  {0x0da3, 0x06 | MOD_SHIFT},	// Sinhala Letter Mahaapraana Jayanna
  {0x0daa, 0x19 | MOD_SHIFT},	// Sinhala Letter Mahaapraana Ddayanna
  {0x0d8a, 0x05 | MOD_SHIFT},	// Sinhala Letter Iiyanna
  {0x0db7, 0x11 | MOD_SHIFT},	// Sinhala Letter Mahaapraana Bayanna
  {0x0db5, 0x10 | MOD_SHIFT},	// Sinhala Letter Mahaapraana Payanna
  {0x0dc5, 0x36 | MOD_SHIFT},	// Sinhala Letter Muurdhaja Layanna
  {0x0d9d, 0x37 | MOD_SHIFT},	// Sinhala Letter Mahaapraana Gayanna
  {0x003f, 0x38 | MOD_SHIFT},	// Question Mark
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
  {0x0dd4, 0x14},	// Sinhala Vowel Sign Ketti Paa-Pilla
  {0x0d85, 0x1a},	// Sinhala Letter Ayanna
  {0x0dd0, 0x08},	// Sinhala Vowel Sign Ketti Aeda-Pilla
  {0x0dbb, 0x15},	// Sinhala Letter Rayanna
  {0x0d91, 0x17},	// Sinhala Letter Eyanna
  {0x0dc4, 0x1c},	// Sinhala Letter Hayanna
  {0x0db8, 0xa0},	// Sinhala Letter Mayanna
  {0x0dc3, 0x0c},	// Sinhala Letter Dantaja Sayanna
  {0x0daf, 0x12},	// Sinhala Letter Alpapraana Dayanna
  {0x0da0, 0x13},	// Sinhala Letter Alpapraana Cayanna
  {0x0da4, 0x2f},	// Sinhala Letter Taaluja Naasikyaya
  {0x003b, 0x30},	// Semicolon
  {0x0dca, 0x04},	// Sinhala Sign Al-Lakuna
  {0x0dd2, 0x16},	// Sinhala Vowel Sign Ketti Is-Pilla
  {0x0dcf, 0x07},	// Sinhala Vowel Sign Aela-Pilla
  {0x0dd9, 0x09},	// Sinhala Vowel Sign Kombuva
  {0x0da7, 0x0a},	// Sinhala Letter Alpapraana Ttayanna
  {0x0dba, 0x0b},	// Sinhala Letter Yayanna
  {0x0dc0, 0x0d},	// Sinhala Letter Vayanna
  {0x0db1, 0x0e},	// Sinhala Letter Dantaja Nayanna
  {0x0d9a, 0x0f},	// Sinhala Letter Alpapraana Kayanna
  {0x0dad, 0x33},	// Sinhala Letter Alpapraana Tayanna
  {0x002e, 0x34},	// Full Stop
  {0x0027, 0x1d},	// Apostrophe
  {0x0d82, 0x1b},	// Sinhala Sign Anusvaraya
  {0x0da2, 0x06},	// Sinhala Letter Alpapraana Jayanna
  {0x0da9, 0x19},	// Sinhala Letter Alpapraana Ddayanna
  {0x0d89, 0x05},	// Sinhala Letter Iyanna
  {0x0db6, 0x11},	// Sinhala Letter Alpapraana Bayanna
  {0x0db4, 0x10},	// Sinhala Letter Alpapraana Payanna
  {0x0dbd, 0x36},	// Sinhala Letter Dantaja Layanna
  {0x0d9c, 0x37},	// Sinhala Letter Alpapraana Gayanna
  {0x002f, 0x38},	// Solidus
};

const DeadkeyLookup kbdsw09_deadkeys[] PROGMEM = 
{
};

KeyboardUTF8 Keyboard_SW09(kbdsw09, sizeof kbdsw09 / sizeof kbdsw09[0], kbdsw09_deadkeys, sizeof kbdsw09_deadkeys / sizeof kbdsw09_deadkeys[0]);
