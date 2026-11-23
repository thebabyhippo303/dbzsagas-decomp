/* Water__SetupCellWaves @ 0x802784F4 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

M2C_UNK fn_8027B31C(s32, f32, f32, f32);

s32 Water__SetupCellWaves(s32 arg0, s32 arg1, void *arg2) {
    fn_8027B31C(arg1, M2C_FIELD(arg2, f32 *, 0xD4), M2C_FIELD(arg2, f32 *, 0xD8), M2C_FIELD(arg2, f32 *, 0xDC));
    return 1;
}
