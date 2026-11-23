/* Sfx3DPlayer__GetVoice @ 0x80198AC0 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SfxPlayer__GetVoice(s32, void *);
s32 Sfx3DPlayer__GetVoice(s32 arg0, void *arg1) {
    s32 voice = SfxPlayer__GetVoice(arg0, arg1);
    if (voice != 0) {
        void *state = M2C_FIELD(voice, void **, 0x54);
        s32 playing = M2C_FIELD(state, s32 (**)(s32), 0x14)(voice + M2C_FIELD(state, s16 *, 0x10));
        s32 result = 0;
        if (playing == 1) result = voice;
        return result;
    }
    return 0;
}
