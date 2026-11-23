/* Distort__SetQueryBound @ 0x802A4DC8 (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
void Distort__SetQueryBound(void *arg0, f32 farg0, f32 farg1) {
    volatile f32 *p1 = (volatile f32 *)((char *)arg0 + 0x20);
    volatile f32 *p2 = (volatile f32 *)((char *)arg0 + 0x1C);
    *p1 = farg1;
    *p2 = farg0;
}
