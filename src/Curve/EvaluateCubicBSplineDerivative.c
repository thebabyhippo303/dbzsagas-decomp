/* Curve__EvaluateCubicBSplineDerivative @ 0x800E0A54 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 floorf(f32);
void Curve__BlendFourControlPoints(s32, void *, s32, f32, f32, f32, f32);
extern f32 lbl_80322C88 __attribute__((section(".data")));
extern f32 lbl_80322C8C __attribute__((section(".data")));
extern f32 lbl_80322C90 __attribute__((section(".data")));
extern f32 lbl_80322C94 __attribute__((section(".data")));
extern f32 lbl_80322C98 __attribute__((section(".data")));
extern f32 lbl_80322C9C __attribute__((section(".data")));
extern f32 lbl_80322CA0 __attribute__((section(".data")));
extern f32 lbl_80322CA4 __attribute__((section(".data")));

static const char pool_pad[0x2C80] = {1};

s32 Curve__EvaluateCubicBSplineDerivative(s32 arg0, void *arg1, f32 farg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    register f32 temp_f3;
    f32 temp_f4;
    f32 temp_f9;
    s32 temp_r9;
    s32 var_r5;

    var_r5 = floorf(farg0);
    temp_f31 = farg0 - (f32) (f64) var_r5;
    temp_f9 = temp_f31 * lbl_80322C94;
    temp_f0 = temp_f31 * temp_f31;
    temp_f1 = (((temp_f0 * lbl_80322C90) + temp_f9) - lbl_80322C98) * lbl_80322C88;
    temp_r9 = M2C_FIELD(arg1, s32 *, 8) - 6;
    temp_f2 = ((temp_f0 * lbl_80322C9C) - (temp_f31 * lbl_80322CA0)) * lbl_80322C88;
    temp_f3 = ((temp_f0 * lbl_80322CA4) + temp_f9 + lbl_80322C98) * lbl_80322C88;
    temp_f4 = temp_f0 * lbl_80322C8C;
    if (!(var_r5 <= temp_r9)) {
        var_r5 = temp_r9;
    }
    Curve__BlendFourControlPoints(arg0, arg1, var_r5, temp_f1, temp_f2, temp_f3, temp_f4);
    return arg0;
}
