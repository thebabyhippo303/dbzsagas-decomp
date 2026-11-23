/* Curve__Sample @ 0x800E0960 (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 floorf(f32);
void Curve__BlendFourControlPoints(s32, s32, s32, f32, f32, f32, f32);
extern f32 lbl_80322C68 __attribute__((section(".data")));
extern f32 lbl_80322C6C __attribute__((section(".data")));
extern f32 lbl_80322C70 __attribute__((section(".data")));
extern f32 lbl_80322C74 __attribute__((section(".data")));
extern f32 lbl_80322C78 __attribute__((section(".data")));

static const char pool_pad[0x2C60] = {1};

s32 Curve__Sample(s32 arg0, s32 arg1, f32 farg0) {
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f4;
    s32 temp_r5;

    temp_r5 = (s32) floorf(farg0);
    temp_f31 = farg0 - (f32) (f64) temp_r5;
    temp_f13 = temp_f31 * temp_f31;
    temp_f4 = temp_f13 * temp_f31;
    temp_f2 = temp_f4 * lbl_80322C6C;
    temp_f1 = temp_f13 * lbl_80322C6C;
    temp_f31_2 = temp_f31 * lbl_80322C6C;
    Curve__BlendFourControlPoints(arg0, arg1, temp_r5, (((temp_f1 - temp_f4) - temp_f31_2) + lbl_80322C70) * lbl_80322C68, ((temp_f2 - (temp_f13 * lbl_80322C74)) + lbl_80322C78) * lbl_80322C68, ((temp_f1 - temp_f2) + temp_f31_2 + lbl_80322C70) * lbl_80322C68, temp_f4 * lbl_80322C68);
    return arg0;
}
