/* memcpy @ 0x80163554 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef unsigned int u32;
void *memcpy(void *dst, const void *src, u32 n) {
    u8 *d = (u8 *)dst;
    const u8 *s = (const u8 *)src;
    if ((n > 15) && (((((u32)s) | ((u32)d)) & 3) == 0)) {
        u32 *d32 = (u32 *)d;
        u32 *s32 = (u32 *)s;
        do {
            *d32++ = *s32++;
            *d32++ = *s32++;
            *d32++ = *s32++;
            *d32++ = *s32++;
            n -= 16;
        } while (n > 15);
        if (n > 3) {
            do {
                *d32++ = *s32++;
                n -= 4;
            } while (n > 3);
        }
        d = (u8 *)d32;
        s = (const u8 *)s32;
    }
    if (n-- == 0) {
        return dst;
    }
    do {
        *d++ = *s++;
    } while (n-- != 0);
    return dst;
}
