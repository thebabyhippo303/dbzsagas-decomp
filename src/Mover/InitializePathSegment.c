/* Mover__InitializePathSegment @ 0x802B5EE0 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { f32 x, y, z; } Vec3;

f32 sqrtf(f32);
extern f32 lbl_80352058 __attribute__((section(".data")));

void Mover__InitializePathSegment(void *self, f32 distance) {
    struct {
        Vec3 negCopy;
        Vec3 copied;
        Vec3 negated;
        f32 gap;
        Vec3 squares;
        char hole[36];
    } sp;
    Vec3 *pos;
    f32 *along;
    char *lenBase;
    Vec3 *sq;
    f32 scale;
    f32 x;
    f32 y;
    f32 z;
    f32 xx;
    f32 yy;
    f32 zz;
    Vec3 *dest;

    pos = (Vec3 *)((char *)self + 0x14C);
    along = (f32 *)((char *)self + 0x290);
    lenBase = (char *)self + 0x13C;
    sq = &sp.squares;
    M2C_FIELD(self, f32 *, 0x544) = distance;
    sp.copied = *pos;
    scale = (distance - (along[1] - sp.copied.y)) * lbl_80352058;
    sp.copied.y = sp.copied.y - scale;
    sp.negated.x = -sp.copied.x;
    sp.negated.y = -sp.copied.y;
    sp.negated.z = -sp.copied.z;
    sp.negCopy = sp.negated;
    dest = (Vec3 *)((char *)self + 0x140);
    *dest = sp.negCopy;
    *pos = sp.copied;
    y = pos->y;
    x = pos->x;
    z = pos->z;
    yy = y * y;
    xx = x * x;
    zz = z * z;
    sp.squares.x = xx;
    sp.squares.y = yy;
    sp.squares.z = zz;
    *(f32 *)(lenBase + 0x1C) = sqrtf(xx + sq->y + sq->z);
    along[1] = along[1] + scale;
}
