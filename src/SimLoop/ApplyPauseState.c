/* SimLoop__ApplyPauseState @ 0x8001EA8C (size: 0x9D4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Fade__IsRecordActive(s32);
void Audio__Pause(void *, s32);
s32 Sound__GetEnvGroup(void);
void SfxEnvPlayer__Pause(void *);
s32 ControllerMap__GetPlayerController(void *, u32);
void SfxEnvPlayer__Resume(void *);
void StreamQueue__Volume(void *, f32);
M2C_UNK MainMenu__EnterPauseScreen(s32, f32);
M2C_UNK Audio__Resume(s32, s32);
M2C_UNK MainMenu__ExitPauseScreen(s32, f32);
extern f32 lbl_8030FE84 __attribute__((section(".data")));
extern f32 lbl_8030FE88;
extern f32 lbl_8030FE8C __attribute__((section(".data")));
extern f32 lbl_8030FE90 __attribute__((section(".data")));
extern f32 lbl_8030FE94 __attribute__((section(".data")));
extern M2C_UNK lbl_803A35A0 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern void *lbl_803DC70C;
extern void *lbl_803DCC20;
extern void *lbl_803DCC74;

void SimLoop__ApplyPauseState(void *arg0) {
    f32 var_f0;
    f32 var_f0_10;
    f32 var_f0_11;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f0_7;
    f32 var_f0_8;
    f32 var_f0_9;
    s32 temp_r0;
    s32 temp_r30;
    s32 temp_r9_3;
    s32 var_cr0_eq;
    s32 var_cr0_eq_2;
    s32 var_ctr;
    s32 var_ctr_10;
    s32 var_ctr_11;
    s32 var_ctr_12;
    s32 var_ctr_13;
    s32 var_ctr_14;
    s32 var_ctr_15;
    s32 var_ctr_16;
    s32 var_ctr_17;
    s32 var_ctr_18;
    s32 var_ctr_19;
    s32 var_ctr_20;
    s32 var_ctr_21;
    s32 var_ctr_22;
    s32 var_ctr_23;
    s32 var_ctr_24;
    s32 var_ctr_25;
    s32 var_ctr_26;
    s32 var_ctr_27;
    s32 var_ctr_28;
    s32 var_ctr_29;
    s32 var_ctr_2;
    s32 var_ctr_30;
    s32 var_ctr_3;
    s32 var_ctr_4;
    s32 var_ctr_5;
    s32 var_ctr_6;
    s32 var_ctr_7;
    s32 var_ctr_8;
    s32 var_ctr_9;
    u32 temp_r4;
    u32 var_r31;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;

    temp_r30 = M2C_FIELD(arg0, s32 *, 0x240);
    if (Fade__IsRecordActive(0) == 0) {
        if (temp_r30 != 0) {
            temp_r9 = M2C_FIELD(lbl_803DC70C, void **, 0x19C);
            if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(lbl_803DC70C + M2C_FIELD(temp_r9, s16 *, 0x3A0)) == 0) {
                if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x2E4) = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C);
                    M2C_FIELD(arg0, s32 *, 0x2E8) = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                }
                if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                        } else {
                            var_f0 = lbl_8030FE84;
                            goto block_19;
                        }
                    } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                    } else {
                        var_cr0_eq = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            var_f0 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                            do {
                                var_f0 *= lbl_8030FE88;
                                var_ctr -= 1;
                            } while (var_ctr != 0);
block_19:
                            M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0;
                        }
                    }
                } else {
                    var_cr0_eq = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                        var_ctr_2 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                        do {
                            M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                            var_ctr_2 -= 1;
                        } while (var_ctr_2 != 0);
                    }
                }
                M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 0;
                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) lbl_8030FE8C;
                M2C_FIELD(arg0, f32 *, 0x2D8) = (f32) lbl_8030FE8C;
                M2C_FIELD(arg0, f32 *, 0x2D0) = (f32) lbl_8030FE8C;
                if (var_cr0_eq == 0) {
                    Audio__Pause(lbl_803DCC20, 0);
                    StreamQueue__Volume(lbl_803DCC20, M2C_FIELD(lbl_803DC368, f32 *, 0x110) * lbl_8030FE90);
                    SfxEnvPlayer__Pause(Sound__GetEnvGroup());
                }
                var_r31 = 0;
loop_24:
                if (var_r31 < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), u32 *, 0x10)) {
                    temp_r4 = var_r31;
                    var_r31 += 1;
                    temp_r3 = ControllerMap__GetPlayerController(lbl_803DCC74, temp_r4);
                    temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x1F8);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x44)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0x40), 1);
                    goto loop_24;
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x244) != 0) {
                    MainMenu__EnterPauseScreen((s32) lbl_803DC70C, lbl_8030FE8C);
                }
            }
        } else {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x2E4);
            temp_r9_3 = M2C_FIELD(arg0, s32 *, 0x2E8);
            switch (temp_r0) {                      /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                        } else {
                            var_f0_2 = lbl_8030FE84;
                            goto block_47;
                        }
                    } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                    } else {
                        var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr_3 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            var_f0_2 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                            do {
                                var_f0_2 *= lbl_8030FE88;
                                var_ctr_3 -= 1;
                            } while (var_ctr_3 != 0);
block_47:
                            M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0_2;
                        }
                    }
                } else {
                    var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                        var_ctr_4 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                        do {
                            M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                            var_ctr_4 -= 1;
                        } while (var_ctr_4 != 0);
                    }
                }
                M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 0;
                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) lbl_8030FE8C;
                break;
            case 1:                                 /* switch 1 */
                switch (temp_r9_3) {                /* switch 2; irregular */
                case 4:                             /* switch 2 */
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                            } else {
                                var_f0_3 = lbl_8030FE84;
                                goto block_67;
                            }
                        } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                        } else {
                            var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                                var_ctr_5 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                                var_f0_3 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                                do {
                                    var_f0_3 *= lbl_8030FE88;
                                    var_ctr_5 -= 1;
                                } while (var_ctr_5 != 0);
block_67:
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0_3;
                            }
                        }
                    } else {
                        var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr_6 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            do {
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                                var_ctr_6 -= 1;
                            } while (var_ctr_6 != 0);
                        }
                    }
                    var_ctr_7 = 4;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 1;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) = 4;
                    do {
                        M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) * lbl_8030FE88);
                        var_ctr_7 -= 1;
                    } while (var_ctr_7 != 0);
                    break;
                case 3:                             /* switch 2 */
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                            } else {
                                var_f0_4 = lbl_8030FE84;
                                goto block_85;
                            }
                        } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                        } else {
                            var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                                var_ctr_8 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                                var_f0_4 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                                do {
                                    var_f0_4 *= lbl_8030FE88;
                                    var_ctr_8 -= 1;
                                } while (var_ctr_8 != 0);
block_85:
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0_4;
                            }
                        }
                    } else {
                        var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr_9 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            do {
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                                var_ctr_9 -= 1;
                            } while (var_ctr_9 != 0);
                        }
                    }
                    var_ctr_10 = 3;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 1;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) = 3;
                    do {
                        M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) * lbl_8030FE88);
                        var_ctr_10 -= 1;
                    } while (var_ctr_10 != 0);
                    break;
                case 2:                             /* switch 2 */
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                            } else {
                                var_f0_5 = lbl_8030FE84;
                                goto block_103;
                            }
                        } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                        } else {
                            var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                                var_ctr_11 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                                var_f0_5 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                                do {
                                    var_f0_5 *= lbl_8030FE88;
                                    var_ctr_11 -= 1;
                                } while (var_ctr_11 != 0);
block_103:
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0_5;
                            }
                        }
                    } else {
                        var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr_12 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            do {
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                                var_ctr_12 -= 1;
                            } while (var_ctr_12 != 0);
                        }
                    }
                    var_ctr_13 = 2;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 1;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) = 2;
                    do {
                        M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) * lbl_8030FE88);
                        var_ctr_13 -= 1;
                    } while (var_ctr_13 != 0);
                    break;
                default:                            /* switch 2 */
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                            } else {
                                var_f0_6 = lbl_8030FE84;
                                goto block_121;
                            }
                        } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                        } else {
                            var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                                var_ctr_14 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                                var_f0_6 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                                do {
                                    var_f0_6 *= lbl_8030FE88;
                                    var_ctr_14 -= 1;
                                } while (var_ctr_14 != 0);
block_121:
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0_6;
                            }
                        }
                    } else {
                        var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr_15 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            do {
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                                var_ctr_15 -= 1;
                            } while (var_ctr_15 != 0);
                        }
                    }
                    var_ctr_16 = 1;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) = 1;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 1;
                    do {
                        M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) * lbl_8030FE88);
                        var_ctr_16 -= 1;
                    } while (var_ctr_16 != 0);
                    break;
                }
                break;
            case 2:                                 /* switch 1 */
                switch (temp_r9_3) {                /* switch 3; irregular */
                case 1:                             /* switch 3 */
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                            } else {
                                var_f0_7 = lbl_8030FE84;
                                goto block_145;
                            }
                        } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                        } else {
                            var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                                var_ctr_17 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                                var_f0_7 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                                do {
                                    var_f0_7 *= lbl_8030FE88;
                                    var_ctr_17 -= 1;
                                } while (var_ctr_17 != 0);
block_145:
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0_7;
                            }
                        }
                    } else {
                        var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr_18 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            do {
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                                var_ctr_18 -= 1;
                            } while (var_ctr_18 != 0);
                        }
                    }
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 2;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) = 1;
                    var_ctr_19 = 1;
                    do {
                        M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                        var_ctr_19 -= 1;
                    } while (var_ctr_19 != 0);
                    break;
                case 2:                             /* switch 3 */
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                            } else {
                                var_f0_8 = lbl_8030FE84;
                                goto block_163;
                            }
                        } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                        } else {
                            var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                                var_ctr_20 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                                var_f0_8 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                                do {
                                    var_f0_8 *= lbl_8030FE88;
                                    var_ctr_20 -= 1;
                                } while (var_ctr_20 != 0);
block_163:
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0_8;
                            }
                        }
                    } else {
                        var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr_21 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            do {
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                                var_ctr_21 -= 1;
                            } while (var_ctr_21 != 0);
                        }
                    }
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) = 2;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 2;
                    var_ctr_22 = 2;
                    do {
                        M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                        var_ctr_22 -= 1;
                    } while (var_ctr_22 != 0);
                    break;
                case 3:                             /* switch 3 */
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                            } else {
                                var_f0_9 = lbl_8030FE84;
                                goto block_181;
                            }
                        } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                        } else {
                            var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                                var_ctr_23 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                                var_f0_9 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                                do {
                                    var_f0_9 *= lbl_8030FE88;
                                    var_ctr_23 -= 1;
                                } while (var_ctr_23 != 0);
block_181:
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0_9;
                            }
                        }
                    } else {
                        var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr_24 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            do {
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                                var_ctr_24 -= 1;
                            } while (var_ctr_24 != 0);
                        }
                    }
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 2;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) = 3;
                    var_ctr_25 = 3;
                    do {
                        M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                        var_ctr_25 -= 1;
                    } while (var_ctr_25 != 0);
                    break;
                default:                            /* switch 3 */
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                            } else {
                                var_f0_10 = lbl_8030FE84;
                                goto block_199;
                            }
                        } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                        } else {
                            var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                                var_ctr_26 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                                var_f0_10 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                                do {
                                    var_f0_10 *= lbl_8030FE88;
                                    var_ctr_26 -= 1;
                                } while (var_ctr_26 != 0);
block_199:
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0_10;
                            }
                        }
                    } else {
                        var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr_27 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            do {
                                M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                                var_ctr_27 -= 1;
                            } while (var_ctr_27 != 0);
                        }
                    }
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 2;
                    M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) = 4;
                    var_ctr_28 = 4;
                    do {
                        M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                        var_ctr_28 -= 1;
                    } while (var_ctr_28 != 0);
                    break;
                }
                break;
            default:                                /* switch 1 */
                if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 1) {
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) <= 1) {
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 0) {
                        } else {
                            var_f0_11 = lbl_8030FE84;
                            goto block_217;
                        }
                    } else if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) != 2) {
                    } else {
                        var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                        if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                            var_ctr_29 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                            var_f0_11 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                            do {
                                var_f0_11 *= lbl_8030FE88;
                                var_ctr_29 -= 1;
                            } while (var_ctr_29 != 0);
block_217:
                            M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0_11;
                        }
                    }
                } else {
                    var_cr0_eq_2 = (s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) == 0;
                    if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                        var_ctr_30 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                        do {
                            M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0f * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                            var_ctr_30 -= 1;
                        } while (var_ctr_30 != 0);
                    }
                }
                M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 3;
                break;
            }
            M2C_FIELD(arg0, f32 *, 0x2D0) = (f32) lbl_8030FE94;
            M2C_FIELD(arg0, f32 *, 0x2D8) = (f32) lbl_8030FE94;
            if (var_cr0_eq_2 == 0) {
                Audio__Resume((s32) lbl_803DCC20, 0);
                StreamQueue__Volume(lbl_803DCC20, M2C_FIELD(lbl_803DC368, f32 *, 0x110));
                SfxEnvPlayer__Resume(Sound__GetEnvGroup());
            }
            MainMenu__ExitPauseScreen((s32) lbl_803DC70C, lbl_8030FE8C);
        }
    }
}
