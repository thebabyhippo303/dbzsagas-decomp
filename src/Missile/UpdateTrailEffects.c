/* Missile__UpdateTrailEffects @ 0x800D6B2C (size: 0x950, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { f32 x, y, z; } Vec3f;
Vec3f Missile__GetSelectedWeaponOffset(char *);
f32 sqrtf(f32);
s32 Emitter__Activate(u32);
s32 Emitter__SetWorldPosition(u32, void *);
M2C_UNK SceneMgr__FindSceneByType(s32);
M2C_UNK fn_80233B20(s32, s32);
M2C_UNK SwooshStreak__SetSegmentPoints(s32, s32, s32, s32, s32);
M2C_UNK fn_80233B48(s32, s32, f32);
M2C_UNK Emitter__IsActive(s32);
extern f32 lbl_80322910 __attribute__((section(".data")));
extern f64 lbl_80322918 __attribute__((section(".data")));
extern f32 lbl_80322920 __attribute__((section(".data")));
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));
extern M2C_UNK lbl_803946A4 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void Missile__UpdateTrailEffects(void *arg0, void *arg1) {
    s32 spFC;
    s32 spF8;
    f32 spEC;
    f32 spE8;
    mt_vec3_f32 sp68;
    mt_vec3_f32 sp98;
    mt_vec3_f32 spA8;
    mt_vec3_f32 spB8;
    mt_vec3_f32 spC8;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    union { f32 value; unsigned char bytes[12]; } sp8;
    mt_vec3_f32 spD8;
    union { f32 value; unsigned char bytes[12]; } sp18;
    union { f32 value; unsigned char bytes[12]; } sp28;
    union { f32 value; unsigned char bytes[12]; } sp38;
    union { f32 value; unsigned char bytes[12]; } sp48;
    union { f32 value; unsigned char bytes[12]; } sp58;
    union { f32 value; unsigned char bytes[12]; } sp78;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f11_3;
    f32 temp_f11_4;
    f32 temp_f11_5;
    f32 temp_f11_6;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f13_5;
    f32 temp_f13_6;
    f32 temp_f13_8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 temp_r0;
    f32 temp_r10;
    f32 temp_r11;
    f32 var_f13;
    f32 var_f1;
    f32 var_f6;
    f32 var_f8;
    f32 var_f9;
    f64 temp_f13_7;
    f64 temp_f13_9;
    f64 temp_f29;
    s32 *temp_r4;
    s32 temp_r10_2;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r7;
    s32 temp_r9_6;
    s32 temp_r9_7;
    s32 var_r0;
    s32 var_r31;
    void *temp_r11_2;
    void *temp_r31;
    void *temp_r3;
    void *temp_r5;
    void *temp_r8;
    void *temp_r8_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    sp8.value = lbl_80322910;
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = (f32) lbl_80322910;
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = (f32) lbl_80322910;
    sp18.value = lbl_80322910;
    M2C_FIELD(((f32 *)sp18.bytes), f32 *, 4) = (f32) lbl_80322910;
    M2C_FIELD(((f32 *)sp18.bytes), f32 *, 8) = (f32) lbl_80322910;
    sp28.value = lbl_80322910;
    M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4) = (f32) lbl_80322910;
    M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8) = (f32) lbl_80322910;
    temp_f31 = lbl_803A35BC;
    sp38.value = lbl_80322910;
    M2C_FIELD(((f32 *)sp38.bytes), f32 *, 8) = (f32) lbl_80322910;
    M2C_FIELD(((f32 *)sp38.bytes), f32 *, 4) = (f32) lbl_80322910;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x468) != 0) {
        temp_r4 = M2C_FIELD(arg0, s32 **, 0x36C);
        if ((M2C_FIELD(arg1, s32 *, 0x18) & 8) && ((s32) (*temp_r4 & M2C_FIELD(&lbl_803945E4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803945E4, s32 *, 0))) {
            *(Vec3f *) &sp88 = Missile__GetSelectedWeaponOffset((char *) temp_r4 + 0x15A0);
            temp_r9 = arg0 + 0x38;
            M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8) = (f32) M2C_FIELD(&sp88, f32 *, 8);
            sp28.value = sp88;
            M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4) = (f32) M2C_FIELD(&sp88, f32 *, 4);
            sp78.value = M2C_FIELD(arg0, f32 *, 0x38);
            M2C_FIELD(((f32 *)sp78.bytes), f32 *, 8) = (f32) M2C_FIELD(temp_r9, f32 *, 8);
            M2C_FIELD(((f32 *)sp78.bytes), f32 *, 4) = (f32) M2C_FIELD(temp_r9, f32 *, 4);
        } else if ((s32) (*temp_r4 & M2C_FIELD(&lbl_803946A4, s32 *, 4)) == (s32) M2C_FIELD(&lbl_803946A4, s32 *, 0)) {
            temp_r8 = arg0 + 0x3B0;
            temp_r9_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x354), s32 *, 0x48) + 0x10;
            sp88 = M2C_FIELD(temp_r9_2, f32 *, 0x30);
            sp8C = M2C_FIELD(temp_r9_2, f32 *, 0x34);
            sp90 = M2C_FIELD(temp_r9_2, f32 *, 0x38);
            sp28.value = M2C_BITWISE(f32, sp88);
            M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8) = (f32) M2C_FIELD(&sp88, f32 *, 8);
            M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4) = (f32) M2C_FIELD(&sp88, f32 *, 4);
            sp78.value = M2C_FIELD(arg0, f32 *, 0x3B0);
            M2C_FIELD(((f32 *)sp78.bytes), f32 *, 8) = (f32) M2C_FIELD(temp_r8, f32 *, 8);
            M2C_FIELD(((f32 *)sp78.bytes), f32 *, 4) = (f32) M2C_FIELD(temp_r8, f32 *, 4);
        } else {
            temp_r9_3 = arg0 + 0x38;
            temp_r0 = M2C_FIELD(arg0, f32 *, 0x38);
            temp_r10 = M2C_FIELD(temp_r9_3, f32 *, 8);
            temp_r11 = M2C_FIELD(temp_r9_3, f32 *, 4);
            M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8) = temp_r10;
            sp78.value = temp_r0;
            sp28.value = temp_r0;
            M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4) = temp_r11;
            M2C_FIELD(((f32 *)sp78.bytes), f32 *, 8) = temp_r10;
            M2C_FIELD(((f32 *)sp78.bytes), f32 *, 4) = temp_r11;
        }
        temp_r9_4 = arg0 + 0x414;
        temp_r11_2 = arg0 + 0x470;
        sp88 = M2C_FIELD(arg0, f32 *, 0x414) * temp_f31;
        temp_r8_2 = arg0 + 0x420;
        M2C_FIELD(((f32 *)sp38.bytes), f32 *, 8) = (f32) M2C_FIELD(temp_r11_2, f32 *, 8);
        sp38.value = M2C_FIELD(arg0, f32 *, 0x470);
        M2C_FIELD(((f32 *)sp38.bytes), f32 *, 4) = (f32) M2C_FIELD(temp_r11_2, f32 *, 4);
        temp_r5 = arg0 + 0x3E4;
        sp8C = M2C_FIELD(temp_r9_4, f32 *, 4) * temp_f31;
        sp90 = M2C_FIELD(temp_r9_4, f32 *, 8) * temp_f31;
        sp48.value = sp88;
        M2C_FIELD(((f32 *)sp48.bytes), s32 *, 8) = (s32) M2C_FIELD(&sp88, s32 *, 8);
        M2C_FIELD(((f32 *)sp48.bytes), s32 *, 4) = (s32) M2C_FIELD(&sp88, s32 *, 4);
        sp68.v0 = M2C_FIELD(arg0, f32 *, 0x420);
        sp68.v1 = (f32) M2C_FIELD(temp_r8_2, f32 *, 4);
        sp68.v2 = (f32) M2C_FIELD(temp_r8_2, f32 *, 8);
        sp98.v0 = sp68.v0 + sp48.value;
        sp98.v1 = sp68.v1 + M2C_FIELD(((f32 *)sp48.bytes), s32 *, 4);
        sp98.v2 = sp68.v2 + M2C_FIELD(((f32 *)sp48.bytes), s32 *, 8);
        sp68.v0 = sp98.v0;
        sp88 = sp98.v0;
        sp8C = sp98.v1;
        sp90 = sp98.v2;
        sp68.v1 = sp98.v1;
        sp68.v2 = sp98.v2;
        sp68.v1 = (f32) lbl_80322910;
        *(mt_vec3_f32 *)((char *)arg0 + 0x420) = sp98;
        temp_f8 = M2C_FIELD(temp_r5, f32 *, 8) + M2C_FIELD(temp_r8_2, f32 *, 8);
        temp_f10 = M2C_FIELD(temp_r5, f32 *, 4) + M2C_FIELD(temp_r8_2, f32 *, 4);
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x3E4) + M2C_FIELD(arg0, f32 *, 0x420);
        temp_f13 = temp_f0 - sp78.value;
        sp98.v0 = temp_f0;
        temp_f11 = temp_f10 - M2C_FIELD(((f32 *)sp78.bytes), f32 *, 4);
        sp98.v1 = temp_f10;
        temp_f12 = temp_f8 - M2C_FIELD(((f32 *)sp78.bytes), f32 *, 8);
        temp_f9 = temp_f13 * temp_f13;
        sp98.v2 = temp_f8;
        spA8.v0 = temp_f9;
        sp88 = temp_f13;
        spA8.v1 = temp_f11 * temp_f11;
        spA8.v2 = temp_f12 * temp_f12;
        sp8C = temp_f11;
        sp90 = temp_f12;
        var_f1 = sqrtf(temp_f9 + spA8.v1 + spA8.v2);
        temp_f0_2 = M2C_FIELD(arg1, f32 *, 0xC);
        if (!(var_f1 <= temp_f0_2)) {
            var_f1 = temp_f0_2;
        }
        temp_r10_2 = M2C_FIELD(arg1, s32 *, 0x14);
        var_r31 = 0;
        temp_f30 = var_f1 / (f32) (f64) temp_r10_2;
        if (temp_r10_2 > 0) {
            ((void) 0);
            do {
                if (M2C_FIELD(arg1, s32 *, 0x18) & 8) {
                    temp_f11_2 = sp38.value * temp_f30;
                    temp_f13_2 = M2C_FIELD(((f32 *)sp38.bytes), f32 *, 4) * temp_f30;
                    temp_f0_3 = (f32) (f64) var_r31;
                    spA8.v1 = temp_f13_2;
                    temp_f12_2 = M2C_FIELD(((f32 *)sp38.bytes), f32 *, 8) * temp_f30;
                    temp_f7 = temp_f11_2 * temp_f0_3;
                    var_f6 = temp_f12_2 * temp_f0_3;
                    spA8.v0 = temp_f11_2;
                    var_f13 = temp_f13_2 * temp_f0_3;
                    spA8.v2 = temp_f12_2;
                    sp98.v0 = temp_f7;
                    sp88 = sp28.value + temp_f7;
                    var_f8 = M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4) + var_f13;
                    var_f9 = M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8) + var_f6;
                } else {
                    temp_f11_3 = sp38.value * temp_f30;
                    temp_f13_3 = M2C_FIELD(((f32 *)sp38.bytes), f32 *, 4) * temp_f30;
                    temp_f0_4 = (f32) (f64) var_r31;
                    spA8.v1 = temp_f13_3;
                    temp_f12_3 = M2C_FIELD(((f32 *)sp38.bytes), f32 *, 8) * temp_f30;
                    temp_f7_2 = temp_f11_3 * temp_f0_4;
                    var_f6 = temp_f12_3 * temp_f0_4;
                    spA8.v0 = temp_f11_3;
                    var_f13 = temp_f13_3 * temp_f0_4;
                    spA8.v2 = temp_f12_3;
                    sp98.v0 = temp_f7_2;
                    sp88 = sp28.value - temp_f7_2;
                    var_f8 = M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4) - var_f13;
                    var_f9 = M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8) - var_f6;
                }
                sp8C = var_f8;
                sp90 = var_f9;
                sp98.v1 = var_f13;
                sp98.v2 = var_f6;
                sp58.value = sp88;
                M2C_FIELD(((f32 *)sp58.bytes), s32 *, 4) = (s32) M2C_FIELD(&sp88, s32 *, 4);
                M2C_FIELD(((f32 *)sp58.bytes), s32 *, 8) = (s32) M2C_FIELD(&sp88, s32 *, 8);
                temp_f13_4 = sp38.value * temp_f30;
                temp_f12_4 = M2C_FIELD(((f32 *)sp38.bytes), f32 *, 4) * temp_f30;
                temp_f11_4 = M2C_FIELD(((f32 *)sp38.bytes), f32 *, 8) * temp_f30;
                temp_f7_3 = sp58.value + temp_f13_4;
                temp_f6 = M2C_FIELD(((f32 *)sp58.bytes), s32 *, 4) + temp_f12_4;
                spA8.v0 = temp_f13_4;
                temp_f8_2 = M2C_FIELD(((f32 *)sp58.bytes), s32 *, 8) + temp_f11_4;
                spA8.v1 = temp_f12_4;
                spA8.v2 = temp_f11_4;
                sp88 = sp58.value - temp_f7_3;
                sp8C = M2C_FIELD(((f32 *)sp58.bytes), s32 *, 4) - temp_f6;
                sp90 = M2C_FIELD(((f32 *)sp58.bytes), s32 *, 8) - temp_f8_2;
                sp98.v0 = temp_f7_3;
                sp98.v1 = temp_f6;
                sp98.v2 = temp_f8_2;
                temp_r3 = SceneMgr__FindSceneByType(0);
                temp_r9_5 = temp_r3 + 0x2C4;
                temp_f11_5 = M2C_FIELD(temp_r9_5, f32 *, 4) - M2C_FIELD(((f32 *)sp58.bytes), s32 *, 4);
                temp_f13_5 = M2C_FIELD(temp_r3, f32 *, 0x2C4) - sp58.value;
                temp_f10_2 = M2C_FIELD(temp_r9_5, f32 *, 8) - M2C_FIELD(((f32 *)sp58.bytes), s32 *, 8);
                sp98.v0 = temp_f13_5;
                sp98.v1 = temp_f11_5;
                spB8.v0 = (sp8C * temp_f10_2) - (temp_f11_5 * sp90);
                sp98.v2 = temp_f10_2;
                spB8.v1 = (f32) ((temp_f13_5 * sp90) - (sp88 * temp_f10_2));
                spB8.v2 = (f32) ((sp88 * temp_f11_5) - (temp_f13_5 * sp8C));
                spA8 = spB8;
                temp_f1 = spA8.v0 * spA8.v0;
                spC8.v0 = temp_f1;
                spC8.v1 = spA8.v1 * spA8.v1;
                spC8.v2 = spA8.v2 * spA8.v2;
                temp_f1_2 = sqrtf(temp_f1 + spC8.v1 + spC8.v2);
                spE8 = temp_f1_2;
                spEC = lbl_80322920;
                var_r0 = ((u8) (M2C_BITWISE(u32, spE8) >> 0x17U) == 0);
                if (var_r0 == 0) {
                    temp_f13_6 = lbl_80322920 / temp_f1_2;
                    spD8.v0 = spA8.v0 * temp_f13_6;
                    spD8.v2 = spA8.v2 * temp_f13_6;
                    spD8.v1 = spA8.v1 * temp_f13_6;
                    spC8 = spD8;
                    spA8 = spD8;
                }
                temp_f11_6 = M2C_FIELD(arg1, f32 *, 0x10);
                spC8.v0 = spA8.v0 * temp_f11_6;
                spC8.v1 = spA8.v1 * temp_f11_6;
                spC8.v2 = spA8.v2 * temp_f11_6;
                spB8 = spC8;
                spA8 = spC8;
                if (M2C_FIELD(arg1, s32 *, 0x18) & 1) {
                    temp_r9_6 = M2C_FIELD(arg1, s32 *, 0x14);
                    temp_f13_7 = (f64) temp_r9_6;
                    temp_f13_8 = (f32) temp_f13_7 / (f32) (f64) (temp_r9_6 - var_r31);
                    spC8.v2 = spA8.v2 * temp_f13_8;
                    spC8.v0 = spA8.v0 * temp_f13_8;
                    spC8.v1 = spA8.v1 * temp_f13_8;
                    spB8 = spC8;
                    spA8 = spC8;
                }
                temp_r30 = var_r31 + 1;
                spB8.v0 = sp58.value + spA8.v0;
                spB8.v1 = M2C_FIELD(((f32 *)sp58.bytes), s32 *, 4) + spA8.v1;
                spB8.v2 = M2C_FIELD(((f32 *)sp58.bytes), s32 *, 8) + spA8.v2;
                sp8.value = spB8.v0;
                M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = (f32) spB8.v1;
                M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = (f32) spB8.v2;
                spB8.v0 = sp58.value - spA8.v0;
                spB8.v2 = M2C_FIELD(((f32 *)sp58.bytes), s32 *, 8) - spA8.v2;
                spB8.v1 = M2C_FIELD(((f32 *)sp58.bytes), s32 *, 4) - spA8.v1;
                sp18.value = spB8.v0;
                M2C_FIELD(((f32 *)sp18.bytes), f32 *, 4) = (f32) spB8.v1;
                M2C_FIELD(((f32 *)sp18.bytes), f32 *, 8) = (f32) spB8.v2;
                M2C_FIELD(arg0, f32 *, 0x4F4) = (f32) M2C_FIELD(arg1, f32 *, 8);
                fn_80233B20(M2C_FIELD(arg0, s32 *, 0x468), (s32) (arg0 + 0x4F4));
                temp_r9_7 = M2C_FIELD(arg1, s32 *, 0x14);
                temp_f13_9 = (f64) (temp_r9_7 - 1);
                temp_f31_2 = (f32) temp_f13_9 / (f32) (f64) (temp_r9_7 - temp_r30);
                SwooshStreak__SetSegmentPoints(M2C_FIELD(arg0, s32 *, 0x468), var_r31, (s32) ((f32 *)sp8.bytes), (s32) ((f32 *)sp18.bytes), M2C_ERROR(/* Read from unset register $r7 */));
                if (M2C_FIELD(arg1, s32 *, 0x18) & 8) {
                    fn_80233B48(M2C_FIELD(arg0, s32 *, 0x468), var_r31, lbl_80322920);
                } else {
                    fn_80233B48(M2C_FIELD(arg0, s32 *, 0x468), var_r31, temp_f31_2);
                }
                temp_r7 = M2C_FIELD(arg1, s32 *, 0x18) & 4;
                if (temp_r7 != 0) {
                    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x46C);
                    if (temp_r3_2 != 0) {
                        SwooshStreak__SetSegmentPoints(temp_r3_2, var_r31, (s32) ((f32 *)sp8.bytes), (s32) ((f32 *)sp18.bytes), temp_r7);
                        if (M2C_FIELD(arg1, s32 *, 0x18) & 8) {
                            fn_80233B48(M2C_FIELD(arg0, s32 *, 0x468), var_r31, lbl_80322920);
                        } else {
                            fn_80233B48(M2C_FIELD(arg0, s32 *, 0x468), var_r31, temp_f31_2);
                        }
                    }
                }
                temp_r30_2 = var_r31 * 4;
                temp_r31 = arg0 + 0x47C;
                temp_r3_3 = *(s32 *)(temp_r31 + temp_r30_2);
                if (temp_r3_3 != 0) {
                    if (Emitter__IsActive(temp_r3_3) == 0) {
                        Emitter__Activate(*(s32 *)(temp_r31 + temp_r30_2));
                    }
                    Emitter__SetWorldPosition(*(s32 *)(temp_r31 + temp_r30_2), ((f32 *)sp58.bytes));
                }
                var_r31 = temp_r30;
            } while (var_r31 < (s32) M2C_FIELD(arg1, s32 *, 0x14));
        }
    }
}
