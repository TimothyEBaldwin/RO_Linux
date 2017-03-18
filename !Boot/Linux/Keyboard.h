/* This source code in this file is licensed to You by Castle Technology
 * Limited ("Castle") and its licensors on contractual terms and conditions
 * ("Licence") which entitle you freely to modify and/or to distribute this
 * source code subject to Your compliance with the terms of the Licence.
 * 
 * This source code has been made available to You without any warranties
 * whatsoever. Consequently, Your use, modification and distribution of this
 * source code is entirely at Your own risk and neither Castle, its licensors
 * nor any other person who has contributed to this source code shall be
 * liable to You for any loss or damage which You may suffer as a result of
 * Your use, modification or distribution of this source code.
 * 
 * Full details of Your rights and obligations are set out in the Licence.
 * You should have received a copy of the Licence with this source code file.
 * If You have not received a copy, the text of the Licence is available
 * online at www.castle-technology.co.uk/riscosbaselicence.htm
 */
/* Created by Hdr2H.  Do not edit.*/
#ifndef IXFS__ROOT___DEV_FD_8_EXPORT_APCS_32_C_GLOBAL_KEYBOARD_H
#define IXFS__ROOT___DEV_FD_8_EXPORT_APCS_32_C_GLOBAL_KEYBOARD_H

#pragma force_top_level
#pragma include_only_once

#define KeyboardID_A500                          (0)
#define KeyboardID_Archimedes                    (1)
#define KeyboardID_PC                            (2)
#define KeyboardID_A4                            (KeyboardID_PC)
#define KeyboardID_RCMM                          (3)
#define KeyboardID_Pandora                       (4)
#define KeyboardID_None                          (0xff)
#define KeyV_KeyboardPresent                     (0)
#define KeyV_KeyUp                               (1)
#define KeyV_KeyDown                             (2)
#define KeyV_NotifyLEDState                      (3)
#define KeyV_EnableDrivers                       (4)
#define KeyV_PseudoEnable                        (5)
#define KeyV_PseudoDisable                       (6)
#define KeyV_PseudoIntMask                       (7)
#define KeyV_PseudoRXInt                         (8)
#define KeyV_PseudoTXInt                         (9)
#define KeyV_PortInfo                            (10)
#define KeyV_DummyKeyboard                       (11)
#define KeyV_KeyboardRemoved                     (16)
#define KeyV_LED_CapsLock                        (1)
#define KeyV_LED_NumLock                         (2)
#define KeyV_LED_ScrollLock                      (4)
#define KeyHandler_KeyTran                       (0)
#define KeyHandler_KeyTranSize                   (4)
#define KeyHandler_InkeyTran                     (8)
#define KeyHandler_ShiftingList                  (12)
#define KeyHandler_SpecialList                   (16)
#define KeyHandler_SpecialCodeTable              (20)
#define KeyHandler_Init                          (24)
#define KeyHandler_PendingAltCode                (28)
#define KeyHandler_Flags                         (32)
#define KeyHandler_Size                          (36)
#define KeyHandler_HasFlags                      (0x80000000)
#define KeyHandler_Flag_Wide                     (0x1)
#define KeyNo_Escape                             (0x0)
#define KeyNo_Function1                          (0x1)
#define KeyNo_Function2                          (0x2)
#define KeyNo_Function3                          (0x3)
#define KeyNo_Function4                          (0x4)
#define KeyNo_Function5                          (0x5)
#define KeyNo_Function6                          (0x6)
#define KeyNo_Function7                          (0x7)
#define KeyNo_Function8                          (0x8)
#define KeyNo_Function9                          (0x9)
#define KeyNo_Function10                         (0xa)
#define KeyNo_Function11                         (0xb)
#define KeyNo_Function12                         (0xc)
#define KeyNo_Print                              (0xd)
#define KeyNo_ScrollLock                         (0xe)
#define KeyNo_Break                              (0xf)
#define KeyNo_BackTick                           (0x10)
#define KeyNo_Digit1                             (0x11)
#define KeyNo_Digit2                             (0x12)
#define KeyNo_Digit3                             (0x13)
#define KeyNo_Digit4                             (0x14)
#define KeyNo_Digit5                             (0x15)
#define KeyNo_Digit6                             (0x16)
#define KeyNo_Digit7                             (0x17)
#define KeyNo_Digit8                             (0x18)
#define KeyNo_Digit9                             (0x19)
#define KeyNo_Digit0                             (0x1a)
#define KeyNo_Minus                              (0x1b)
#define KeyNo_Equals                             (0x1c)
#define KeyNo_Pound                              (0x1d)
#define KeyNo_BackSpace                          (0x1e)
#define KeyNo_Insert                             (0x1f)
#define KeyNo_Home                               (0x20)
#define KeyNo_PageUp                             (0x21)
#define KeyNo_NumLock                            (0x22)
#define KeyNo_NumPadSlash                        (0x23)
#define KeyNo_NumPadStar                         (0x24)
#define KeyNo_NumPadHash                         (0x25)
#define KeyNo_Tab                                (0x26)
#define KeyNo_LetterQ                            (0x27)
#define KeyNo_LetterW                            (0x28)
#define KeyNo_LetterE                            (0x29)
#define KeyNo_LetterR                            (0x2a)
#define KeyNo_LetterT                            (0x2b)
#define KeyNo_LetterY                            (0x2c)
#define KeyNo_LetterU                            (0x2d)
#define KeyNo_LetterI                            (0x2e)
#define KeyNo_LetterO                            (0x2f)
#define KeyNo_LetterP                            (0x30)
#define KeyNo_OpenSquare                         (0x31)
#define KeyNo_CloseSquare                        (0x32)
#define KeyNo_BackSlash                          (0x33)
#define KeyNo_Delete                             (0x34)
#define KeyNo_Copy                               (0x35)
#define KeyNo_PageDown                           (0x36)
#define KeyNo_NumPad7                            (0x37)
#define KeyNo_NumPad8                            (0x38)
#define KeyNo_NumPad9                            (0x39)
#define KeyNo_NumPadMinus                        (0x3a)
#define KeyNo_CtrlLeft                           (0x3b)
#define KeyNo_LetterA                            (0x3c)
#define KeyNo_LetterS                            (0x3d)
#define KeyNo_LetterD                            (0x3e)
#define KeyNo_LetterF                            (0x3f)
#define KeyNo_LetterG                            (0x40)
#define KeyNo_LetterH                            (0x41)
#define KeyNo_LetterJ                            (0x42)
#define KeyNo_LetterK                            (0x43)
#define KeyNo_LetterL                            (0x44)
#define KeyNo_SemiColon                          (0x45)
#define KeyNo_Tick                               (0x46)
#define KeyNo_Return                             (0x47)
#define KeyNo_NumPad4                            (0x48)
#define KeyNo_NumPad5                            (0x49)
#define KeyNo_NumPad6                            (0x4a)
#define KeyNo_NumPadPlus                         (0x4b)
#define KeyNo_ShiftLeft                          (0x4c)
#define KeyNo_NotFittedLeft                      (0x4d)
#define KeyNo_LetterZ                            (0x4e)
#define KeyNo_LetterX                            (0x4f)
#define KeyNo_LetterC                            (0x50)
#define KeyNo_LetterV                            (0x51)
#define KeyNo_LetterB                            (0x52)
#define KeyNo_LetterN                            (0x53)
#define KeyNo_LetterM                            (0x54)
#define KeyNo_Comma                              (0x55)
#define KeyNo_Dot                                (0x56)
#define KeyNo_Slash                              (0x57)
#define KeyNo_ShiftRight                         (0x58)
#define KeyNo_CursorUp                           (0x59)
#define KeyNo_NumPad1                            (0x5a)
#define KeyNo_NumPad2                            (0x5b)
#define KeyNo_NumPad3                            (0x5c)
#define KeyNo_CapsLock                           (0x5d)
#define KeyNo_AltLeft                            (0x5e)
#define KeyNo_Space                              (0x5f)
#define KeyNo_AltRight                           (0x60)
#define KeyNo_CtrlRight                          (0x61)
#define KeyNo_CursorLeft                         (0x62)
#define KeyNo_CursorDown                         (0x63)
#define KeyNo_CursorRight                        (0x64)
#define KeyNo_NumPad0                            (0x65)
#define KeyNo_NumPadDot                          (0x66)
#define KeyNo_NumPadEnter                        (0x67)
#define KeyNo_AcornLeft                          (0x68)
#define KeyNo_AcornRight                         (0x69)
#define KeyNo_Menu                               (0x6a)
#define KeyNo_NoConvert                          (0x6b)
#define KeyNo_Convert                            (0x6c)
#define KeyNo_Kana                               (0x6d)
#define KeyNo_NotFittedRight                     (0x6e)
#define KeyNo_FN                                 (0x6f)
#define KeyNo_LeftMouse                          (0x70)
#define KeyNo_CentreMouse                        (0x71)
#define KeyNo_RightMouse                         (0x72)
#define KeyNo_Mouse1                             (0x73)
#define KeyNo_Mouse2                             (0x74)
#define KeyNo_CommercialAt                       (0x200)
#define KeyNo_LeftParenthesis                    (0x201)
#define KeyNo_RightParenthesis                   (0x202)
#define KeyNo_ExclamationMark                    (0x203)
#define KeyNo_LowLine                            (0x204)
#define KeyNo_BrightnessDown                     (0x205)
#define KeyNo_BrightnessUp                       (0x206)
#define KeyNo_QuotationMark                      (0x207)
#define KeyNo_PlusSign                           (0x208)
#define KeyNo_AcuteAccent                        (0x209)
#define KeyNo_YenSign                            (0x20a)
#define KeyNo_Colon                              (0x20b)
#define KeyNo_QuestionMark                       (0x20c)
#define KeyNo_VerticalLine                       (0x20d)
#define KeyNo_DollarSign                         (0x20e)
#define KeyNo_EuroSign                           (0x20f)
#define KeyNo_LidClosed                          (0x210)
#define KeyNo_Power                              (0x211)
#define KeyScan_ShiftEither                      (0)
#define KeyScan_CtrlEither                       (1)
#define KeyScan_AltEither                        (2)
#define KeyScan_ShiftLeft                        (3)
#define KeyScan_CtrlLeft                         (4)
#define KeyScan_AltLeft                          (5)
#define KeyScan_ShiftRight                       (6)
#define KeyScan_CtrlRight                        (7)
#define KeyScan_AltRight                         (8)
#define KeyScan_LeftMouse                        (9)
#define KeyScan_CentreMouse                      (10)
#define KeyScan_RightMouse                       (11)
#define KeyScan_FN                               (12)
#define KeyScan_LetterQ                          (16)
#define KeyScan_Digit3                           (17)
#define KeyScan_Digit4                           (18)
#define KeyScan_Digit5                           (19)
#define KeyScan_Function4                        (20)
#define KeyScan_Digit8                           (21)
#define KeyScan_Function7                        (22)
#define KeyScan_Minus                            (23)
#define KeyScan_CircumflexAccent                 (24)
#define KeyScan_CursorLeft                       (25)
#define KeyScan_NumPad6                          (26)
#define KeyScan_NumPad7                          (27)
#define KeyScan_Function11                       (28)
#define KeyScan_Function12                       (29)
#define KeyScan_Function10                       (30)
#define KeyScan_ScrollLock                       (31)
#define KeyScan_Print                            (32)
#define KeyScan_LetterW                          (33)
#define KeyScan_LetterE                          (34)
#define KeyScan_LetterT                          (35)
#define KeyScan_Digit7                           (36)
#define KeyScan_LetterI                          (37)
#define KeyScan_Digit9                           (38)
#define KeyScan_Digit0                           (39)
#define KeyScan_LowLine                          (40)
#define KeyScan_CursorDown                       (41)
#define KeyScan_NumPad8                          (42)
#define KeyScan_NumPad9                          (43)
#define KeyScan_Break                            (44)
#define KeyScan_BackTick                         (45)
#define KeyScan_Pound                            (46)
#define KeyScan_BackSpace                        (47)
#define KeyScan_Digit1                           (48)
#define KeyScan_Digit2                           (49)
#define KeyScan_LetterD                          (50)
#define KeyScan_LetterR                          (51)
#define KeyScan_Digit6                           (52)
#define KeyScan_LetterU                          (53)
#define KeyScan_LetterO                          (54)
#define KeyScan_LetterP                          (55)
#define KeyScan_OpenSquare                       (56)
#define KeyScan_CursorUp                         (57)
#define KeyScan_NumPadPlus                       (58)
#define KeyScan_NumPadMinus                      (59)
#define KeyScan_NumPadEnter                      (60)
#define KeyScan_Insert                           (61)
#define KeyScan_Home                             (62)
#define KeyScan_PageUp                           (63)
#define KeyScan_CapsLock                         (64)
#define KeyScan_LetterA                          (65)
#define KeyScan_LetterX                          (66)
#define KeyScan_LetterF                          (67)
#define KeyScan_LetterY                          (68)
#define KeyScan_LetterJ                          (69)
#define KeyScan_LetterK                          (70)
#define KeyScan_CommercialAt                     (71)
#define KeyScan_Colon                            (72)
#define KeyScan_Return                           (73)
#define KeyScan_NumPadSlash                      (74)
#define KeyScan_NumPadDelete                     (75)
#define KeyScan_NumPadDot                        (76)
#define KeyScan_NumLock                          (77)
#define KeyScan_PageDown                         (78)
#define KeyScan_Tick                             (79)
#define KeyScan_ShiftLock                        (80)
#define KeyScan_LetterS                          (81)
#define KeyScan_LetterC                          (82)
#define KeyScan_LetterG                          (83)
#define KeyScan_LetterH                          (84)
#define KeyScan_LetterN                          (85)
#define KeyScan_LetterL                          (86)
#define KeyScan_SemiColon                        (87)
#define KeyScan_CloseSquare                      (88)
#define KeyScan_Delete                           (89)
#define KeyScan_NumPadHash                       (90)
#define KeyScan_NumPadStar                       (91)
#define KeyScan_NumPadComma                      (92)
#define KeyScan_Equals                           (93)
#define KeyScan_NotFittedLeft                    (94)
#define KeyScan_NotFittedRight                   (95)
#define KeyScan_Tab                              (96)
#define KeyScan_LetterZ                          (97)
#define KeyScan_Space                            (98)
#define KeyScan_LetterV                          (99)
#define KeyScan_LetterB                          (100)
#define KeyScan_LetterM                          (101)
#define KeyScan_Comma                            (102)
#define KeyScan_Dot                              (103)
#define KeyScan_Slash                            (104)
#define KeyScan_Copy                             (105)
#define KeyScan_NumPad0                          (106)
#define KeyScan_NumPad1                          (107)
#define KeyScan_NumPad3                          (108)
#define KeyScan_NoConvert                        (109)
#define KeyScan_Convert                          (110)
#define KeyScan_Kana                             (111)
#define KeyScan_Escape                           (112)
#define KeyScan_Function1                        (113)
#define KeyScan_Function2                        (114)
#define KeyScan_Function3                        (115)
#define KeyScan_Function5                        (116)
#define KeyScan_Function6                        (117)
#define KeyScan_Function8                        (118)
#define KeyScan_Function9                        (119)
#define KeyScan_BackSlash                        (120)
#define KeyScan_CursorRight                      (121)
#define KeyScan_NumPad4                          (122)
#define KeyScan_NumPad5                          (123)
#define KeyScan_NumPad2                          (124)
#define KeyScan_AcornLeft                        (125)
#define KeyScan_AcornRight                       (126)
#define KeyScan_Menu                             (127)
#define KeyScan_NoKey                            (255)
#define KeyScan_CommercialAt_Alt                 (15)
#define KeyScan_LeftParenthesis                  (271)
#define KeyScan_RightParenthesis                 (527)
#define KeyScan_ExclamationMark                  (783)
#define KeyScan_LowLine_Alt                      (1039)
#define KeyScan_BrightnessDown                   (1295)
#define KeyScan_BrightnessUp                     (1551)
#define KeyScan_QuotationMark                    (1807)
#define KeyScan_PlusSign                         (2063)
#define KeyScan_AcuteAccent                      (2319)
#define KeyScan_YenSign                          (2575)
#define KeyScan_Colon_Alt                        (2831)
#define KeyScan_QuestionMark                     (3087)
#define KeyScan_VerticalLine                     (3343)
#define KeyScan_DollarSign                       (3599)
#define KeyScan_EuroSign                         (3855)
#define KeyScan_LidClosed                        (4111)
#define KeyScan_Power                            (4367)
#endif
