/* SurfaceMap__WorldToLocalPoint @ 0x801FBC00 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;

typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;
} Vec3w;

Vec3w *SurfaceMap__WorldToLocalPoint(Vec3w *dst, void *a1, const Vec3w *src) {
    u32 t0 = src->f0;
    Vec3w *d = dst;
    u32 t4 = src->f4;
    u32 t8 = src->f8;
    d->f0 = t0;
    d->f4 = t4;
    d->f8 = t8;
    return dst;
}
