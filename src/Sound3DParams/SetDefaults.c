/* Sound3DParams__SetDefaults @ 0x801985A4 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
typedef struct {
    f32 f0, f4, f8, fC, f10;
    int i14;
    f32 f18;
    int i1C, i20, i24, i28;
} Sound3DParams;

extern f32 lbl_8033F778 __attribute__((section(".data")));
extern f32 lbl_8033F77C __attribute__((section(".data")));
extern f32 lbl_8033F780 __attribute__((section(".data")));
extern f32 lbl_8033F784 __attribute__((section(".data")));

Sound3DParams *Sound3DParams__SetDefaults(Sound3DParams *p) {
    f32 x = lbl_8033F778;
    f32 y = lbl_8033F780;
    f32 z = lbl_8033F77C;
    f32 w = lbl_8033F784;

    p->f0 = x;
    p->fC = y;
    p->f4 = x;
    p->f8 = z;
    p->f10 = y;
    p->i14 = 0;
    p->f18 = w;
    p->i20 = 0;
    p->i1C = 33;
    p->i28 = 0;
    p->i24 = 200;
    return p;
}
