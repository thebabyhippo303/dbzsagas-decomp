/* MainMenu__SetPendulumSelection2 @ 0x80141610 (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern s16 lbl_803946D6 __attribute__((section(".data")));

void MainMenu__SetPendulumSelection2(void *arg0, s16 arg1) {
    lbl_803946D6 = arg1;
}
