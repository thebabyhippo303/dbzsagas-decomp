/* AabbToAabb__ConstructOrDestroyStatics @ 0x801AD410 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern u32 lbl_803DD550 __attribute__((section(".sdata")));
extern u32 lbl_803DD554 __attribute__((section(".sdata")));
void AabbToAabb__ConstructOrDestroyStatics(s32 arg0, s32 arg1) {
    u32 a;
    u32 b;
    if (arg1 != 0xFFFF) {
        return;
    }
    if (arg0 == 0) {
        return;
    }
    a = 0x7F800000;
    b = 0xFF800000;
    lbl_803DD550 = a;
    lbl_803DD554 = b;
}
