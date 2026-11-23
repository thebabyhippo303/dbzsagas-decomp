/* SphereText__HasNoHandles @ 0x80272084 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Sphere__HasNoHandles(void *);
s32 SphereText__HasNoHandles(void *arg0) {
    void *a = arg0;
    s32 r = 0;
    if (Sphere__HasNoHandles(a) != 0 && M2C_FIELD(a, s32 *, 0x1E4) == 0) {
        r = (M2C_FIELD(a, s32 *, 0x1EC) == 0);
    }
    return r;
}
