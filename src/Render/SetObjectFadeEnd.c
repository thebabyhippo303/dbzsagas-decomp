/* Render__SetObjectFadeEnd @ 0x802818F0 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 Render__SetObjectFadeEnd(void *arg0, void *arg1, f32 farg0) {
    return (arg1 != NULL) ? (M2C_FIELD(arg1, f32 *, 0x120) = farg0, 1) : 0;
}
