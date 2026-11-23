/* Simple__ClearEnvLoadFlags @ 0x802C27E0 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Simple__ClearEnvLoadFlags(void *arg0) {
    *(volatile int *)((char *)arg0 + 0x1BC) = 0;
    *(volatile int *)((char *)arg0 + 0x26C) = 0;
    *(volatile int *)((char *)arg0 + 0x1B8) = 0;
}
