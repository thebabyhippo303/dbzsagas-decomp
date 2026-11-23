/* Avatar__CreateEmitterImpl @ 0x8009CC4C (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__CreateEmitterImpl @ 0x8009CC4C (0x9C). ProDG -O2. */
typedef struct AvatarEmitterState {
    char pad[8];
    void *assetPath;
} AvatarEmitterState;

extern void Avatar__BuildEffectAssetPath(void *self, const char *suffix);
extern void *Emitter__CreateFromAsset(void *asset, void *a, void *b, int c,
                                      int d, int e, int f, int g, int h);

void *Avatar__CreateEmitterImpl(AvatarEmitterState *self, const char *name,
                                void *arg2, void *arg3, void *arg4,
                                void *arg5) {
    void *emitter;

    Avatar__BuildEffectAssetPath(self, name);
    emitter = Emitter__CreateFromAsset(self->assetPath, arg2, arg3, arg4,
                                       0, 0, (int)arg5, 0, -1);
    if (emitter == 0)
        emitter = Emitter__CreateFromAsset((void *)name, arg2, arg3, arg4,
                                           0, 0, (int)arg5, 0, -1);
    return emitter;
}
