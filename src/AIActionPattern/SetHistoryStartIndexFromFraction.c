/* AIActionPattern__SetHistoryStartIndexFromFraction @ 0x80072DD8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_8031EF60 __attribute__((section(".data")));

void AIActionPattern__SetHistoryStartIndexFromFraction(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (lbl_8031EF60 - (farg0 * lbl_8031EF60));
}
