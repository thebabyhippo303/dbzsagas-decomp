/* Runtime__ResetOnPadCombo @ 0x800032C0 (size: 0x40, .init, MWCC GC/1.x) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;

void OSResetSystem(int, int, int);

void Runtime__ResetOnPadCombo(void) {
    if ((s32)(*(volatile u16 *)0x800030E4 & 0xEEF) == 0xEEF) {
        OSResetSystem(0, 0, 0);
    }
}
