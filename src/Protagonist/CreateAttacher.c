/* Protagonist__CreateAttacher @ 0x802AE448 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float Script__PopFloat(void *self, void *ctx);
extern char *Script__PopString(void *self, void *ctx, int *owned);
extern void Script__PushInt(void *self, void *ctx, int value);
extern int Skeleton__FindBoneByName(void *skel, void **outBone, char *name);
extern void fn_80184430(char *text);
extern int fn_802165F4(char *name, void *actor, void *bone, float a, float b);
extern float lbl_80351DB8 __attribute__((section(".data")));

void Protagonist__CreateAttacher(void *self, void *ctx) {
    void *bone;
    int ownName;
    int ownBone;
    float scale;
    char *name;
    char *boneName;
    void *actor;

    scale = Script__PopFloat(self, ctx);
    name = Script__PopString(self, ctx, &ownName);
    boneName = Script__PopString(self, ctx, &ownBone);
    actor = *(void **)((char *)self + 0xC8);
    Skeleton__FindBoneByName(*(void **)((char *)(*(void **)((char *)actor + 0x84)) + 0xC), &bone, boneName);
    Script__PushInt(self, ctx, fn_802165F4(name, actor, bone, lbl_80351DB8, scale));
    if (ownName != 0 && name != 0) {
        fn_80184430(name);
    }
    if (ownBone != 0 && boneName != 0) {
        fn_80184430(boneName);
    }
}
