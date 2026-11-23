/* Instance__RemapBoneMask @ 0x8023E6D4 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
u32 Instance__RemapBoneMask(u32 mask, u32 *remap) {
    u32 result = 0;
    s32 i = 0;
    s32 n = 32;
    do {
        if (mask & (1u << i)) {
            result |= (1u << *remap);
        }
        remap += 1;
        i += 1;
        n -= 1;
    } while (n != 0);
    return result;
}
