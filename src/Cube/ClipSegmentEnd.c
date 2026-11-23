/* Cube__ClipSegmentEnd @ 0x801B30F4 (size: 0x37C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern f32 lbl_80341800 __attribute__((section(".data")));
extern f32 lbl_80341804 __attribute__((section(".data")));
extern f32 lbl_803DD510 __attribute__((section(".sbss")));

s32 Cube__ClipSegmentEnd(void *arg0, void *arg1, void *arg2, void *arg3, f32 farg0) {
    f32 d[4];
    f32 e[4];
    f32 dtA[4];
    f32 dtB[4];
    f32 ax;
    f32 bx;
    f32 by;
    f32 bz;
    f32 ay;
    f32 az;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 tmp;
    f32 t0;
    f32 t1;
    f32 t2;
    f32 f6;
    f32 f7;
    f32 f8;
    f32 dtz;
    f32 sl;
    f32 *dp;
    char *dp2;
    s32 w0;
    s32 w1;
    s32 w2;
    s32 ret;

    ax = M2C_FIELD(arg1, f32 *, 0);
    bx = M2C_FIELD(arg2, f32 *, 0);
    bz = M2C_FIELD(arg2, f32 *, 8);
    by = M2C_FIELD(arg2, f32 *, 4);
    ay = M2C_FIELD(arg1, f32 *, 4);
    az = M2C_FIELD(arg1, f32 *, 8);
    tmp = M2C_FIELD(arg0, f32 *, 0xC) + farg0;
    dx = bx - ax;
    dy = by - ay;
    dz = bz - az;
    d[1] = dy;
    d[2] = dz;
    d[0] = dx;
    if (!(!(dx <= lbl_80341800))) {
        goto t0m;
    }
    t0 = M2C_FIELD(arg0, f32 *, 0) + tmp;
    goto t0j;
t0m:
    t0 = M2C_FIELD(arg0, f32 *, 0) - tmp;
t0j:
    dp = d;
    dp2 = (char *) dp;
    if (!(!(M2C_FIELD(dp, f32 *, 4) <= lbl_80341800))) {
        goto t1m;
    }
    t1 = M2C_FIELD(arg0, f32 *, 4) + tmp;
    goto t1j;
t1m:
    t1 = M2C_FIELD(arg0, f32 *, 4) - tmp;
t1j:
    if (!(!(M2C_FIELD(dp2, f32 *, 8) <= lbl_80341800))) {
        goto t2m;
    }
    t2 = M2C_FIELD(arg0, f32 *, 8) + tmp;
    goto t2j;
t2m:
    t2 = M2C_FIELD(arg0, f32 *, 8) - tmp;
t2j:
    if (!(!(__builtin_fabsf(d[0]) >= lbl_80341804))) {
        goto sel0;
    }
    f6 = lbl_803DD510;
    goto nx0;
sel0:
    f6 = (t0 - M2C_FIELD(arg1, f32 *, 0)) / d[0];
nx0:
    if (!(!(__builtin_fabsf(d[1]) >= lbl_80341804))) {
        goto sel1;
    }
    f7 = lbl_803DD510;
    goto nx1;
sel1:
    f7 = (t1 - M2C_FIELD(arg1, f32 *, 4)) / d[1];
nx1:
    if (!(!(__builtin_fabsf(M2C_FIELD(dp2, f32 *, 8)) >= lbl_80341804))) {
        goto sel2;
    }
    f8 = lbl_803DD510;
    goto nx2;
sel2:
    f8 = (t2 - M2C_FIELD(arg1, f32 *, 8)) / d[2];
nx2:
    if (!(!(f6 >= f7))) {
        goto t7;
    }
    if (!(!(f6 >= f8))) {
        goto t8;
    }
    if (f6 < lbl_80341800) {
        goto ep3fail;
    }
    ax = d[0] * f6;
    dtz = M2C_FIELD(dp2, f32 *, 8) * f6;
    t0 = M2C_FIELD(dp2, f32 *, 4) * f6;
    ret = 0;
    e[2] = M2C_FIELD(arg1, f32 *, 8) + dtz;
    e[1] = M2C_FIELD(arg1, f32 *, 4) + t0;
    e[0] = M2C_FIELD(arg1, f32 *, 0) + ax;
    dp = e;
    dtA[0] = ax;
    dtA[1] = t0;
    dtA[2] = dtz;
    w0 = M2C_FIELD(e, s32 *, 0);
    w1 = M2C_FIELD(dp, s32 *, 4);
    w2 = M2C_FIELD(dp, s32 *, 8);
    M2C_FIELD(arg3, s32 *, 0) = w0;
    M2C_FIELD(arg3, s32 *, 4) = w1;
    M2C_FIELD(arg3, s32 *, 8) = w2;
    sl = M2C_FIELD(arg0, f32 *, 0xC);
    if (__builtin_fabsf(M2C_FIELD(arg3, f32 *, 4) - M2C_FIELD(arg0, f32 *, 4)) > sl) {
        goto ep3fail;
    }
    tmp = M2C_FIELD(arg3, f32 *, 8);
    t1 = M2C_FIELD(arg0, f32 *, 8);
    goto ztail;
t7:
    if (!(!(f7 >= f8))) {
        goto t8;
    }
    if (f7 < lbl_80341800) {
        goto ep3fail;
    }
    ax = d[0] * f7;
    dtz = M2C_FIELD(dp2, f32 *, 8) * f7;
    t0 = M2C_FIELD(dp2, f32 *, 4) * f7;
    ret = 0;
    e[2] = M2C_FIELD(arg1, f32 *, 8) + dtz;
    e[1] = M2C_FIELD(arg1, f32 *, 4) + t0;
    e[0] = M2C_FIELD(arg1, f32 *, 0) + ax;
    dp = e;
    dtB[0] = ax;
    dtB[1] = t0;
    dtB[2] = dtz;
    w0 = M2C_FIELD(e, s32 *, 0);
    w1 = M2C_FIELD(dp, s32 *, 4);
    w2 = M2C_FIELD(dp, s32 *, 8);
    M2C_FIELD(arg3, s32 *, 0) = w0;
    M2C_FIELD(arg3, s32 *, 4) = w1;
    M2C_FIELD(arg3, s32 *, 8) = w2;
    sl = M2C_FIELD(arg0, f32 *, 0xC);
    if (__builtin_fabsf(M2C_FIELD(arg3, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0)) > sl) {
        goto ep3fail;
    }
    tmp = M2C_FIELD(arg3, f32 *, 8);
    t1 = M2C_FIELD(arg0, f32 *, 8);
    goto ztail;
t8:
    if (!(!(f8 >= lbl_80341800))) {
        goto ep3go;
    }
ep3fail:
    return 0;
ep3go:
    ax = d[0] * f8;
    dtz = M2C_FIELD(dp2, f32 *, 8) * f8;
    t0 = M2C_FIELD(dp2, f32 *, 4) * f8;
    ret = 0;
    e[2] = M2C_FIELD(arg1, f32 *, 8) + dtz;
    e[1] = M2C_FIELD(arg1, f32 *, 4) + t0;
    e[0] = M2C_FIELD(arg1, f32 *, 0) + ax;
    dp = e;
    dtA[0] = ax;
    dtA[1] = t0;
    dtA[2] = dtz;
    w0 = M2C_FIELD(e, s32 *, 0);
    w1 = M2C_FIELD(dp, s32 *, 4);
    w2 = M2C_FIELD(dp, s32 *, 8);
    M2C_FIELD(arg3, s32 *, 0) = w0;
    M2C_FIELD(arg3, s32 *, 4) = w1;
    M2C_FIELD(arg3, s32 *, 8) = w2;
    sl = M2C_FIELD(arg0, f32 *, 0xC);
    if (__builtin_fabsf(M2C_FIELD(arg3, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0)) > sl) {
        goto ep3fail;
    }
    tmp = M2C_FIELD(arg3, f32 *, 4);
    t1 = M2C_FIELD(arg0, f32 *, 4);
ztail:
    ret = (__builtin_fabsf(tmp - t1) <= sl);
    return ret;
}
