/* UI__ConstructCoinCounter @ 0x801159C8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

M2C_UNK MissionProgressListener__Construct(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32);
f32 UI__InitializeCoinCounterWidgets(s32, s32, s32);
extern M2C_UNK lbl_8032DED0 __attribute__((section(".data")));

s32 UI__ConstructCoinCounter(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5) {
    MissionProgressListener__Construct(arg0, arg2, arg3, arg4, farg0, farg1, farg2, farg3, farg4, farg5);
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &lbl_8032DED0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    UI__InitializeCoinCounterWidgets(arg0, 1, arg1);
    return arg0;
}

