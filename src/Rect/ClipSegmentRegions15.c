/* Rect__ClipSegmentRegions15 @ 0x801A0658 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* WIP 13% (frame-40 + r9=sp+8 correct): Rect15 @ 0x801A0658. Model: two V3 structs (s@sp8 via pointer p, t@sp24) both=(dx,dy,dz); reads a.x(dx,f6)+b.z(dz,f8); dy(f7) reg-live; arg1[*] reloaded part2. Semantics: t=(arg0[1]-arg1[2])/dz; arg3=(dx*t+arg1[0], dy*t+arg1[1], arg0[1]); if(arg0[0]<=x){flag=(x<=arg0[2]); if(flag){t2=(arg0[2]-arg1[0])/dx; arg4=(arg0[2],dy*t2+arg1[1],dz*t2+arg1[2]); return 1;}} return 0. Walls: target load order (arg1[1],arg1[2],arg2[2],arg2[1],arg1[0],arg2[0]) + subs (dz,dy,dx); subtrahend-temps backfired (5.6%, early fdivs). Next: fresh-clock probe of leading (arg1[1],arg1[2]) pair source. */
typedef int s32; typedef float f32;
typedef struct { f32 x, y, z; } V3;
s32 Rect__ClipSegmentRegions15(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4) {
    V3 s, t;
    V3 *p = &s;
    f32 dx = arg2[0] - arg1[0];
    f32 dy = arg2[1] - arg1[1];
    f32 dz = arg2[2] - arg1[2];
    f32 ay = arg0[1];
    f32 t1, x, y, t2;
    s32 flag = 0;
    t.x = dx; t.y = dy; t.z = dz;
    s.x = dx; p->y = dy; p->z = dz;
    t1 = (ay - arg1[2]) / dz;
    arg3[2] = ay;
    x = dx * t1 + arg1[0];
    y = dy * t1 + arg1[1];
    arg3[0] = x;
    arg3[1] = y;
    if (arg0[0] <= x) {
        flag = (x <= arg0[2]);
        if (flag != 0) {
            t2 = (arg0[2] - arg1[0]) / dx;
            arg4[0] = arg0[2];
            arg4[2] = dz * t2 + arg1[2];
            arg4[1] = dy * t2 + arg1[1];
            return 1;
        }
    }
    return 0;
}
