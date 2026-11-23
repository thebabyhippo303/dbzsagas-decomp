/* SoundGroup__ReclaimVoice @ 0x8019DB0C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void SoundGroup__ReleaseVoice(void *, s32);
s32 fn_8019D0A0(s32);
s32 fn_8019DBD0(void *, s32);
M2C_UNK fn_8019CB8C(s32, s32);

s32 SoundGroup__ReclaimVoice(void *arg0, s32 arg1) {
    s32 voice;
    register void *group;
    void *group_b;
    void *base;
    void *base_b;

    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) return 0;
    {
    group = M2C_FIELD(arg0, void **, 0x44);
    base = *(void **)group;
    voice = M2C_FIELD(base, s32 (**)(void *, void *, s32, s32), 0xC)((char *)group + M2C_FIELD(base, s16 *, 8), M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, s32 *, 0x48), arg1);
    fn_8019DBD0(arg0, voice);
    if (voice == 0) return 0;
    {
    if (fn_8019D0A0(voice) != 0) {
        SoundGroup__ReleaseVoice(arg0, voice);
    } else {
        base_b = M2C_FIELD(arg0, void **, 0);
        group_b = M2C_FIELD(base_b, void **, 0x60);
        fn_8019CB8C(voice, M2C_FIELD(group_b, s32 (**)(void *), 0x4C)((char *)base_b + M2C_FIELD(group_b, s16 *, 0x48)));
    }
    return 1;
    }
    }
}
