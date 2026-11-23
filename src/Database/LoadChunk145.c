/* Database__LoadChunk145 @ 0x8021462C (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Database__LoadChunk145(s32 arg0, void *arg1, s32 *arg2, s32 *arg3) {
    M2C_FIELD(arg1, u16 *, 2) = (u16)(M2C_FIELD(arg1, u16 *, 2) & 0xFFFE);
    *arg2 = arg0;
    *arg3 = M2C_FIELD(arg1, s32 *, 4);
    return 1;
}
