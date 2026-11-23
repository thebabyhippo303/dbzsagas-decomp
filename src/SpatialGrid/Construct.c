/* SpatialGrid__Construct @ 0x8025EC14 (size: 0x1E4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    void *arr;
    s32 f4;
    s32 f8;
    s32 f12;
    s32 f16;
    s32 f20;
} CellList;

typedef struct {
    f32 x0;
    f32 y0;
    f32 x1;
    f32 y1;
    f32 cell;
    f32 inv;
    s32 nx;
    s32 ny;
    CellList *obj;
    s32 f36;
    s32 z40;
    s32 z44;
    s32 z48;
    s32 z52;
    s32 z56;
    s32 z60;
} SpatialGrid;

void *Mem__New(u32);
void *Mem__NewArray(u32);
extern f32 lbl_8034987C __attribute__((section(".data")));

SpatialGrid *SpatialGrid__Construct(SpatialGrid *sg, f32 *vec, s32 max, f32 cell) {
    CellList *p;
    void *arr;
    CellList **pp;
    f32 q0;
    f32 q1;
    f32 q2;
    f32 q3;
    f32 inv;
    f32 dx;
    f32 dy;
    f32 t0;
    f32 t1;
    s32 nx;
    s32 ny;
    f32 fmax;
    f32 e0;
    f32 e1;
    f32 f10;
    s32 zero;
    s32 eight;
    s32 one;

    zero = 0;
    p = (CellList *)Mem__New(24);
    eight = 8;
    pp = &sg->obj;
    one = 1;
    arr = Mem__NewArray(32);
    sg->obj = p;
    p->f4 = zero;
    p->f8 = eight;
    p->f12 = eight;
    p->f16 = zero;
    p->f20 = zero;
    p->arr = arr;
    ((s32 *)pp)[1] = one;
    q0 = vec[0];
    q1 = vec[1];
    q2 = vec[2];
    q3 = vec[3];
    sg->y1 = q3;
    sg->y0 = q1;
    sg->x0 = q0;
    sg->x1 = q2;
    if (!(q0 <= q2)) {
        sg->x1 = q0;
        sg->x0 = q2;
    }
    if (!(sg->y0 <= sg->y1)) {
        f32 t0 = sg->y0;
        f32 t1 = sg->y1;
        sg->y1 = t0;
        sg->y0 = t1;
    }
    inv = lbl_8034987C / cell;
    sg->cell = cell;
    dx = sg->x1 - sg->x0;
    sg->inv = inv;
    t0 = dx * inv;
    dy = sg->y1 - sg->y0;
    t1 = dy * inv;
    nx = (s32)t0 + 1;
    ny = (s32)t1 + 1;
    sg->nx = nx;
    sg->ny = ny;
    if (nx > max || ny > max) {
        fmax = (f32)max;
        e0 = dx * (lbl_8034987C / fmax);
        e1 = dy * (lbl_8034987C / fmax);
        f10 = e1;
        if (!(e0 <= e1)) {
            f10 = e0;
        }
        inv = lbl_8034987C / f10;
        sg->cell = f10;
        t0 = dx * inv;
        sg->inv = inv;
        t1 = dy * inv;
        nx = (s32)t0 + 1;
        ny = (s32)t1 + 1;
        sg->nx = nx;
        sg->ny = ny;
    }
    sg->z40 = 0;
    sg->z44 = 0;
    sg->z48 = 0;
    sg->z52 = 0;
    sg->z56 = 0;
    sg->z60 = 0;
    return sg;
}
