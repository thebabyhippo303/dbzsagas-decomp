/* Rect__ClipSegmentRegions14 @ 0x801A05C8 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* WIP 22.2% (len 36 exact): Rect__ClipSegmentRegions14 @ 0x801A05C8. Line-clip lerp.
   FORCED via union-overlay (plain array SRA's away): union {f32 v; u8 b[28];}
   + f32 *ap overlay; slots ap[0]=[8]=d0, ap[1]=[12]=d12, ap[2]=[16]=c-reload,
   ap[4]=[24]=d0, ap[5]=[28]=d12, ap[6]=[32]=d13 (skip ap[3]).
   Load order: p0.z,p0.y,p1.y,p1.z,p0.x,p1.x. out2 via WORD copies (u32 temps,
   loads 8,0,4 then stores). out->y recomputes p0->y (extra lfs fixes len).
   OPEN: f-reg coloring (want t9->f9,d13->f13,t8->f8; ours rotated). Permute 300x
   worsened. Needs regalloc insight. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct { f32 x, y, z; } V3;

s32 Rect__ClipSegmentRegions14(f32 *a0, V3 *p0, V3 *p1, V3 *out, u32 *out2) {
    union { f32 v; u8 b[28]; } u;
    f32 *ap;
    f32 t8;
    f32 t9;
    f32 t11;
    f32 d0;
    f32 d12;
    f32 d13;
    f32 t13;
    f32 t;

    ap = (f32 *)u.b;
    t11 = p0->z;
    t9 = p0->y;
    d12 = p1->y - t9;
    d13 = p1->z - t11;
    t8 = p0->x;
    d0 = p1->x - t8;
    ap[6] = d13;
    ap[5] = d12;
    ap[0] = d0;
    ap[4] = d0;
    ap[1] = d12;
    ap[2] = ap[6];
    t13 = a0[1];
    out->z = t13;
    t = (t13 - t11) / ap[6];
    out->y = d12 * t + p0->y;
    out->x = d0 * t + t8;
    out2[2] = *(u32 *)&p1->z;
    out2[0] = *(u32 *)&p1->x;
    out2[1] = *(u32 *)&p1->y;
    return 1;
}
