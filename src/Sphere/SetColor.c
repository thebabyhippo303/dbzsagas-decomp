/* Sphere__SetColor @ 0x8026C7F8 (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
void Sphere__SetColor(void *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    *(volatile f32 *)((char *)arg0 + 0x5C) = farg2;
    *(volatile f32 *)((char *)arg0 + 0x50) = farg3;
    *(volatile f32 *)((char *)arg0 + 0x54) = farg0;
    *(volatile f32 *)((char *)arg0 + 0x58) = farg1;
}
