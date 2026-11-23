/* VM__IsPageLocked @ 0x802EA8F4 (size: 0xC, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern u8 *lbl_803DD8E8 __attribute__((section(".sdata")));
s32 VM__IsPageLocked(u32 idx) {
    u8 *base = lbl_803DD8E8;
    return base[idx];
}
