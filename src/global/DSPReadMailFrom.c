/* DSPReadMailFrom @ 0x802D7F1C (size: 0x18, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 DSPReadMailFrom(void) {
    return (M2C_FIELD((void *)0xCC005000, u16 *, 6) & ~0xFFFF0000) | (M2C_FIELD((void *)0xCC005000, u16 *, 4) << 0x10);
}

