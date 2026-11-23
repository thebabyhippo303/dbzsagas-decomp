/* SfxEnvPlayer__ApplyEnvironment @ 0x8019B2D4 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_8033FB54 __attribute__((section(".data")));

void SfxEnvPlayer__ApplyEnvironment(void *arg0, s32 arg1, f32 farg0) {
    void (*temp_r9_2)(void *, s32, f32);
    void *temp_r3;
    void *temp_r9;

    if ((arg1 != (s32) M2C_FIELD(arg0, s32 *, 0xC8)) || !(__builtin_fabsf(farg0 - M2C_FIELD(arg0, f32 *, 0xCC)) < lbl_8033FB54)) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x20);
        temp_r9 = M2C_FIELD(temp_r3, void **, 0x60);
        temp_r9_2 = M2C_FIELD(temp_r9, void (**)(void *, s32, f32), 0xFC);
        temp_r9_2((char *) temp_r3 + M2C_FIELD(temp_r9, s16 *, 0xF8), arg1, farg0);
        M2C_FIELD(arg0, s32 *, 0xC8) = arg1;
        M2C_FIELD(arg0, f32 *, 0xCC) = farg0;
    }
}
