/* Sphere__SetCornerColorRGBA8 @ 0x8026CCA0 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
typedef double f64;

extern f32 lbl_80349F60 __attribute__((section(".rodata")));

void Sphere__SetCornerColorRGBA8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 off;
    f32 scale;
    f32 *pr;
    f32 *pg;
    f32 *pb;
    f32 *pa;

    off = (arg1 & 3) << 5;
    scale = lbl_80349F60;
    pr = (f32 *)((char *)arg0 + 120);
    *(f32 *)((char *)pr + off) = (f32)arg2 * scale;
    pg = (f32 *)((char *)arg0 + 124);
    *(f32 *)((char *)pg + off) = (f32)arg3 * scale;
    pb = (f32 *)((char *)arg0 + 128);
    *(f32 *)((char *)pb + off) = (f32)arg4 * scale;
    pa = (f32 *)((char *)arg0 + 132);
    *(f32 *)((char *)pa + off) = (f32)arg5 * scale;
}
