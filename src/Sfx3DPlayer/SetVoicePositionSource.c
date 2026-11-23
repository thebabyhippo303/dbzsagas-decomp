/* Sfx3DPlayer__SetVoicePositionSource @ 0x80198800 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 Sfx3DPlayer__GetVoice();                        /* extern */
M2C_UNK Voice3D__SetPositionSource(s32, s32);       /* extern */

s32 Sfx3DPlayer__SetVoicePositionSource(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    temp_r3 = Sfx3DPlayer__GetVoice();
    if (temp_r3 == 0) {
        return 0;
    }
    Voice3D__SetPositionSource(temp_r3, arg2);
    return 1;
}
