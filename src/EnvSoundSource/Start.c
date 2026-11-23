/* EnvSoundSource__Start @ 0x8019A428 (size: 0x1C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SfxPlayer__SetVoiceVolume(s32, s32, f32);
s32 SfxPlayer__SetVoicePitch(s32, void *, f32);
s32 Sfx3DPlayer__SetVoiceMinDistanceOffset(s32, void *, f32);
s32 Sfx3DPlayer__SetVoiceMaxDistanceOffset(s32, void *, f32);
s32 SfxPlayer__StartVoice(s32, void *);
s32 SfxPlayer__IsVoiceLooping(s32, void *);
void Debug__FormatMessage(char *, ...);
void VoiceHandle__Destroy(void *, s32);
s32 Random__IntRange(s32, s32);
void Sfx3DPlayer__SetVoiceStaticPosition(s32, s32, void *);
M2C_UNK fn_80198968(s32, s32, f32);
extern char lbl_8033FB08[] __attribute__((section(".data")));
void EnvSoundSource__Start(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 var_r9;
    s32 var_r9_2;
    s32 var_r9_3;
    void *temp_r9;
    void *temp_r9_2;

    var_r9 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        var_r9 = 0;
    }
    if (var_r9 != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x18));
    }
    temp_r9_2 = M2C_FIELD(arg1, void **, 0x3C);
    temp_r3 = M2C_FIELD(temp_r9_2, s32 (**)(void *, void *), 0x14)(arg1 + M2C_FIELD(temp_r9_2, s16 *, 0x10), arg0);
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r3;
    SfxPlayer__SetVoiceVolume((s32) arg1, temp_r3, M2C_FIELD(arg0, f32 *, 0x44));
    SfxPlayer__SetVoicePitch((s32) arg1, (void *) M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x48));
    Sfx3DPlayer__SetVoiceMinDistanceOffset((s32) arg1, (void *) M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x4C));
    Sfx3DPlayer__SetVoiceMaxDistanceOffset((s32) arg1, (void *) M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x50));
    Sfx3DPlayer__SetVoiceStaticPosition((s32) arg1, M2C_FIELD(arg0, s32 *, 0x20), arg0 + 0x34);
    fn_80198968((s32) arg1, M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x40));
    SfxPlayer__StartVoice((s32) arg1, (void *) M2C_FIELD(arg0, s32 *, 0x20));
    if (SfxPlayer__IsVoiceLooping((s32) arg1, (void *) M2C_FIELD(arg0, s32 *, 0x20)) == 0) {
        var_r9_2 = 0;
        if (((s32) M2C_FIELD(arg0, s32 *, 0x54) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x58) != 0)) {
            var_r9_2 = 1;
        }
        if (var_r9_2 == 0) {
            M2C_FIELD(arg0, s32 *, 0x54) = 0x1388;
            M2C_FIELD(arg0, s32 *, 0x58) = 0x2710;
            Debug__FormatMessage(lbl_8033FB08, (s32) arg0, 0x1388, 0x2710);
        }
    }
    temp_r3_2 = SfxPlayer__IsVoiceLooping((s32) arg1, (void *) M2C_FIELD(arg0, s32 *, 0x20));
    if (temp_r3_2 == 0) {
        temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_r3_3 != 0) {
            VoiceHandle__Destroy((void *) temp_r3_3, 3);
        }
        M2C_FIELD(arg0, s32 *, 0x20) = temp_r3_2;
    }
    var_r9_3 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x54) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x58) != 0)) {
        var_r9_3 = 1;
    }
    if (var_r9_3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (arg2 + Random__IntRange(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s32 *, 0x58)));
    }
}
