/* AvaSurfGrid__ToLinearIndex @ 0x8009D2B8 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 AvaSurfGrid__ToLinearIndex(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    if ((arg1 < 0) || (arg1 >= (s32) M2C_FIELD(arg0, s32 *, 0x1C)) || (arg2 < 0) || (temp_r3 = M2C_FIELD(arg0, s32 *, 0x20), ((arg2 < temp_r3) == 0))) {
        return -1;
    }
    return (arg1 * temp_r3) + arg2;
}

