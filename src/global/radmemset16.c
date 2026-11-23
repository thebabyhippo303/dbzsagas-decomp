/* radmemset16 @ 0x80305D4C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef int s32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32; typedef unsigned short u16;
void *radmemset16(void *dst, u16 val, u32 n) {
    u32 w;
    u32 pat;

    w = n >> 1;
    pat = ((u32)val << 16) | val;
    if (w-- != 0) {
        do {
            *(u32 *)dst = pat;
            dst = (char *)dst + 4;
        } while (w-- != 0);
    }
    if ((n & 1) == 0) {
        return dst;
    }
    *(u16 *)dst = val;
    return dst;
}
