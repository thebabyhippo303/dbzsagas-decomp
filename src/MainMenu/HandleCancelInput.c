/* MainMenu__HandleCancelInput @ 0x80143DAC (size: 0x72C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sound__Play2D(s32, s32);
void ConfirmationDialog__Hide(void *);
s32 MainMenu__IsPlayerSelectTransitionActive(void *);
void MainMenu__ResetCharacterSelection(void *);
s32 MenuInput__IsCancelTriggered(s32);
s32 UIList__GetSelectedIndex(void *);
void MainMenu__ConfigureSagaSelection(void *, s32);
void MainMenu__ConfigureScreen(void *, int);
void Options__SetDialogVolume(void *, int);
void Options__SetMusicVolume(void *, int);
void Options__SetSoundVolume(void *, int);
int UIList__GetSelectedEntry(void *);
void UIList__SelectByValue(void *, int);
void fn_80260304(void *, float, float);
int fn_80260A5C(void *);
void fn_8026B0C8(void *, int);
void fn_8026B420(void *);
M2C_UNK PersistentData__GetPlayerCount(s32);
M2C_UNK OptionsMenu__ClearWidgetOpacity(s32);
extern M2C_UNK lbl_8032BA5C __attribute__((section(".data")));
extern f32 lbl_8032BA68 __attribute__((section(".data")));
extern f32 lbl_8032BA6C __attribute__((section(".data")));
extern f32 lbl_8032BA70 __attribute__((section(".data")));
extern f32 lbl_8032BA74 __attribute__((section(".data")));
extern f32 lbl_8032BA78;
extern f32 lbl_8032BA7C __attribute__((section(".data")));
extern void *lbl_803DC368;

void MainMenu__HandleCancelInput(void *arg0) {
    s32 ld_D0;
    f32 spC;
    M2C_UNK sp8;
    s32 temp_r28;
    s32 var_r27;
    s32 var_r4;
    void *temp_r11;
    void *temp_r29;
    void *temp_r30;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r31;
    void *var_r9;

    var_r27 = 0;
    if (fn_80260A5C(M2C_FIELD(arg0, s32 *, 0xC47C) + 0xF4) == 0) {
        temp_r28 = M2C_FIELD(arg0, s32 *, 0x22344);
        if (temp_r28 != 0x10) {
            if (temp_r28 <= 0x10) {
                if (temp_r28 != 5) {
                    if (temp_r28 <= 5) {
                        if (temp_r28 != 3) {
                            if (temp_r28 <= 3) {
                                if (temp_r28 >= 1) {
                                    goto block_61;
                                }
                            } else {
                                goto block_61;
                            }
                        } else {
                            var_r27 = 1;
                            MainMenu__ConfigureScreen(arg0, 1);
                            Sound__Play2D((s32) &lbl_8032BA5C, 0);
                            goto block_61;
                        }
                    } else {
                        if (temp_r28 != 0xC) {
                            if (temp_r28 <= 0xC) {
                                if (temp_r28 != 7) {
                                    if (9 != temp_r28) {
                                        return;
                                    }
                                    goto block_41;
                                }
                                var_r27 = 1;
                                Sound__Play2D((s32) &lbl_8032BA5C, 0);
                                MainMenu__ConfigureScreen(arg0, 3);
                                if (PersistentData__GetPlayerCount((s32) (lbl_803DC368 + 0x138)) == 1) {
                                    UIList__SelectByValue(arg0 + 0x16504, 0xB);
                                } else {
                                    UIList__SelectByValue(arg0 + 0x16504, 0xC);
                                }
                                goto block_61;
                            }
                            if (temp_r28 != 0xE) {
                                if (temp_r28 != 0xF) {
                                    return;
                                }
                                goto block_41;
                            }
                            goto block_41;
                        }
                        var_r27 = 1;
                        Sound__Play2D((s32) &lbl_8032BA5C, 0);
                        MainMenu__ConfigureScreen(arg0, 0xB);
                        goto block_61;
                    }
                } else {
                    if (MainMenu__IsPlayerSelectTransitionActive(arg0 + 0x11F68) == 0) {
                        var_r27 = 1;
                        Sound__Play2D((s32) &lbl_8032BA5C, 0);
                        MainMenu__ConfigureScreen(arg0, 7);
                        MainMenu__ConfigureSagaSelection(arg0, M2C_FIELD(arg0, s32 *, 0x22354));
                        ld_D0 = M2C_FIELD(lbl_803DC368, s32 *, 0xD0);
                        UIList__SelectByValue(arg0 + 0x16504, ld_D0);
                    }
                    goto block_61;
                }
            } else if (temp_r28 != 0x19) {
                if (temp_r28 <= 0x19) {
                    if (temp_r28 != 0x13) {
                        if (temp_r28 <= 0x13) {
                            if (temp_r28 != 0x11) {
                                if (temp_r28 != 0x12) {
                                    return;
                                }
                                goto block_61;
                            }
                            M2C_FIELD(arg0, f32 *, 0x2234C) = (f32) lbl_8032BA68;
                            if (MainMenu__IsPlayerSelectTransitionActive(arg0 + 0xFC9C) == 0) {
                                if (MainMenu__IsPlayerSelectTransitionActive(arg0 + 0x11F68) == 0) {
                                    var_r27 = 1;
                                    Sound__Play2D((s32) &lbl_8032BA5C, 0);
                                    MainMenu__ConfigureScreen(arg0, 0x13);
                                }
                            }
                            temp_r31 = arg0 + 0xFC9C;
                            if (MainMenu__IsPlayerSelectTransitionActive(temp_r31) != 0) {
                                if (MenuInput__IsCancelTriggered(0) != 0) {
                                    MainMenu__ResetCharacterSelection(temp_r31);
                                }
                            }
                            temp_r31_2 = arg0 + 0x11F68;
                            if (MainMenu__IsPlayerSelectTransitionActive(temp_r31_2) != 0) {
                                if (MenuInput__IsCancelTriggered(1) != 0) {
                                    MainMenu__ResetCharacterSelection(temp_r31_2);
                                }
                            }
                            goto block_61;
                        }
                        if (temp_r28 != 0x16) {
                            if (temp_r28 != 0x17) {
                                return;
                            }
                            goto block_61;
                        }
                        var_r27 = 1;
                        Sound__Play2D((s32) &lbl_8032BA5C, 0);
                        Options__SetDialogVolume(lbl_803DC368 + 0x370, M2C_FIELD(arg0, u32 *, 0x22380));
                        Options__SetMusicVolume(lbl_803DC368 + 0x370, M2C_FIELD(arg0, s32 *, 0x2237C));
                        Options__SetSoundVolume(lbl_803DC368 + 0x370, M2C_FIELD(arg0, s32 *, 0x22378));
                        OptionsMenu__ClearWidgetOpacity((s32) (arg0 + 0x16890));
                        goto block_42;
                    }
                    var_r27 = 1;
                    Sound__Play2D((s32) &lbl_8032BA5C, 0);
                    MainMenu__ConfigureScreen(arg0, 0xF);
                    if (PersistentData__GetPlayerCount((s32) (lbl_803DC368 + 0x138)) == 1) {
                        UIList__SelectByValue(arg0 + 0x16504, 0x23);
                    } else {
                        UIList__SelectByValue(arg0 + 0x16504, 0x24);
                    }
                    goto block_61;
                }
                if (temp_r28 != 0x21) {
                    if (temp_r28 <= 0x21) {
                        if (temp_r28 <= 0x1C) {
                            if (temp_r28 >= 0x1B) {
                                goto block_61;
                            }
                        }
                    } else if (temp_r28 != 0x22) {
                        if (temp_r28 == 0x23) {
                            goto block_41;
                        }
                    } else {
                        goto block_61;
                    }
                } else {
block_41:
                    Sound__Play2D((s32) &lbl_8032BA5C, 0);
                    var_r27 = 1;
block_42:
                    MainMenu__ConfigureScreen(arg0, 1);
                    goto block_61;
                }
            } else {
                var_r27 = 1;
                Sound__Play2D((s32) &lbl_8032BA5C, 0);
                ConfirmationDialog__Hide(arg0 + 0x20058);
                M2C_FIELD(arg0, s32 *, 0x22344) = 0x15;
                goto block_61;
            }
        } else {
            temp_r30 = arg0 + 0xFC9C;
            M2C_FIELD(arg0, f32 *, 0x2234C) = (f32) lbl_8032BA68;
            if (MainMenu__IsPlayerSelectTransitionActive(temp_r30) != 0) {
                MainMenu__ResetCharacterSelection(temp_r30);
            } else {
                var_r27 = 1;
                Sound__Play2D((s32) &lbl_8032BA5C, 0);
                MainMenu__ConfigureScreen(arg0, 0x13);
            }
block_61:
            if (temp_r28 != 0xF) {
                if (temp_r28 <= 0xF) {
                    if (temp_r28 != 0xB) {
                        if (temp_r28 <= 0xB) {
                            if (temp_r28 != 2) {
                                var_r31 = arg0 + 0x10000;
                            } else {
                                var_r9 = arg0 + 0x10000;
                                var_r4 = 1;
                                goto block_82;
                            }
                        } else if (temp_r28 != 0xE) {
                            var_r31 = arg0 + 0x10000;
                        } else {
                            goto block_81;
                        }
                    } else {
                        var_r9 = arg0 + 0x10000;
                        var_r4 = 2;
                        goto block_82;
                    }
                } else if (temp_r28 != 0x16) {
                    if (temp_r28 <= 0x16) {
                        if (temp_r28 != 0x15) {
                            var_r31 = arg0 + 0x10000;
                        } else {
                            var_r9 = arg0 + 0x10000;
                            var_r4 = 5;
                            goto block_82;
                        }
                    } else if (temp_r28 != 0x18) {
                        if (temp_r28 != 0x21) {
                            var_r31 = arg0 + 0x10000;
                        } else {
                            UIList__SelectByValue(arg0 + 0x16504, 0xA);
                            var_r31 = arg0 + 0x10000;
                        }
                    } else {
                        var_r9 = arg0 + 0x10000;
                        var_r4 = 7;
                        goto block_82;
                    }
                } else {
                    var_r9 = arg0 + 0x10000;
                    var_r4 = 6;
                    goto block_82;
                }
            } else {
block_81:
                var_r9 = arg0 + 0x10000;
                var_r4 = 4;
block_82:
                var_r31 = var_r9;
                UIList__SelectByValue(var_r9 + 0x6504, var_r4);
            }
            if ((s32) M2C_FIELD(var_r31, s32 *, 0x6848) > 0) {
                if (var_r27 != 0) {
                    if ((u32) (temp_r28 - 4) > 1U) {
                        if (temp_r28 != 0x10) {
                            if (temp_r28 == 0x11) {
                                goto block_89;
                            }
                            temp_r11 = M2C_FIELD(var_r31, void **, 0x5B40);
                            M2C_FIELD(temp_r11, M2C_UNK (**)(void *, f32), 0x134)(var_r31 + 0x59A4 + M2C_FIELD(temp_r11, s16 *, 0x130), lbl_8032BA6C);
                        } else {
                            goto block_89;
                        }
                    } else {
block_89:
                        temp_r30 = M2C_FIELD(var_r31, void **, 0x5B40);
                        M2C_FIELD(temp_r30, M2C_UNK (**)(void *, f32, f32), 0x134)(var_r31 + 0x59A4 + M2C_FIELD(temp_r30, s16 *, 0x130), lbl_8032BA6C, lbl_8032BA6C);
                    }
                    temp_r29 = var_r31 + 0x6504;
                    temp_r31 = var_r31 + 0x59A4 + (UIList__GetSelectedIndex(temp_r29) * 0x1A0);
                    temp_r9 = M2C_FIELD(temp_r31, void **, 0x19C);
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32), 0x134)(temp_r31 + M2C_FIELD(temp_r9, s16 *, 0x130), lbl_8032BA6C);
                    temp_r3 = UIList__GetSelectedEntry(temp_r29);
                    temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x19C);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK *, f32 *), 0xB4)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0xB0), &sp8, &spC);
                    fn_8026B420(M2C_FIELD(var_r31, void **, -0x3B84));
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x244, lbl_8032BA68, lbl_8032BA6C);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x244, lbl_8032BA74, lbl_8032BA68);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x244, lbl_8032BA70, lbl_8032BA6C);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x64, lbl_8032BA68, spC);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x64, lbl_8032BA74, spC);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x64, lbl_8032BA78, spC);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x64, lbl_8032BA70, spC);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0xF4, lbl_8032BA68, lbl_8032BA6C);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0xF4, lbl_8032BA74, lbl_8032BA6C);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0xF4, lbl_8032BA78, lbl_8032BA7C);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0xF4, lbl_8032BA70, lbl_8032BA6C);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x124, lbl_8032BA68, lbl_8032BA6C);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x124, lbl_8032BA74, lbl_8032BA6C);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x124, lbl_8032BA78, lbl_8032BA7C);
                    fn_80260304(M2C_FIELD(var_r31, void **, -0x3B84) + 0x124, lbl_8032BA70, lbl_8032BA6C);
                    fn_8026B0C8(M2C_FIELD(var_r31, void **, -0x3B84), 0);
                }
            }
        }
    }
}
