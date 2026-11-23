/* DSPCheckMailTo @ 0x802D7EFC (size: 0x10, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 DSPCheckMailTo(void) {
    volatile u16 *base = (volatile u16 *)0xCC000000;
    return ((*(base + 0x2800) << 1) & 0x10000) != 0;
}
