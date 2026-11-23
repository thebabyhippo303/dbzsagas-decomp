/* SphereText__IsDrawable @ 0x80270510 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern f32 lbl_80349FC0 __attribute__((section(".data")));

s32 SphereText__IsDrawable(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x114) == 0) {
        return 0;
    }
    return M2C_FIELD(arg0, f32 *, 0x50) != lbl_80349FC0;
}
