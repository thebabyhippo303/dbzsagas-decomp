/* Color__PackFromInt4 @ 0x8029FB34 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type *)((char *)(expr) + (offset)))
#define NULL 0
s32 *Color__PackFromInt4(s32 *arg0, s32 arg1, u8 *arg2) {
    u8 tmp[4];
    tmp[0] = arg2[3];
    tmp[1] = arg2[7];
    tmp[2] = arg2[11];
    tmp[3] = arg2[15];
    *arg0 = *(s32 *)tmp;
    return arg0;
}
