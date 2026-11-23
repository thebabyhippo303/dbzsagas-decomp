/* CollideStack__Destroy @ 0x80006870 (size: 0x3E0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
int sprintf(char *, const char *, ...);
extern M2C_UNK lbl_80307178 __attribute__((section(".data")));
extern M2C_UNK lbl_803071B8 __attribute__((section(".data")));
extern M2C_UNK lbl_803071CC __attribute__((section(".data")));
extern M2C_UNK lbl_8030720C __attribute__((section(".data")));
extern M2C_UNK lbl_80341F20 __attribute__((section(".data")));
extern M2C_UNK lbl_80344DF0 __attribute__((section(".data")));

void CollideStack__DeallocateEntry(void *arg0, s32 arg1) {
    union { s8 value; unsigned char bytes[252]; } sp8;
    register s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r11;
    s32 temp_r11_3;
    s32 var_r29;
    s32 flg;
    s32 sz;
    s32 var_r29_2;
    s8 *temp_r0_2;
    s8 *temp_r0_5;
    void *temp_r11_2;
    void *temp_r28;
    void *temp_r30;
    void *temp_r30_3;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;

    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80341F20;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        temp_r31 = M2C_FIELD(arg0, void **, 0x44);
        if (temp_r31 != NULL) {
            if ((void *) M2C_FIELD(temp_r31, void **, 0) != NULL) {
                temp_r9 = M2C_FIELD(temp_r31, void **, 0x1C);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r31 + M2C_FIELD(temp_r9, s16 *, 8), 2);
                temp_r30 = M2C_FIELD(temp_r31, void **, 0);
                if ((s32) M2C_FIELD(temp_r31, s32 *, 0x18) == (s8 *) M2C_FIELD(temp_r30, s8 **, 0xC)) {
                    temp_r0 = M2C_FIELD(temp_r31, s32 *, 0x10);
                    M2C_FIELD(temp_r30, s32 *, 0x10) = temp_r0;
                    if (temp_r0 == -1) {
                        M2C_FIELD(temp_r30, s8 **, 0xC) = NULL;
                    } else {
                        temp_r9_2 = M2C_FIELD(temp_r30, s32 *, 0) + temp_r0;
                        temp_r0_2 = M2C_FIELD(temp_r9_2, s8 **, 0x18);
                        M2C_FIELD(temp_r30, s8 **, 0xC) = temp_r0_2;
                        M2C_FIELD(temp_r9_2, s8 **, 0x14) = temp_r0_2;
                    }
                    if ((s32) M2C_FIELD(temp_r30, s32 *, 0x10) == -1) {
                        M2C_FIELD(temp_r30, s32 *, 0xB4) = 0;
                    }
                    if (M2C_FIELD(temp_r30, s32 *, 0x1BC) & 0x20000000) {
                        sprintf((char *)sp8.bytes, (const char *)&lbl_80307178, M2C_FIELD(temp_r31, s32 *, 4), M2C_FIELD(temp_r31, s32 *, 0x18), M2C_FIELD(temp_r31, s32 *, 0x18) - M2C_FIELD(temp_r31, s32 *, 4));
                        sprintf((char *)sp8.bytes, (const char *)&lbl_803071B8, M2C_FIELD(temp_r30, s8 **, 0xC));
                    }
                } else {
                    M2C_FIELD((M2C_FIELD(temp_r30, s32 *, 0) + M2C_FIELD(temp_r31, s32 *, 0x14)), s32 *, 0x10) = (s32) M2C_FIELD(temp_r31, s32 *, 0x10);
                    temp_r11 = M2C_FIELD(temp_r31, s32 *, 0x10);
                    if (temp_r11 != -1) {
                        M2C_FIELD((M2C_FIELD(temp_r30, s32 *, 0) + temp_r11), s32 *, 0x14) = (s32) M2C_FIELD(temp_r31, s32 *, 0x14);
                    } else {
                        M2C_FIELD(temp_r30, s32 *, 0xB4) = (s32) M2C_FIELD(temp_r31, s32 *, 0x14);
                    }
                    temp_r0_3 = M2C_FIELD(temp_r31, s32 *, 0x10);
                    if (temp_r0_3 != -1) {
                        var_r29 = M2C_FIELD((M2C_FIELD(temp_r30, s32 *, 0) + temp_r0_3), s32 *, 0x18);
                    } else {
                        var_r29 = 0;
                    }
                    flg = M2C_FIELD(temp_r30, s32 *, 0x1BC);
                    temp_r30 = (void *)(M2C_FIELD(temp_r31, s32 *, 0x14) - var_r29);
                    if (flg & 0x20000000) {
                        sprintf((char *)sp8.bytes, (const char *)&lbl_803071CC, M2C_FIELD(temp_r31, s32 *, 4), M2C_FIELD(temp_r31, s32 *, 0x18), M2C_FIELD(temp_r31, s32 *, 0x18) - M2C_FIELD(temp_r31, s32 *, 4));
                        sprintf((char *)sp8.bytes, (const char *)&lbl_8030720C, (s32)temp_r30, var_r29, M2C_FIELD(temp_r31, s32 *, 0x14));
                    }
                }
            } else {
                temp_r9_3 = M2C_FIELD(temp_r31, void **, 0x1C);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r31 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
            }
        }
    }
    temp_r9_4 = M2C_FIELD(arg0, void **, 0x4C);
    temp_r28 = arg0 + 0x4C;
    if (temp_r9_4 != NULL) {
        temp_r31_2 = M2C_FIELD(temp_r9_4, void **, 0);
        if (temp_r28 == (void *) M2C_FIELD(temp_r31_2, void **, 0xB0)) {
            M2C_FIELD(temp_r31_2, void **, 0xB0) = (void *) M2C_FIELD(temp_r28, void **, 4);
        }
        M2C_FIELD(M2C_FIELD(temp_r28, void **, 4), void **, 8) = (void *) M2C_FIELD(temp_r28, void **, 8);
        temp_r9_5 = M2C_FIELD(temp_r28, void **, 8);
        if (temp_r9_5 != NULL) {
            M2C_FIELD(temp_r9_5, void **, 4) = (void *) M2C_FIELD(temp_r28, void **, 4);
        }
        temp_r11_2 = M2C_FIELD(arg0, void **, 0x4C);
        temp_r9_6 = M2C_FIELD(temp_r11_2, void **, 0x1C);
        M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_6, s16 *, 8), 2);
        temp_r30_3 = M2C_FIELD(arg0, void **, 0x4C);
        if ((s32) M2C_FIELD(temp_r30_3, s32 *, 0x18) == (s8 *) M2C_FIELD(temp_r31_2, s8 **, 0xC)) {
            temp_r0_4 = M2C_FIELD(temp_r30_3, s32 *, 0x10);
            M2C_FIELD(temp_r31_2, s32 *, 0x10) = temp_r0_4;
            if (temp_r0_4 == -1) {
                M2C_FIELD(temp_r31_2, s8 **, 0xC) = NULL;
            } else {
                temp_r9_7 = M2C_FIELD(temp_r31_2, s32 *, 0) + temp_r0_4;
                temp_r0_5 = M2C_FIELD(temp_r9_7, s8 **, 0x18);
                M2C_FIELD(temp_r31_2, s8 **, 0xC) = temp_r0_5;
                M2C_FIELD(temp_r9_7, s8 **, 0x14) = temp_r0_5;
            }
            if ((s32) M2C_FIELD(temp_r31_2, s32 *, 0x10) == -1) {
                M2C_FIELD(temp_r31_2, s32 *, 0xB4) = 0;
            }
            if (M2C_FIELD(temp_r31_2, s32 *, 0x1BC) & 0x20000000) {
                sprintf((char *)sp8.bytes, (const char *)&lbl_80307178, M2C_FIELD(temp_r30_3, s32 *, 4), M2C_FIELD(temp_r30_3, s32 *, 0x18), M2C_FIELD(temp_r30_3, s32 *, 0x18) - M2C_FIELD(temp_r30_3, s32 *, 4));
                sprintf((char *)sp8.bytes, (const char *)&lbl_803071B8, M2C_FIELD(temp_r31_2, s8 **, 0xC));
            }
        } else {
            M2C_FIELD((M2C_FIELD(temp_r31_2, s32 *, 0) + M2C_FIELD(temp_r30_3, s32 *, 0x14)), s32 *, 0x10) = (s32) M2C_FIELD(temp_r30_3, s32 *, 0x10);
            temp_r11_3 = M2C_FIELD(temp_r30_3, s32 *, 0x10);
            if (temp_r11_3 != -1) {
                M2C_FIELD((M2C_FIELD(temp_r31_2, s32 *, 0) + temp_r11_3), s32 *, 0x14) = (s32) M2C_FIELD(temp_r30_3, s32 *, 0x14);
            } else {
                M2C_FIELD(temp_r31_2, s32 *, 0xB4) = (s32) M2C_FIELD(temp_r30_3, s32 *, 0x14);
            }
            temp_r0_6 = M2C_FIELD(temp_r30_3, s32 *, 0x10);
            if (temp_r0_6 != -1) {
                var_r29_2 = M2C_FIELD((M2C_FIELD(temp_r31_2, s32 *, 0) + temp_r0_6), s32 *, 0x18);
            } else {
                var_r29_2 = 0;
            }
            sz = M2C_FIELD(temp_r30_3, s32 *, 0x14) - var_r29_2;
            if (M2C_FIELD(temp_r31_2, s32 *, 0x1BC) & 0x20000000) {
                sprintf((char *)sp8.bytes, (const char *)&lbl_803071CC, M2C_FIELD(temp_r30_3, s32 *, 4), M2C_FIELD(temp_r30_3, s32 *, 0x18), M2C_FIELD(temp_r30_3, s32 *, 0x18) - M2C_FIELD(temp_r30_3, s32 *, 4));
                sprintf((char *)sp8.bytes, (const char *)&lbl_8030720C, sz, var_r29_2, M2C_FIELD(temp_r30_3, s32 *, 0x14));
            }
        }
        M2C_FIELD(temp_r28, void **, 0) = NULL;
        M2C_FIELD(temp_r28, void **, 4) = NULL;
        M2C_FIELD(temp_r28, void **, 8) = NULL;
        M2C_FIELD(temp_r28, s32 *, 0xC) = 0;
        M2C_FIELD(temp_r28, s32 *, 0x10) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80344DF0;
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
