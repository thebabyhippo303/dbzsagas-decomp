/* LeafSystem__UpdateLeavesInRange @ 0x80289530 (size: 0x154, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void LeafSystem__SimulateLeaves(void *, void *, void *, f32);
extern f32 lbl_803A35BC __attribute__((section(".data")));

typedef struct { f32 x, y, z; } Vec3;
typedef struct { char pad[56]; f32 x, y, z; } LeafPos;
typedef struct { void *ptr; s32 unk4; f32 f8; char pad2[8]; f32 dist; char pad3[44]; } LeafEntry;
typedef struct { char pad[20]; LeafEntry e0; char pad2[564 - 88]; s32 count; } LeafSelf;
typedef struct { f32 x, y, z; f32 pad12; f32 r; char pad1[12]; void *array; s32 count; } LeafPoint;

void LeafSystem__UpdateLeavesInRange(void *arg0, void *arg1) {
    LeafSelf *self = (LeafSelf *)arg0;
    LeafPoint *point = (LeafPoint *)arg1;
    LeafEntry *best = NULL;
    s32 i = 0;
    LeafEntry *e;
    Vec3 d;
    Vec3 sq;
    Vec3 *dp;
    Vec3 *sp;
    f32 dx, dy, dz;
    f32 dx2, dy2, dz2;
    f32 sum;
    f32 rr;
    s32 j;
    s32 k;
    f32 c;

    if ((s32)best >= self->count) {
        goto part2;
    }
    dp = &d;
    sp = &sq;
    e = &self->e0;
    do {
        LeafPos *p = (LeafPos *)e->ptr;
        f32 *fp;
        dx = point->x - p->x;
        fp = &p->x;
        dy = point->y - fp[1];
        dz = point->z - fp[2];
        dx2 = dx * dx;
        d.x = dx;
        d.y = dy;
        d.z = dz;
        dy2 = dp->y * dp->y;
        dz2 = dp->z * dp->z;
        sq.x = dx2;
        sq.y = dy2;
        sq.z = dz2;
        sum = dx2 + sp->y + sp->z;
        e->dist = sum;
        rr = e->f8 + point->r;
        if (!(sum >= rr * rr)) {
            if ((best == NULL) || !(sum >= best->dist)) {
                best = e;
            }
        }
        i++;
        e++;
    } while (i < self->count);
part2:
    c = lbl_803A35BC;
    j = 0;
    if (j < point->count) {
        k = 0;
        do {
            j++;
            LeafSystem__SimulateLeaves(self, best, (void *)((char *)point->array + k), c);
            k += 448;
        } while (j < point->count);
    }
}
