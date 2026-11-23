/* SuspensionBridge__UpdatePhysics @ 0x800F94E4 (size: 0x838, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SuspensionBridge__BuildSpanArcLengthTable(void *, void *, s32, s32);
f32 atan2f(f32, f32);
void * Actor__GetBoneById(void *, s32);
float cosf(float);
float sinf(float);
float sqrtf(float);
M2C_UNK fn_801A2854(s32, s32, s32, s32, f32);
M2C_UNK Matrix__Copy4x4(s32, s32);
M2C_UNK fn_8023D5AC(s32, s32);
M2C_UNK BoneChain__UpdateBoneTransforms(s32, s32, s32, s32);
M2C_UNK SuspensionBridge__UpdateBoardMotion(s32, s32, s32, s32);
extern f32 lbl_803244C0 __attribute__((section(".data")));
extern f32 lbl_803244C4 __attribute__((section(".data")));
extern f32 lbl_803244C8 __attribute__((section(".data")));
extern f32 lbl_803244CC __attribute__((section(".data")));
extern M2C_UNK lbl_80394CC0 __attribute__((section(".data")));
extern f32 lbl_803DE500;

void SuspensionBridge__UpdatePhysics(void *arg0) {
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD8;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    s32 sp14;
    f32 sp8;
    f32 *var_r30;
    f32 *var_r7;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f18;
    f32 temp_f19;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f30_3;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f31_3;
    f32 temp_f31_4;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 var_f1;
    f32 var_f29;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_r10;
    s32 temp_r11_2;
    s32 temp_r22;
    s32 temp_r30;
    s32 temp_r8_2;
    s32 var_r27;
    s32 var_r28;
    s32 var_r31;
    s32 var_r4;
    s32 var_r9;
    s32 var_r9_2;
    void **temp_r21;
    void **var_r6;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r10_4;
    void *temp_r11;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r7;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    SuspensionBridge__BuildSpanArcLengthTable(arg0, arg0 + 0x450, 0, M2C_FIELD(arg0, s32 *, 0x448));
    SuspensionBridge__BuildSpanArcLengthTable(arg0, arg0 + 0x4E0, 1, M2C_FIELD(arg0, s32 *, 0x448));
    var_r9 = 1;
    do {
        temp_cr0_eq = var_r9 == 0;
        var_r9 -= 1;
    } while (temp_cr0_eq == 0);
    temp_r9 = arg0 + 0x450;
    temp_r11 = arg0 + 0x4E0;
    sp8 = M2C_FIELD(arg0, s32 *, 0x450);
    var_r28 = 0;
    temp_r21 = arg0 + 0x590;
    M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(temp_r9, f32 *, 4);
    M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(temp_r9, f32 *, 8);
    sp14 = M2C_FIELD(arg0, s32 *, 0x4E0);
    M2C_FIELD(&sp14, s32 *, 4) = (s32) M2C_FIELD(temp_r11, s32 *, 4);
    M2C_FIELD(&sp14, s32 *, 8) = (s32) M2C_FIELD(temp_r11, s32 *, 8);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x448) > 0) {
        temp_f19 = lbl_803244C4;
        temp_f18 = lbl_803244CC;
        do {
            var_r9_2 = 1;
            temp_r22 = var_r28 + 1;
loop_5:
            temp_cr0_eq_2 = var_r9_2 == 0;
            var_r9_2 -= 1;
            if (temp_cr0_eq_2 == 0) {
                goto loop_5;
            }
            temp_r30 = temp_r22 * 4;
            fn_801A2854((s32) temp_r9, (s32) &sp20, 0, M2C_ERROR(/* Read from unset register $r6 */), *(s32 *)((char *)&lbl_80394CC0 + temp_r30));
            fn_801A2854((s32) temp_r11, (s32) &sp2C, 0, M2C_ERROR(/* Read from unset register $r6 */), *(s32 *)((char *)&lbl_80394CC0 + 0x50 + temp_r30));
            temp_r10 = M2C_FIELD(arg0, s32 *, 0x584);
            if ((s32) *(s32 *)(temp_r10 + 4 + var_r28) != 0xFF) {
                temp_r11_2 = var_r28 * 0xC;
                temp_f0 = sp20 + sp8;
                temp_f30 = lbl_803244C0;
                temp_f10 = sp24 + M2C_FIELD(&sp8, f32 *, 4);
                temp_f12 = sp28 + M2C_FIELD(&sp8, f32 *, 8);
                sp48 = temp_f0;
                sp4C = temp_f10;
                sp50 = temp_f12;
                temp_f10_2 = temp_f10 * temp_f30;
                temp_f12_2 = temp_f12 * temp_f30;
                sp3C = temp_f10_2;
                sp40 = temp_f12_2;
                temp_r9_2 = temp_r11_2 + temp_r10;
                sp38 = temp_f0 * temp_f30;
                temp_f9 = sp20 - sp8;
                sp3C = temp_f10_2 - M2C_FIELD(temp_r9_2, f32 *, 0x3D8);
                temp_f28 = ((sp30 + M2C_FIELD(&sp14, s32 *, 4)) * temp_f30) - temp_f10_2;
                sp40 = temp_f12_2 - M2C_FIELD(temp_r9_2, f32 *, 0x3DC);
                temp_f1 = sp28 - M2C_FIELD(&sp8, f32 *, 8);
                sp48 = temp_f9;
                sp50 = temp_f1;
                temp_f8 = sp24 - M2C_FIELD(&sp8, f32 *, 4);
                sp4C = temp_f8;
                temp_f31 = -temp_f8;
                temp_f1_2 = sqrtf((temp_f9 * temp_f9) + (temp_f1 * temp_f1));
                var_f1 = lbl_803244C4;
                if (temp_f1_2 == var_f1) {
                    temp_cr0_eq_3 = temp_f31 == var_f1;
                    if (temp_cr0_eq_3 == 0) {
                        if (temp_cr0_eq_3 == 0) {
                            var_f29 = lbl_803DE500 * temp_f30;
                        } else {
                            var_f29 = -lbl_803DE500 * temp_f30;
                        }
                    } else {
                        goto block_13;
                    }
                } else {
                    var_f1 = atan2f(temp_f31, temp_f1_2);
block_13:
                    var_f29 = var_f1;
                }
                temp_f30_2 = atan2f(temp_f28, lbl_803244C8);
                temp_f31_2 = sinf(var_f29);
                temp_f1_3 = cosf(var_f29);
                sp5C = temp_f31_2;
                sp6C = temp_f1_3;
                sp68 = -temp_f31_2;
                sp58 = temp_f1_3;
                sp60 = temp_f19;
                sp64 = temp_f19;
                sp70 = temp_f19;
                sp74 = temp_f19;
                sp78 = temp_f19;
                sp7C = temp_f19;
                sp80 = temp_f18;
                sp84 = temp_f19;
                sp88 = temp_f19;
                sp8C = temp_f19;
                sp90 = temp_f19;
                sp94 = temp_f18;
                temp_f31_3 = sinf(temp_f30_2);
                temp_f1_4 = cosf(temp_f30_2);
                sp98 = temp_f1_4;
                temp_f8_2 = -temp_f31_3;
                M2C_FIELD(&sp98, f32 *, 8) = temp_f8_2;
                M2C_FIELD(&sp98, f32 *, 0x28) = temp_f1_4;
                M2C_FIELD(&sp98, f32 *, 0x20) = temp_f31_3;
                M2C_FIELD(&sp98, f32 *, 4) = temp_f19;
                M2C_FIELD(&sp98, f32 *, 0xC) = temp_f19;
                M2C_FIELD(&sp98, f32 *, 0x10) = temp_f19;
                M2C_FIELD(&sp98, f32 *, 0x14) = temp_f18;
                M2C_FIELD(&sp98, f32 *, 0x18) = temp_f19;
                M2C_FIELD(&sp98, f32 *, 0x1C) = temp_f19;
                M2C_FIELD(&sp98, f32 *, 0x24) = temp_f19;
                M2C_FIELD(&sp98, f32 *, 0x2C) = temp_f19;
                M2C_FIELD(&sp98, f32 *, 0x30) = temp_f19;
                M2C_FIELD(&sp98, f32 *, 0x34) = temp_f19;
                M2C_FIELD(&sp98, f32 *, 0x38) = temp_f19;
                M2C_FIELD(&sp98, f32 *, 0x3C) = temp_f18;
                spE4 = temp_f19;
                spDC = sp5C;
                spEC = sp6C;
                spD8 = (sp58 * sp98) + (sp60 * temp_f31_3);
                spE0 = (sp58 * temp_f8_2) + (sp60 * temp_f1_4);
                spE8 = (sp68 * sp98) + (sp70 * temp_f31_3);
                spF0 = (sp68 * temp_f8_2) + (sp70 * temp_f1_4);
                spF4 = temp_f19;
                spF8 = (sp78 * sp98) + (sp80 * temp_f31_3);
                spFC = sp7C;
                sp100 = (sp78 * temp_f8_2) + (sp80 * temp_f1_4);
                sp10C = sp8C;
                sp108 = (sp88 * sp98) + (sp90 * temp_f31_3);
                sp110 = (sp88 * temp_f8_2) + (sp90 * temp_f1_4);
                sp104 = temp_f19;
                sp114 = temp_f18;
                Matrix__Copy4x4((s32) &sp58, (s32) &spD8);
                sp88 = sp3C;
                sp8C = sp40;
                temp_r9_3 = (var_r28 << 6) + M2C_FIELD(arg0, s32 *, 0x584);
                sp90 = sp38;
                temp_f30_3 = M2C_FIELD(temp_r9_3, f32 *, 0x14);
                temp_r9_4 = temp_r9_3 + 0x14;
                temp_f5 = M2C_FIELD(temp_r9_4, f32 *, 0x10);
                temp_f31_4 = M2C_FIELD(temp_r9_4, f32 *, 0x14);
                temp_f2 = M2C_FIELD(temp_r9_4, f32 *, 0x18);
                temp_f27 = M2C_FIELD(temp_r9_4, f32 *, 4);
                temp_f1_5 = M2C_FIELD(temp_r9_4, f32 *, 8);
                temp_f4 = M2C_FIELD(temp_r9_4, f32 *, 0x20);
                temp_f29 = M2C_FIELD(temp_r9_4, f32 *, 0x24);
                temp_f3 = M2C_FIELD(temp_r9_4, f32 *, 0x28);
                spD8 = (sp60 * temp_f4) + ((sp58 * temp_f30_3) + (sp5C * temp_f5));
                spDC = (sp60 * temp_f29) + ((sp58 * temp_f27) + (sp5C * temp_f31_4));
                spE0 = (sp60 * temp_f3) + ((sp58 * temp_f1_5) + (sp5C * temp_f2));
                spF0 = (sp70 * temp_f3) + ((sp68 * temp_f1_5) + (sp6C * temp_f2));
                spE8 = (sp70 * temp_f4) + ((sp68 * temp_f30_3) + (sp6C * temp_f5));
                spEC = (sp70 * temp_f29) + ((sp68 * temp_f27) + (sp6C * temp_f31_4));
                spE4 = temp_f19;
                spF4 = temp_f19;
                spF8 = (sp80 * temp_f4) + ((sp78 * temp_f30_3) + (sp7C * temp_f5));
                sp104 = temp_f19;
                sp114 = temp_f18;
                sp100 = (sp80 * temp_f3) + ((sp78 * temp_f1_5) + (sp7C * temp_f2));
                sp108 = (sp38 * temp_f4) + ((sp3C * temp_f30_3) + (sp40 * temp_f5)) + M2C_FIELD(temp_r9_4, f32 *, 0x30);
                sp10C = (sp38 * temp_f29) + ((sp3C * temp_f27) + (sp40 * temp_f31_4)) + M2C_FIELD(temp_r9_4, f32 *, 0x34);
                sp110 = (sp38 * temp_f3) + ((sp3C * temp_f1_5) + (sp40 * temp_f2)) + M2C_FIELD(temp_r9_4, f32 *, 0x38);
                spFC = (sp80 * temp_f29) + ((sp78 * temp_f27) + (sp7C * temp_f31_4));
                Matrix__Copy4x4((s32) &sp98, (s32) &spD8);
                fn_8023D5AC(Actor__GetBoneById(arg0, (s32) *(s32 *)(M2C_FIELD(arg0, s32 *, 0x584) + 4 + var_r28)), (s32) &sp98);
                if (var_r28 < (s32) M2C_FIELD(arg0, s32 *, 0x598)) {
                    var_r4 = 0;
                    var_r7 = &sp8;
                    var_r6 = temp_r21;
                    do {
                        temp_r8 = *var_r6;
                        var_r6 += 4;
                        if (temp_r8 != NULL) {
                            temp_r9_5 = temp_r11_2 + (var_r4 + M2C_FIELD(arg0, s32 *, 0x584));
                            temp_r9_6 = temp_r9_5 + 0x488;
                            temp_r10_2 = M2C_FIELD(arg0, void **, 0x84);
                            temp_f7 = M2C_FIELD(var_r7, f32 *, 0) + M2C_FIELD(temp_r9_5, f32 *, 0x488);
                            temp_r11_3 = temp_r10_2 + 0x10;
                            temp_f13 = M2C_FIELD(var_r7, f32 *, 8) + M2C_FIELD(temp_r9_6, f32 *, 8);
                            spD8 = temp_f7;
                            temp_f11 = M2C_FIELD(var_r7, f32 *, 4) + M2C_FIELD(temp_r9_6, f32 *, 4);
                            spE0 = temp_f13;
                            spDC = temp_f11;
                            spE8 = (temp_f13 * M2C_FIELD(temp_r11_3, f32 *, 0x20)) + ((temp_f7 * M2C_FIELD(temp_r10_2, f32 *, 0x10)) + (temp_f11 * M2C_FIELD(temp_r11_3, f32 *, 0x10))) + M2C_FIELD(temp_r11_3, f32 *, 0x30);
                            spEC = (temp_f13 * M2C_FIELD(temp_r11_3, f32 *, 0x24)) + ((temp_f7 * M2C_FIELD(temp_r11_3, f32 *, 4)) + (temp_f11 * M2C_FIELD(temp_r11_3, f32 *, 0x14))) + M2C_FIELD(temp_r11_3, f32 *, 0x34);
                            temp_r11_4 = M2C_FIELD(temp_r8, s32 *, 0xC) + (var_r28 * 0x34);
                            spF0 = (temp_f13 * M2C_FIELD(temp_r11_3, f32 *, 0x28)) + ((temp_f7 * M2C_FIELD(temp_r11_3, f32 *, 8)) + (temp_f11 * M2C_FIELD(temp_r11_3, f32 *, 0x18))) + M2C_FIELD(temp_r11_3, f32 *, 0x38);
                            temp_r9_7 = temp_r11_4 + 0x28;
                            M2C_FIELD(temp_r11_4, f32 *, 0x28) = spE8;
                            M2C_FIELD(temp_r9_7, s32 *, 8) = (s32) M2C_FIELD(&spE8, s32 *, 8);
                            M2C_FIELD(temp_r9_7, s32 *, 4) = (s32) M2C_FIELD(&spE8, s32 *, 4);
                        }
                        var_r7 += 0xC;
                        var_r4 += 0xC0;
                    } while (var_r7 <= (f32 *) (&sp8 + 0xC));
                }
            }
            var_r28 = temp_r22;
            sp8 = sp20;
            M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(&sp20, f32 *, 4);
            M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(&sp20, f32 *, 8);
            sp14 = sp2C;
            M2C_FIELD(&sp14, s32 *, 4) = (s32) M2C_FIELD(&sp2C, s32 *, 4);
            M2C_FIELD(&sp14, s32 *, 8) = (s32) M2C_FIELD(&sp2C, s32 *, 8);
        } while (var_r28 < (s32) M2C_FIELD(arg0, s32 *, 0x448));
    }
    var_r27 = 0;
    var_r30 = &sp8;
    var_r31 = 0;
    do {
        temp_r7 = *(void * *)(var_r31 + temp_r21);
        if (temp_r7 != NULL) {
            temp_r8_2 = M2C_FIELD(arg0, s32 *, 0x448);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x598) > temp_r8_2) {
                temp_r9_8 = (temp_r8_2 * 0xC) + (var_r27 + M2C_FIELD(arg0, s32 *, 0x584));
                temp_r10_3 = M2C_FIELD(arg0, void **, 0x84);
                temp_r9_9 = temp_r9_8 + 0x488;
                temp_r11_5 = temp_r10_3 + 0x10;
                temp_f8_3 = M2C_FIELD(var_r30, f32 *, 0) + M2C_FIELD(temp_r9_8, f32 *, 0x488);
                temp_f9_2 = M2C_FIELD(var_r30, f32 *, 8) + M2C_FIELD(temp_r9_9, f32 *, 8);
                sp20 = temp_f8_3;
                temp_f11_2 = M2C_FIELD(var_r30, f32 *, 4) + M2C_FIELD(temp_r9_9, f32 *, 4);
                sp28 = temp_f9_2;
                sp24 = temp_f11_2;
                sp30 = (temp_f9_2 * M2C_FIELD(temp_r11_5, f32 *, 0x20)) + ((temp_f8_3 * M2C_FIELD(temp_r10_3, f32 *, 0x10)) + (temp_f11_2 * M2C_FIELD(temp_r11_5, f32 *, 0x10))) + M2C_FIELD(temp_r11_5, f32 *, 0x30);
                sp34 = (temp_f9_2 * M2C_FIELD(temp_r11_5, f32 *, 0x24)) + ((temp_f8_3 * M2C_FIELD(temp_r11_5, f32 *, 4)) + (temp_f11_2 * M2C_FIELD(temp_r11_5, f32 *, 0x14))) + M2C_FIELD(temp_r11_5, f32 *, 0x34);
                temp_r9_10 = M2C_FIELD(temp_r7, s32 *, 0xC) + (temp_r8_2 * 0x34);
                sp38 = (temp_f9_2 * M2C_FIELD(temp_r11_5, f32 *, 0x28)) + ((temp_f8_3 * M2C_FIELD(temp_r11_5, f32 *, 8)) + (temp_f11_2 * M2C_FIELD(temp_r11_5, f32 *, 0x18))) + M2C_FIELD(temp_r11_5, f32 *, 0x38);
                temp_r10_4 = temp_r9_10 + 0x28;
                M2C_FIELD(temp_r9_10, f32 *, 0x28) = sp30;
                M2C_FIELD(temp_r10_4, s32 *, 8) = (s32) M2C_FIELD(&sp30, s32 *, 8);
                M2C_FIELD(temp_r10_4, s32 *, 4) = (s32) M2C_FIELD(&sp30, s32 *, 4);
            }
            BoneChain__UpdateBoneTransforms(*(s32 *)(var_r31 + temp_r21), M2C_ERROR(/* Read from unset register $r4 */), M2C_ERROR(/* Read from unset register $r5 */), M2C_ERROR(/* Read from unset register $r6 */));
        }
        var_r30 += 0xC;
        var_r27 += 0xC0;
        var_r31 += 4;
    } while (var_r30 <= (f32 *) (&sp8 + 0xC));
    SuspensionBridge__UpdateBoardMotion((s32) arg0, M2C_ERROR(/* Read from unset register $r4 */), M2C_ERROR(/* Read from unset register $r5 */), M2C_ERROR(/* Read from unset register $r6 */));
}
