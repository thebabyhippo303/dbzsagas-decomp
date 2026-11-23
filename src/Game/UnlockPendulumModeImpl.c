/* Game__UnlockPendulumModeImpl @ 0x80127EF4 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int PersistentData__SetGlobalImpl(void *, char *, int);
extern s8 lbl_80327740 __attribute__((section(".data")));
extern s32 lbl_803DC368;

void Game__UnlockPendulumModeImpl(void) {
    PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327740, 1);
}
