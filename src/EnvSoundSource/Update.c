/* EnvSoundSource__Update @ 0x8019A654 (size: 0x1A8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 rand(void);
s32 SfxPlayer__SetVoiceVolume(s32, s32, f32);
s32 SfxPlayer__SetVoicePitch(s32, void *, f32);
s32 Sfx3DPlayer__SetVoiceMinDistanceOffset(s32, void *, f32);
s32 Sfx3DPlayer__SetVoiceMaxDistanceOffset(s32, void *, f32);
s32 SfxPlayer__StartVoice(s32, void *);
s32 SfxPlayer__IsVoiceLooping(s32, void *);
void VoiceHandle__Destroy(void *, s32);
M2C_UNK Sfx3DPlayer__SetVoiceStaticPosition(s32, s32, s32);
M2C_UNK Sfx3DPlayer__SetVoicePosition(s32, s32, s32);
typedef s32 (*CountFn)(void *);
typedef s32 (*PickFn)(void *, s32);
typedef s32 (*PlayFn)(void *, s32, s32, void *);
typedef s32 (*MakeFn)(void *, void *);
typedef void (*StopFn)(void *);

void EnvSoundSource__Update(void *arg0, void *arg1, void *arg2, s32 arg3) {
    void *vt;
    void *tgt;
    s32 r;
    s32 handle;
    s32 looping;
    s32 pick;
    void *pos;
    s32 has;
    void *vt2;
    void *vt3;
    void *vt4;

    if (M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        return;
    }
    r = rand();
    pos = (char *) arg0 + 0x38;
    vt = M2C_FIELD(arg1, void **, 0x60);
    r = r % M2C_FIELD(vt, CountFn *, 0xB4)((char *) arg1 + M2C_FIELD(vt, s16 *, 0xB0));
    vt2 = M2C_FIELD(arg1, void **, 0x60);
    pick = M2C_FIELD(vt2, PickFn *, 0xBC)((char *) arg1 + M2C_FIELD(vt2, s16 *, 0xB8), r);
    tgt = M2C_FIELD(arg0, void **, 0x34);
    vt3 = *(void **) tgt;
    if (M2C_FIELD(vt3, PlayFn *, 0x14)((char *) tgt + M2C_FIELD(vt3, s16 *, 0x10), pick, arg3, pos) == 0) {
        has = (M2C_FIELD(arg0, s32 *, 0x20) != 0);
        if (has != 0) {
            vt = M2C_FIELD(arg0, void **, 0x28);
            M2C_FIELD(vt, StopFn *, 0x1C)((char *) arg0 + M2C_FIELD(vt, s16 *, 0x18));
        }
        return;
    }
    vt = M2C_FIELD(arg2, void **, 0x3C);
    handle = M2C_FIELD(vt, MakeFn *, 0x14)((char *) arg2 + M2C_FIELD(vt, s16 *, 0x10), arg0);
    M2C_FIELD(arg0, s32 *, 0x20) = handle;
    SfxPlayer__SetVoiceVolume((s32) arg2, handle, M2C_FIELD(arg0, f32 *, 0x50));
    SfxPlayer__SetVoicePitch((s32) arg2, (void *) M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x54));
    Sfx3DPlayer__SetVoiceStaticPosition((s32) arg2, M2C_FIELD(arg0, s32 *, 0x20), (s32) pos);
    Sfx3DPlayer__SetVoicePosition((s32) arg2, M2C_FIELD(arg0, s32 *, 0x20), (s32) ((char *) arg0 + 0x44));
    Sfx3DPlayer__SetVoiceMinDistanceOffset((s32) arg2, (void *) M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x58));
    Sfx3DPlayer__SetVoiceMaxDistanceOffset((s32) arg2, (void *) M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x5C));
    SfxPlayer__StartVoice((s32) arg2, (void *) M2C_FIELD(arg0, s32 *, 0x20));
    looping = SfxPlayer__IsVoiceLooping((s32) arg2, (void *) M2C_FIELD(arg0, s32 *, 0x20));
    if (looping == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            VoiceHandle__Destroy((void *) M2C_FIELD(arg0, s32 *, 0x20), 3);
        }
        M2C_FIELD(arg0, s32 *, 0x20) = looping;
    }
}
