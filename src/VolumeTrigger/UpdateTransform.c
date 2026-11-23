/* VolumeTrigger__UpdateTransform @ 0x800FE768 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_800FE888(void *, f32);                   /* extern */
M2C_UNK fn_802C9A84();                              /* extern */

void VolumeTrigger__UpdateTransform(void *arg0, f32 farg0) {
    fn_802C9A84();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x258) != 0) {
        fn_800FE888(arg0, farg0);
    }
}
