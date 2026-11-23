/* AISetStreamVolRight @ 0x8017C7F4 (size: 0x1C, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void AISetStreamVolRight(s32 arg0) {
    volatile u32 *p = (volatile u32 *)0xCC006C00;
    p[1] = (p[1] & 0xFFFF00FF) | (arg0 << 8);
}
