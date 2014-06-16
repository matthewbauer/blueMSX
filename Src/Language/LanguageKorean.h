/*****************************************************************************
** $Source: /cvsroot/bluemsx/blueMSX/Src/Language/LanguageKorean.h,v $
**
** $Revision: 1.33 $ + additions 2005/03/03
**
** $Date: 2006/06/27 15:43:08 $
**
** More info: http://www.bluemsx.com
**
** Copyright (C) 2003-2004 Daniel Vik
**
**  This software is provided 'as-is', without any express or implied
**  warranty.  In no event will the authors be held liable for any damages
**  arising from the use of this software.
**
**  Permission is granted to anyone to use this software for any purpose,
**  including commercial applications, and to alter it and redistribute it
**  freely, subject to the following restrictions:
**
**  1. The origin of this software must not be misrepresented; you must not
**     claim that you wrote the original software. If you use this software
**     in a product, an acknowledgment in the product documentation would be
**     appreciated but is not required.
**  2. Altered source versions must be plainly marked as such, and must not be
**     misrepresented as being the original software.
**  3. This notice may not be removed or altered from any source distribution.
**
******************************************************************************
*/
#ifndef LANGUAGE_KOREAN_H
#define LANGUAGE_KOREAN_H

#include "LanguageStrings.h"
 
void langInitKorean(LanguageStrings* ls)
{
    //----------------------
    // Language lines
    //----------------------

    ls->langChineseSimplified   = "�߱��� ��ü";
    ls->langChineseTraditional  = "�߱��� ��ü";
    ls->langDutch               = "�״������";
    ls->langEnglish             = "����";
    ls->langFinnish             = "�ɶ����";
    ls->langFrench              = "��������";
    ls->langGerman              = "���Ͼ�";
    ls->langItalian             = "��Ż���ƾ�";
    ls->langJapanese            = "�Ϻ���";
    ls->langKorean              = "�ѱ���";
    ls->langPolish              = "�������";
    ls->langPortuguese          = "����������";
    ls->langSpanish             = "�����ξ�";
    ls->langSwedish             = "��������";


    //----------------------
    // Generic lines
    //----------------------

    ls->textDevice              = "��ġ:";
    ls->textFilename            = "���� �̸�:";
    ls->textFile                = "����";
    ls->textNone                = "����";
    ls->textUnknown             = "�˷����� ����";                            // New in 2.5


    //----------------------
    // Warning and Error lines
    //----------------------

    ls->warningTitle             = "blueMSX - ���";
    ls->warningDiscardChanges   = "������ ������ ����Ǳ� ���ؼ� ������ �ϼž� �մϴٸ� ���� �������� �ƹ��� ���⵵ �����ʰ� �׳� �����ڽ��ϱ�?";
    ls->warningOverwriteFile    = "������ ���� ���ðڽ��ϱ�:"; // New in 2.5
    ls->errorTitle              = "blueMSX - ����";
    ls->errorEnterFullscreen    = "��ü ȭ���� ���� ����.           \n";
    ls->errorDirectXFailed      = "DirectX ������Ʈ ����� ����.           \nGDI�� ��ü�ؼ� ����մϴ�.\n�׷���ī�� ��������� Ȯ���ϼ���.";
    ls->errorNoRomInZip         = "zip���� ������ .rom�� ã�� �� �����ϴ�.";
    ls->errorNoDskInZip         = "zip���� ������ .dsk�� ã�� �� �����ϴ�.";
    ls->errorNoCasInZip         = "zip���� ������ .cas�� ã�� �� �����ϴ�.";
    ls->errorNoHelp             = "blueMSX ������ ã�� �� �����ϴ�.";
    ls->errorStartEmu           = "MSX ���ķ����͸� ������ �� �����ϴ�.";
    ls->errorPortableReadonly   = "�̵� ��ġ�� �б� �����Դϴ�.";        // New in 2.5


    //----------------------
    // File related lines
    //----------------------

    ls->fileRom                 = "�� �̹���";
    ls->fileAll                 = "��� ����";
    ls->fileCpuState            = "CPU ����";
    ls->fileDisk                = "��ũ �̹���";
    ls->fileCas                 = "������ �̹���";


    //----------------------
    // Menu related lines
    //----------------------

    ls->menuNoRecentFiles       = "- ��� ���� ���� -";
    ls->menuInsert              = "����";
    ls->menuEject               = "������";

    ls->menuCartGameReader      = "���� ����";                        // New in 2.5
    ls->menuCartIde             = "IDE";                                // New in 2.5
    ls->menuCartBeerIde         = "Beer";                               // New in 2.5
    ls->menuCartGIde            = "GIDE";                               // New in 2.5
    ls->menuCartSunriseIde      = "Sunrise";                            // New in 2.5
    ls->menuCartSCC             = "SCC īƮ����";
    ls->menuCartSCCPlus         = "SCC+ īƮ����";
    ls->menuCartFMPac           = "FM-PAC īƮ����";
    ls->menuCartPac             = "PAC īƮ����";
    ls->menuCartHBI55           = "Sony HBI-55 īƮ����";
    ls->menuCartInsertSpecial   = "Ư�� īƮ���� ����";                     // New in 2.5
    ls->menuCartMegaRam         = "�ް���";                            // New in 2.5
    ls->menuCartExternalRam     = "���工";

    ls->menuDiskInsertNew       = "���ο� ��ũ �̹��� ����";              // New in 2.5
    ls->menuDiskDirInsert       = "���丮 ����";
    ls->menuDiskAutoStart       = "�����Ŀ� �����";
    ls->menuCartAutoReset       = "����/���� �Ŀ� �����";

    ls->menuCasRewindAfterInsert = "�����Ŀ� �ǰ���";
    ls->menuCasUseReadOnly       = "�б�����";
    ls->lmenuCasSaveAs           = "�ٸ� �̸����� ����...";
    ls->menuCasSetPosition      = "��ġ ����";
    ls->menuCasRewind           = "�ǰ���";

    ls->menuPrnFormfeed         = "���ǵ�";

    ls->menuZoomNormal          = "���� ũ��";
    ls->menuZoomDouble          = "�ι� ũ��";
    ls->menuZoomFullscreen      = "��ü ȭ��";
    
    ls->menuPropsEmulation      = "���ķ��̼�";
    ls->menuPropsVideo          = "����";
    ls->menuPropsSound          = "����";
    ls->menuPropsControls       = "��Ʈ��";
    ls->menuPropsPerformance    = "����";
    ls->menuPropsSettings        = "�ܺ� ����";
    ls->menuPropsFile           = "����";
    ls->menuPropsLanguage       = "���";
    ls->menuPropsPorts          = "��Ʈ"; 
    
    ls->menuVideoSource         = "���� ��� �ҽ�";                   // New in 2.5
    ls->menuVideoSourceDefault  = "���� ��� �ҽ� ����ȵ�";      // New in 2.5
    ls->menuVideoChipAutodetect = "���� Ĩ �ڵ�����";    
    ls->menuVideoInSource       = "���� �Է� �ҽ�";                    // New in 2.5
    ls->menuVideoInBitmap       = "��Ʈ�� ����";                        // New in 2.5

    ls->menuHelpHelp            = "���� �׸�";
    ls->menuHelpAbout           = "blueMSX�� ���Ͽ�";

    ls->menuFileCart            = "īƮ���� ����";
    ls->menuFileDisk            = "��ũ ����̺�";
    ls->menuFileCas             = "ī��Ʈ";
    ls->menuFilePrn             = "������";
    ls->menuFileLoadState       = "CPU ���� �ҷ�����";
    ls->menuFileSaveState       = "CPU ���� ����";
    ls->menuFileQLoadState      = "���� �ٷ� �ҷ�����";
    ls->menuFileQSaveState      = "���� �ٷ� ����";
    ls->menuFileCaptureAudio    = "�Ҹ� ����";
    ls->menuFileScreenShot      = "ȭ�� ����";
    ls->menuFileExit            = "������";

    ls->menuFileHarddisk        = "�ϵ� ��ũ";                          // New in 2.5
    ls->menuFileHarddiskNoPesent= "��Ʈ�ѷ� �������� ����";             // New in 2.5

    ls->menuRunRun              = "����";
    ls->menuRunPause            = "�Ͻ� ����";
    ls->menuRunStop             = "����";
    ls->menuRunSoftReset        = "����Ʈ ����";
    ls->menuRunHardReset        = "�ϵ� ����";
    ls->menuRunCleanReset       = "��ü ����";

    ls->menuTools                = "����";
    ls->menuToolsMachine         = "�ӽ� ������";
    ls->menuToolsShortcuts      = "����Ű ������";
    ls->menuToolsKeyboard       = "Ű���� ������";
    ls->menuToolsDebugger       = "�����";               // New in 2.5
    ls->menuToolsTrainer        = "Ʈ���̳�";                // New in 2.5
    ls->menuToolsTraceLogger    = "Ʈ���̽� ���";           // New in 2.5

    ls->menuFile                = "����";
    ls->menuRun                 = "����";
    ls->menuWindow              = "������";
    ls->menuToolsMixer          = "�ͼ�";
    ls->menuOptions             = "�ɼ�";
    ls->menuHelp                = "����";


    //----------------------
    // Dialog related lines
    //----------------------

    ls->dlgOK                   = "Ȯ��";
    ls->dlgOpen                 = "����";
    ls->dlgCancel               = "���";
    ls->dlgSave                 = "����";
    ls->dlgSaveAs               = "�ٸ� �̸�����...";
    ls->dlgRun                  = "����";
    ls->dlgClose                = "�ݱ�";

    ls->dlgLoadRom              = "blueMSX - īƮ������ ������ rom �̹��� ����";
    ls->dlgLoadDsk              = "blueMSX - ����̺꿡 ������ dsk �̹��� ����";
    ls->dlgLoadCas              = "blueMSX - ī��Ʈ �÷��̾ ���� cas �̹��� ����";
    ls->dlgLoadRomDskCas        = "blueMSX - �о� ���� rom, dsk, cas �̹��� ����";
    ls->dlgLoadRomDesc          = "īƮ������ ������ �� �̹����� ������ �ּ���:";
    ls->dlgLoadDskDesc          = "����̺꿡 ������ ù��° �� ��ũ �Ǵ� ��ũ �̹����� ������ �ּ���(��ȯ�� ALT+F9. ���ϸ��� ���ڰ� �����ؾ� �˴ϴ�):";
    ls->dlgLoadCasDesc          = "ī��Ʈ �÷��̾ ���� ���� �̹����� ������ �ּ���:";
    ls->dlgLoadRomDskCasDesc    = "�о� ���� ��,��ũ,�Ǵ� ���� �̹����� ������ �ּ���:";
    ls->dlgLoadState            = "CPU ���� �ҷ�����";
    ls->dlgSaveState            = "CPU ���� ����";
    ls->dlgSaveCassette          = "blueMSX - ���� �̹��� ����";
    ls->dlgInsertRom1           = "���� 1�� ROM īƮ���� ����";
    ls->dlgInsertRom2           = "���� 2�� ROM īƮ���� ����";
    ls->dlgInsertDiskA          = "����̺� A�� ��ũ ����";
    ls->dlgInsertDiskB          = "����̺� B�� ��ũ ����";
    ls->dlgInsertHarddisk       = "�ϵ� ��ũ ����";                   // New in 2.5
    ls->dlgInsertCas            = "ī��Ʈ ���� ����";
    ls->dlgRomType              = "�� ����:";

    ls->dlgTapeTitle            = "blueMSX - ���� ��ġ";
    ls->dlgTapeFrameText        = "���� ��ġ";
    ls->dlgTapeCurrentPos       = "���� ��ġ";
    ls->dlgTapeTotalTime        = "�� �ð�";
    ls->dlgTapeSetPosText        = "���� ��ġ:";
    ls->dlgTapeCustom            = "����� ���� ���� ����";
    ls->dlgTabPosition           = "��ġ";
    ls->dlgTabType               = "����";
    ls->dlgTabFilename           = "���� �̸�";
    ls->dlgZipReset             = "������ �����";

    ls->dlgAboutTitle           = "blueMSX�� ���Ͽ�";

    ls->dlgLangLangText         = "blueMSX�� ����� ��� ����";
    ls->dlgLangLangTitle        = "blueMSX - ���";

    ls->dlgAboutAbout           = "���Ͽ�\r\n=====";
    ls->dlgAboutVersion         = "����:";
    ls->dlgAboutBuildNumber     = "����:";
    ls->dlgAboutBuildDate       = "��¥:";
    ls->dlgAboutCreat           = "������: Daniel Vik";
    ls->dlgAboutDevel           = "������ �е�\r\n========";
    ls->dlgAboutThanks          = "������ �ֽ� �е�\r\n===========";
    ls->dlgAboutLisence         = "���̼���\r\n"
                                  "======\r\n\r\n"
				  "�� ����Ʈ����� ���� �״�� �����Ǿ�� �ϸ�, �������̵� �Ϲ����̵� "
				  "� ������ ������ ���� �ʽ��ϴ�.\r\n�� ����Ʈ������ ������� �Ͼ�� "
				  "��� �������� �����ڿ��Դ� å���� �����ϴ�.\r\n\r\n"
                                  "�� �ڼ��� ���� www.bluemsx.com�� �湮�� �ּ���.";

    ls->dlgSavePreview          = "�̸� ����";
    ls->dlgSaveDate             = "�ð� �����:";


    //----------------------
    // Properties related lines
    //----------------------

    ls->propTitle               = "blueMSX - �Ӽ�";
    ls->propEmulation           = "���ķ��̼�";
    ls->propVideo               = "����";
    ls->propSound               = "����";
    ls->propControls            = "��Ʈ��";
    ls->propPerformance         = "����";
    ls->propSettings             = "�ܺ� ����";
    ls->propFile                = "����";
    ls->propPorts               = "��Ʈ";
    
    ls->propEmuGeneralGB        = "�Ϲ� ";
    ls->propEmuFamilyText       = "MSX �ӽ�:";
    ls->propEmuMemoryGB         = "�޸� ";
    ls->propEmuRamSizeText      = "�� ũ��:";
    ls->propEmuVramSizeText     = "������ ũ��:";
    ls->propEmuSpeedGB          = "���ķ��̼� �ӵ� ";
    ls->propEmuSpeedText        = "���ķ��̼� �ӵ�:";
    ls->propEmuFrontSwitchGB     = "�ĳ��Ҵ� ����ġ ";
    ls->propEmuFrontSwitch       = " ����Ʈ ����ġ";
    ls->propEmuFdcTiming        = "�÷��� ����̺� Ÿ�̹� ��� ����";
    ls->propEmuPauseSwitch      = " �Ͻ� ���� ����ġ";
    ls->propEmuAudioSwitch       = " MSX-AUDIO īƮ���� ����ġ";
    ls->propVideoFreqText       = "���� ���ļ�:";
    ls->propVideoFreqAuto       = "�ڵ�";
    ls->propSndOversampleText   = "��������:";
    ls->propSndYkInGB           = "YK-01/YK-10/YK-20 �Է� ";                // New in 2.5
    ls->propSndMidiInGB         = "MIDI �Է� ";
    ls->propSndMidiOutGB        = "MIDI ��� ";
    ls->propSndMidiChannel      = "MIDI ä��:";                      // New in 2.5
    ls->propSndMidiAll          = "����";                                // New in 2.5

    ls->propMonMonGB            = "����� ";
    ls->propMonTypeText         = "����� ����:";
    ls->propMonEmuText          = "����� ���ķ��̼�:";
    ls->propVideoTypeText       = "���� ����:";
    ls->propWindowSizeText      = "������ ũ��:";
    ls->propMonHorizStretch      = " ���� ��Ʈ��ġ";
    ls->propMonVertStretch       = " ���� ��Ʈ��ġ";
    ls->propMonDeInterlace      = " �����ͷ��̽�";
    ls->propBlendFrames         = " ������ ������ ����ȥ��";           // New in 2.5
    ls->propMonColorGhosting    = "RF��ⷹ����";
    ls->propMonBrightness       = "���:";
    ls->propMonContrast         = "���:";
    ls->propMonSaturation       = "ä��:";
    ls->propMonGamma            = "����:";
    ls->propMonScanlines        = "��ĵ����:";
    ls->propMonEffectsGB        = "ȿ��";

    ls->propPerfVideoDrvGB      = "���� ����̹� ";
    ls->propPerfVideoDispDrvText= "ȭ�� ����̹�:";
    ls->propPerfFrameSkipText   = "������ �ǳʶ��:";
    ls->propPerfAudioDrvGB      = "����� ����̹� ";
    ls->propPerfAudioDrvText    = "���� ����̹�:";
    ls->propPerfAudioBufSzText  = "���� ���� ������:";
    ls->propPerfEmuGB           = "Ŭ�� ���ķ��̼� ";
    ls->propPerfSyncModeText    = "����ȭ ���:";
    ls->propFullscreenResText   = "��ü ȭ�� �ػ�:";

    ls->propSndChipEmuGB        = "���� Ĩ ���ķ��̼� ";
    ls->propSndMsxMusic         = " MSX-MUSIC";
    ls->propSndMsxAudio         = " MSX-AUDIO";
    ls->propSndMoonsound         = " Moonsound";
    ls->propSndMt32ToGm         = " GM�� MT-32 �Ǳ�迭";

    ls->propPortsLptGB          = "�з��� ��Ʈ "; 
    ls->propPortsComGB          = "�ø��� ��Ʈ "; 
    ls->propPortsLptText        = "��Ʈ:"; 
    ls->propPortsCom1Text       = "��Ʈ 1:";
    ls->propPortsNone           = "����";
    ls->propPortsSimplCovox     = "SiMPL / Covox DAC";
    ls->propPortsFile           = "���Ͽ� ����ϱ�";
    ls->propPortsComFile        = "���Ͽ� ������";
    ls->propPortsOpenLogFile    = "�α����� ����";
    ls->propPortsEmulateMsxPrn  = "�䳻����:";

    ls->propSetFileHistoryGB     = "��� ���� ��� ";
    ls->propSetFileHistorySize   = "���� ���� ũ��:";
    ls->propSetFileHistoryClear  = "��� �����";
    ls->propFileTypes            = " blueMSX�� ��������(.rom .dsk .cas .sta) ����";
    ls->propWindowsEnvGB         = "�������� ȯ�� "; 
    ls->propSetScreenSaver       = " blueMSX �����߿��� ȭ�� ��ȣ�� ��� ����";
    ls->propDisableWinKeys       = " blueMSX �����߿��� ��/������ ������ Ű ��� ����"; 
    ls->propPriorityBoost        = " blueMSX�� �۾� �켱�� �ֱ�";
    ls->propScreenshotPng       = " Portable Network Graphics (.png) ��ũ���� ���";  // New in 2.5
    ls->propClearHistory         = "��� ���� ����� ������?";
    ls->propOpenRomGB           = "���� �׻� ���� ���� ��� ";
    ls->propDefaultRomType      = "�⺻ �� ����:";
    ls->propGuessRomType        = "�ڵ� �Ǵ�";

    ls->propSettDefSlotGB       = "���콺�� ��� ������ ";
    ls->propSettDefSlots        = "���� ���Կ� �� ����:";
    ls->propSettDefSlot         = " ����";
    ls->propSettDefDrives       = "���� ����̺꿡 ���� ����:";
    ls->propSettDefDrive       = " ����̺�";

    ls->propThemeGB             = "�׸� ";
    ls->propTheme               = "�⺻ �׸�:";


    //----------------------
    // Dropdown related lines
    //----------------------

    ls->enumVideoMonColor       = "�÷�";
    ls->enumVideoMonGrey        = "������ ���";
    ls->enumVideoMonGreen       = "���";
    ls->enumVideoMonAmber       = "ȣ�ڻ�"; 

    ls->enumVideoTypePAL        = "PAL";
    ls->enumVideoTypeNTSC       = "NTSC";

    ls->enumVideoEmuNone        = "����";
    ls->enumVideoEmuYc          = "Y/C ���̺� (����)";
    ls->enumVideoEmuMonitor     = "�����";
    ls->enumVideoEmuYcBlur      = "�����ִ� Y/C ���̺� (����)";
    ls->enumVideoEmuComp        = "������Ʈ (�帴)";
    ls->enumVideoEmuCompBlur    = "�����ִ� ������Ʈ (�帴)";
    ls->enumVideoEmuScale2x     = "Scale 2x";
    ls->enumVideoEmuHq2x        = "Hq2x";

    ls->enumVideoSize1x         = "���� - 320x200";
    ls->enumVideoSize2x         = "�ι� - 640x400";
    ls->enumVideoSizeFullscreen = "��ü ȭ��";

    ls->enumVideoDrvDirectDrawHW = "DirectDraw HW ����";
    ls->enumVideoDrvDirectDraw  = "DirectDraw";
    ls->enumVideoDrvGDI         = "GDI";

    ls->enumVideoFrameskip0     = "����";
    ls->enumVideoFrameskip1     = "1 ������";
    ls->enumVideoFrameskip2     = "2 ������";
    ls->enumVideoFrameskip3     = "3 ������";
    ls->enumVideoFrameskip4     = "4 ������";
    ls->enumVideoFrameskip5     = "5 ������";

    ls->enumSoundDrvNone        = "�Ҹ�����";
    ls->enumSoundDrvWMM         = "WMM ����̹�";
    ls->enumSoundDrvDirectX     = "DirectX ����̹�";

    ls->enumEmuSync1ms          = "MSX�� �ӵ��� ����";
    ls->enumEmuSyncAuto         = "�ڵ� (����)";
    ls->enumEmuSyncNone         = "��������";
    ls->enumEmuSyncVblank       = "PC�� �������ļ��� ����";
    ls->enumEmuAsyncVblank      = "PC�� �������ļ��� �񵿱�";             // New in 2.5

    ls->enumControlsJoyNone     = "����";
    ls->enumControlsJoyMouse    = "���콺";
    ls->enumControlsJoyTetris2Dongle = "��Ʈ���� 2 ����";
    ls->enumControlsJoyTMagicKeyDongle = "����Ű ����";             // New in 2.5
    ls->enumControlsJoy2Button = "2��ư ���̽�ƽ";                   // New in 2.5
    ls->enumControlsJoyGunstick  = "�� ��ƽ";                         // New in 2.5
    ls->enumControlsJoyAsciiLaser="�ƽ�Ű �÷���-X �͹̳����� ������";      // New in 2.5
    ls->enumControlsJoyColeco = "ColecoVision ���̽�ƽ";                // New in 2.5

    ls->enumDiskMsx35Dbl9Sect    = "MSX 3.5 ���, 9 ����";     // New in 2.5
    ls->enumDiskMsx35Dbl8Sect    = "MSX 3.5 ���, 8 ����";     // New in 2.5
    ls->enumDiskMsx35Sgl9Sect    = "MSX 3.5 �ܸ�, 9 ����";     // New in 2.5
    ls->enumDiskMsx35Sgl8Sect    = "MSX 3.5 �ܸ�, 8 ����";     // New in 2.5
    ls->enumDiskSvi525Dbl        = "SVI-328 5.25 ���";           // New in 2.5
    ls->enumDiskSvi525Sgl        = "SVI-328 5.25 �ܸ�";           // New in 2.5


    //----------------------
    // Configuration related lines
    //----------------------

    ls->confTitle                = "blueMSX - �ӽ� ���� ������";
    ls->confConfigText           = "�ӽ� ����";
    ls->confSlotLayout           = "���� ��ġ";
    ls->confMemory               = "�޸�";
    ls->confChipEmulation        = "Ĩ ���ķ��̼�";
    ls->confChipExtras          = "��Ÿ";

    ls->confOpenRom             = "�� �̹��� ����";
    ls->confSaveTitle            = "blueMSX - ���� ����";
    ls->confSaveText             = "�̹� ������ �ֽ��ϴ�. ���� ������ �� ���Ϸ� �ٲٽðڽ��ϱ�?";
    ls->confSaveAsTitle         = "�ٸ� �̸����� ���� ����...";
    ls->confSaveAsMachineName    = "�ӽ� �̸�:";
    ls->confDiscardTitle         = "blueMSX - ����";
    ls->confExitSaveTitle        = "blueMSX - �ӽ� ���� ������ ������";
    ls->confExitSaveText         = "������ ������ ����Ǳ� ���ؼ� ������ �ϼž� �մϴٸ� ���� �������� �ƹ��� ���⵵ �����ʰ� �׳� �����ڽ��ϱ�?";

    ls->confSlotLayoutGB         = "���� ��ġ ";
    ls->confSlotExtSlotGB        = "�ܺ� ���� ";
    ls->confBoardGB             = "�ý��� ";
    ls->confBoardText           = "�ý��� ����:";
    ls->confSlotPrimary          = "�⺻";
    ls->confSlotExpanded         = "Ȯ�� (4���� ���꽽��)";

    ls->confSlotCart            = "īƮ����";
    ls->confSlot                = "����";
    ls->confSubslot             = "���� ����";

    ls->confMemAdd               = "�߰�...";
    ls->confMemEdit              = "����...";
    ls->confMemRemove            = "����";
    ls->confMemSlot              = "����";
    ls->confMemAddresss          = "�ּ�";
    ls->confMemType              = "����";
    ls->confMemRomImage          = "�� �̹���";
    
    ls->confChipVideoGB          = "���� ";
    ls->confChipVideoChip        = "���� Ĩ:";
    ls->confChipVideoRam         = "���� ��:";
    ls->confChipSoundGB          = "���� ";

    ls->confCmosGB                = "CMOS ";
    ls->confCmosEnable            = " CMOS ���";
    ls->confCmosBattery           = " ������ ���";

    ls->confCpuFreqGB            = "CPU ���ļ� ";
    ls->confZ80FreqText          = "Z80 ���ļ�:";
    ls->confR800FreqText         = "R800 ���ļ�:";
    ls->confFdcGB                = "�÷��� ��ũ ��Ʈ�ѷ� ";
    ls->confCFdcNumDrivesText    = "����̺��� ����:";

    ls->confEditMemTitle         = "blueMSX - ���� ����";
    ls->confEditMemGB            = "���� �׸� ";
    ls->confEditMemType          = "����:";
    ls->confEditMemFile          = "����:";
    ls->confEditMemAddress       = "�ּ�";
    ls->confEditMemSize          = "ũ��";
    ls->confEditMemSlot          = "����";


    //----------------------
    // Shortcut lines
    //----------------------

	ls->shortcutKey             = "��Ű";
    ls->shortcutDescription     = "����Ű";

    ls->shortcutSaveConfig      = "blueMSX - ���� ����";
    ls->shortcutOverwriteConfig = "�̹� ������ �ֽ��ϴ�. ���� ������ �� ���Ϸ� �ٲٽðڽ��ϱ�?";
    ls->shortcutExitConfig      = "blueMSX - ����Ű ������ ������";
    ls->shortcutDiscardConfig   = "������ ������ ����Ǳ� ���ؼ� ������ �ϼž� �մϴٸ� ���� �������� �ƹ��� ���⵵ �����ʰ� �׳� �����ڽ��ϱ�?";
    ls->shortcutSaveConfigAs    = "blueMSX - �ٸ��̸����� ����Ű ���� ����...";
    ls->shortcutConfigName      = "���� �̸�:";
    ls->shortcutNewProfile      = "< ���ο� ������ >";
    ls->shortcutConfigTitle     = "blueMSX - ����Ű ���� ������";
    ls->shortcutAssign          = "����";
    ls->shortcutPressText       = "����Ű ���� ����:";
    ls->shortcutScheme          = "����Ű ��Ÿ��:";
    ls->shortcutCartInsert1     = "īƮ���� 1 ����";
    ls->shortcutCartRemove1     = "īƮ���� 1 ����";
    ls->shortcutCartInsert2     = "īƮ���� 2 ����";
    ls->shortcutCartRemove2     = "īƮ���� 2 ����";
    ls->shortcutSpecialMenu1    = "īƮ���� 1 - ����� ���� īƮ����";
    ls->shortcutSpecialMenu2    = "īƮ���� 2 - ����� ���� īƮ����";
    ls->shortcutCartAutoReset   = "īƮ���� ������ ���ķ����� �����";
    ls->shortcutDiskInsertA     = "���� A ����";
    ls->shortcutDiskDirInsertA  = "���� A�� ���丮 ����";
    ls->shortcutDiskRemoveA     = "���� A ������";
    ls->shortcutDiskChangeA     = "���� A ���� ��ȯ(zip���� ����)";
    ls->shortcutDiskAutoResetA  = "���� A ������ ���ķ����� �����";
    ls->shortcutDiskInsertB     = "���� B ����";
    ls->shortcutDiskDirInsertB  = "���� B�� ���丮 ����";
    ls->shortcutDiskRemoveB     = "���� B ������";
    ls->shortcutCasInsert       = "ī��Ʈ ����";
    ls->shortcutCasEject        = "ī��Ʈ ������";
    ls->shortcutCasAutorewind   = "ī��Ʈ �ڵ� �ǰ��� ��� ��ȯ";
    ls->shortcutCasReadOnly     = "ī��Ʈ �б����� ��ȯ";
    ls->shortcutCasSetPosition  = "���� ��ġ ����";
    ls->shortcutCasRewind       = "ī��Ʈ �ǰ���";
    ls->shortcutCasSave         = "ī��Ʈ �̹��� ����";
    ls->shortcutPrnFormFeed     = "������ ���ǵ�";
    ls->shortcutCpuStateLoad    = "CPU ���� �ҷ�����";
    ls->shortcutCpuStateSave    = "CPU ���� ����";
    ls->shortcutCpuStateQload   = "���� �ٷ� �ҷ�����";
    ls->shortcutCpuStateQsave   = "���� �ٷ� ����";
    ls->shortcutAudioCapture    = "�Ҹ� ���� ����/����";
    ls->shortcutScreenshotOrig  = "ȭ�� ����";
    ls->shortcutScreenshotSmall = "���� ũ��� ȭ�� ����(����)";
    ls->shortcutScreenshotLarge = "ū ũ��� ȭ�� ����(����)";
    ls->shortcutQuit            = "blueMSX ������";
    ls->shortcutRunPause        = "���ķ��̼� ����/�Ͻ� ����";
    ls->shortcutStop            = "���ķ��̼� ����";
    ls->shortcutResetHard       = "�ϵ� ����";
    ls->shortcutResetSoft       = "����Ʈ ����";
    ls->shortcutResetClean      = "��ü ����";
    ls->shortcutSizeSmall       = "���� ������ ũ��� ����";
    ls->shortcutSizeNormal      = "���� ������ ũ��� ����";
    ls->shortcutSizeFullscreen  = "��ü ȭ������ ����";
    ls->shortcutSizeMinimized   = "������ �ּ�ȭ";
    ls->shortcutToggleFullscren = "��ü ȭ�� ��ȯ";
    ls->shortcutVolumeIncrease  = "���� ����";
    ls->shortcutVolumeDecrease  = "���� ����";
    ls->shortcutVolumeMute      = "���Ұ�";
    ls->shortcutVolumeStereo    = "���/���׷��� ��ȯ";
    ls->shortcutSwitchMsxAudio  = "MSX-AUDIO ����ġ ��ȯ";
    ls->shortcutSwitchFront     = "�ĳ��Ҵ� ����Ʈ ����ġ ��ȯ";
    ls->shortcutSwitchPause     = "�Ͻ� ���� ����ġ";
    ls->shortcutToggleMouseLock = "���콺 ���� ��ȯ";
    ls->shortcutEmuSpeedMax     = "�ִ� ���ķ��̼� �ӵ�";
    ls->shortcutEmuSpeedToggle  = "���ķ��̼� �ӵ� �ִ�ȭ ��ȯ";
    ls->shortcutEmuSpeedNormal  = "���� ���ķ��̼� �ӵ�";
    ls->shortcutEmuSpeedInc     = "���ķ��̼� �ӵ� ����";
    ls->shortcutEmuSpeedDec     = "���ķ��̼� �ӵ� ����";
    ls->shortcutThemeSwitch     = "�׸� ��ȯ";
    ls->shortcutShowEmuProp     = "���ķ��̼� �Ӽ� ����";
    ls->shortcutShowVideoProp   = "���� �Ӽ� ����";
    ls->shortcutShowAudioProp   = "����� �Ӽ� ����";
    ls->shortcutShowCtrlProp    = "��Ʈ�� �Ӽ� ����";
    ls->shortcutShowPerfProp    = "���� �Ӽ� ����";
    ls->shortcutShowSettProp    = "�ܺ� ���� �Ӽ� ����";
    ls->shortcutShowPorts       = "��Ʈ �Ӽ� ����";
    ls->shortcutShowLanguage    = "��� ����";
    ls->shortcutShowMachines    = "�ӽ� ������ ����";
    ls->shortcutShowShortcuts   = "����Ű ������ ����";
    ls->shortcutShowKeyboard    = "Ű���� ������ ����";
    ls->shortcutShowDebugger    = "����� ����"; 
    ls->shortcutShowTrainer     = "Ʈ���̳� ����"; 
    ls->shortcutShowMixer       = "�ͼ� ����";
    ls->shortcutShowHelp        = "���� ����";
    ls->shortcutShowAbout       = "blueMSX�� ���Ͽ� ����";
    ls->shortcutShowFiles       = "���� �Ӽ� ����";
    ls->shortcutToggleSpriteEnable = "��������Ʈ ���̱�/����� ��ȯ";
    ls->shortcutToggleFdcTiming = "�÷��� ����̺� Ÿ�̹� ���/���� ��ȯ";
    ls->shortcutToggleCpuTrace  = "CPU Ʈ���̽� ��ȯ";


    //----------------------
    // Keyboard config lines
    //----------------------

    ls->keyconfigSelectedKey    = "���õ� Ű:";
    ls->keyconfigMappedTo       = "������ Ű:";
    ls->keyconfigMappingScheme  = "���� ��Ÿ��:";

    
    //----------------------
    // Rom type lines
    //----------------------

    ls->romTypeStandard         = "Standard";
    ls->romTypeMsxdos2          = "MSXDOS 2";
    ls->romTypeKonamiScc        = "Konami SCC";
    ls->romTypeKonami           = "Konami";
    ls->romTypeAscii8           = "ASCII 8";
    ls->romTypeAscii16          = "ASCII 16";
    ls->romTypeGameMaster2      = "Game Master 2 (SRAM)";
    ls->romTypeAscii8Sram       = "ASCII 8 (SRAM)";
    ls->romTypeAscii16Sram      = "ASCII 16 (SRAM)";
    ls->romTypeRtype            = "R-Type";
    ls->romTypeCrossblaim       = "Cross Blaim";
    ls->romTypeHarryFox         = "Harry Fox";
    ls->romTypeMajutsushi       = "Konami Majutsushi";
    ls->romTypeZenima80         = "Zemina 80 in 1";
    ls->romTypeZenima90         = "Zemina 90 in 1";
    ls->romTypeZenima126        = "Zemina 126 in 1";
    ls->romTypeScc              = "SCC";
    ls->romTypeSccPlus          = "SCC+";
    ls->romTypeSnatcher         = "The Snatcher";
    ls->romTypeSdSnatcher       = "SD Snatcher";
    ls->romTypeSccMirrored      = "SCC mirrored";
    ls->romTypeSccExtended      = "SCC extended";
    ls->romTypeFmpac            = "FMPAC (SRAM)";
    ls->romTypeFmpak            = "FMPAK";
    ls->romTypeKonamiGeneric    = "Konami Generic";
    ls->romTypeSuperPierrot     = "Super Pierrot";
    ls->romTypeMirrored         = "Mirrored ROM";
    ls->romTypeNormal           = "Normal ROM";
    ls->romTypeDiskPatch        = "Normal + Disk Patch";
    ls->romTypeCasPatch         = "Normal + Cassette Patch";
    ls->romTypeTc8566afFdc      = "TC8566AF Disk Controller";
    ls->romTypeMicrosolFdc      = "Microsol Disk Controller";
    ls->romTypeNationalFdc      = "National Disk Controller";
    ls->romTypePhilipsFdc       = "Philips Disk Controller";
    ls->romTypeSvi738Fdc        = "SVI-738 Disk Controller";
    ls->romTypeMappedRam        = "Mapped RAM";
    ls->romTypeMirroredRam1k    = "1kB Mirrored RAM";
    ls->romTypeNormalRam        = "Normal RAM";
    ls->romTypeKanji            = "Kanji";
    ls->romTypeHolyQuran        = "Holy Quran";
    ls->romTypeMatsushitaSram   = "Matsushita SRAM";
    ls->romTypePanasonic16      = "Panasonic 16kB SRAM";
    ls->romTypePanasonic32      = "Panasonic 32kB SRAM";
    ls->romTypeBunsetsu         = "Bunsetsu";
    ls->romTypeJisyo            = "Jisyo";
    ls->romTypeKanji12          = "Kanji12";
    ls->romTypeNationalSram     = "National (SRAM)";
    ls->romTypeS1985            = "S1985";
    ls->romTypeS1990            = "S1990";
    ls->romTypeTurborPause      = "Turbo-R Pause";
    ls->romTypeF4deviceNormal   = "F4 Device Normal";
    ls->romTypeF4deviceInvert   = "F4 Device Inverted";
    ls->romTypeMsxMidi          = "MSX-MIDI";
    ls->romTypeTurborTimer      = "Turbo-R Timer";
    ls->romTypeKoei             = "Koei (SRAM)";
    ls->romTypeBasic            = "Basic ROM";
    ls->romTypeHalnote          = "Halnote";
    ls->romTypeLodeRunner       = "Lode Runner";
    ls->romTypeNormal4000       = "Normal 4000h";
    ls->romTypeNormalC000       = "Normal C000h";
    ls->romTypeKonamiSynth      = "Konami Synthesizer";
    ls->romTypeKonamiKbdMast    = "Konami Keyboard Master";
    ls->romTypeKonamiWordPro    = "Konami Word Pro";
    ls->romTypePac              = "PAC (SRAM)";
    ls->romTypeMegaRam          = "MegaRAM";
    ls->romTypeMegaRam128       = "128kB MegaRAM";
    ls->romTypeMegaRam256       = "256kB MegaRAM";
    ls->romTypeMegaRam512       = "512kB MegaRAM";
    ls->romTypeMegaRam768       = "768kB MegaRAM";
    ls->romTypeMegaRam2mb       = "2MB MegaRAM";
    ls->romTypeExtRam           = "External RAM";
    ls->romTypeExtRam512        = "512kB External RAM";
    ls->romTypeExtRam1mb        = "1MB External RAM";
    ls->romTypeExtRam2mb        = "2MB External RAM";
    ls->romTypeExtRam4mb        = "4MB External RAM";
    ls->romTypeMsxMusic         = "MSX Music";
    ls->romTypeMsxAudio         = "MSX Audio";
    ls->romTypeY8950            = "Y8950";
    ls->romTypeMoonsound        = "Moonsound";
    ls->romTypeSvi328Cart       = "SVI-328 Cartridge";
    ls->romTypeSvi328Fdc        = "SVI-328 Disk Controller";
    ls->romTypeSvi328Prn        = "SVI-328 Printer";
    ls->romTypeSvi328Uart       = "SVI-328 Serial Port";
    ls->romTypeSvi328col80      = "SVI-328 80 Column Card";
    ls->romTypeSvi727col80      = "SVI-727 80 Column Card";
    ls->romTypeColecoCart       = "Coleco Cartridge";
    ls->romTypeSg1000Cart       = "SG-1000 Cartridge";
    ls->romTypeTheCastle        = "The Castle";
    ls->romTypeSonyHbi55        = "Sony HBI-55";
    ls->romTypeMsxPrinter       = "MSX Printer";
    ls->romTypeTurborPcm        = "Turbo-R PCM Chip";
    ls->romTypeGameReader       = "Sunrise GameReader";
    ls->romTypeSunriseIde       = "Sunrise IDE";
    ls->romTypeBeerIde          = "Beer IDE";
    ls->romTypeGide             = "GIDE";
    ls->romTypeVmx80            = "Microsol VMX-80";
    ls->romTypeNms8280Digitiz   = "Philips NMS-8280 Digitizer";
    ls->romTypeHbiV1Digitiz     = "Sony HBI-V1 Digitizer";
    ls->romTypeFmdas            = "F&M Direct Assembler System";
    ls->romTypeSfg01            = "Yamaha SFG-01";
    ls->romTypeSfg05            = "Yamaha SFG-05";


    //----------------------
    // Debug type lines
    // Note: Only needs translation if debugger is translated
    //----------------------

    ls->dbgMemVisible           = "Visible Memory";
    ls->dbgMemRamNormal         = "Normal";
    ls->dbgMemRamMapped         = "Mapped";
    ls->dbgMemVram              = "VRAM";
    ls->dbgMemYmf278            = "YMF278 Sample RAM";
    ls->dbgMemAy8950            = "AY8950 Sample RAM";
    ls->dbgMemScc               = "Memory";

    ls->dbgCallstack            = "Callstack";

    ls->dbgRegs                 = "Registers";
    ls->dbgRegsCpu              = "CPU Registers";
    ls->dbgRegsYmf262           = "YMF262 Registers";
    ls->dbgRegsYmf278           = "YMF278 Registers";
    ls->dbgRegsAy8950           = "AY8950 Registers";
    ls->dbgRegsYm2413           = "YM2413 Registers";

    ls->dbgDevRamMapper         = "RAM Mapper";
    ls->dbgDevRam               = "RAM";
    ls->dbgDevIdeBeer           = "Beer IDE";
    ls->dbgDevIdeGide           = "GIDE";
    ls->dbgDevF4Device          = "F4 Device";
    ls->dbgDevFmpac             = "FMPAC";
    ls->dbgDevFmpak             = "FMPAK";
    ls->dbgDevKanji             = "Kanji";
    ls->dbgDevKanji12           = "Kanji 12";
    ls->dbgDevKonamiKbd         = "Konami Keyboard Master";
    ls->dbgDevKorean80          = "Korean 80";
    ls->dbgDevKorean90          = "Korean 90";
    ls->dbgDevKorean128         = "Korean 128";
    ls->dbgDevMegaRam           = "Mega RAM";
    ls->dbgDevFdcMicrosol       = "Microsol FDC";
    ls->dbgDevMoonsound         = "Moonsound";
    ls->dbgDevMsxAudio          = "MSX Audio";
    ls->dbgDevMsxAudioMidi      = "MSX Audio MIDI";
    ls->dbgDevMsxMusic          = "MSX Music";
    ls->dbgDevPrinter           = "Printer";
    ls->dbgDevRs232             = "RS232";
    ls->dbgDevS1990             = "S1990";
    ls->dbgDevSfg05             = "Yamaha SFG-05";
    ls->dbgDevHbi55             = "Sony HBI-55";
    ls->dbgDevSviFdc            = "SVI FDC";
    ls->dbgDevSviPrn            = "SVI Printer";
    ls->dbgDevSvi80Col          = "SVI 80 Column";
    ls->dbgDevPcm               = "PCM";
    ls->dbgDevMatsushita        = "Matsushita";
    ls->dbgDevS1985             = "S1985";
    ls->dbgDevCrtc6845          = "CRTC6845";
    ls->dbgDevTms9929A          = "TMS9929A";
    ls->dbgDevTms99x8A          = "TMS99x8A";
    ls->dbgDevV9938             = "V9938";
    ls->dbgDevV9958             = "V9958";
    ls->dbgDevZ80               = "Z80";
    ls->dbgDevMsxMidi           = "MSX MIDI";
    ls->dbgDevPpi               = "PPI";
    ls->dbgDevRtc               = "RTC";
    ls->dbgDevTrPause           = "TR Pause";
    ls->dbgDevAy8910            = "AY8910 PSG";
    ls->dbgDevScc               = "SCC";


    //----------------------
    // Debug type lines
    // Note: Can only be translated to european languages

    //----------------------
    ls->aboutScrollThanksTo     = "Special thanks to: ";
    ls->aboutScrollAndYou       = "and YOU !!!!";
};

#endif