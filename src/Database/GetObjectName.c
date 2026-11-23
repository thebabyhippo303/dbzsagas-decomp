/* Database__GetObjectName @ 0x802045A0 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef unsigned short u16;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Database__GetObjectName(void *arg0) {
    if ((M2C_FIELD(arg0, u16 *, 2) & 2) != 0) {
        if (M2C_FIELD(arg0, u8 *, 10) != 0) {
            return (char *) arg0 + 10;
        }
    }
    return NULL;
}
