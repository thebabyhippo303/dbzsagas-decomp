/* MissionProgress__UpdateListenerStates @ 0x80119B04 (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionProgress__UpdateListenerStates @ 0x80119B04 (0x160). ProDG -O2. */
typedef int s32;
typedef short s16;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern void *Game__GetPlayerImpl(void *, int);
extern s32 Avatar__GetInputState(void *);
extern s32 AvatarControls__IsActionReleasedImpl(s32, s32, s32);
extern void MissionProgress__PrepareListenersForActivation(void);
extern void MissionProgress__ActivateAllListeners(void);
extern s32 MissionProgress__GetListenerCount(void);
extern void MissionProgressListener__Activate(void *);
extern void MissionProgressListener__Deactivate(void *);

extern void *lbl_803DC3C0 __attribute__((section(".sdata")));
extern void *lbl_803DC70C __attribute__((section(".sdata")));
extern char *lbl_80394194 __attribute__((section(".data")));

void MissionProgress__UpdateListenerStates(void) {
    void *temp_r9;
    void *temp_r11;
    void *temp_r9_2;
    s32 cnt;
    s32 off;

    if (AvatarControls__IsActionReleasedImpl(Avatar__GetInputState(Game__GetPlayerImpl(lbl_803DC3C0, 0)), 8, 1) != 0) {
        MissionProgress__PrepareListenersForActivation();
        MissionProgress__ActivateAllListeners();
    } else if (Game__GetPlayerImpl(lbl_803DC3C0, 1) != NULL) {
        if (AvatarControls__IsActionReleasedImpl(Avatar__GetInputState(Game__GetPlayerImpl(lbl_803DC3C0, 1)), 8, 1) != 0) {
            MissionProgress__PrepareListenersForActivation();
            MissionProgress__ActivateAllListeners();
        }
    }
    temp_r9 = M2C_FIELD(lbl_803DC70C, void **, 0x19C);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)((char *)lbl_803DC70C + M2C_FIELD(temp_r9, s16 *, 0x3A0)) != 0) {
        for (cnt = 0, off = 0; cnt < MissionProgress__GetListenerCount(); cnt++) {
            MissionProgressListener__Deactivate(*(void **)(lbl_80394194 + off));
            off += 4;
        }
    } else {
        for (cnt = 0, off = 0; cnt < MissionProgress__GetListenerCount(); cnt++) {
            MissionProgressListener__Activate(*(void **)(lbl_80394194 + off));
            off += 4;
        }
    }
    for (cnt = 0, off = 0; cnt < MissionProgress__GetListenerCount(); cnt++) {
        temp_r11 = *(void **)(lbl_80394194 + off);
        off += 4;
        temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x64);
        M2C_FIELD(temp_r9_2, void (**)(void *), 0xC)((char *)temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 8));
    }
}
