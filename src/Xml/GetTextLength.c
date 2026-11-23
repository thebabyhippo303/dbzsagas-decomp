/* Xml__GetTextLength @ 0x80305E5C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 Xml__GetTextLength(u8 *arg0, u32 arg1) {
    u8 *p;
    u32 n;
    p = arg0;
    if ((arg1 != 0U) && (*arg0 != 0x3C)) {
        n = 0;
        do {
            n += 1;
            p += 1;
        } while ((n < arg1) && (*p != 0x3C));
    }
    return p - arg0;
}
