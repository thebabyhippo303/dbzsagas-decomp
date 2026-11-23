/* FullScreenEffect__UpdateParameters @ 0x800E1CB4 (size: 0x97C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef union { f64 d; struct { s32 hi; s32 lo; } w; } I2D;

s32 CameraBag__GetCurrent(void *);
void * Matrix__Copy4x4Floats(void *, void *);
extern f32 lbl_80322E34 __attribute__((section(".data")));
extern f32 lbl_80322E38 __attribute__((section(".data")));
extern f32 lbl_80322E48 __attribute__((section(".data")));
extern f32 lbl_80322E4C __attribute__((section(".data")));
extern void *lbl_803DC5B4;
extern f64 lbl_80322E40 __attribute__((section(".data")));

void FullScreenEffect__UpdateParameters(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[64]; } sp8;
    f32 sp144;
    f32 sp140;
    f32 sp13C;
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp120;
    f32 sp11C;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    union { f32 value; unsigned char bytes[64]; } sp48;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    union { M2C_UNK value; unsigned char bytes[64]; } spC8;
    union { f32 value; unsigned char bytes[140]; } sp148;
    M2C_UNK *temp_r7_2;
    M2C_UNK *var_r10;
    M2C_UNK *var_r3;
    f32 *var_r8_2;
    f32 *var_r9_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f21_3;
    f32 temp_f21_4;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f22_3;
    f32 temp_f22_4;
    f32 temp_f23;
    f32 temp_f23_2;
    f32 temp_f23_3;
    f32 temp_f23_4;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f24_3;
    f32 temp_f24_4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 var_f0;
    f32 var_f13;
    f32 var_f19;
    f32 var_f20;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r10;
    s32 temp_r17;
    s32 temp_r21;
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r11_2;
    s32 var_r6;
    s32 var_r8;
    I2D u;
    void *temp_r28;
    void *var_r11;
    void *var_r9;

    var_f13 = M2C_FIELD(arg0, f32 *, 0xA8);
    var_f0 = M2C_FIELD(arg0, f32 *, 0x194);
    if ((var_f13 != var_f0) || ((var_f20 = lbl_80322E34, ((M2C_FIELD(arg0, f32 *, 0xAC) == lbl_80322E38) != 0)) && (var_f13 = M2C_FIELD(arg0, f32 *, 0xB0), var_f0 = M2C_FIELD(arg0, f32 *, 0x19C), ((var_f13 == var_f0) == 0)))) {
        var_f20 = var_f13 / var_f0;
    }
    temp_r10 = M2C_FIELD(arg0, s32 *, 0x1A4);
    temp_r7 = M2C_FIELD(arg0, s32 *, 0x1A8);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x1AC);
    temp_r21 = M2C_FIELD(arg0, s32 *, 0x1B0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1BC);
    temp_r26 = M2C_FIELD(arg0, s32 *, 0x1C0);
    temp_r27 = M2C_FIELD(arg0, s32 *, 0x1C4);
    temp_r17 = M2C_FIELD(arg0, s32 *, 0x1C8);
    temp_f6 = M2C_FIELD(arg0, f32 *, 0x1A0);
    temp_f8 = M2C_FIELD(arg0, f32 *, 0x1B4);
    temp_f7 = M2C_FIELD(arg0, f32 *, 0x1B8);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) (((M2C_FIELD(arg0, f32 *, 0xE0) - temp_f6) * var_f20) + temp_f6);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (((M2C_FIELD(arg0, f32 *, 0x100) - temp_f8) * var_f20) + temp_f8);
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(arg0, f32 *, 0x128);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(arg0, f32 *, 0x12C);
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (((M2C_FIELD(arg0, f32 *, 0x104) - temp_f7) * var_f20) + temp_f7);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (((temp_r10 + (s32) ((f32) (u.w.lo = (M2C_FIELD(arg0, s32 *, 0xE8) - temp_r10) ^ 0x80000000, u.w.hi = 0x43300000, u.d - lbl_80322E40) * var_f20)) << 0x18) | ((temp_r7 + (s32) ((f32) (u.w.lo = (M2C_FIELD(arg0, s32 *, 0xF4) - temp_r7) ^ 0x80000000, u.w.hi = 0x43300000, u.d - lbl_80322E40) * var_f20)) << 0x10) | ((temp_r6 + (s32) ((f32) (u.w.lo = (M2C_FIELD(arg0, s32 *, 0xF0) - temp_r6) ^ 0x80000000, u.w.hi = 0x43300000, u.d - lbl_80322E40) * var_f20)) << 8) | (temp_r21 + (s32) ((f32) (u.w.lo = (M2C_FIELD(arg0, s32 *, 0xEC) - temp_r21) ^ 0x80000000, u.w.hi = 0x43300000, u.d - lbl_80322E40) * var_f20)));
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (((temp_r0 + (s32) ((f32) (u.w.lo = (M2C_FIELD(arg0, s32 *, 0x108) - temp_r0) ^ 0x80000000, u.w.hi = 0x43300000, u.d - lbl_80322E40) * var_f20)) << 0x18) | ((temp_r26 + (s32) ((f32) (u.w.lo = (M2C_FIELD(arg0, s32 *, 0x114) - temp_r26) ^ 0x80000000, u.w.hi = 0x43300000, u.d - lbl_80322E40) * var_f20)) << 0x10) | ((temp_r27 + (s32) ((f32) (u.w.lo = (M2C_FIELD(arg0, s32 *, 0x110) - temp_r27) ^ 0x80000000, u.w.hi = 0x43300000, u.d - lbl_80322E40) * var_f20)) << 8) | (temp_r17 + (s32) ((f32) (u.w.lo = (M2C_FIELD(arg0, s32 *, 0x10C) - temp_r17) ^ 0x80000000, u.w.hi = 0x43300000, u.d - lbl_80322E40) * var_f20)));
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) M2C_FIELD(arg0, f32 *, 0x164);
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) M2C_FIELD(arg0, f32 *, 0x168);
    M2C_FIELD(arg0, s32 *, 0xA0) = 1;
    if ((M2C_FIELD(arg0, s32 *, 0xA4) & 1) || ((s32) M2C_FIELD(arg0, s32 *, 0x118) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x154) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x190) != 0)) {
        temp_r28 = arg0 + 0x90;
        CameraBag__GetCurrent(lbl_803DC5B4);
        var_r10 = ((M2C_UNK *)sp8.bytes);
        var_r8 = 0x30;
        temp_r7_2 = var_r10;
        var_r11 = lbl_803DC5B4 + 0x20;
        do {
            var_r8 -= 0x18;
            M2C_FIELD(var_r10, s32 *, 0) = (s32) M2C_FIELD(var_r11, s32 *, 0);
            M2C_FIELD(var_r10, s32 *, 4) = (s32) M2C_FIELD(var_r11, s32 *, 4);
            M2C_FIELD(var_r10, s32 *, 8) = (s32) M2C_FIELD(var_r11, s32 *, 8);
            M2C_FIELD(var_r10, s32 *, 0xC) = (s32) M2C_FIELD(var_r11, s32 *, 0xC);
            M2C_FIELD(var_r10, s32 *, 0x10) = (s32) M2C_FIELD(var_r11, s32 *, 0x10);
            temp_r0_2 = M2C_FIELD(var_r11, s32 *, 0x14);
            var_r11 += 0x18;
            M2C_FIELD(var_r10, s32 *, 0x14) = temp_r0_2;
            var_r10 += 0x18;
        } while (var_r8 != 0);
        var_r8_2 = &sp88;
        var_r9 = (void *)0x803BEC64;
        M2C_FIELD(var_r10, s32 *, 0) = (s32) M2C_FIELD(var_r11, s32 *, 0);
        var_r6 = 0x30;
        M2C_FIELD(var_r10, s32 *, 4) = (s32) M2C_FIELD(var_r11, s32 *, 4);
        M2C_FIELD(var_r10, s32 *, 8) = (s32) M2C_FIELD(var_r11, s32 *, 8);
        M2C_FIELD(var_r10, s32 *, 0xC) = (s32) M2C_FIELD(var_r11, s32 *, 0xC);
        do {
            var_r6 -= 0x18;
            M2C_FIELD(var_r8_2, s32 *, 0) = (s32) M2C_FIELD(var_r9, s32 *, 0);
            M2C_FIELD(var_r8_2, s32 *, 4) = (s32) M2C_FIELD(var_r9, s32 *, 4);
            M2C_FIELD(var_r8_2, s32 *, 8) = (s32) M2C_FIELD(var_r9, s32 *, 8);
            M2C_FIELD(var_r8_2, s32 *, 0xC) = (s32) M2C_FIELD(var_r9, s32 *, 0xC);
            M2C_FIELD(var_r8_2, s32 *, 0x10) = (s32) M2C_FIELD(var_r9, s32 *, 0x10);
            temp_r0_3 = M2C_FIELD(var_r9, s32 *, 0x14);
            var_r9 += 0x18;
            M2C_FIELD(var_r8_2, s32 *, 0x14) = temp_r0_3;
            var_r8_2 += 0x18;
        } while (var_r6 != 0);
        M2C_FIELD(var_r8_2, s32 *, 0) = (s32) M2C_FIELD(var_r9, s32 *, 0);
        M2C_FIELD(var_r8_2, s32 *, 4) = (s32) M2C_FIELD(var_r9, s32 *, 4);
        M2C_FIELD(var_r8_2, s32 *, 8) = (s32) M2C_FIELD(var_r9, s32 *, 8);
        M2C_FIELD(var_r8_2, s32 *, 0xC) = (s32) M2C_FIELD(var_r9, s32 *, 0xC);
        temp_f22 = M2C_FIELD(temp_r7_2, f32 *, 4);
        temp_f24 = M2C_FIELD(temp_r7_2, f32 *, 0);
        temp_f23 = M2C_FIELD(temp_r7_2, f32 *, 8);
        temp_f21 = M2C_FIELD(temp_r7_2, f32 *, 0xC);
        temp_f22_2 = M2C_FIELD(temp_r7_2, f32 *, 0x14);
        temp_f24_2 = M2C_FIELD(temp_r7_2, f32 *, 0x10);
        temp_f23_2 = M2C_FIELD(temp_r7_2, f32 *, 0x18);
        temp_f21_2 = M2C_FIELD(temp_r7_2, f32 *, 0x1C);
        sp108 = (temp_f21 * spB8) + ((temp_f23 * spA8) + ((temp_f24 * sp88) + (temp_f22 * sp98)));
        sp10C = (temp_f21 * spBC) + ((temp_f23 * spAC) + ((temp_f24 * sp8C) + (temp_f22 * sp9C)));
        sp110 = (temp_f21 * spC0) + ((temp_f23 * spB0) + ((temp_f24 * sp90) + (temp_f22 * spA0)));
        sp114 = (temp_f21 * spC4) + ((temp_f23 * spB4) + ((temp_f24 * sp94) + (temp_f22 * spA4)));
        sp118 = (temp_f21_2 * spB8) + ((temp_f23_2 * spA8) + ((temp_f24_2 * sp88) + (temp_f22_2 * sp98)));
        temp_f22_3 = M2C_FIELD(temp_r7_2, f32 *, 0x24);
        temp_f24_3 = M2C_FIELD(temp_r7_2, f32 *, 0x20);
        temp_f23_3 = M2C_FIELD(temp_r7_2, f32 *, 0x28);
        sp124 = (temp_f21_2 * spC4) + ((temp_f23_2 * spB4) + ((temp_f24_2 * sp94) + (temp_f22_2 * spA4)));
        sp11C = (temp_f21_2 * spBC) + ((temp_f23_2 * spAC) + ((temp_f24_2 * sp8C) + (temp_f22_2 * sp9C)));
        temp_f21_3 = M2C_FIELD(temp_r7_2, f32 *, 0x2C);
        sp120 = (temp_f21_2 * spC0) + ((temp_f23_2 * spB0) + ((temp_f24_2 * sp90) + (temp_f22_2 * spA0)));
        temp_f22_4 = M2C_FIELD(temp_r7_2, f32 *, 0x34);
        temp_f24_4 = M2C_FIELD(temp_r7_2, f32 *, 0x30);
        temp_f23_4 = M2C_FIELD(temp_r7_2, f32 *, 0x38);
        sp134 = (temp_f21_3 * spC4) + ((temp_f23_3 * spB4) + ((temp_f24_3 * sp94) + (temp_f22_3 * spA4)));
        sp128 = (temp_f21_3 * spB8) + ((temp_f23_3 * spA8) + ((temp_f24_3 * sp88) + (temp_f22_3 * sp98)));
        sp12C = (temp_f21_3 * spBC) + ((temp_f23_3 * spAC) + ((temp_f24_3 * sp8C) + (temp_f22_3 * sp9C)));
        temp_f21_4 = M2C_FIELD(temp_r7_2, f32 *, 0x3C);
        sp130 = (temp_f21_3 * spC0) + ((temp_f23_3 * spB0) + ((temp_f24_3 * sp90) + (temp_f22_3 * spA0)));
        sp144 = (temp_f21_4 * spC4) + ((temp_f23_4 * spB4) + ((temp_f24_4 * sp94) + (temp_f22_4 * spA4)));
        sp138 = (temp_f21_4 * spB8) + ((temp_f23_4 * spA8) + ((temp_f24_4 * sp88) + (temp_f22_4 * sp98)));
        sp13C = (temp_f21_4 * spBC) + ((temp_f23_4 * spAC) + ((temp_f24_4 * sp8C) + (temp_f22_4 * sp9C)));
        sp140 = (temp_f21_4 * spC0) + ((temp_f23_4 * spB0) + ((temp_f24_4 * sp90) + (temp_f22_4 * spA0)));
        Matrix__Copy4x4Floats(((M2C_UNK *)spC8.bytes), &sp108);
        var_r9_2 = ((f32 *)sp48.bytes);
        var_r3 = ((M2C_UNK *)spC8.bytes);
        var_r11_2 = 0x30;
        do {
            var_r11_2 -= 0x18;
            M2C_FIELD(var_r9_2, f32 *, 0) = M2C_FIELD(var_r3, f32 *, 0);
            M2C_FIELD(var_r9_2, s32 *, 4) = (s32) M2C_FIELD(var_r3, s32 *, 4);
            M2C_FIELD(var_r9_2, s32 *, 8) = (s32) M2C_FIELD(var_r3, s32 *, 8);
            M2C_FIELD(var_r9_2, s32 *, 0xC) = (s32) M2C_FIELD(var_r3, s32 *, 0xC);
            M2C_FIELD(var_r9_2, s32 *, 0x10) = (s32) M2C_FIELD(var_r3, s32 *, 0x10);
            temp_r0_4 = M2C_FIELD(var_r3, s32 *, 0x14);
            var_r3 += 0x18;
            M2C_FIELD(var_r9_2, s32 *, 0x14) = temp_r0_4;
            var_r9_2 += 0x18;
        } while (var_r11_2 != 0);
        temp_f6_2 = M2C_FIELD(temp_r28, f32 *, 4);
        M2C_FIELD(var_r9_2, f32 *, 0) = M2C_FIELD(var_r3, f32 *, 0);
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x90);
        M2C_FIELD(var_r9_2, s32 *, 4) = (s32) M2C_FIELD(var_r3, s32 *, 4);
        temp_f12 = M2C_FIELD(temp_r28, f32 *, 8);
        M2C_FIELD(var_r9_2, s32 *, 8) = (s32) M2C_FIELD(var_r3, s32 *, 8);
        M2C_FIELD(var_r9_2, s32 *, 0xC) = (s32) M2C_FIELD(var_r3, s32 *, 0xC);
        sp98 = (temp_f12 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x20)) + ((temp_f5 * sp48.value) + (temp_f6_2 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x10))) + M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x30);
        sp9C = (temp_f12 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x24)) + ((temp_f5 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x4)) + (temp_f6_2 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x14))) + M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x34);
        spA0 = (temp_f12 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x28)) + ((temp_f5 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x8)) + (temp_f6_2 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x18))) + M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x38);
        spA4 = (temp_f12 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x2c)) + ((temp_f5 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0xc)) + (temp_f6_2 * M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x1c))) + M2C_FIELD(((f32 *)sp48.bytes), f32 *, 0x3c);
        sp88 = sp98;
        sp90 = spA0;
        sp8C = sp9C;
        sp94 = spA4;
        if ((sp90 < lbl_80322E38) || (sp90 > sp94) || (temp_f0 = -sp94, ((sp88 < temp_f0) != 0)) || (sp88 > sp94) || (sp8C < temp_f0) || !(sp8C <= sp94)) {
            var_r0 = 0;
        } else {
            var_r0 = 1;
            temp_f0_2 = lbl_80322E34 / sp94;
            sp148.value = (sp88 * temp_f0_2 * lbl_80322E48) + lbl_80322E48;
            M2C_FIELD(((f32 *)sp148.bytes), f32 *, 4) = (f32) ((sp8C * temp_f0_2 * lbl_80322E4C) + lbl_80322E48);
            var_f19 = sp94;
        }
        if (var_r0 != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x118) != 0) {
                M2C_FIELD(arg0, f32 *, 0xF8) = sp148.value;
                M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(((f32 *)sp148.bytes), f32 *, 4);
                if (var_f19 != lbl_80322E38) {
                    temp_f11 = M2C_FIELD(arg0, f32 *, 0x1B4);
                    temp_f12_2 = M2C_FIELD(arg0, f32 *, 0x1B8);
                    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) ((((M2C_FIELD(arg0, f32 *, 0x100) - temp_f11) * var_f20) + temp_f11) / var_f19);
                    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) ((((M2C_FIELD(arg0, f32 *, 0x104) - temp_f12_2) * var_f20) + temp_f12_2) / var_f19);
                }
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x154) != 0) {
                M2C_FIELD(arg0, f32 *, 0x120) = sp148.value;
                M2C_FIELD(arg0, f32 *, 0x124) = (f32) M2C_FIELD(((f32 *)sp148.bytes), f32 *, 4);
                if (var_f19 != lbl_80322E38) {
                    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (M2C_FIELD(arg0, f32 *, 0x128) / var_f19);
                    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (M2C_FIELD(arg0, f32 *, 0x12C) / var_f19);
                }
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x190) != 0) {
                M2C_FIELD(arg0, f32 *, 0x160) = (f32) M2C_FIELD(((f32 *)sp148.bytes), f32 *, 4);
                M2C_FIELD(arg0, f32 *, 0x15C) = sp148.value;
                if (var_f19 != lbl_80322E38) {
                    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) (M2C_FIELD(arg0, f32 *, 0x164) / var_f19);
                    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (M2C_FIELD(arg0, f32 *, 0x168) / var_f19);
                }
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0xA0) = var_r0;
        }
    }
    if (!(M2C_FIELD(arg0, f32 *, 0xC4) <= lbl_80322E34)) {
        M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_80322E34;
    }
    temp_f13 = M2C_FIELD(arg0, f32 *, 0xC4);
    if (!(M2C_FIELD(arg0, f32 *, 0xC0) <= temp_f13)) {
        M2C_FIELD(arg0, f32 *, 0xC0) = temp_f13;
    }
}
