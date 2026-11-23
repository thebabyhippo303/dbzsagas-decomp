/* Sound__SetHandleVolumeAndPitch @ 0x80188F48 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SfxPlayer__SetVoiceVolumeAndPitch(s32, void *, f32, f32);
s32 Sound__GetHandleVoice(s32);
s32 Sound__SetHandleVolumeAndPitch(s32 arg0, f32 farg0, f32 farg1) {
    s32 temp_r3;
    temp_r3 = Sound__GetHandleVoice(arg0);
    if (temp_r3 == 0) return 0;
    SfxPlayer__SetVoiceVolumeAndPitch(temp_r3, (void *)arg0, farg0, farg1);
    return 1;
}
