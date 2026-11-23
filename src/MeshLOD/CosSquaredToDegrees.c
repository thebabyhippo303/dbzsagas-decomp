/* MeshLOD__CosSquaredToDegrees @ 0x8021154C (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 sqrtf(f32);
f32 asinf(f32);
extern f32 lbl_803462EC __attribute__((section(".data")));
extern f32 lbl_803462F0 __attribute__((section(".data")));
extern f32 lbl_803DE524;

f32 MeshLOD__CosSquaredToDegrees(f32 farg0) {
    f32 var_f1;

    var_f1 = sqrtf(farg0);
    if (!(var_f1 >= lbl_803462EC)) {
        var_f1 = lbl_803462EC;
    }
    if (!(var_f1 <= lbl_803462F0)) {
        var_f1 = lbl_803462F0;
    }
    return asinf(var_f1) * lbl_803DE524;
}
