/* FmvQueue__CreatePlayer @ 0x801DA440 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

f32 Audio__GetMasterSfxVolume(void *);
void Audio__SuspendForMovie(void *);
void *FmvPlayer__Construct(void *);
void FmvPlayer__Destroy(void *, s32);
void *FmvPlayer__Initialize(void *, s32, s32, f32);
void *Mem__New(s32);
extern void *lbl_803DCC20 __attribute__((section(".sdata")));
extern s32 lbl_803DCC98 __attribute__((section(".sdata")));

s32 FmvQueue__CreatePlayer(void **out, s32 arg) {
    void *player;
    void *init;
    f32 volume;
    Audio__SuspendForMovie(lbl_803DCC20);
    player = FmvPlayer__Construct(Mem__New(0x80));
    *out = player;
    if (player == 0) {
        return 0;
    }
    volume = Audio__GetMasterSfxVolume(lbl_803DCC20);
    init = FmvPlayer__Initialize(player, lbl_803DCC98, arg, volume);
    if (init == 0) {
        if (*out != 0) {
            FmvPlayer__Destroy(*out, 3);
        }
        *out = init;
        return 0;
    }
    return 1;
}
