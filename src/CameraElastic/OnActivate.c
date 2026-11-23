/* CameraElastic__OnActivate @ 0x800BE310 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SimLoop__ActivateControls(int, int);
extern f32 lbl_80321798 __attribute__((section(".data")));
extern s32 lbl_803DC3C0;

void CameraElastic__OnActivate(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_80321798;
    SimLoop__ActivateControls(lbl_803DC3C0, 0);
}
