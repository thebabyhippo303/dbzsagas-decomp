/* UI__UpdateCoinCounter @ 0x801161AC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void UI__ResetCounterUpdateTiming(void *);
M2C_UNK UI__RefreshCoinCounterDisplay();            /* extern */
extern void *lbl_803DC3C0;

void UI__UpdateCoinCounter(void *arg0) {
    if ((u32) (M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) - 2) <= 0x13U) {
        UI__RefreshCoinCounterDisplay();
    }
    UI__ResetCounterUpdateTiming(arg0);
}
