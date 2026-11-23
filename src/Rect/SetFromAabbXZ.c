/* Rect__SetFromAabbXZ @ 0x801D38A0 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


typedef struct { f32 minX, minY, minZ, maxX, maxY, maxZ; } Aabb;
typedef struct { f32 l, t, r, b; } Rect;
static inline void RectSet(Rect *r, f32 l, f32 t, f32 rr, f32 b) {
    r->l = l;
    r->t = t;
    r->r = rr;
    r->b = b;
}
void Rect__SetFromAabbXZ(Rect *r, Aabb *a) {
    RectSet(r, a->minX, a->minZ, a->maxX, a->maxZ);
}
