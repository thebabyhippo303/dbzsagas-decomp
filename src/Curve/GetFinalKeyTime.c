/* Curve__GetFinalKeyTime @ 0x800E0FCC (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


f32 Curve__GetFinalKeyTime(void *arg0) {
    return M2C_FIELD(((M2C_FIELD(arg0, s32 *, 4) * 8) + M2C_FIELD(arg0, s32 *, 0xC)), f32 *, -4);
}
