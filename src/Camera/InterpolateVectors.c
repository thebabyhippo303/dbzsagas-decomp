/* Camera__InterpolateVectors @ 0x802A9878 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* WIP 9.7% starter + full decode: Camera__InterpolateVectors @ 0x802A9878 (leaf V3-lerp, out=a+(b-a)*t). d@sp8,s@sp40,u@sp56,q@sp24(dead,write-only!). Flow: d=b-a(fsubs dz,dy,dx order); s=d*t; d=s(int copy); q=d(via d-RELOAD for q0!); u=d+a(fadds); d=u;q=u(via u-regs); out=d(field stws). Puzzles: only ONE addi (r10=sp8=d-base); d0 always r1-direct, d1/d2 always via r10 (mixed direct/pointer to same array — LeafSystem pd-idiom only explains reloads, but copy#1 STORES d1/d2 via r10 too); out via r8 (mr early). Next: find source shape giving d0-direct + d1/d2-pointer split for BOTH stores and reloads. */
typedef float f32;
typedef struct { f32 x, y, z; } V3;
void Camera__InterpolateVectors(V3 *out, V3 *a, V3 *b, f32 t) {
    V3 d, s, u, q;
    V3 *o = out;
    d.x = b->x - a->x;
    d.y = b->y - a->y;
    d.z = b->z - a->z;
    s.x = d.x * t;
    s.y = d.y * t;
    s.z = d.z * t;
    d = s;
    q = d;
    u.x = d.x + a->x;
    u.y = d.y + a->y;
    u.z = d.z + a->z;
    d = u;
    q = u;
    *o = d;
}
