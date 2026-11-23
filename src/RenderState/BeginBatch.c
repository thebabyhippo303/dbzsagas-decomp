/* RenderState__BeginBatch @ 0x80241328 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern u32 lbl_803DCD58;
extern u32 lbl_803B1948 __attribute__((section(".data")));
void fn_80249DE8(u32);
void RenderState__BeginBatch(void) {
    u32 v;
    if (lbl_803DCD58 != 0) return;
    v = lbl_803B1948;
    if (v - 10 <= 1u) return;
    fn_80249DE8(v);
    lbl_803DCD58 = 1;
}
