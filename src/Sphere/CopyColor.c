/* Sphere__CopyColor @ 0x8026C7CC (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void Sphere__CopyColor(void *dst, void *src) {
    if (src == NULL) {
        return;
    }
    *(f32 *)((char *)dst + 80) = *(f32 *)((char *)src + 80);
    *(f32 *)((char *)dst + 84) = *(f32 *)((char *)src + 84);
    *(f32 *)((char *)dst + 88) = *(f32 *)((char *)src + 88);
    *(f32 *)((char *)dst + 92) = *(f32 *)((char *)src + 92);
}