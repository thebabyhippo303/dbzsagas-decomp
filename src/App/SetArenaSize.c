/* App__SetArenaSize @ 0x8017FE8C (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern s32 lbl_803729F4 __attribute__((section(".data")));

void App__SetArenaSize(s32 arg0) {
    lbl_803729F4 = arg0;
}
