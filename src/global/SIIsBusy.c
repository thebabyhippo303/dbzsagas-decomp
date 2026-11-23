/* SIIsBusy @ 0x801772F8 (size: 0x20, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern volatile s32 Si __attribute__((section(".data")));

s32 SIIsBusy(void) {
    s32 value = Si;
    if (value == -1) return 0;
    return 1;
}
