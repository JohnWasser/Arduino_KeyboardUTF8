# Arduino_KeyboardUTF8
This Arduino library adds a mapping layer on top of the Keyboard library (for Leonardo and Micro) to allow non-US keyboards and'printing' UTF-8 Unicode characters.  It uses keyboard layout data scraped from Microsoft's website:
https://docs.microsoft.com/en-us/globalization/windows-keyboard-layouts

The available keyboard layouts are:
#include <Keyboard_ADLM.h>	// ADLaM
#include <Keyboard_AL.h>	// Albanian
#include <Keyboard_A1.h>	// Arabic (101)
#include <Keyboard_A2.h>	// Arabic (102)
#include <Keyboard_A3.h>	// Arabic (102) AZERTY
#include <Keyboard_ARME.h>	// Armenian Eastern (Legacy)
#include <Keyboard_ARMPH.h>	// Armenian Phonetic
#include <Keyboard_ARMTY.h>	// Armenian Typewriter
#include <Keyboard_ARMW.h>	// Armenian Western (Legacy)
#include <Keyboard_INASA.h>	// Assamese - INSCRIPT
#include <Keyboard_AZST.h>	// Azerbaijani (Standard)
#include <Keyboard_AZE.h>	// Azeri Cyrillic
#include <Keyboard_AZEL.h>	// Azeri Latin
#include <Keyboard_BASH.h>	// Bashkir
#include <Keyboard_BLR.h>	// Belarusian
#include <Keyboard_BENE.h>	// Belgian (Comma)
#include <Keyboard_BE_1.h>	// Belgian (Period)
#include <Keyboard_BE_2.h>	// Belgian French
#include <Keyboard_INBEN.h>	// Bengali
#include <Keyboard_INBE2.h>	// Bengali - INSCRIPT
#include <Keyboard_INBE1.h>	// Bengali - INSCRIPT (Legacy)
#include <Keyboard_BHC.h>	// Bosnian (Cyrillic)
#include <Keyboard_BUG.h>	// Buginese
#include <Keyboard_BULG.h>	// Bulgarian
#include <Keyboard_US_1.h>	// Bulgarian (Latin)
#include <Keyboard_BGPH1.h>	// Bulgarian (Phonetic Traditional)
#include <Keyboard_BGPH.h>	// Bulgarian (Phonetic)
#include <Keyboard_BU.h>	// Bulgarian (Typewriter)
#include <Keyboard_CA.h>	// Canadian French
#include <Keyboard_FC.h>	// Canadian French (Legacy)
#include <Keyboard_CAN.h>	// Canadian Multilingual Standard
#include <Keyboard_TZM.h>	// Central Atlas Tamazight
#include <Keyboard_KURD.h>	// Central Kurdish
#include <Keyboard_CHER.h>	// Cherokee Nation
#include <Keyboard_CHERP.h>	// Cherokee Phonetic
#include <Keyboard_US_2.h>	// Chinese (Simplified) - US
#include <Keyboard_US_3.h>	// Chinese (Simplified, Singapore) - US
#include <Keyboard_US_4.h>	// Chinese (Traditional) - US
#include <Keyboard_US_5.h>	// Chinese (Traditional, Hong Kong S.A.R.) - US
#include <Keyboard_US_6.h>	// Chinese (Traditional, Macao S.A.R.) - US
#include <Keyboard_CZ.h>	// Czech
#include <Keyboard_CZ1.h>	// Czech (QWERTY)
#include <Keyboard_CZ2.h>	// Czech Programmers
#include <Keyboard_DA.h>	// Danish
#include <Keyboard_INDEV.h>	// Devanagari - INSCRIPT
#include <Keyboard_DIV1.h>	// Divehi Phonetic
#include <Keyboard_DIV2.h>	// Divehi Typewriter
#include <Keyboard_NE.h>	// Dutch
#include <Keyboard_DZO.h>	// Dzongkha
#include <Keyboard_INEN.h>	// English (India)
#include <Keyboard_EST.h>	// Estonian
#include <Keyboard_FO.h>	// Faeroese
#include <Keyboard_FI.h>	// Finnish
#include <Keyboard_FI1_1.h>	// Finnish with Sami
#include <Keyboard_FR.h>	// French
#include <Keyboard_FTHRK.h>	// Futhark
#include <Keyboard_GEOER.h>	// Georgian (Ergonomic)
#include <Keyboard_GEO.h>	// Georgian (Legacy)
#include <Keyboard_GEOME.h>	// Georgian (MES)
#include <Keyboard_GEOOA.h>	// Georgian (Old Alphabets)
#include <Keyboard_GEOQW.h>	// Georgian (QWERTY)
#include <Keyboard_GR.h>	// German
#include <Keyboard_GR1.h>	// German (IBM)
#include <Keyboard_GTHC.h>	// Gothic
#include <Keyboard_HE.h>	// Greek
#include <Keyboard_HE220.h>	// Greek (220)
#include <Keyboard_HELA2.h>	// Greek (220) Latin
#include <Keyboard_HE319.h>	// Greek (319)
#include <Keyboard_HELA3.h>	// Greek (319) Latin
#include <Keyboard_GKL.h>	// Greek Latin
#include <Keyboard_HEPT.h>	// Greek Polytonic
#include <Keyboard_GRLND.h>	// Greenlandic
#include <Keyboard_GN.h>	// Guarani
#include <Keyboard_INGUJ.h>	// Gujarati
#include <Keyboard_HAU.h>	// Hausa
#include <Keyboard_HAW.h>	// Hawaiian
#include <Keyboard_HEB.h>	// Hebrew
#include <Keyboard_HEBL3.h>	// Hebrew (Standard)
#include <Keyboard_INHIN.h>	// Hindi Traditional
#include <Keyboard_HU.h>	// Hungarian
#include <Keyboard_HU1.h>	// Hungarian 101-key
#include <Keyboard_IC.h>	// Icelandic
#include <Keyboard_IBO.h>	// Igbo
#include <Keyboard_IULAT.h>	// Inuktitut - Latin
#include <Keyboard_INUK2.h>	// Inuktitut - Naqittaut
#include <Keyboard_IR.h>	// Irish
#include <Keyboard_IT.h>	// Italian
#include <Keyboard_IT142.h>	// Italian (142)
#include <Keyboard_JPN.h>	// Japanese
#include <Keyboard_JAV.h>	// Javanese
#include <Keyboard_INKAN.h>	// Kannada
#include <Keyboard_KAZ.h>	// Kazakh
#include <Keyboard_KHMR.h>	// Khmer
#include <Keyboard_KNI.h>	// Khmer (NIDA)
#include <Keyboard_KOR.h>	// Korean
#include <Keyboard_KYR.h>	// Kyrgyz Cyrillic
#include <Keyboard_LAO.h>	// Lao
#include <Keyboard_LA.h>	// Latin American
#include <Keyboard_LV.h>	// Latvian
#include <Keyboard_LV1.h>	// Latvian (QWERTY)
#include <Keyboard_LVST.h>	// Latvian (Standard)
#include <Keyboard_LISUB.h>	// Lisu (Basic)
#include <Keyboard_LISUS.h>	// Lisu (Standard)
#include <Keyboard_LT1.h>	// Lithuanian
#include <Keyboard_LT.h>	// Lithuanian IBM
#include <Keyboard_LT2.h>	// Lithuanian Standard
#include <Keyboard_SF_1.h>	// Luxembourgish
#include <Keyboard_MAC.h>	// Macedonian (FYROM)
#include <Keyboard_MACST.h>	// Macedonian (FYROM) - Standard
#include <Keyboard_INMAL.h>	// Malayalam
#include <Keyboard_MLT47.h>	// Maltese 47-Key
#include <Keyboard_MLT48.h>	// Maltese 48-Key
#include <Keyboard_MAORI.h>	// Maori
#include <Keyboard_INMAR.h>	// Marathi
#include <Keyboard_MONMO.h>	// Mongolian (Mongolian Script)
#include <Keyboard_MON.h>	// Mongolian Cyrillic
#include <Keyboard_MYAN_1.h>	// Myanmar (Phonetic order)
#include <Keyboard_MYAN_2.h>	// Myanmar (Visual order)
#include <Keyboard_NEPR.h>	// Nepali
#include <Keyboard_NTL.h>	// New Tai Lue
#include <Keyboard_NKO.h>	// N'Ko
#include <Keyboard_NO.h>	// Norwegian
#include <Keyboard_NO1.h>	// Norwegian with Sami
#include <Keyboard_INORI.h>	// Odia
#include <Keyboard_OGHAM.h>	// Ogham
#include <Keyboard_OLCH.h>	// Ol Chiki
#include <Keyboard_OLDIT.h>	// Old Italic
#include <Keyboard_OSA.h>	// Osage
#include <Keyboard_OSM.h>	// Osmanya
#include <Keyboard_PASH.h>	// Pashto (Afghanistan)
#include <Keyboard_FA.h>	// Persian
#include <Keyboard_FAR.h>	// Persian (Standard)
#include <Keyboard_PHAGS.h>	// Phags-pa
#include <Keyboard_PL.h>	// Polish (214)
#include <Keyboard_PL1.h>	// Polish (Programmers)
#include <Keyboard_PO.h>	// Portuguese
#include <Keyboard_BR_1.h>	// Portuguese (Brazil ABNT)
#include <Keyboard_BR_2.h>	// Portuguese (Brazil ABNT2)
#include <Keyboard_INPUN.h>	// Punjabi
#include <Keyboard_RO.h>	// Romanian (Legacy)
#include <Keyboard_ROPR.h>	// Romanian (Programmers)
#include <Keyboard_ROST.h>	// Romanian (Standard)
#include <Keyboard_RU.h>	// Russian
#include <Keyboard_RUM.h>	// Russian - Mnemonic
#include <Keyboard_RU1.h>	// Russian (Typewriter)
#include <Keyboard_YAK.h>	// Sakha
#include <Keyboard_SMSFI.h>	// Sami Extended Finland-Sweden
#include <Keyboard_SMSNO.h>	// Sami Extended Norway
#include <Keyboard_GAE.h>	// Scottish Gaelic
#include <Keyboard_YCC.h>	// Serbian (Cyrillic)
#include <Keyboard_YCL.h>	// Serbian (Latin)
#include <Keyboard_NSO_1.h>	// Sesotho sa Leboa
#include <Keyboard_NSO_2.h>	// Setswana
#include <Keyboard_SN1.h>	// Sinhala
#include <Keyboard_SW09.h>	// Sinhala - Wij 9
#include <Keyboard_SL.h>	// Slovak
#include <Keyboard_SL1.h>	// Slovak (QWERTY)
#include <Keyboard_CR_1.h>	// Slovenian
#include <Keyboard_SORA.h>	// Sora
#include <Keyboard_SOREX.h>	// Sorbian Extended
#include <Keyboard_SORS1.h>	// Sorbian Standard
#include <Keyboard_SORST.h>	// Sorbian Standard (Legacy)
#include <Keyboard_SP.h>	// Spanish
#include <Keyboard_ES.h>	// Spanish Variation
#include <Keyboard_CR_2.h>	// Standard
#include <Keyboard_SW.h>	// Swedish
#include <Keyboard_FI1_2.h>	// Swedish with Sami
#include <Keyboard_SF_2.h>	// Swiss French
#include <Keyboard_SG.h>	// Swiss German
#include <Keyboard_SYR1.h>	// Syriac
#include <Keyboard_SYR2.h>	// Syriac Phonetic
#include <Keyboard_TAILE.h>	// Tai Le
#include <Keyboard_TAJIK.h>	// Tajik
#include <Keyboard_INTAM.h>	// Tamil
#include <Keyboard_TT102.h>	// Tatar
#include <Keyboard_TAT.h>	// Tatar (Legacy)
#include <Keyboard_INTEL.h>	// Telugu
#include <Keyboard_TH0.h>	// Thai Kedmanee
#include <Keyboard_TH2.h>	// Thai Kedmanee (non-ShiftLock)
#include <Keyboard_TH1.h>	// Thai Pattachote
#include <Keyboard_TH3.h>	// Thai Pattachote (non-ShiftLock)
#include <Keyboard_TIPRC.h>	// Tibetan (PRC)
#include <Keyboard_TIPRD.h>	// Tibetan (PRC) - Updated
#include <Keyboard_TIFI.h>	// Tifinagh (Basic)
#include <Keyboard_TIFI2.h>	// Tifinagh (Extended)
#include <Keyboard_MONST.h>	// Traditional Mongolian (Standard)
#include <Keyboard_TUF.h>	// Turkish F
#include <Keyboard_TUQ.h>	// Turkish Q
#include <Keyboard_TURME.h>	// Turkmen
#include <Keyboard_UR.h>	// Ukrainian
#include <Keyboard_UR1.h>	// Ukrainian (Enhanced)
#include <Keyboard_UK.h>	// United Kingdom
#include <Keyboard_UKX.h>	// United Kingdom Extended
#include <Keyboard_DV.h>	// United States-Dvorak
#include <Keyboard_USL.h>	// United States-Dvorak for left hand
#include <Keyboard_USR.h>	// United States-Dvorak for right hand
#include <Keyboard_USX.h>	// United States-International
#include <Keyboard_URDU.h>	// Urdu
#include <Keyboard_US_7.h>	// US
#include <Keyboard_USA.h>	// US English Table for IBM Arabic 238_L
#include <Keyboard_UGHR1.h>	// Uyghur
#include <Keyboard_UGHR.h>	// Uyghur (Legacy)
#include <Keyboard_UZB.h>	// Uzbek Cyrillic
#include <Keyboard_VNTC.h>	// Vietnamese
#include <Keyboard_WOL.h>	// Wolof
#include <Keyboard_YBA.h>	// Yoruba
