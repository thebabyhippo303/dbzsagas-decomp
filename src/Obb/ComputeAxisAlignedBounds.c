/* Obb__ComputeAxisAlignedBounds @ 0x80046B0C (size: 0x1C4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { f32 x, y, z; } Vec3;
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_803120D8 __attribute__((section(".data")));

s32 Obb__ComputeAxisAlignedBounds(void *arg0, void *arg1) {
    Vec3 vec_sp60;
    Vec3 vec_sp70;
    f32 sp70;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp58;
    f64 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp18;
    f32 spC;
    f32 sp8;
    f32  sp8_b;
    f32 temp_f11;
    f32 temp_f12;
    f32  temp_f12_b;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32  temp_f8_b;
    f32 temp_f9;
    void *temp_r9;

    M2C_FIELD(arg1, s32 *, 0) = 0;
    temp_r9 = M2C_FIELD(arg0, void **, 0x100);
    temp_f4 = M2C_FIELD(temp_r9, f32 *, 0x18);
    temp_f7 = M2C_FIELD(temp_r9, f32 *, 0);
    temp_f6 = M2C_FIELD(temp_r9, f32 *, 0xC);
    temp_f3 = fabs(temp_f4);
    vec_sp60 = *(Vec3 *)((char *)arg0 + 0xf0);
    temp_f8 = fabs(temp_f7);
    temp_f11 = fabs(temp_f6);
    temp_f12 = temp_f8 * sp60;
    sp28 = temp_f7;
    sp2C = temp_f6;
    sp30 = temp_f4;
    sp18 = temp_f8;
    sp20 = temp_f3;
    sp60 = sp60;
    sp48 = sp64;
    sp58 = sp68;
    sp8 = temp_f12;
    spC = temp_f11 * sp64;
    temp_f6 = temp_f3 * sp68;
    temp_f11 = temp_f11;
    sp64 = lbl_803120D8;
    sp68 = lbl_803120D8;
    sp44 = lbl_803120D8;
    sp4C = lbl_803120D8;
    sp50 = lbl_803120D8;
    sp54 = lbl_803120D8;
    temp_f12 = temp_f12 + M2C_FIELD(&sp8, f32 *, 4) + M2C_FIELD(&sp8, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x104), f32 *, 0) - temp_f12);
    M2C_FIELD(arg1, f32 *, 0xc) = (f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x104), f32 *, 0) + temp_f12);
    temp_r9 = M2C_FIELD(arg0, void **, 0x100);
    temp_f4 = M2C_FIELD(temp_r9, f32 *, 0x20);
    temp_f7 = M2C_FIELD(temp_r9, f32 *, 8);
    temp_f9 = M2C_FIELD(temp_r9, f32 *, 0x14);
    temp_f3 = fabs(temp_f4);
    temp_f8_b = fabs(temp_f7);
    vec_sp70 = *(Vec3 *)((char *)arg0 + 0xf0);
    sp8 = fabs(temp_f9);
    temp_f12 = temp_f8_b * sp70;
    temp_f11 = sp8;
    spC = sp8 * temp_f11;
    sp60 = sp70;
    sp8_b = temp_f12;
    sp54 = lbl_803120D8;
    sp28 = temp_f7;
    sp2C = temp_f9;
    sp30 = temp_f4;
    sp18 = temp_f8_b;
    sp20 = temp_f3;
    sp64 = lbl_803120D8;
    sp68 = lbl_803120D8;
    sp44 = lbl_803120D8;
    sp48 = temp_f11;
    sp4C = lbl_803120D8;
    sp50 = lbl_803120D8;
    sp58 = sp18;
    temp_f6 = temp_f3 * sp18;
    temp_f12_b = temp_f12 + M2C_FIELD(&sp8_b, f32 *, 4) + M2C_FIELD(&sp8_b, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 0x8) = (f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x104), f32 *, 8) - temp_f12_b);
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x104), f32 *, 8) + temp_f12_b);
    return 1;
}
