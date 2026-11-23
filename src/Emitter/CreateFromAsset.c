/* Emitter__CreateFromAsset @ 0x802227D4 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Emitter__FindAssetIdsByName(void *, s32 *, s32 *);
s32 fn_80222860(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

s32 Emitter__CreateFromAsset(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp8) {
    s32 sp14;
    s32 sp10;
    s32 spC;
    s32 sp8;

    switch (Emitter__FindAssetIdsByName(arg0, &sp10, &sp14)) {
    case 0:
        return 0;
    default:
        sp8 = arg7;
        spC = arg_sp8;
        return fn_80222860(sp10, sp14, arg1, arg2, arg3, arg4, arg5, arg6, sp8, spC);
    }
return_zero:
    return 0;
}
