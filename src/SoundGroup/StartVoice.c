/* SoundGroup__StartVoice @ 0x8019D674 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Voice__HasChannel(void *);
s32 Voice__GetSoundDef(void *);
s32 SoundChannel__Create(void *, s32);
s32 SoundGroup__CountActiveChannels(void *);
s32 SoundGroup__ReclaimVoice(void *, s32);
void Voice__SetChannel(void *, s32);
void SoundChannel__Release(void *, void *);
s32 Voice__GetPriority(void *);
void SoundGroup__ReleaseVoice(void *, s32);
M2C_UNK fn_801927C8(s32);
s32 SoundGroup__StartVoice(void *arg0, void *arg1) {
    s32 temp_r27;
    s32 temp_r3;
    s32 var_r28;
    void *temp_r9;

    if (arg1 == NULL) {
        return 0;
    }
    if (Voice__HasChannel(arg1) != 0) {
        return 1;
    }
    temp_r27 = *(s32 *)Voice__GetSoundDef(arg1);
    temp_r3 = fn_801927C8(Voice__GetSoundDef(arg1));
    if (temp_r3 == 0) {
        return 0;
    }
    temp_r9 = M2C_FIELD(arg1, void **, 0x54);
    var_r28 = 0;
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x1C)((char *)arg1 + M2C_FIELD(temp_r9, s16 *, 0x18)) != 0) {
        var_r28 = SoundChannel__Create((void *)temp_r3, temp_r27);
        if ((var_r28 != 0 && SoundGroup__CountActiveChannels(arg0) < M2C_FIELD(arg0, s32 *, 0x58))
            || (M2C_FIELD(arg0, s32 *, 0x60) += 1, SoundGroup__ReclaimVoice(arg0, (s32)arg1) != 0)) {
            if (var_r28 != 0 || (var_r28 = SoundChannel__Create((void *)temp_r3, temp_r27)) != 0) {
                Voice__SetChannel(arg1, var_r28);
                return 1;
            }
            goto release_voice;
        }
    }
    if (var_r28 != 0) {
        SoundChannel__Release((void *)temp_r3, (void *)var_r28);
    }
release_voice:
    if (Voice__GetPriority(arg1) != 0) {
        SoundGroup__ReleaseVoice(arg0, (s32)arg1);
    }
    return 0;
}
