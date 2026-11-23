/* Floater__StorePreviousTransform @ 0x802B4D78 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct { s32 x, y, z; } V3;
typedef struct { char pad[56]; f32 f56; f32 f60; } AuxF;
typedef struct {
    char pad[56];
    V3 a;
    char pad2[36];
    V3 b;
    char pad3[600 - 116];
    s32 w600;
    char pad4[1236 - 604];
    s32 w1236;
    s32 w1240;
    V3 c;
    V3 d;
    AuxF *p1268;
} Floater;

void Simple__StorePreviousTransform(void *self);

void Floater__StorePreviousTransform(Floater *self) {
    s32 x1, y1, z1;
    s32 x2, y2, z2;
    V3 *pa, *pb, *pc, *pd;
    AuxF *p;

    if (self->w600 == 0) {
        return;
    }
    Simple__StorePreviousTransform(self);
    x1 = self->a.x;
    pa = &self->a;
    y1 = pa->y;
    pc = &self->c;
    z1 = pa->z;
    pb = &self->b;
    self->c.x = x1;
    pd = &self->d;
    pc->y = y1;
    pc->z = z1;
    x2 = self->b.x;
    y2 = pb->y;
    z2 = pb->z;
    self->d.x = x2;
    pd->y = y2;
    pd->z = z2;
    self->w1240 = self->w1236;
    p = self->p1268;
    if (p != NULL) {
        p->f60 = p->f56;
    }
}
