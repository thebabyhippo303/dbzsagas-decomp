/* Sphere__BlendColor @ 0x8026CC08 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

typedef void (*BlendFn)(void *, f32, f32, f32, f32);
extern f32 lbl_80349F54 __attribute__((section(".data")));

void Sphere__BlendColor(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    char *vt = *(char **)((char *)arg0 + 412);
    s16 adj = *(s16 *)(vt + 264);
    BlendFn fn = *(BlendFn *)(vt + 268);
    f32 t = lbl_80349F54 - arg5;
    fn((char *)arg0 + adj,
        *(f32 *)((char *)arg0 + 84) * t + arg5 * arg1,
        *(f32 *)((char *)arg0 + 88) * t + arg5 * arg2,
        *(f32 *)((char *)arg0 + 92) * t + arg5 * arg3,
        *(f32 *)((char *)arg0 + 80) * t + arg5 * arg4);
}
