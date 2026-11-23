/* SfxPlayer__SetVoicePitch @ 0x80198FC8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SfxPlayer__GetVoice(s32, void *);
M2C_UNK fn_8019CEB8(s32, f32);                      /* extern */

s32 SfxPlayer__SetVoicePitch(s32 arg0, void *arg1, f32 farg0) {
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = SfxPlayer__GetVoice(arg0, arg1);
    if (temp_r3 == 0) return 0;
    fn_8019CEB8(temp_r3, farg0);
    var_r3 = 1;
    return var_r3;
}
