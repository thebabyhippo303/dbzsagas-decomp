/* CameraCurve__OnDeactivate @ 0x800BE0BC (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK SimLoop__ActivateControls(s32, M2C_UNK);    /* extern */
extern s32 lbl_803DC3C0;

void CCameraCurve__EnableControls(void) {
    SimLoop__ActivateControls(lbl_803DC3C0, 1);
}
