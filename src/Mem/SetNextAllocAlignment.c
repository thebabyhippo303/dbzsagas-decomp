/* Mem__SetNextAllocAlignment @ 0x80184494 (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern u32 lbl_803DCBB0;

void Mem__SetNextAllocAlignment(u32 arg0) {
    if (arg0 > 8U) {
        lbl_803DCBB0 = arg0;
    }
}
