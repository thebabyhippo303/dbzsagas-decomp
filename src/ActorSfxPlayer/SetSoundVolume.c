/* ActorSfxPlayer__SetSoundVolume @ 0x80198D14 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 ActorSfxPlayer__FindPlayingVoice();             /* extern */
M2C_UNK Voice__SetVolume(s32, f32);                 /* extern */

s32 ActorSfxPlayer__SetSoundVolume(f32 farg0) {
    s32 temp_r3;
    temp_r3 = ActorSfxPlayer__FindPlayingVoice();
    if (temp_r3 == 0) return 0;
    Voice__SetVolume(temp_r3, farg0);
    return 1;
}
