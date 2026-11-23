/* Bink__Convert32A @ 0x802F3C88 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Bink__ConvertScaledPlane(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *);
extern u8 lbl_8038A360[];

void Bink__Convert32A(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12) {
    Bink__ConvertScaledPlane(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg12, arg11, lbl_8038A360);
}
