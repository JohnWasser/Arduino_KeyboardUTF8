# KeyboardUTF8
This Arduino library adds a mapping layer on top of the Keyboard library (for Leonardo/Micro/Due) to allow non-US keyboards and 'typing' UTF-8 Unicode characters.  It uses keyboard layout data scraped from [Microsoft's globalization website](https://docs.microsoft.com/en-us/globalization/windows-keyboard-layouts).

## After `#include <KeyboardUTF8.h>` the available keyboard layouts are:
```
#include <languages/Keyboard_ADLM.h>	// ADLaM
#include <languages/Keyboard_AL.h>	// Albanian
#include <languages/Keyboard_A1.h>	// Arabic (101)
#include <languages/Keyboard_A2.h>	// Arabic (102)
#include <languages/Keyboard_A3.h>	// Arabic (102) AZERTY
#include <languages/Keyboard_ARME.h>	// Armenian Eastern (Legacy)
#include <languages/Keyboard_ARMPH.h>	// Armenian Phonetic
#include <languages/Keyboard_ARMTY.h>	// Armenian Typewriter
#include <languages/Keyboard_ARMW.h>	// Armenian Western (Legacy)
#include <languages/Keyboard_INASA.h>	// Assamese - INSCRIPT
#include <languages/Keyboard_AZST.h>	// Azerbaijani (Standard)
#include <languages/Keyboard_AZE.h>	// Azeri Cyrillic
#include <languages/Keyboard_AZEL.h>	// Azeri Latin
#include <languages/Keyboard_BASH.h>	// Bashkir
#include <languages/Keyboard_BLR.h>	// Belarusian
#include <languages/Keyboard_BENE.h>	// Belgian (Comma)
#include <languages/Keyboard_BE_1.h>	// Belgian (Period)
#include <languages/Keyboard_BE_2.h>	// Belgian French
#include <languages/Keyboard_INBEN.h>	// Bengali
#include <languages/Keyboard_INBE2.h>	// Bengali - INSCRIPT
#include <languages/Keyboard_INBE1.h>	// Bengali - INSCRIPT (Legacy)
#include <languages/Keyboard_BHC.h>	// Bosnian (Cyrillic)
#include <languages/Keyboard_BUG.h>	// Buginese
#include <languages/Keyboard_BULG.h>	// Bulgarian
#include <languages/Keyboard_US_1.h>	// Bulgarian (Latin)
#include <languages/Keyboard_BGPH1.h>	// Bulgarian (Phonetic Traditional)
#include <languages/Keyboard_BGPH.h>	// Bulgarian (Phonetic)
#include <languages/Keyboard_BU.h>	// Bulgarian (Typewriter)
#include <languages/Keyboard_CA.h>	// Canadian French
#include <languages/Keyboard_FC.h>	// Canadian French (Legacy)
#include <languages/Keyboard_CAN.h>	// Canadian Multilingual Standard
#include <languages/Keyboard_TZM.h>	// Central Atlas Tamazight
#include <languages/Keyboard_KURD.h>	// Central Kurdish
#include <languages/Keyboard_CHER.h>	// Cherokee Nation
#include <languages/Keyboard_CHERP.h>	// Cherokee Phonetic
#include <languages/Keyboard_US_2.h>	// Chinese (Simplified) - US
#include <languages/Keyboard_US_3.h>	// Chinese (Simplified, Singapore) - US
#include <languages/Keyboard_US_4.h>	// Chinese (Traditional) - US
#include <languages/Keyboard_US_5.h>	// Chinese (Traditional, Hong Kong S.A.R.) - US
#include <languages/Keyboard_US_6.h>	// Chinese (Traditional, Macao S.A.R.) - US
#include <languages/Keyboard_CZ.h>	// Czech
#include <languages/Keyboard_CZ1.h>	// Czech (QWERTY)
#include <languages/Keyboard_CZ2.h>	// Czech Programmers
#include <languages/Keyboard_DA.h>	// Danish
#include <languages/Keyboard_INDEV.h>	// Devanagari - INSCRIPT
#include <languages/Keyboard_DIV1.h>	// Divehi Phonetic
#include <languages/Keyboard_DIV2.h>	// Divehi Typewriter
#include <languages/Keyboard_NE.h>	// Dutch
#include <languages/Keyboard_DZO.h>	// Dzongkha
#include <languages/Keyboard_INEN.h>	// English (India)
#include <languages/Keyboard_EST.h>	// Estonian
#include <languages/Keyboard_FO.h>	// Faeroese
#include <languages/Keyboard_FI.h>	// Finnish
#include <languages/Keyboard_FI1_1.h>	// Finnish with Sami
#include <languages/Keyboard_FR.h>	// French
#include <languages/Keyboard_FTHRK.h>	// Futhark
#include <languages/Keyboard_GEOER.h>	// Georgian (Ergonomic)
#include <languages/Keyboard_GEO.h>	// Georgian (Legacy)
#include <languages/Keyboard_GEOME.h>	// Georgian (MES)
#include <languages/Keyboard_GEOOA.h>	// Georgian (Old Alphabets)
#include <languages/Keyboard_GEOQW.h>	// Georgian (QWERTY)
#include <languages/Keyboard_GR.h>	// German
#include <languages/Keyboard_GR1.h>	// German (IBM)
#include <languages/Keyboard_GTHC.h>	// Gothic
#include <languages/Keyboard_HE.h>	// Greek
#include <languages/Keyboard_HE220.h>	// Greek (220)
#include <languages/Keyboard_HELA2.h>	// Greek (220) Latin
#include <languages/Keyboard_HE319.h>	// Greek (319)
#include <languages/Keyboard_HELA3.h>	// Greek (319) Latin
#include <languages/Keyboard_GKL.h>	// Greek Latin
#include <languages/Keyboard_HEPT.h>	// Greek Polytonic
#include <languages/Keyboard_GRLND.h>	// Greenlandic
#include <languages/Keyboard_GN.h>	// Guarani
#include <languages/Keyboard_INGUJ.h>	// Gujarati
#include <languages/Keyboard_HAU.h>	// Hausa
#include <languages/Keyboard_HAW.h>	// Hawaiian
#include <languages/Keyboard_HEB.h>	// Hebrew
#include <languages/Keyboard_HEBL3.h>	// Hebrew (Standard)
#include <languages/Keyboard_INHIN.h>	// Hindi Traditional
#include <languages/Keyboard_HU.h>	// Hungarian
#include <languages/Keyboard_HU1.h>	// Hungarian 101-key
#include <languages/Keyboard_IC.h>	// Icelandic
#include <languages/Keyboard_IBO.h>	// Igbo
#include <languages/Keyboard_IULAT.h>	// Inuktitut - Latin
#include <languages/Keyboard_INUK2.h>	// Inuktitut - Naqittaut
#include <languages/Keyboard_IR.h>	// Irish
#include <languages/Keyboard_IT.h>	// Italian
#include <languages/Keyboard_IT142.h>	// Italian (142)
#include <languages/Keyboard_JPN.h>	// Japanese
#include <languages/Keyboard_JAV.h>	// Javanese
#include <languages/Keyboard_INKAN.h>	// Kannada
#include <languages/Keyboard_KAZ.h>	// Kazakh
#include <languages/Keyboard_KHMR.h>	// Khmer
#include <languages/Keyboard_KNI.h>	// Khmer (NIDA)
#include <languages/Keyboard_KOR.h>	// Korean
#include <languages/Keyboard_KYR.h>	// Kyrgyz Cyrillic
#include <languages/Keyboard_LAO.h>	// Lao
#include <languages/Keyboard_LA.h>	// Latin American
#include <languages/Keyboard_LV.h>	// Latvian
#include <languages/Keyboard_LV1.h>	// Latvian (QWERTY)
#include <languages/Keyboard_LVST.h>	// Latvian (Standard)
#include <languages/Keyboard_LISUB.h>	// Lisu (Basic)
#include <languages/Keyboard_LISUS.h>	// Lisu (Standard)
#include <languages/Keyboard_LT1.h>	// Lithuanian
#include <languages/Keyboard_LT.h>	// Lithuanian IBM
#include <languages/Keyboard_LT2.h>	// Lithuanian Standard
#include <languages/Keyboard_SF_1.h>	// Luxembourgish
#include <languages/Keyboard_MAC.h>	// Macedonian (FYROM)
#include <languages/Keyboard_MACST.h>	// Macedonian (FYROM) - Standard
#include <languages/Keyboard_INMAL.h>	// Malayalam
#include <languages/Keyboard_MLT47.h>	// Maltese 47-Key
#include <languages/Keyboard_MLT48.h>	// Maltese 48-Key
#include <languages/Keyboard_MAORI.h>	// Maori
#include <languages/Keyboard_INMAR.h>	// Marathi
#include <languages/Keyboard_MONMO.h>	// Mongolian (Mongolian Script)
#include <languages/Keyboard_MON.h>	// Mongolian Cyrillic
#include <languages/Keyboard_MYAN_1.h>	// Myanmar (Phonetic order)
#include <languages/Keyboard_MYAN_2.h>	// Myanmar (Visual order)
#include <languages/Keyboard_NEPR.h>	// Nepali
#include <languages/Keyboard_NTL.h>	// New Tai Lue
#include <languages/Keyboard_NKO.h>	// N'Ko
#include <languages/Keyboard_NO.h>	// Norwegian
#include <languages/Keyboard_NO1.h>	// Norwegian with Sami
#include <languages/Keyboard_INORI.h>	// Odia
#include <languages/Keyboard_OGHAM.h>	// Ogham
#include <languages/Keyboard_OLCH.h>	// Ol Chiki
#include <languages/Keyboard_OLDIT.h>	// Old Italic
#include <languages/Keyboard_OSA.h>	// Osage
#include <languages/Keyboard_OSM.h>	// Osmanya
#include <languages/Keyboard_PASH.h>	// Pashto (Afghanistan)
#include <languages/Keyboard_FA.h>	// Persian
#include <languages/Keyboard_FAR.h>	// Persian (Standard)
#include <languages/Keyboard_PHAGS.h>	// Phags-pa
#include <languages/Keyboard_PL.h>	// Polish (214)
#include <languages/Keyboard_PL1.h>	// Polish (Programmers)
#include <languages/Keyboard_PO.h>	// Portuguese
#include <languages/Keyboard_BR_1.h>	// Portuguese (Brazil ABNT)
#include <languages/Keyboard_BR_2.h>	// Portuguese (Brazil ABNT2)
#include <languages/Keyboard_INPUN.h>	// Punjabi
#include <languages/Keyboard_RO.h>	// Romanian (Legacy)
#include <languages/Keyboard_ROPR.h>	// Romanian (Programmers)
#include <languages/Keyboard_ROST.h>	// Romanian (Standard)
#include <languages/Keyboard_RU.h>	// Russian
#include <languages/Keyboard_RUM.h>	// Russian - Mnemonic
#include <languages/Keyboard_RU1.h>	// Russian (Typewriter)
#include <languages/Keyboard_YAK.h>	// Sakha
#include <languages/Keyboard_SMSFI.h>	// Sami Extended Finland-Sweden
#include <languages/Keyboard_SMSNO.h>	// Sami Extended Norway
#include <languages/Keyboard_GAE.h>	// Scottish Gaelic
#include <languages/Keyboard_YCC.h>	// Serbian (Cyrillic)
#include <languages/Keyboard_YCL.h>	// Serbian (Latin)
#include <languages/Keyboard_NSO_1.h>	// Sesotho sa Leboa
#include <languages/Keyboard_NSO_2.h>	// Setswana
#include <languages/Keyboard_SN1.h>	// Sinhala
#include <languages/Keyboard_SW09.h>	// Sinhala - Wij 9
#include <languages/Keyboard_SL.h>	// Slovak
#include <languages/Keyboard_SL1.h>	// Slovak (QWERTY)
#include <languages/Keyboard_CR_1.h>	// Slovenian
#include <languages/Keyboard_SORA.h>	// Sora
#include <languages/Keyboard_SOREX.h>	// Sorbian Extended
#include <languages/Keyboard_SORS1.h>	// Sorbian Standard
#include <languages/Keyboard_SORST.h>	// Sorbian Standard (Legacy)
#include <languages/Keyboard_SP.h>	// Spanish
#include <languages/Keyboard_ES.h>	// Spanish Variation
#include <languages/Keyboard_CR_2.h>	// Standard
#include <languages/Keyboard_SW.h>	// Swedish
#include <languages/Keyboard_FI1_2.h>	// Swedish with Sami
#include <languages/Keyboard_SF_2.h>	// Swiss French
#include <languages/Keyboard_SG.h>	// Swiss German
#include <languages/Keyboard_SYR1.h>	// Syriac
#include <languages/Keyboard_SYR2.h>	// Syriac Phonetic
#include <languages/Keyboard_TAILE.h>	// Tai Le
#include <languages/Keyboard_TAJIK.h>	// Tajik
#include <languages/Keyboard_INTAM.h>	// Tamil
#include <languages/Keyboard_TT102.h>	// Tatar
#include <languages/Keyboard_TAT.h>	// Tatar (Legacy)
#include <languages/Keyboard_INTEL.h>	// Telugu
#include <languages/Keyboard_TH0.h>	// Thai Kedmanee
#include <languages/Keyboard_TH2.h>	// Thai Kedmanee (non-ShiftLock)
#include <languages/Keyboard_TH1.h>	// Thai Pattachote
#include <languages/Keyboard_TH3.h>	// Thai Pattachote (non-ShiftLock)
#include <languages/Keyboard_TIPRC.h>	// Tibetan (PRC)
#include <languages/Keyboard_TIPRD.h>	// Tibetan (PRC) - Updated
#include <languages/Keyboard_TIFI.h>	// Tifinagh (Basic)
#include <languages/Keyboard_TIFI2.h>	// Tifinagh (Extended)
#include <languages/Keyboard_MONST.h>	// Traditional Mongolian (Standard)
#include <languages/Keyboard_TUF.h>	// Turkish F
#include <languages/Keyboard_TUQ.h>	// Turkish Q
#include <languages/Keyboard_TURME.h>	// Turkmen
#include <languages/Keyboard_UR.h>	// Ukrainian
#include <languages/Keyboard_UR1.h>	// Ukrainian (Enhanced)
#include <languages/Keyboard_UK.h>	// United Kingdom
#include <languages/Keyboard_UKX.h>	// United Kingdom Extended
#include <languages/Keyboard_DV.h>	// United States-Dvorak
#include <languages/Keyboard_USL.h>	// United States-Dvorak for left hand
#include <languages/Keyboard_USR.h>	// United States-Dvorak for right hand
#include <languages/Keyboard_USX.h>	// United States-International
#include <languages/Keyboard_URDU.h>	// Urdu
#include <languages/Keyboard_US_7.h>	// US
#include <languages/Keyboard_USA.h>	// US English Table for IBM Arabic 238_L
#include <languages/Keyboard_UGHR1.h>	// Uyghur
#include <languages/Keyboard_UGHR.h>	// Uyghur (Legacy)
#include <languages/Keyboard_UZB.h>	// Uzbek Cyrillic
#include <languages/Keyboard_VNTC.h>	// Vietnamese
#include <languages/Keyboard_WOL.h>	// Wolof
#include <languages/Keyboard_YBA.h>	// Yoruba
```
