/* Animation__GetLength @ 0x8023E790 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

extern f32 lbl_80346FE0 __attribute__((section(".data")));

u16 Animation__GetLength(void *arg0) {
    return (u16)(s32)((f32)((f64)(s32)*(u16 *)((char *)arg0 + 16)) * lbl_80346FE0);
}
