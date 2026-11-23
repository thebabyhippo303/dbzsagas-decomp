/* CombatHUD__UpdateAttemptBreakerWidgets @ 0x80112768 (size: 0x354, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *lbl_803DC70C;

void CombatHUD__UpdateAttemptBreakerWidgets(void *arg0) {
    s32 var_r27;
    s32 var_r28;
    char *var_r31;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9;
    void *temp_r9_2;
    void *var_r31_2;

    temp_r11 = M2C_FIELD(lbl_803DC70C, void **, 0x19C);
    if (M2C_FIELD(temp_r11, s32 (**)(void *), 0x3A4)(lbl_803DC70C + M2C_FIELD(temp_r11, s16 *, 0x3A0)) != 0) {
        {
            s32 c1;
            var_r27 = (s32)arg0 + 0x2D84;
            var_r28 = (s32)arg0 + 0x2D88;
            var_r31 = 0;
            c1 = 0x18;
            do {
                temp_r11_2 = *(void * *)(var_r27 + var_r31);
                if (temp_r11_2 != NULL) {
                    temp_r9 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1DC)(temp_r11_2 + M2C_FIELD(temp_r9, s16 *, 0x1D8));
                }
                temp_r11_2 = *(void * *)(var_r28 + var_r31);
                if (temp_r11_2 != NULL) {
                    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1DC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1D8));
                }
                var_r31 += 0x10;
                c1 -= 1;
            } while (c1 != 0);
        }
        {
            s32 i1 = 0;
            if (i1 < (s32) M2C_FIELD(arg0, s32 *, 0x2F1C)) {
                var_r31_2 = arg0 + 0x2D5C;
                do {
                    temp_r11_2 = M2C_FIELD(var_r31_2, void **, -0x50);
                    if (temp_r11_2 != NULL) {
                        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1DC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1D8));
                    }
                    temp_r11_2 = M2C_FIELD(var_r31_2, void **, -0x28);
                    if (temp_r11_2 != NULL) {
                        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1DC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1D8));
                    }
                    temp_r11_2 = M2C_FIELD(var_r31_2, void **, 0);
                    if (temp_r11_2 != NULL) {
                        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1DC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1D8));
                    }
                    i1 += 1;
                    var_r31_2 += 4;
                } while (i1 < (s32) M2C_FIELD(arg0, s32 *, 0x2F1C));
            }
        }
    } else {
        {
            s32 c2;
            var_r27 = (s32)arg0 + 0x2D84;
            var_r28 = (s32)arg0 + 0x2D88;
            var_r31 = 0;
            c2 = 0x18;
            do {
                temp_r11_2 = *(void * *)(var_r27 + var_r31);
                if (temp_r11_2 != NULL) {
                    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1CC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1C8));
                }
                temp_r11_2 = *(void * *)(var_r28 + var_r31);
                if (temp_r11_2 != NULL) {
                    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1CC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1C8));
                }
                var_r31 += 0x10;
                c2 -= 1;
            } while (c2 != 0);
        }
        {
            s32 i2 = 0;
            if (i2 < (s32) M2C_FIELD(arg0, s32 *, 0x2F1C)) {
                var_r31_2 = arg0 + 0x2D5C;
                do {
                    temp_r11_2 = M2C_FIELD(var_r31_2, void **, -0x50);
                    if (temp_r11_2 != NULL) {
                        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1CC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1C8));
                    }
                    temp_r11 = M2C_FIELD(var_r31_2, void **, -0x28);
                    if (temp_r11 != NULL) {
                        temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
                        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x1CC)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x1C8));
                    }
                    temp_r11 = M2C_FIELD(var_r31_2, void **, 0);
                    if (temp_r11 != NULL) {
                        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
                        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1CC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x1C8));
                    }
                    i2 += 1;
                    var_r31_2 += 4;
                } while (i2 < (s32) M2C_FIELD(arg0, s32 *, 0x2F1C));
            }
        }
    }
    {
        s32 c3;
        var_r31 = 0;
        c3 = 0x18;
        do {
            temp_r11 = *(void * *)(var_r27 + var_r31);
            if (temp_r11 != NULL) {
                temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
            }
            temp_r11 = *(void * *)(var_r28 + var_r31);
            if (temp_r11 != NULL) {
                temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
            }
            var_r31 += 0x10;
            c3 -= 1;
        } while (c3 != 0);
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0x2F18);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
    }
    {
        s32 i3 = 0;
        if (i3 < (s32) M2C_FIELD(arg0, s32 *, 0x2F1C)) {
            var_r31_2 = arg0 + 0x2D5C;
            do {
                temp_r11 = M2C_FIELD(var_r31_2, void **, -0x50);
                if (temp_r11 != NULL) {
                    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
                }
                temp_r11 = M2C_FIELD(var_r31_2, void **, -0x28);
                if (temp_r11 != NULL) {
                    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
                }
                temp_r11 = M2C_FIELD(var_r31_2, void **, 0);
                if (temp_r11 != NULL) {
                    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
                }
                i3 += 1;
                var_r31_2 += 4;
            } while (i3 < (s32) M2C_FIELD(arg0, s32 *, 0x2F1C));
        }
    }
}
