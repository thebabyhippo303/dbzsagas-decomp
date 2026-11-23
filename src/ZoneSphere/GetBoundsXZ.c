/* ZoneSphere__GetBoundsXZ @ 0x8025E4E0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

extern f32 lbl_8034986C __attribute__((section(".rodata")));

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 fx;
    f32 unkC;
    f32 fz;
    f32 radius;
} ZoneSphere;

typedef struct {
    f32 minX;
    f32 minZ;
    f32 maxX;
    f32 maxZ;
} BoundsXZ;

BoundsXZ *ZoneSphere__GetBoundsXZ(BoundsXZ *out, ZoneSphere *in) {
    BoundsXZ *o;
    f32 rad;
    f32 zzx;
    f32 aaa;
    f32 r;
    f32 subZ;
    f32 subX;
    f32 addX;
    f32 addZ;
    rad = in->radius;
    o = out;
    zzx = in->fx;
    aaa = in->fz;
    r = rad * lbl_8034986C;
    subX = zzx - r;
    subZ = aaa - r;
    addX = zzx + r;
    addZ = aaa + r;
    o->minZ = subZ;
    o->minX = subX;
    o->maxX = addX;
    o->maxZ = addZ;
    return out;
}
