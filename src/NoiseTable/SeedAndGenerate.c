/* NoiseTable__SeedAndGenerate @ 0x801588CC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void NoiseTable__Generate(void *, s32, f32);
extern f32 lbl_80337D04 __attribute__((section(".data")));

void NoiseTable__SeedAndGenerate(void *arg0, s32 arg1, f32 farg0, f32 farg1) {
    s32 var_r4;

    var_r4 = arg1;
    if ((farg0 == lbl_80337D04) || (farg1 == lbl_80337D04)) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, f32 *, 8) = farg1;
    M2C_FIELD(arg0, s32 *, 0) = var_r4;
    M2C_FIELD(arg0, f32 *, 4) = farg0;
    if ((u32) (var_r4 - 4) <= 1U) {
        NoiseTable__Generate(arg0 + 0xC, 0x80, farg0);
    }
}
