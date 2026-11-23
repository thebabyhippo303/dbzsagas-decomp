/* Sphere__IsDrawable @ 0x8026D6A0 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern f32 lbl_80349F74 __attribute__((section(".data")));
s32 Sphere__IsDrawable(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 276) == 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 80) == lbl_80349F74) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 20) == 0) {
        return 0;
    }
    return 1;
}
