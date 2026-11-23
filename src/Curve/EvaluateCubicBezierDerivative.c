/* Curve__EvaluateCubicBezierDerivative @ 0x800E0094 (size: 0x158, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_80322C20 __attribute__((section(".data")));
extern f32 lbl_80322C24 __attribute__((section(".data")));
extern f32 lbl_80322C28;
extern f32 lbl_80322C2C __attribute__((section(".data")));

void Curve__EvaluateCubicBezierDerivative(void *arg0, void *arg1, f32 farg0) {
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f1;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;

    temp_f12 = lbl_80322C20 - farg0;
    temp_f8 = temp_f12 * temp_f12;
    temp_f0 = temp_f8 * lbl_80322C24;
    temp_f7 = M2C_FIELD(arg1, f32 *, 0xc) * temp_f0;
    temp_f10 = M2C_FIELD(arg1, f32 *, 4) * temp_f0;
    temp_f9 = M2C_FIELD(arg1, f32 *, 0x8) * temp_f0;
    sp40 = temp_f7;
    sp38 = temp_f10;
    sp3C = temp_f9;
    temp_f12_2 = farg0 * (temp_f12 * lbl_80322C2C);
    temp_f8_2 = (lbl_80322C28 * temp_f8) - temp_f12_2;
    temp_f11 = M2C_FIELD(arg1, f32 *, 0x18) * temp_f8_2;
    temp_f13 = M2C_FIELD(arg1, f32 *, 0x14) * temp_f8_2;
    sp50 = temp_f11;
    temp_f0_2 = M2C_FIELD(arg1, f32 *, 0x10) * temp_f8_2;
    sp4C = temp_f13;
    temp_f10_2 = temp_f10 + temp_f0_2;
    sp48 = temp_f0_2;
    temp_f9_2 = temp_f9 + temp_f13;
    sp28 = temp_f10_2;
    temp_f7_2 = temp_f7 + temp_f11;
    sp2C = temp_f9_2;
    sp30 = temp_f7_2;
    temp_f1 = farg0 * farg0 * lbl_80322C28;
    temp_f12_3 = temp_f12_2 - temp_f1;
    temp_f11_2 = M2C_FIELD(arg1, f32 *, 0x24) * temp_f12_3;
    temp_f0_3 = M2C_FIELD(arg1, f32 *, 0x20) * temp_f12_3;
    sp60 = temp_f11_2;
    temp_f13_2 = M2C_FIELD(arg1, f32 *, 0x1C) * temp_f12_3;
    sp5C = temp_f0_3;
    temp_f10_3 = temp_f10_2 + temp_f13_2;
    sp58 = temp_f13_2;
    temp_f9_3 = temp_f9_2 + temp_f0_3;
    sp18 = temp_f10_3;
    temp_f7_3 = temp_f7_2 + temp_f11_2;
    sp1C = temp_f9_3;
    sp20 = temp_f7_3;
    temp_f13_3 = M2C_FIELD(arg1, f32 *, 0x2c) * temp_f1;
    temp_f0_4 = M2C_FIELD(arg1, f32 *, 0x28) * temp_f1;
    sp6C = temp_f13_3;
    temp_f12_4 = M2C_FIELD(arg1, f32 *, 0x30) * temp_f1;
    sp68 = temp_f0_4;
    sp70 = temp_f12_4;
    sp8 = temp_f10_3 + temp_f0_4;
    spC = temp_f9_3 + temp_f13_3;
    sp10 = temp_f7_3 + temp_f12_4;
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(&sp8, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(&sp8, s32 *, 8);
}
