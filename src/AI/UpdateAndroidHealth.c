/* AI__UpdateAndroidHealth @ 0x80068654 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__AdvanceAndroidHealthSequence @ 0x80068654 (0x120). ProDG -O2. */
typedef int s32;
typedef float f32;

extern char lbl_8031EA88[] __attribute__((section(".data")));
extern f32 lbl_8031EA98 __attribute__((section(".data")));
extern s32 lbl_803DC3C0 __attribute__((section(".sdata")));

extern void AI__ResolveTargetPose(void *out, void *self);
extern void Avatar__ClearPurpleSpiralEffects(void *self);
extern void AI__SetState(void *self, s32 state);
extern void *Game__GetPlayerImpl(s32 game, s32 index);
extern s32 Game__GetConfiguredPlayerCount(s32 game);
extern void Avatar__SetAnchorActor(void *actor, void *anchor);
extern void Avatar__SetAnimScriptVarFloat(void *actor, char *name, s32 flag, f32 value);
extern s32 AI__HasPrimaryTimerElapsed(void *self, f32 seconds);

void AI__AdvanceAndroidHealthSequence(void *arg0) {
    f32 pose[8];
    s32 i;
    void *player;

    AI__ResolveTargetPose(pose, arg0);
    Avatar__ClearPurpleSpiralEffects(arg0);
    switch (*(s32 *)((char *)arg0 + 0x7C)) {
    case 0:
        AI__SetState(arg0, 1);
        i = 0;
        while (i < Game__GetConfiguredPlayerCount(lbl_803DC3C0)) {
            player = Game__GetPlayerImpl(lbl_803DC3C0, i);
            if (*(s32 *)((char *)player + 0x2BC) == *(s32 *)((char *)arg0 + 0x390)) {
                Avatar__SetAnchorActor(player, 0);
            }
            i++;
        }
        *(s32 *)((char *)arg0 + 0x380) = 44;
        *(s32 *)((char *)arg0 + 0x41C) = 48;
        Avatar__SetAnimScriptVarFloat(*(void **)((char *)arg0 + 0x390), lbl_8031EA88, 1,
                                      *(f32 *)((char *)*(void **)((char *)arg0 + 0x390) + 0x288));
        return;
    case 1:
        AI__SetState(arg0, 2);
        return;
    case 2:
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EA98) != 0) {
            if (*(s32 *)((char *)arg0 + 0x560) == 0) {
                *(s32 *)((char *)arg0 + 0x380) = 0;
                AI__SetState(arg0, 3);
            }
        }
        return;
    }
}
