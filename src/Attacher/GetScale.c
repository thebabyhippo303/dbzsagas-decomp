/* Attacher__GetScale @ 0x802171D4 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;
typedef int s32;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern void *lbl_803ACFA8 __attribute__((section(".data")));
extern f32 lbl_80346508 __attribute__((section(".data")));

f32 Attacher__GetScale(u32 arg0) {
    s32 offset = (arg0 >> 16) * 0x5C;
    char *base = (char *)lbl_803ACFA8 + offset;
    if (M2C_FIELD(base, u32 *, 0) != arg0) {
        return lbl_80346508;
    }
    return M2C_FIELD(base, f32 *, 0x34);
}
