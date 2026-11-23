/* HUD__BuildQuickRecoveryWidgetSet @ 0x801088E8 (size: 0xBE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Mem__New(u32);
void * Game__GetPlayerImpl(void *, s32);
M2C_UNK Sphere__Construct(s32);
extern f32 lbl_80325B00 __attribute__((section(".data")));
extern f32 lbl_80325B04 __attribute__((section(".data")));
extern f32 lbl_80325B08 __attribute__((section(".data")));
extern f32 lbl_80325B0C __attribute__((section(".data")));
extern f32 lbl_80325B10 __attribute__((section(".data")));
extern f32 lbl_80325B14 __attribute__((section(".data")));
extern f32 lbl_80325B18 __attribute__((section(".data")));
extern f32 lbl_80325B1C __attribute__((section(".data")));
extern f32 lbl_80325B20 __attribute__((section(".data")));
extern f32 lbl_80325B24 __attribute__((section(".data")));
extern f32 lbl_80325B28 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern s32 lbl_803DC640;

void HUD__BuildQuickRecoveryWidgetSet(void *dummy, void *arg1, void *arg2, s32 arg3, s32 arg4, f32 farg0, f32 farg1, f32 farg2, f32 fdummy3, f32 fdummy4, f32 farg5, f32 farg6) {
    M2C_UNK (*temp_r9_41)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK (*temp_r9_43)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
    M2C_UNK var_r5;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f11;
    f32 temp_f26;
    f32 var_f31;
    s32 temp_r0;
    s32 temp_r10;
    s32 temp_r10_10;
    s32 temp_r10_11;
    s32 temp_r10_12;
    s32 temp_r10_2;
    s32 temp_r10_3;
    s32 temp_r10_4;
    s32 temp_r10_5;
    s32 temp_r10_6;
    s32 temp_r10_9;
    s32 temp_r11_10;
    s32 temp_r11_12;
    s32 temp_r11_14;
    s32 temp_r11_15;
    s32 temp_r11_27;
    s32 temp_r11_2;
    s32 temp_r11_37;
    s32 temp_r11_38;
    s32 temp_r11_39;
    s32 temp_r11_3;
    s32 temp_r11_41;
    s32 temp_r11_43;
    s32 temp_r11_44;
    s32 temp_r11_5;
    s32 temp_r11_6;
    s32 temp_r11_8;
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_10;
    s32 temp_r3_11;
    s32 temp_r3_12;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r3_8;
    s32 temp_r3_9;
    s32 temp_r8;
    s32 temp_r8_3;
    s32 temp_r9_12;
    s32 var_r11;
    s32 var_r11_2;
    s32 var_r11_3;
    s32 var_r11_4;
    s32 var_r11_5;
    s32 var_r26;
    s32 var_r29_2;
    s32 var_r30;
    s32 var_r9;
    s32 var_r9_2;
    u32 var_r28;
    u32 var_r29;
    void *temp_r10_7;
    void *temp_r10_8;
    void *temp_r11;
    void *temp_r11_11;
    void *temp_r11_13;
    void *temp_r11_16;
    void *temp_r11_17;
    void *temp_r11_18;
    void *temp_r11_19;
    void *temp_r11_20;
    void *temp_r11_21;
    void *temp_r11_22;
    void *temp_r11_23;
    void *temp_r11_24;
    void *temp_r11_25;
    void *temp_r11_26;
    void *temp_r11_28;
    void *temp_r11_29;
    void *temp_r11_30;
    void *temp_r11_31;
    void *temp_r11_32;
    void *temp_r11_33;
    void *temp_r11_34;
    void *temp_r11_35;
    void *temp_r11_36;
    void *temp_r11_40;
    void *temp_r11_42;
    void *temp_r11_4;
    void *temp_r11_7;
    void *temp_r11_9;
    void *temp_r8_2;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_13;
    void *temp_r9_14;
    void *temp_r9_15;
    void *temp_r9_16;
    void *temp_r9_17;
    void *temp_r9_18;
    void *temp_r9_19;
    void *temp_r9_20;
    void *temp_r9_21;
    void *temp_r9_22;
    void *temp_r9_23;
    void *temp_r9_24;
    void *temp_r9_25;
    void *temp_r9_26;
    void *temp_r9_27;
    void *temp_r9_28;
    void *temp_r9_29;
    void *temp_r9_2;
    void *temp_r9_30;
    void *temp_r9_31;
    void *temp_r9_32;
    void *temp_r9_33;
    void *temp_r9_34;
    void *temp_r9_35;
    void *temp_r9_36;
    void *temp_r9_37;
    void *temp_r9_38;
    void *temp_r9_39;
    void *temp_r9_3;
    void *temp_r9_40;
    void *temp_r9_42;
    void *temp_r9_44;
    void *temp_r9_45;
    void *temp_r9_46;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    M2C_FIELD(arg2, f32 *, 0xDC) = farg6;
    var_f31 = farg0;
    var_r9 = 0;
    if ((s32) M2C_FIELD(M2C_FIELD(arg1, void **, 0x159C), s32 *, 0xCCC) != 0) {
        var_r9 = 1;
    }
    if ((var_r9 != 0) && ((s32) M2C_FIELD(M2C_FIELD(arg1, void **, 0x19D8), s32 *, 0xC) != 0x22)) {
        temp_r3 = Sphere__Construct(Mem__New(0x1A0U));
        M2C_FIELD(arg2, s32 *, 0) = temp_r3;
        if (temp_r3 != 0) {
            temp_r9 = M2C_FIELD(temp_r3, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x10), lbl_803DC640, 0x29, 0, 1, 1);
            temp_r10 = M2C_FIELD(arg2, s32 *, 0);
            temp_r11 = M2C_FIELD(temp_r10, void **, 0x19C);
            M2C_FIELD(temp_r11, M2C_UNK (**)(s32, f32, f32), 0xEC)(temp_r10 + M2C_FIELD(temp_r11, s16 *, 0xE8), lbl_80325B00, lbl_80325B04);
            temp_r11_2 = M2C_FIELD(arg2, s32 *, 0);
            temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(s32, f32, f32), 0xAC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0xA8), farg0, farg1);
            temp_r11_3 = M2C_FIELD(arg2, s32 *, 0);
            temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 0x1B0), 0x1F00);
            temp_r10_2 = M2C_FIELD(arg2, s32 *, 0);
            temp_r11_4 = M2C_FIELD(temp_r10_2, void **, 0x19C);
            M2C_FIELD(temp_r11_4, M2C_UNK (**)(s32, f32, f32), 0xCC)(temp_r10_2 + M2C_FIELD(temp_r11_4, s16 *, 0xC8), M2C_FIELD(arg2, f32 *, 0xDC), lbl_80325B08);
            temp_r11_5 = M2C_FIELD(arg2, s32 *, 0);
            temp_r9_4 = M2C_FIELD(temp_r11_5, void **, 0x19C);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(s32), 0x3C)(temp_r11_5 + M2C_FIELD(temp_r9_4, s16 *, 0x38));
            temp_r11_6 = M2C_FIELD(arg2, s32 *, 0);
            temp_r9_5 = M2C_FIELD(temp_r11_6, void **, 0x19C);
            var_f31 = (M2C_FIELD(temp_r9_5, f32 (**)(s32), 0x234)(temp_r11_6 + M2C_FIELD(temp_r9_5, s16 *, 0x230)) * M2C_FIELD(arg2, f32 *, 0xDC)) + farg0;
        }
        temp_r3_2 = Sphere__Construct(Mem__New(0x1A0U));
        M2C_FIELD(arg2, s32 *, 4) = temp_r3_2;
        if (temp_r3_2 != 0) {
            temp_r9_6 = M2C_FIELD(temp_r3_2, void **, 0x19C);
            M2C_FIELD(temp_r9_6, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14)(temp_r3_2 + M2C_FIELD(temp_r9_6, s16 *, 0x10), lbl_803DC640, 0x24, 0, 1, 1);
            temp_r8 = M2C_FIELD(arg2, s32 *, 4);
            temp_r11_7 = M2C_FIELD(temp_r8, void **, 0x19C);
            M2C_FIELD(temp_r11_7, M2C_UNK (**)(s32, f32, f32), 0xEC)(temp_r8 + M2C_FIELD(temp_r11_7, s16 *, 0xE8), lbl_80325B00, lbl_80325B04);
            temp_r11_8 = M2C_FIELD(arg2, s32 *, 4);
            temp_r9_7 = M2C_FIELD(temp_r11_8, void **, 0x19C);
            M2C_FIELD(temp_r9_7, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(temp_r11_8 + M2C_FIELD(temp_r9_7, s16 *, 0xA8), 0x1F00);
            temp_r10_3 = M2C_FIELD(arg2, s32 *, 4);
            temp_r11_9 = M2C_FIELD(temp_r10_3, void **, 0x19C);
            M2C_FIELD(temp_r11_9, M2C_UNK (**)(s32, f32, f32), 0xCC)(temp_r10_3 + M2C_FIELD(temp_r11_9, s16 *, 0xC8), M2C_FIELD(arg2, f32 *, 0xDC), lbl_80325B08);
            temp_r11_10 = M2C_FIELD(arg2, s32 *, 4);
            temp_r9_8 = M2C_FIELD(temp_r11_10, void **, 0x19C);
            M2C_FIELD(temp_r9_8, M2C_UNK (**)(s32), 0x3C)(temp_r11_10 + M2C_FIELD(temp_r9_8, s16 *, 0x38));
        }
        temp_r3_3 = Sphere__Construct(Mem__New(0x1A0U));
        M2C_FIELD(arg2, s32 *, 8) = temp_r3_3;
        if (temp_r3_3 != 0) {
            if ((u32) (M2C_FIELD(M2C_FIELD(arg1, void **, 0x19D8), s32 *, 0xC) - 0xF) <= 1U) {
                var_r5 = 0x27;
                goto block_15;
            }
            var_r11 = 0;
            if ((s32) M2C_FIELD(M2C_FIELD(arg1, void **, 0x159C), s32 *, 0xCF0) != 0) {
                var_r11 = 1;
            }
            if (var_r11 != 0) {
                var_r5 = 0x26;
block_15:
                M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x19C), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14)(temp_r3_3 + M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x19C), s16 *, 0x10), lbl_803DC640, var_r5, 0, 1, 1);
            } else {
                temp_r9_9 = M2C_FIELD(temp_r3_3, void **, 0x19C);
                M2C_FIELD(temp_r9_9, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14)(temp_r3_3 + M2C_FIELD(temp_r9_9, s16 *, 0x10), lbl_803DC640, 0x25, 0, 1, 1);
            }
            temp_r10_4 = M2C_FIELD(arg2, s32 *, 8);
            temp_r11_11 = M2C_FIELD(temp_r10_4, void **, 0x19C);
            M2C_FIELD(temp_r11_11, M2C_UNK (**)(s32, f32, f32), 0xEC)(temp_r10_4 + M2C_FIELD(temp_r11_11, s16 *, 0xE8), lbl_80325B04, lbl_80325B04);
            temp_r11_12 = M2C_FIELD(arg2, s32 *, 8);
            temp_r9_10 = M2C_FIELD(temp_r11_12, void **, 0x19C);
            M2C_FIELD(temp_r9_10, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(temp_r11_12 + M2C_FIELD(temp_r9_10, s16 *, 0xA8), 0x1F10);
            temp_r10_5 = M2C_FIELD(arg2, s32 *, 8);
            temp_r11_13 = M2C_FIELD(temp_r10_5, void **, 0x19C);
            M2C_FIELD(temp_r11_13, M2C_UNK (**)(s32, f32, f32), 0xCC)(temp_r10_5 + M2C_FIELD(temp_r11_13, s16 *, 0xC8), lbl_80325B08, lbl_80325B08);
            temp_r11_14 = M2C_FIELD(arg2, s32 *, 8);
            temp_r9_11 = M2C_FIELD(temp_r11_14, void **, 0x19C);
            M2C_FIELD(temp_r9_11, M2C_UNK (**)(s32), 0x3C)(temp_r11_14 + M2C_FIELD(temp_r9_11, s16 *, 0x38));
        }
        temp_f11 = farg2 - lbl_80325B0C;
        temp_r9_12 = (s32) temp_f11;
        var_r11_2 = temp_r9_12 - 1;
        if (var_r11_2 < 0) {
            var_r11_2 = temp_r9_12 + 6;
        }
        var_r28 = (var_r11_2 >> 3) + 1;
        var_r11_3 = 0;
        if ((s32) M2C_FIELD(M2C_FIELD(arg1, void **, 0x159C), s32 *, 0xCF0) != 0) {
            var_r11_3 = 1;
        }
        if (var_r11_3 != 0) {
            temp_r11_15 = (s32) (temp_f11 - lbl_80325B10);
            var_r9_2 = temp_r11_15 - 1;
            if (var_r9_2 < 0) {
                var_r9_2 = temp_r11_15 + 6;
            }
            var_r28 = (var_r9_2 >> 3) + 1;
        }
        temp_r0 = var_r28 + 3;
        var_r26 = 0;
        if (temp_r0 > 3) {
            temp_f26 = lbl_80325B10;
            var_r29 = var_r28;
            var_r30 = 0xC;
            do {
                var_r11_4 = 0;
                if ((s32) M2C_FIELD(M2C_FIELD(arg1, void **, 0x159C), s32 *, 0xCF0) != 0) {
                    var_r11_4 = 1;
                }
                if ((var_r11_4 != 0) && (var_r26 == (s32) ((s32) (var_r28 + (var_r28 >> 0x1FU)) >> 1))) {
                    temp_r3_4 = Sphere__Construct(Mem__New(0x1A0U));
                    *(s32 *)(var_r30 + arg2) = temp_r3_4;
                    if (temp_r3_4 != 0) {
                        temp_r9_13 = M2C_FIELD(temp_r3_4, void **, 0x19C);
                        M2C_FIELD(temp_r9_13, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14)(temp_r3_4 + M2C_FIELD(temp_r9_13, s16 *, 0x10), lbl_803DC640, 0x28, 0, 1, 1);
                        temp_r11_16 = *(void * *)(var_r30 + arg2);
                        temp_r9_14 = M2C_FIELD(temp_r11_16, void **, 0x19C);
                        M2C_FIELD(temp_r9_14, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r11_16 + M2C_FIELD(temp_r9_14, s16 *, 0xE8), lbl_80325B00, lbl_80325B04);
                        temp_r11_17 = *(void * *)(var_r30 + arg2);
                        temp_r9_15 = M2C_FIELD(temp_r11_17, void **, 0x19C);
                        M2C_FIELD(temp_r9_15, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_17 + M2C_FIELD(temp_r9_15, s16 *, 0xA8), var_f31, farg1);
                        temp_r11_18 = *(void * *)(var_r30 + arg2);
                        temp_r9_16 = M2C_FIELD(temp_r11_18, void **, 0x19C);
                        M2C_FIELD(temp_r9_16, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_18 + M2C_FIELD(temp_r9_16, s16 *, 0x1B0), 0x1F08);
                        temp_r11_19 = *(void * *)(var_r30 + arg2);
                        temp_r9_17 = M2C_FIELD(temp_r11_19, void **, 0x19C);
                        M2C_FIELD(temp_r9_17, M2C_UNK (**)(void *, f32, f32), 0xCC)(temp_r11_19 + M2C_FIELD(temp_r9_17, s16 *, 0xC8), M2C_FIELD(arg2, f32 *, 0xDC), lbl_80325B08);
                        temp_r11_20 = *(void * *)(var_r30 + arg2);
                        var_r30 += 4;
                        temp_r9_18 = M2C_FIELD(temp_r11_20, void **, 0x19C);
                        M2C_FIELD(temp_r9_18, M2C_UNK (**)(void *), 0x3C)(temp_r11_20 + M2C_FIELD(temp_r9_18, s16 *, 0x38));
                        var_f31 += M2C_FIELD(arg2, f32 *, 0xDC) * temp_f26;
                    }
                }
                temp_r3_5 = Sphere__Construct(Mem__New(0x1A0U));
                *(s32 *)(var_r30 + arg2) = temp_r3_5;
                if (temp_r3_5 != 0) {
                    temp_r9_19 = M2C_FIELD(temp_r3_5, void **, 0x19C);
                    M2C_FIELD(temp_r9_19, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14)(temp_r3_5 + M2C_FIELD(temp_r9_19, s16 *, 0x10), lbl_803DC640, 0x23, 0, 1, 1);
                    temp_r11_21 = *(void * *)(var_r30 + arg2);
                    temp_r9_20 = M2C_FIELD(temp_r11_21, void **, 0x19C);
                    M2C_FIELD(temp_r9_20, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r11_21 + M2C_FIELD(temp_r9_20, s16 *, 0xE8), lbl_80325B00, lbl_80325B04);
                    temp_r11_22 = *(void * *)(var_r30 + arg2);
                    temp_r9_21 = M2C_FIELD(temp_r11_22, void **, 0x19C);
                    M2C_FIELD(temp_r9_21, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_22 + M2C_FIELD(temp_r9_21, s16 *, 0xA8), var_f31, farg1);
                    temp_r11_23 = *(void * *)(var_r30 + arg2);
                    temp_r9_22 = M2C_FIELD(temp_r11_23, void **, 0x19C);
                    M2C_FIELD(temp_r9_22, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_23 + M2C_FIELD(temp_r9_22, s16 *, 0x1B0), 0x1F00);
                    temp_r11_24 = *(void * *)(var_r30 + arg2);
                    temp_r9_23 = M2C_FIELD(temp_r11_24, void **, 0x19C);
                    M2C_FIELD(temp_r9_23, M2C_UNK (**)(void *, f32, f32), 0xCC)(temp_r11_24 + M2C_FIELD(temp_r9_23, s16 *, 0xC8), M2C_FIELD(arg2, f32 *, 0xDC), lbl_80325B08);
                    temp_r11_25 = *(void * *)(var_r30 + arg2);
                    temp_r9_24 = M2C_FIELD(temp_r11_25, void **, 0x19C);
                    M2C_FIELD(temp_r9_24, M2C_UNK (**)(void *), 0x3C)(temp_r11_25 + M2C_FIELD(temp_r9_24, s16 *, 0x38));
                    temp_r11_26 = *(void * *)(var_r30 + arg2);
                    var_r30 += 4;
                    temp_r9_25 = M2C_FIELD(temp_r11_26, void **, 0x19C);
                    var_f31 += M2C_FIELD(temp_r9_25, f32 (**)(void *), 0x234)(temp_r11_26 + M2C_FIELD(temp_r9_25, s16 *, 0x230)) * M2C_FIELD(arg2, f32 *, 0xDC);
                }
                var_r26 += 1;
                var_r29 -= 1;
            } while (var_r29 != 0);
        }
        temp_r11_27 = M2C_FIELD(arg2, s32 *, 4);
        if (temp_r11_27 != 0) {
            temp_r9_26 = M2C_FIELD(temp_r11_27, void **, 0x19C);
            M2C_FIELD(temp_r9_26, M2C_UNK (**)(s32, f32, f32), 0xAC)(temp_r11_27 + M2C_FIELD(temp_r9_26, s16 *, 0xA8), var_f31, farg1);
        }
        temp_r10_6 = M2C_FIELD(arg2, s32 *, 8);
        if (temp_r10_6 != 0) {
            temp_r11_28 = M2C_FIELD(temp_r10_6, void **, 0x19C);
            M2C_FIELD(temp_r11_28, M2C_UNK (**)(s32, f32, f32), 0xAC)(temp_r10_6 + M2C_FIELD(temp_r11_28, s16 *, 0xA8), (M2C_FIELD(arg2, f32 *, 0xDC) * lbl_80325B14) + var_f31, farg1);
        }
        var_r29_2 = temp_r0;
        var_r11_5 = 0;
        if ((s32) M2C_FIELD(M2C_FIELD(arg1, void **, 0x159C), s32 *, 0xCF0) != 0) {
            var_r11_5 = 1;
        }
        if (var_r11_5 != 0) {
            var_r29_2 = var_r28 + 4;
        }
        temp_r30 = var_r29_2 * 4;
        temp_r3_6 = Sphere__Construct(Mem__New(0x1A0U));
        *(s32 *)(arg2 + temp_r30) = temp_r3_6;
        if (temp_r3_6 != 0) {
            temp_r9_27 = M2C_FIELD(temp_r3_6, void **, 0x19C);
            M2C_FIELD(temp_r9_27, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14)(temp_r3_6 + M2C_FIELD(temp_r9_27, s16 *, 0x10), lbl_803DC640, 0x12345678, 0, 1, 1);
            temp_r8_2 = *(void * *)(arg2 + temp_r30);
            temp_r11_29 = M2C_FIELD(temp_r8_2, void **, 0x19C);
            M2C_FIELD(temp_r11_29, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r8_2 + M2C_FIELD(temp_r11_29, s16 *, 0xE8), lbl_80325B00, lbl_80325B04);
            temp_r11_30 = *(void * *)(arg2 + temp_r30);
            temp_r9_28 = M2C_FIELD(temp_r11_30, void **, 0x19C);
            M2C_FIELD(temp_r9_28, M2C_UNK (**)(void *, M2C_UNK), 0x11C)(temp_r11_30 + M2C_FIELD(temp_r9_28, s16 *, 0x118), 0xFF);
            temp_r11_31 = *(void * *)(arg2 + temp_r30);
            temp_r9_29 = M2C_FIELD(temp_r11_31, void **, 0x19C);
            M2C_FIELD(temp_r9_29, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_31 + M2C_FIELD(temp_r9_29, s16 *, 0xA8), (M2C_FIELD(arg2, f32 *, 0xDC) * lbl_80325B18) + farg0, farg1);
            temp_r10_7 = *(void * *)(arg2 + temp_r30);
            temp_r9_30 = M2C_FIELD(temp_r10_7, void **, 0x19C);
            M2C_FIELD(temp_r9_30, M2C_UNK (**)(void *, f32, f32), 0x8C)(temp_r10_7 + M2C_FIELD(temp_r9_30, s16 *, 0x88), farg2 + lbl_80325B1C, lbl_80325B20);
            temp_r11_32 = *(void * *)(arg2 + temp_r30);
            temp_r9_31 = M2C_FIELD(temp_r11_32, void **, 0x19C);
            M2C_FIELD(temp_r9_31, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_32 + M2C_FIELD(temp_r9_31, s16 *, 0x1B0), 0x1EFC);
            temp_r10_8 = *(void * *)(arg2 + temp_r30);
            temp_r11_33 = M2C_FIELD(temp_r10_8, void **, 0x19C);
            M2C_FIELD(temp_r11_33, M2C_UNK (**)(void *, f32, f32), 0xCC)(temp_r10_8 + M2C_FIELD(temp_r11_33, s16 *, 0xC8), M2C_FIELD(arg2, f32 *, 0xDC), lbl_80325B08);
            temp_r11_34 = *(void * *)(arg2 + temp_r30);
            temp_r9_32 = M2C_FIELD(temp_r11_34, void **, 0x19C);
            M2C_FIELD(temp_r9_32, M2C_UNK (**)(void *), 0x3C)(temp_r11_34 + M2C_FIELD(temp_r9_32, s16 *, 0x38));
        }
        temp_r3_7 = Sphere__Construct(Mem__New(0x1A0U));
        M2C_FIELD(arg2, s32 *, 0xC0) = temp_r3_7;
        if (temp_r3_7 != 0) {
            temp_r9_33 = M2C_FIELD(temp_r3_7, void **, 0x19C);
            M2C_FIELD(temp_r9_33, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14)(temp_r3_7 + M2C_FIELD(temp_r9_33, s16 *, 0x10), lbl_803DC640, 0x12345678, 0, 1, 1);
            temp_r8_3 = M2C_FIELD(arg2, s32 *, 0xC0);
            temp_r11_35 = M2C_FIELD(temp_r8_3, void **, 0x19C);
            M2C_FIELD(temp_r11_35, M2C_UNK (**)(s32, f32, f32), 0xEC)(temp_r8_3 + M2C_FIELD(temp_r11_35, s16 *, 0xE8), lbl_80325B00, lbl_80325B04);
            if (Game__GetPlayerImpl(lbl_803DC3C0, 0) == arg1) {
                temp_r3_8 = M2C_FIELD(arg2, s32 *, 0xC0);
                temp_r9_34 = M2C_FIELD(temp_r3_8, void **, 0x19C);
                M2C_FIELD(temp_r9_34, M2C_UNK (**)(s32, M2C_UNK), 0x11C)(temp_r3_8 + M2C_FIELD(temp_r9_34, s16 *, 0x118), 0x2020FFFF);
            } else {
                temp_r3_9 = M2C_FIELD(arg2, s32 *, 0xC0);
                temp_r9_35 = M2C_FIELD(temp_r3_9, void **, 0x19C);
                M2C_FIELD(temp_r9_35, M2C_UNK (**)(s32, M2C_UNK), 0x11C)(temp_r3_9 + M2C_FIELD(temp_r9_35, s16 *, 0x118), 0x20FF20FF);
            }
            temp_r10_9 = M2C_FIELD(arg2, s32 *, 0xC0);
            temp_r9_36 = M2C_FIELD(temp_r10_9, void **, 0x19C);
            temp_f0 = M2C_FIELD(arg2, f32 *, 0xDC);
            M2C_FIELD(temp_r9_36, M2C_UNK (**)(s32, f32, f32), 0xAC)(temp_r10_9 + M2C_FIELD(temp_r9_36, s16 *, 0xA8), (temp_f0 * lbl_80325B28) + ((temp_f0 * lbl_80325B24) + farg0), farg1);
            temp_r10_10 = M2C_FIELD(arg2, s32 *, 0xC0);
            temp_r11_36 = M2C_FIELD(temp_r10_10, void **, 0x19C);
            M2C_FIELD(temp_r11_36, M2C_UNK (**)(s32, f32, f32), 0xCC)(temp_r10_10 + M2C_FIELD(temp_r11_36, s16 *, 0xC8), M2C_FIELD(arg2, f32 *, 0xDC), lbl_80325B08);
            temp_r11_37 = M2C_FIELD(arg2, s32 *, 0xC0);
            temp_r9_37 = M2C_FIELD(temp_r11_37, void **, 0x19C);
            M2C_FIELD(temp_r9_37, M2C_UNK (**)(s32, f32, f32), 0x8C)(temp_r11_37 + M2C_FIELD(temp_r9_37, s16 *, 0x88), farg5 * farg2, lbl_80325B20);
            temp_r11_38 = M2C_FIELD(arg2, s32 *, 0xC0);
            temp_r9_38 = M2C_FIELD(temp_r11_38, void **, 0x19C);
            M2C_FIELD(temp_r9_38, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(temp_r11_38 + M2C_FIELD(temp_r9_38, s16 *, 0x1B0), 0x1EFE);
            temp_r11_39 = M2C_FIELD(arg2, s32 *, 0xC0);
            temp_r9_39 = M2C_FIELD(temp_r11_39, void **, 0x19C);
            M2C_FIELD(temp_r9_39, M2C_UNK (**)(s32), 0x3C)(temp_r11_39 + M2C_FIELD(temp_r9_39, s16 *, 0x38));
        }
        temp_r3_10 = Sphere__Construct(Mem__New(0x1A0U));
        M2C_FIELD(arg2, s32 *, 0xC4) = temp_r3_10;
        if (temp_r3_10 != 0) {
            if (arg1 == Game__GetPlayerImpl(lbl_803DC3C0, 0)) {
                temp_r3_11 = M2C_FIELD(arg2, s32 *, 0xC4);
                temp_r9_40 = M2C_FIELD(temp_r3_11, void **, 0x19C);
                temp_r9_41 = M2C_FIELD(temp_r9_40, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14);
                temp_r9_41(temp_r3_11 + M2C_FIELD(temp_r9_40, s16 *, 0x10), lbl_803DC640, 0x2A, 0, 1, 1);
            } else {
                temp_r3_12 = M2C_FIELD(arg2, s32 *, 0xC4);
                temp_r9_42 = M2C_FIELD(temp_r3_12, void **, 0x19C);
                temp_r9_43 = M2C_FIELD(temp_r9_42, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x14);
                temp_r9_43(temp_r3_12 + M2C_FIELD(temp_r9_42, s16 *, 0x10), lbl_803DC640, 0x2B, 0, 1, 1);
            }
            temp_r10_11 = M2C_FIELD(arg2, s32 *, 0xC4);
            temp_r11_40 = M2C_FIELD(temp_r10_11, void **, 0x19C);
            M2C_FIELD(temp_r11_40, M2C_UNK (**)(s32, f32, f32), 0xEC)(temp_r10_11 + M2C_FIELD(temp_r11_40, s16 *, 0xE8), lbl_80325B04, lbl_80325B04);
            temp_r11_41 = M2C_FIELD(arg2, s32 *, 0xC4);
            temp_r9_44 = M2C_FIELD(temp_r11_41, void **, 0x19C);
            temp_f0_2 = M2C_FIELD(arg2, f32 *, 0xDC);
            M2C_FIELD(temp_r9_44, M2C_UNK (**)(s32, f32, f32), 0xAC)(temp_r11_41 + M2C_FIELD(temp_r9_44, s16 *, 0xA8), (farg5 * farg2 * temp_f0_2) + ((temp_f0_2 * lbl_80325B24) + farg0), farg1);
            temp_r10_12 = M2C_FIELD(arg2, s32 *, 0xC4);
            temp_r11_42 = M2C_FIELD(temp_r10_12, void **, 0x19C);
            M2C_FIELD(temp_r11_42, M2C_UNK (**)(s32, f32, f32), 0xCC)(temp_r10_12 + M2C_FIELD(temp_r11_42, s16 *, 0xC8), M2C_FIELD(arg2, f32 *, 0xDC), lbl_80325B08);
            temp_r11_43 = M2C_FIELD(arg2, s32 *, 0xC4);
            temp_r9_45 = M2C_FIELD(temp_r11_43, void **, 0x19C);
            M2C_FIELD(temp_r9_45, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(temp_r11_43 + M2C_FIELD(temp_r9_45, s16 *, 0x1B0), 0x1F10);
            temp_r11_44 = M2C_FIELD(arg2, s32 *, 0xC4);
            temp_r9_46 = M2C_FIELD(temp_r11_44, void **, 0x19C);
            M2C_FIELD(temp_r9_46, M2C_UNK (**)(s32), 0x3C)(temp_r11_44 + M2C_FIELD(temp_r9_46, s16 *, 0x38));
        }
        M2C_FIELD(arg2, s32 *, 0xE0) = 0xFF;
        M2C_FIELD(arg2, f32 *, 0xC8) = farg2;
        M2C_FIELD(arg2, s32 *, 0xCC) = arg3;
        M2C_FIELD(arg2, s32 *, 0xD0) = arg4;
        M2C_FIELD(arg2, f32 *, 0xD4) = farg5;
        M2C_FIELD(arg2, f32 *, 0xD8) = (f32) lbl_80325B00;
    }
}
