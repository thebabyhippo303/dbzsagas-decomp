/* Sfx3DPlayer__SetVoiceMinDistanceOffset @ 0x801988D8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
extern s32 Sfx3DPlayer__GetVoice(s32, void *);
extern void Voice3D__SetMinDistanceOffset(s32, f32);
s32 Sfx3DPlayer__SetVoiceMinDistanceOffset(s32 arg0, void *arg1, f32 farg0) {
    s32 voice = Sfx3DPlayer__GetVoice(arg0, arg1);
    if (voice == 0) return 0;
    Voice3D__SetMinDistanceOffset(voice, farg0);
    return 1;
}
