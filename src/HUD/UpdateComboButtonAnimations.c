/* HUD__UpdateComboButtonAnimations @ 0x8010FEA0 (size: 0x37C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_803264E0 __attribute__((section(".data")));
extern f32 lbl_803264E4 __attribute__((section(".data")));
extern f32 lbl_803264E8 __attribute__((section(".data")));
extern f32 lbl_803264EC __attribute__((section(".data")));
extern M2C_UNK lbl_803A35A0;

void HUD__UpdateComboButtonAnimations(void *arg1) {
    char *p_4d8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 var_f31;
    f32 var_f31_2;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_r0;
    s32 temp_r11;
    s32 temp_r9_2;
    s32 var_r25;
    s32 var_r29;
    s32 var_r30;
    void *temp_r10;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    void *temp_r11_8;
    void *temp_r11_9;
    void *temp_r4;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_3;
    register void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r31;

    temp_f28 = lbl_803264EC;
    temp_f29 = lbl_803264E0;
    var_r29 = 0;
    var_r31 = arg1 + 0x2D8;
    var_r25 = 0x18;
    do {
        if ((void *) M2C_FIELD(var_r31, void **, -8) != NULL) {
            temp_r11 = arg1 + 0x2D4;
            var_r30 = 1;
            temp_r10 = *(void * *)(temp_r11 + var_r29);
            temp_r9 = M2C_FIELD(temp_r10, void **, 0x19C);
            temp_r9_2 = arg1 + 0x2DC;
            temp_r0 = *(s32 *)(temp_r9_2 + var_r29);
            var_f31 = M2C_FIELD(temp_r9, f32 (**)(void *), 0x28C)(temp_r10 + M2C_FIELD(temp_r9, s16 *, 0x288));
            if (temp_r0 != 2) {
                if (temp_r0 <= 2) {
                    if (temp_r0 != 0) {

                    } else {
                        goto block_12;
                    }
                } else if (temp_r0 > 4) {
                    if (temp_r0 != 5) {

                    } else {
                        M2C_FIELD(var_r31, f32 *, 0) = lbl_803264E8;
                        *(s32 *)(temp_r9_2 + var_r29) = 1;
                    }
                } else {
                    goto block_10;
                }
            } else {
                var_f31 = lbl_803264E0;
block_10:
                if (var_f31 == temp_f29) {
                    var_f31 = lbl_803264E4;
                    *(s32 *)(temp_r9_2 + var_r29) = *(s32 *)(temp_r9_2 + var_r29) + 1;
                }
block_12:
                var_r30 = 0;
            }
            if (1 != 0) {
                temp_f0 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x1C) * temp_f28;
                temp_cr0_eq = var_f31 <= lbl_803264E0;
                if (temp_cr0_eq != 0) {
                    if (temp_cr0_eq == 0) {
                        var_f31 += temp_f0;
                        if (!(var_f31 <= lbl_803264E0)) {
block_20:
                            var_f31 = lbl_803264E0;
                        }
                    }
                } else {
                    var_f31 -= temp_f0;
                    if (!(var_f31 >= lbl_803264E0)) {
                        goto block_20;
                    }
                }
                temp_r11_2 = *(void * *)(temp_r11 + var_r29);
                temp_r9_3 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32), 0x12C)(temp_r11_2 + M2C_FIELD(temp_r9_3, s16 *, 0x128), var_f31);
                temp_r11_3 = *(void * *)(temp_r11 + var_r29);
                temp_r9_4 = M2C_FIELD(temp_r11_3, void **, 0x19C);
                M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x3C)(temp_r11_3 + M2C_FIELD(temp_r9_4, s16 *, 0x38));
            }
            if (var_r30 != 0) {
                temp_f0_2 = M2C_FIELD(var_r31, f32 *, 0);
                temp_cr0_eq_2 = temp_f0_2 <= lbl_803264E0;
                if (temp_cr0_eq_2 == 0) {
                    temp_f0_3 = temp_f0_2 - M2C_FIELD(&lbl_803A35A0, f32 *, 0x1C);
                    M2C_FIELD(var_r31, f32 *, 0) = temp_f0_3;
                    if (temp_f0_3 != lbl_803264E0) {
                        goto block_28;
                    }
                } else {
                    if (temp_cr0_eq_2 == 0) {
                        temp_f0_4 = temp_f0_2 + M2C_FIELD(&lbl_803A35A0, f32 *, 0x1C);
                        M2C_FIELD(var_r31, f32 *, 0) = temp_f0_4;
                        if (temp_f0_4 != lbl_803264E0) {
block_28:
                            M2C_FIELD(var_r31, f32 *, 0) = (f32) lbl_803264E0;
                        }
                    }
                }
                temp_f30 = lbl_803264E0;
                if (M2C_FIELD(var_r31, f32 *, 0) == temp_f30) {
                    temp_r11_4 = M2C_FIELD(var_r31, void **, -8);
                    temp_r9_5 = M2C_FIELD(temp_r11_4, void **, 0x19C);
                    var_f31_2 = M2C_FIELD(temp_r9_5, f32 (**)(void *), 0x28C)(temp_r11_4 + M2C_FIELD(temp_r9_5, s16 *, 0x288));
                    temp_cr0_eq_3 = var_f31_2 == temp_f30;
                    temp_f0_5 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x1C) * temp_f28;
                    if (temp_cr0_eq_3 == 0) {
                        var_f31_2 -= temp_f0_5;
                        if (!(var_f31_2 >= temp_f30)) {
                            goto block_35;
                        }
                    } else {
                        if (!temp_cr0_eq_3) {
                            var_f31_2 += temp_f0_5;
                            if (!(var_f31_2 <= temp_f30)) {
block_35:
                                var_f31_2 = temp_f30;
                            }
                        }
                    }
                    temp_r11_5 = M2C_FIELD(var_r31, void **, -8);
                    temp_r9_6 = M2C_FIELD(temp_r11_5, void **, 0x19C);
                    M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, f32), 0x12C)(temp_r11_5 + M2C_FIELD(temp_r9_6, s16 *, 0x128), var_f31_2);
                    temp_r11_6 = M2C_FIELD(var_r31, void **, -8);
                    temp_r9_7 = M2C_FIELD(temp_r11_6, void **, 0x19C);
                    M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x3C)(temp_r11_6 + M2C_FIELD(temp_r9_7, s16 *, 0x38));
                    if (var_f31_2 == temp_f29) {
                        temp_r11_7 = M2C_FIELD(var_r31, void **, -8);
                        if (temp_r11_7 != NULL) {
                            temp_r9_8 = M2C_FIELD(temp_r11_7, void **, 0x19C);
                            M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_7 + M2C_FIELD(temp_r9_8, s16 *, 8), 3);
                        }
                        M2C_FIELD(var_r31, void **, -8) = NULL;
                        temp_r11_8 = *(void * *)(temp_r11 + var_r29);
                        if (temp_r11_8 != NULL) {
                            temp_r9_9 = M2C_FIELD(temp_r11_8, void **, 0x19C);
                            M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_8 + M2C_FIELD(temp_r9_9, s16 *, 8), 3);
                        }
                        *(s32 *)(var_r29 + temp_r11) = 0;
                        p_4d8 = (char *)arg1 + 0x4d8;
                        temp_r11_9 = M2C_FIELD(p_4d8, void **, 0x0);
                        if (temp_r11_9 != NULL) {
                            temp_r9_10 = M2C_FIELD(temp_r11_9, void **, 0x19C);
                            M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_9 + M2C_FIELD(temp_r9_10, s16 *, 8), 3);
                            M2C_FIELD(p_4d8, void **, 0x0) = NULL;
                        }
                    }
                }
            }
        }
        var_r29 += 0x10;
        var_r31 += 0x10;
        var_r25 -= 1;
    } while (var_r25 != 0);
    temp_r4 = M2C_FIELD(p_4d8, void **, 0x0);
    if (temp_r4 != NULL) {
        temp_r9_11 = M2C_FIELD(temp_r4, void **, 0x19C);
        M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *), 0x3C)(temp_r4 + M2C_FIELD(temp_r9_11, s16 *, 0x38));
    }
}
