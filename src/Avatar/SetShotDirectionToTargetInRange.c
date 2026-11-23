/* Avatar__SetShotDirectionToTargetInRange @ 0x80031B98 (size: 0x9A4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Script__PopInt(void *, s32);
f32 Script__PopFloat(void *, s32);
s32 Actor__FindBoneIdByName(void *, char *, char *);
s32 WeaponInventory__GetSelected(void *, s32);
void * CActor__GetBoneWorldPosition(void *, s32, s32);
s32 Avatar__IsEligibleTarget(void *, void *);
f32 sqrtf(f32);
f32 Rand__RangeFloat(f32, f32, s32);
void Avatar__SetWeaponLaunchParameters(char *, void *, f32);
s32 Camera__IsPointInFrame(void *, f32 *, f32);
int String__CompareIgnoreCase(const char *, const char *);
float cosf(float);
M2C_UNK Matrix__BuildFromTwoAxes(s32, s32, s32, s32, s32);
extern s8 lbl_80311444 __attribute__((section(".data")));
extern s8 lbl_803114FC __attribute__((section(".data")));
extern s8 lbl_80311784 __attribute__((section(".data")));
extern s8 lbl_80311790 __attribute__((section(".data")));
extern s8 lbl_8031179C __attribute__((section(".data")));
extern s8 lbl_803117A4 __attribute__((section(".data")));
extern s8 lbl_803117B0 __attribute__((section(".data")));
extern f32 lbl_803117BC __attribute__((section(".data")));
extern f32 lbl_803117C0 __attribute__((section(".data")));
extern f32 lbl_803117D0 __attribute__((section(".data")));
extern f32 lbl_803117D4 __attribute__((section(".data")));
extern f32 lbl_803117D8 __attribute__((section(".data")));
extern f32 lbl_803117DC __attribute__((section(".data")));
extern f32 lbl_803117E0 __attribute__((section(".data")));
extern f32 lbl_803117E4 __attribute__((section(".data")));
extern f32 lbl_803117E8 __attribute__((section(".data")));
extern M2C_UNK lbl_803945A4 __attribute__((section(".data")));
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));
extern void *lbl_803DC5B4;
extern void *lbl_803DCCB8;
extern f32 lbl_803DE520;
extern M2C_UNK lbl_803ED634;

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void Avatar__SetShotDirectionToTargetInRange(void *arg0, s32 arg1) {
    f32 spF4;
    f32 spF0;
    mt_vec3_f32 sp18;
    mt_vec3_f32 sp40;
    union { f32 value; unsigned char bytes[32]; } sp8;
    mt_vec3_f32 sp50;
    mt_vec3_f32 sp60;
    mt_vec3_f32 sp70;
    mt_vec3_f32 sp80;
    mt_vec3_f32 spD0;
    union { f32 value; unsigned char bytes[16]; } sp28;
    union { s8 value; unsigned char bytes[88]; } sp38;
    mt_vec3_f32 spE0;
    union { f32 value; unsigned char bytes[96]; } sp90;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f31_3;
    f32 temp_r11_2;
    f32 temp_r9_4;
    f32 var_f29;
    f32 var_f30;
    s32 temp_r0;
    s32 temp_r11;
    s32 temp_r28;
    s32 var_r0;
    s32 var_r30;
    s32 var_r3;
    s8 *var_r15;
    s8 *var_r4;
    u32 var_r8;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r7;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_5;
    void *var_r18;
    void *var_r24;
    void *var_r27;

    temp_r28 = Script__PopInt(arg0, arg1);
    temp_f31 = Script__PopFloat(arg0, arg1);
    temp_f27 = Script__PopFloat(arg0, arg1);
    temp_r9 = temp_r28 + 0x44;
    temp_r7 = temp_r28 + 0x38;
    temp_f28 = cosf(temp_f31 * lbl_803DE520);
    sp18.v0 = M2C_FIELD(temp_r9, f32 *, 0x18);
    sp18.v1 = M2C_FIELD(temp_r9, f32 *, 0x1C);
    sp18.v2 = M2C_FIELD(temp_r9, f32 *, 0x20);
    var_f30 = lbl_803117BC;
    sp28.value = M2C_FIELD(temp_r28, f32 *, 0x38);
    M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4) = (f32) M2C_FIELD(temp_r7, f32 *, 4);
    M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8) = (f32) M2C_FIELD(temp_r7, f32 *, 8);
    if ((s32) M2C_FIELD(M2C_FIELD(temp_r28, void **, 0x84), s32 *, 0xC) != 0) {
        temp_r0 = M2C_FIELD(temp_r28, s32 *, 0x18D4);
        var_r3 = 0;
        switch (temp_r0) {
        case 0:
            var_r4 = &lbl_80311784;
block_16:
            var_r3 = Actor__FindBoneIdByName((void *) temp_r28, var_r4, ((s8 *)sp38.bytes));
            break;
        case 1:
            var_r4 = &lbl_803114FC;
            goto block_16;
        case 2:
            var_r4 = &lbl_80311790;
            goto block_16;
        case 4:
            var_r4 = &lbl_80311444;
            goto block_16;
        case 6:
            var_r3 = Actor__FindBoneIdByName((void *) temp_r28, WeaponInventory__GetSelected(temp_r28 + 0x15F0, 1) + 0x10, ((s8 *)sp38.bytes));
            break;
        case 7:
            var_r3 = Actor__FindBoneIdByName((void *) temp_r28, &lbl_8031179C, ((s8 *)sp38.bytes));
            break;
        }
        if (var_r3 != 0) {
            CActor__GetBoneWorldPosition(&sp40, temp_r28, (s32) (u8) sp38.value);
            M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8) = (f32) sp40.v2;
            sp28.value = sp40.v0;
            M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4) = (f32) sp40.v1;
        }
    }
    var_r24 = M2C_FIELD(temp_r28, void **, 0x2BC);
    if (var_r24 != NULL) {
        temp_r9_2 = M2C_FIELD(var_r24, void **, 0x160);
        var_r18 = temp_r28 + 0x44;
        var_r15 = temp_r28 + 0x15A0;
        sp8.value = M2C_FIELD(temp_r9_2, f32 *, 0);
        M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = (f32) M2C_FIELD(temp_r9_2, f32 *, 8);
        M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = (f32) M2C_FIELD(temp_r9_2, f32 *, 4);
    } else {
        var_r18 = temp_r28 + 0x44;
        var_r15 = temp_r28 + 0x15A0;
        var_r27 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
        if (var_r27 != NULL) {
            temp_f31_2 = lbl_803117C0;
            do {
                temp_r29 = M2C_FIELD(var_r27, void **, 0);
                temp_r11 = M2C_FIELD(temp_r29, s32 *, 0);
                if (((s32) (temp_r11 & M2C_FIELD(&lbl_803945E4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945E4, s32 *, 0)) || (((s32) (temp_r11 & M2C_FIELD(&lbl_803945A4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945A4, s32 *, 0)) && (String__CompareIgnoreCase(temp_r29 + 0x1C0, &lbl_803117A4) == 0)) || (((s32) (M2C_FIELD(temp_r29, s32 *, 0) & M2C_FIELD(&lbl_803945A4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945A4, s32 *, 0)) && (String__CompareIgnoreCase(temp_r29 + 0x1C0, &lbl_803117B0) == 0))) {
                    var_r30 = 1;
                    if ((s32) (M2C_FIELD(temp_r29, s32 *, 0) & M2C_FIELD(&lbl_803945E4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945E4, s32 *, 0)) {
                        if (Avatar__IsEligibleTarget((void *) temp_r28, temp_r29) == 0) {
                            var_r30 = 0;
                        }
                        if (((s32) M2C_FIELD(temp_r29, s32 *, 0x2D4) != 0) && ((s32) M2C_FIELD(M2C_FIELD(temp_r29, void **, 0xB8C), s32 *, 0x4EC) == 0)) {
                            var_r30 = 0;
                        }
                    }
                    if ((temp_r29 != temp_r28) && (var_r30 != 0)) {
                        temp_r9_3 = M2C_FIELD(temp_r29, void **, 0x160);
                        sp50.v0 = M2C_FIELD(temp_r9_3, f32 *, 0);
                        sp50.v2 = (f32) M2C_FIELD(temp_r9_3, f32 *, 8);
                        sp50.v1 = (f32) M2C_FIELD(temp_r9_3, f32 *, 4);
                        sp60.v0 = sp50.v0 - sp28.value;
                        sp60.v1 = sp50.v1 - M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4);
                        sp60.v2 = sp50.v2 - M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8);
                        temp_r9_4 = sp60.v1;
                        temp_r11_2 = sp60.v2;
                        sp40.v0 = sp60.v0;
                        sp40.v1 = temp_r9_4;
                        sp40.v2 = temp_r11_2;
                        sp60.v1 = temp_r9_4;
                        sp60.v2 = temp_r11_2;
                        temp_f1 = sp60.v0 * sp60.v0;
                        sp70.v0 = temp_f1;
                        sp70.v1 = sp60.v1 * sp60.v1;
                        sp70.v2 = sp60.v2 * sp60.v2;
                        temp_f1_2 = sqrtf(temp_f1 + sp70.v1 + sp70.v2);
                        spF0 = temp_f1_2;
                        spF4 = temp_f31_2;
                        if ((s32) (u8) (M2C_BITWISE(u32, spF0) >> 0x17U) != 0) {
                            var_r0 = 0;
                        } else {
                            var_r0 = 1;
                        }
                        if (var_r0 != 0) {
                            var_r8 = 0;
                        } else {
                            temp_f13 = temp_f31_2 / temp_f1_2;
                            var_r8 = 1;
                            sp80.v0 = sp60.v0 * temp_f13;
                            sp80.v2 = sp60.v2 * temp_f13;
                            sp80.v1 = sp60.v1 * temp_f13;
                            sp70 = sp80;
                            sp60 = sp80;
                        }
                        if (!((f32) (f64) var_r8 >= temp_f27)) {
                            temp_f0 = sp60.v0 * sp18.v0;
                            sp70.v0 = temp_f0;
                            sp70.v1 = sp60.v1 * sp18.v1;
                            sp70.v2 = sp60.v2 * sp18.v2;
                            if (!((temp_f0 + sp70.v1 + sp70.v2) <= temp_f28)) {
                                temp_f0_2 = sp40.v0 * sp40.v0;
                                sp70.v0 = temp_f0_2;
                                sp70.v1 = sp40.v1 * sp40.v1;
                                sp70.v2 = sp40.v2 * sp40.v2;
                                temp_f0_3 = temp_f0_2 + sp70.v1 + sp70.v2;
                                if (!(temp_f0_3 >= var_f30)) {
                                    var_r24 = temp_r29;
                                    var_f30 = temp_f0_3;
                                    sp8.value = sp50.v0;
                                    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = (f32) sp50.v1;
                                    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = (f32) sp50.v2;
                                }
                            }
                        }
                    }
                }
                if (var_r27 != NULL) {
                    var_r27 = M2C_FIELD(var_r27, void **, 0x14);
                } else {
                    var_r27 = M2C_FIELD(lbl_803DCCB8, void **, 0x2C);
                }
            } while (var_r27 != NULL);
        }
    }
    sp40.v0 = M2C_FIELD(var_r18, f32 *, 0x18);
    sp40.v1 = M2C_FIELD(var_r18, f32 *, 0x1C);
    sp40.v2 = M2C_FIELD(var_r18, f32 *, 0x20);
    sp18 = sp40;
    if (var_r24 != NULL) {
        if ((s32) (M2C_FIELD(var_r24, s32 *, 0) & M2C_FIELD(&lbl_803945E4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945E4, s32 *, 0)) {
            if (((s32) M2C_FIELD(var_r24, s32 *, 0x7E4) == 0) && ((s32) M2C_FIELD(var_r24, s32 *, 0x71C) == 5)) {
                M2C_FIELD(M2C_FIELD(var_r24, void **, 0xB8C), s32 *, 0xC0) = 1;
            }
            sp40.v0 = sp8.value - sp28.value;
            sp40.v1 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) - M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4);
            sp40.v2 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) - M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8);
            sp18 = sp40;
            temp_f1_3 = sp18.v0 * sp18.v0;
            sp40.v0 = temp_f1_3;
            sp40.v1 = sp18.v1 * sp18.v1;
            sp40.v2 = sp18.v2 * sp18.v2;
            temp_f13_2 = lbl_803117C0 / sqrtf(temp_f1_3 + sp40.v1 + sp40.v2);
            sp50.v0 = sp18.v0 * temp_f13_2;
            sp50.v2 = sp18.v2 * temp_f13_2;
            sp50.v1 = sp18.v1 * temp_f13_2;
            sp40 = sp50;
            sp18 = sp50;
        }
        if ((s32) M2C_FIELD(temp_r28, s32 *, 0x7E4) == 0) {
            temp_r29_2 = temp_r28 + 0x38;
            temp_f28_2 = lbl_803117C0;
            temp_r9_5 = var_r24 + 0x38;
            sp40.v0 = lbl_803117D0;
            var_f29 = lbl_803117D0;
            sp40.v1 = (f32) lbl_803117D0;
            sp40.v2 = temp_f28_2;
            temp_f0_4 = M2C_FIELD(temp_r9_5, f32 *, 4) - M2C_FIELD(temp_r29_2, f32 *, 4);
            temp_f13_3 = M2C_FIELD(temp_r9_5, f32 *, 8) - M2C_FIELD(temp_r29_2, f32 *, 8);
            sp50.v1 = temp_f0_4;
            sp50.v2 = temp_f13_3;
            temp_f12 = M2C_FIELD(var_r24, f32 *, 0x38) - M2C_FIELD(temp_r28, f32 *, 0x38);
            temp_f11 = temp_f12 * temp_f12;
            sp50.v0 = temp_f12;
            sp60.v0 = temp_f11;
            sp60.v1 = temp_f0_4 * temp_f0_4;
            sp60.v2 = temp_f13_3 * temp_f13_3;
            temp_f30 = sqrtf(temp_f11 + sp60.v1 + sp60.v2);
            sp60.v0 = M2C_FIELD(temp_r28, f32 *, 0x38);
            temp_f31_3 = ((lbl_803117D4 - M2C_FIELD(M2C_FIELD(temp_r28, void **, 0xB8C), f32 *, 0x374)) * lbl_803117D8) / temp_f30;
            sp60.v1 = (f32) M2C_FIELD(temp_r29_2, f32 *, 4);
            sp60.v2 = (f32) M2C_FIELD(temp_r29_2, f32 *, 8);
            if (Camera__IsPointInFrame(lbl_803DC5B4, &sp60, lbl_803117DC) != 1) {
                var_f29 = Rand__RangeFloat(lbl_803117E0, lbl_803117E4, (s32) &lbl_803ED634) / temp_f30;
            }
            sp40.v0 = Rand__RangeFloat(-temp_f31_3, temp_f31_3, (s32) &lbl_803ED634);
            sp40.v1 = Rand__RangeFloat(var_f29, (temp_f31_3 * lbl_803117E8) + var_f29, (s32) &lbl_803ED634);
            Matrix__BuildFromTwoAxes((s32) ((f32 *)sp90.bytes), (s32) &sp18, 2, 1, 1);
            temp_f0_5 = (sp40.v2 * M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x24)) + ((sp40.v0 * M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x4)) + (sp40.v1 * M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x14))) + M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x34);
            temp_f13_4 = (sp40.v2 * M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x28)) + ((sp40.v0 * M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x8)) + (sp40.v1 * M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x18))) + M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x38));
            sp60.v1 = temp_f0_5;
            temp_f1_4 = (sp40.v2 * M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x20)) + ((sp40.v0 * sp90.value) + (sp40.v1 * M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x10))) + M2C_FIELD(((f32 *)sp90.bytes), f32 *, 0x30));
            sp60.v2 = temp_f13_4;
            sp60.v0 = temp_f1_4;
            temp_f1_5 = temp_f1_4 * temp_f1_4;
            spD0.v1 = temp_f0_5 * temp_f0_5;
            spD0.v0 = temp_f1_5;
            spD0.v2 = temp_f13_4 * temp_f13_4;
            temp_f1_6 = temp_f28_2 / sqrtf(temp_f1_5 + spD0.v1 + spD0.v2);
            spE0.v2 = sp60.v2 * temp_f1_6;
            spE0.v0 = sp60.v0 * temp_f1_6;
            spE0.v1 = sp60.v1 * temp_f1_6;
            sp60 = spE0;
            spD0 = spE0;
            spD0.v0 = sp18.v0 + sp60.v0;
            spD0.v1 = sp18.v1 + sp60.v1;
            spD0.v2 = sp18.v2 + sp60.v2;
            sp70 = spD0;
            sp18 = spD0;
        }
    }
    sp40 = sp18;
    Avatar__SetWeaponLaunchParameters(var_r15, &sp40, lbl_803117D0);
}
