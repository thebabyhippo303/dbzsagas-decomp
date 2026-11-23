/* DebugTextPage__SetIndex @ 0x8026F780 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;

void DebugTextPage__SetIndex(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4436) = arg1;
}
