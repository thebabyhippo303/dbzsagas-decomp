/* SphereText__GetCharQuad @ 0x802722D0 (size: 0x184, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern f32 lbl_8034A000 __attribute__((section(".data")));

typedef struct { f32 x, y, z; } Vec3;
typedef struct { char pad[4]; f32 x; f32 y; char pad2[20]; } Corner;
typedef struct { Corner c[4]; char pad[28]; } Glyph;

s32 SphereText__GetCharQuad(void *arg0, s32 arg1, Vec3 *arg2) {
    f32 buf[6];
    f32 mat[16];
    Vec3 v;
    void *vt;
    Vec3 *p;
    Glyph *g;
    s32 i;
    f32 a;
    f32 b;
    f32 m0, m4, m12, m1, m5, m13, m2, m6, m14;

    if (arg1 < 0) {
        p = arg2;
        for (i = 0; i < 4; i++, p++) {
            p->x = lbl_8034A000;
            p->y = lbl_8034A000;
            p->z = lbl_8034A000;
        }
        return 0;
    }
    vt = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(vt, M2C_UNK (**)(void *, s32, void *), 0x474)(arg0 + M2C_FIELD(vt, s16 *, 0x470), 1, buf);
    if (M2C_FIELD(arg0, s32 *, 0x1E4) < arg1) {
        p = arg2;
        for (i = 0; i < 4; i++, p++) {
            p->x = lbl_8034A000;
            p->y = lbl_8034A000;
            p->z = lbl_8034A000;
        }
        return 0;
    }
    vt = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(vt, M2C_UNK (**)(void *, void *), 0x25C)(mat, arg0 + M2C_FIELD(vt, s16 *, 0x258));
    m0 = mat[0]; m4 = mat[4]; m12 = mat[12];
    m1 = mat[1]; m5 = mat[5]; m13 = mat[13];
    m2 = mat[2]; m6 = mat[6]; m14 = mat[14];
    p = arg2;
    for (i = 0; i < 4; i++, p++) {
        g = (Glyph *)((arg1 * 156) + M2C_FIELD(arg0, s32 *, 0x1E0));
        b = g->c[i].y;
        a = g->c[i].x;
        v.x = (a * m0 + b * m4) + m12;
        v.y = (a * m1 + b * m5) + m13;
        v.z = (a * m2 + b * m6) + m14;
        *p = v;
    }
    return 1;
}
