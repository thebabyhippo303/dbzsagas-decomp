/* Sphere__SetCornerOffset @ 0x8026CD68 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; })
void Sphere__SetCornerOffset(void *p, s32 i, f32 a, f32 b) {
    s32 o = (i << 5) & 0x60;
    f32 *x = (f32 *)((char *)p + 112);
    f32 *y = (f32 *)((char *)p + 116);
    *(f32 *)((char *)x + o) = a;
    *(f32 *)((char *)y + o) = b;
}