/* Sound__InitSfx3DAndEnv @ 0x801887FC (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *lbl_803DCC20 __attribute__((section(".sdata")));
extern void *lbl_803DCBF8 __attribute__((section(".sdata")));
extern int lbl_803DCC00 __attribute__((section(".sdata")));
extern int lbl_803DCC04 __attribute__((section(".sdata")));
extern int lbl_803DCC08 __attribute__((section(".sdata")));
extern int lbl_803DCC0C __attribute__((section(".sdata")));
extern char lbl_8033DFFC[];
extern char lbl_8033E004[];

extern void *fn_8019077C(void *audio, void *name);
extern char *Sfx3DGroup__GetName(void);
extern char *SfxEnvGroup__GetName(void);
extern void SoundGroup__Create3D(void *audio, char *groupName, void *arg, int flags);
extern int fn_80191720(void *audio, char *label, char *groupName);
extern int fn_801918B0(void *audio, char *label, char *groupName);
extern void fn_8019A9B0(int env, int other);
extern void fn_80188980(int value);

int Sound__InitSfx3DAndEnv(void *name, void *arg3d, void *argEnv) {
    void *saved3d = arg3d;
    void *savedEnv = argEnv;
    int env;

    *(void *volatile *)&lbl_803DCBF8 = fn_8019077C(*(void *volatile *)&lbl_803DCC20, name);
    SoundGroup__Create3D(*(void *volatile *)&lbl_803DCC20, Sfx3DGroup__GetName(), saved3d, 3);
    SoundGroup__Create3D(*(void *volatile *)&lbl_803DCC20, SfxEnvGroup__GetName(), savedEnv, 3);
    *(int volatile *)&lbl_803DCC04 =
        fn_80191720(*(void *volatile *)&lbl_803DCC20, lbl_8033DFFC, Sfx3DGroup__GetName());
    env = fn_801918B0(*(void *volatile *)&lbl_803DCC20, lbl_8033E004, SfxEnvGroup__GetName());
    *(int volatile *)&lbl_803DCC08 = env;
    if (env != 0) {
        fn_8019A9B0(env, *(int volatile *)&lbl_803DCC00);
    }
    fn_80188980(*(int volatile *)&lbl_803DCC0C);
    if (*(void *volatile *)&lbl_803DCBF8 != 0 && *(int volatile *)&lbl_803DCC04 != 0 &&
        *(int volatile *)&lbl_803DCC08 != 0) {
        return 1;
    }
    return 0;
}
