/* RenderState__Unlock @ 0x80241420 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0

typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;
} RSEntry;

extern RSEntry lbl_803B1848[] __attribute__((section(".data")));

void RenderState__Unlock(s32 i) {
    lbl_803B1848[i].f8 = 0;
}
