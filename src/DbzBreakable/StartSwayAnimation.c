/* DbzBreakable__StartSwayAnimation @ 0x800E801C (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_80323690 __attribute__((section(".data")));

void DbzBreakable__StartSwayAnimation(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x764) == 0) {
        f32 sway = lbl_80323690;
        *(volatile s32 *)((char *)arg0 + 0x764) = 1;
        *(volatile f32 *)((char *)arg0 + 0x804) = farg0;
        *(volatile f32 *)((char *)arg0 + 0x808) = farg1;
        *(volatile f32 *)((char *)arg0 + 0x80C) = farg2;
        *(volatile f32 *)((char *)arg0 + 0x810) = sway;
    }
}
