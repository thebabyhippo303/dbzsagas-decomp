/* Sphere__GetCornerPositions @ 0x8026DBCC (size: 0x14C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct { f32 x; f32 y; f32 z; } V3;
typedef struct { u32 hi; u32 lo; } W64;
typedef union { W64 w; f64 d; } W64U;
typedef union { f32 f; s32 i; } FIU;

extern f64 lbl_80349F88 __attribute__((section(".rodata")));

void Sphere__GetCornerPositions(void *arg0, f32 m[4][4], V3 *dst) {
    f32 sx = *(f32 *)((char *)arg0 + 0x2C);
    f32 sy = *(f32 *)((char *)arg0 + 0x30);
    V3 tmp;
    W64U wu;
    f32 *ca;
    f32 *cb;
    f32 *uu;
    f32 *vv;
    s32 i;
    s32 co;
    s32 uo;

    {
        FIU uu;
        uu.f = sx;
        if (uu.i == 0) {
            wu.w.hi = 0x43300000u;
            wu.w.lo = *(s32 *)((char *)arg0 + 0x1C) ^ 0x80000000;
            sx = (f32)(wu.d - lbl_80349F88);
        }
    }
    {
        FIU uu;
        uu.f = sy;
        if (uu.i == 0) {
            wu.w.hi = 0x43300000u;
            wu.w.lo = *(s32 *)((char *)arg0 + 0x20) ^ 0x80000000;
            sy = (f32)(wu.d - lbl_80349F88);
        }
    }
    ca = (f32 *)((char *)arg0 + 0x74);
    cb = (f32 *)((char *)arg0 + 0x70);
    uu = (f32 *)((char *)arg0 + 0xF4);
    vv = (f32 *)((char *)arg0 + 0xF0);
    co = 0;
    uo = 0;
    for (i = 0; i < 4; i++) {
        f32 t0 = *(f32 *)((char *)uu + uo) * sy + *(f32 *)((char *)ca + co);
        f32 t1 = *(f32 *)((char *)vv + uo) * sx + *(f32 *)((char *)cb + co);
        tmp.x = t0 * m[1][0] + t1 * m[0][0] + m[3][0];
        tmp.y = t0 * m[1][1] + t1 * m[0][1] + m[3][1];
        tmp.z = t0 * m[1][2] + t1 * m[0][2] + m[3][2];
        ((s32 *)dst)[0] = *(s32 *)&tmp.x;
        ((s32 *)dst)[1] = *(s32 *)&tmp.y;
        ((s32 *)dst)[2] = *(s32 *)&tmp.z;
        dst++;
        co += 32;
        uo += 8;
    }
}
