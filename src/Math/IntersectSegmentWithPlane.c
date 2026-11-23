/* Math__IntersectSegmentWithPlane @ 0x800C53FC (size: 0x268, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_80321938 __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
s32 Math__IntersectSegmentWithPlane(s32 arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    mt_vec3_f32 sp8;
    mt_vec3_f32 sp18;
    mt_vec3_f32 sp28;
    mt_vec3_f32 sp38;
    mt_vec3_f32 sp48;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f11_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 var_r0;
    f32 var_r11;
    f32 var_r9;
    void *temp_r6;

    temp_f5 = M2C_FIELD(arg2, f32 *, 4);
    temp_f4 = M2C_FIELD(arg2, s32 *, 8);
    temp_f1 = M2C_FIELD(arg3, f32 *, 0);
    temp_f31 = M2C_FIELD(arg3, f32 *, 4);
    temp_r6 = arg0 + 0x230;
    temp_f2 = M2C_FIELD(arg3, f32 *, 8);
    temp_f6 = M2C_FIELD(arg2, f32 *, 0);
    sp8.v1 = temp_f31 - temp_f5;
    temp_f11 = temp_f1 - temp_f6;
    sp8.v2 = temp_f2 - temp_f4;
    sp8.v0 = temp_f11;
    temp_f12 = M2C_FIELD(arg1, f32 *, 0);
    temp_f7 = M2C_FIELD(arg1, f32 *, 4);
    temp_f8 = sp8.v2;
    temp_f0 = sp8.v1;
    temp_f13 = M2C_FIELD(arg1, f32 *, 8);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x230);
    sp28.v0 = (temp_f0 * temp_f13) - (temp_f7 * temp_f8);
    sp28.v2 = (f32) ((temp_f11 * temp_f7) - (temp_f12 * temp_f0));
    sp28.v1 = (f32) ((temp_f12 * temp_f8) - (temp_f11 * temp_f13));
    temp_f9 = temp_f3 - temp_f6;
    sp18 = sp28;
    temp_f0_2 = temp_f9 * sp18.v0;
    temp_f10 = M2C_FIELD(temp_r6, f32 *, 4) - temp_f5;
    temp_f11_2 = M2C_FIELD(temp_r6, f32 *, 8) - temp_f4;
    sp38.v0 = temp_f0_2;
    sp28.v0 = temp_f9;
    sp28.v1 = temp_f10;
    sp28.v2 = temp_f11_2;
    sp38.v1 = temp_f10 * sp18.v1;
    sp38.v2 = temp_f11_2 * sp18.v2;
    if ((temp_f0_2 + sp38.v1 + sp38.v2) < lbl_80321938) {
        return 0;
    }
    sp38.v1 = temp_f10 * sp8.v1;
    temp_f13_2 = temp_f9 * sp8.v0;
    sp38.v2 = temp_f11_2 * sp8.v2;
    sp38.v0 = temp_f13_2;
    temp_f9_2 = temp_f13_2 + sp38.v1 + sp38.v2;
    if (!(temp_f9_2 > lbl_80321938)) {
        var_r0 = M2C_FIELD(arg2, s32 *, 8);
        var_r9 = M2C_FIELD(arg2, f32 *, 0);
        var_r11 = M2C_FIELD(arg2, f32 *, 4);
        goto block_6;
    }
    sp38.v0 = temp_f1 - temp_f3;
    sp38.v2 = temp_f2 - M2C_FIELD(temp_r6, f32 *, 8);
    sp38.v1 = temp_f31 - M2C_FIELD(temp_r6, f32 *, 4);
    sp28 = sp38;
    temp_f12_2 = sp28.v0 * sp8.v0;
    sp38.v0 = temp_f12_2;
    sp38.v1 = sp28.v1 * sp8.v1;
    sp38.v2 = sp28.v2 * sp8.v2;
    temp_f12_3 = temp_f12_2 + sp38.v1 + sp38.v2;
    if (!(temp_f12_3 > lbl_80321938)) {
        var_r0 = M2C_FIELD(arg3, f32 *, 8);
        var_r9 = M2C_FIELD(arg3, f32 *, 0);
        var_r11 = M2C_FIELD(arg3, f32 *, 4);
block_6:
        M2C_FIELD(arg4, f32 *, 8) = var_r0;
        M2C_FIELD(arg4, f32 *, 0) = var_r9;
        M2C_FIELD(arg4, f32 *, 4) = var_r11;
    } else {
        temp_f0_3 = temp_f9_2 / (temp_f9_2 + temp_f12_3);
        temp_f11_3 = sp8.v2 * temp_f0_3;
        temp_f13_3 = sp8.v0 * temp_f0_3;
        sp48.v2 = temp_f11_3;
        temp_f12_4 = sp8.v1 * temp_f0_3;
        sp48.v0 = temp_f13_3;
        sp48.v1 = temp_f12_4;
        sp38.v0 = temp_f6 + temp_f13_3;
        sp38.v1 = temp_f5 + temp_f12_4;
        sp38.v2 = temp_f4 + temp_f11_3;
        *(mt_vec3_f32 *)((char *)arg4 + 0) = sp38;
    }
    return 1;
}
