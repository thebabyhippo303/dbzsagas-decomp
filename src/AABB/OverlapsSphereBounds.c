/* AABB__OverlapsSphereBounds @ 0x80200ABC (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct { f32 x, y, z; } Vec3;
typedef struct { Vec3 mn, mx; } AABB;
typedef struct { Vec3 c; f32 r; } Sphere;

s32 AABB__OverlapsSphereBounds(AABB *box, Sphere *sp) {
    f32 mxx = box->mx.x;
    Vec3 lo, hi;
    Vec3 *mx = &box->mx;
    Vec3 *plo = &lo;

    lo.x = sp->c.x - sp->r;
    lo.y = sp->c.y - sp->r;
    lo.z = sp->c.z - sp->r;
    hi.y = sp->c.y + sp->r;
    hi.x = sp->c.x + sp->r;
    hi.z = sp->c.z + sp->r;

    if (mxx < lo.x) goto fail;
    if (box->mn.x > hi.x) goto fail;
    if (mx->z < plo->z) goto fail;
    if (box->mn.z > hi.z) goto fail;
    if (mx->y < plo->y) goto fail;
    return box->mn.y <= hi.y;
fail:
    return 0;
}
