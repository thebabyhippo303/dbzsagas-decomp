/* LeafSystem__UpdateLeafTransform @ 0x8028DF8C (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

extern f32 lbl_8034F5D0[] __attribute__((section(".rodata")));
extern f32 lbl_8034F5D4[] __attribute__((section(".rodata")));

typedef struct {
    f32 m[16];
} Mat4;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} V3;

typedef struct Leaf {
    Mat4 *out;
    char pad[28];
    f32 f32;
    char pad2[140];
    s32 f176;
} Leaf;

void LeafSystem__IntegrateLeafMotion(void *leaf, float dt);
void LeafSystem__BuildLeafBasis(void *leaf, float dt);

void LeafSystem__UpdateLeafTransform(Leaf *leaf, float dt) {
    if (leaf->f176 == 0) {
        Mat4 *d;
        f32 *b;
        V3 *pos;
        f32 one;
        f32 v0;
        LeafSystem__IntegrateLeafMotion(leaf, dt);
        LeafSystem__BuildLeafBasis(leaf, dt);
        b = (f32 *)((char *)leaf + 44);
        d = leaf->out;
        pos = (V3 *)((char *)leaf + 32);
        v0 = b[0];
        d->m[0] = v0;
        d->m[1] = b[1];
        d->m[2] = b[2];
        one = lbl_8034F5D0[0];
        d->m[3] = one;
        d->m[4] = b[3];
        d->m[5] = b[4];
        d->m[6] = b[5];
        d->m[7] = one;
        d->m[8] = b[6];
        d->m[9] = b[7];
        d->m[10] = b[8];
        d->m[11] = one;
        d->m[12] = leaf->f32;
        d->m[13] = pos->y;
        d->m[14] = pos->z;
        d->m[15] = lbl_8034F5D4[0];
    }
}
