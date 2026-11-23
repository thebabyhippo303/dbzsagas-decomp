/* SfxPlayer__SetVoiceVolumeAndPitch @ 0x80199010 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SfxPlayer__GetVoice(s32, void *);
M2C_UNK Voice__SetVolumeAndPitch(s32, f32, f32);    /* extern */

s32 SfxPlayer__SetVoiceVolumeAndPitch(s32 arg0, void *arg1, f32 farg0, f32 farg1) {
    s32 temp_r3;
    temp_r3 = SfxPlayer__GetVoice(arg0, arg1);
    if (temp_r3 == 0) return 0;
    Voice__SetVolumeAndPitch(temp_r3, farg0, farg1);
    return 1;
}
