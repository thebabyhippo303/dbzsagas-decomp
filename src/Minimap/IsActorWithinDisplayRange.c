/* Minimap__IsActorWithinDisplayRange @ 0x80117F0C (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
s32 Actor__GetCategoryCode(void *arg0);
void Minimap__GetDisplayCenterPosition(void *arg0);
f32 sqrtf(f32 arg0);
extern f32 lbl_803268DC __attribute__((section(".data")));
extern f32 lbl_803268E0 __attribute__((section(".data")));
extern f32 lbl_803268E4 __attribute__((section(".data")));
s32 Minimap__IsActorWithinDisplayRange(void *arg0) {
    f32 d[3];
    f32 c[3];
    f32 sq[3];
    f32 *p;
    f32 *q;
    f32 x;
    f32 xs;
    f32 *b = (f32 *)((char *)arg0 + 0x38);
    s32 cat;
    f32 thresh;
    f32 dist;
    cat = Actor__GetCategoryCode(arg0);
    Minimap__GetDisplayCenterPosition(c);
    p = d;
    x = b[0] - c[0];
    d[0] = x;
    d[1] = b[1] - c[1];
    d[2] = b[2] - c[2];
    q = sq;
    xs = x * x;
    {
        f32 y = p[1]; f32 z = p[2];
        sq[0] = xs; sq[2] = z * z; sq[1] = y * y;
    }
    dist = sqrtf(xs + q[1] + q[2]);
    thresh = (cat == 2) ? lbl_803268DC : lbl_803268E0;
    return (thresh - dist) >= lbl_803268E4;
}
