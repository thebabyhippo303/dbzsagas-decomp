/* Actor__GetBone @ 0x802AE0F4 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__GetBone @ 0x802AE0F4 (0x88). ProDG -O2. */
typedef struct ActorSkeleton {
    char pad[0x0C];
    void *skeleton;
} ActorSkeleton;

typedef struct Actor {
    char pad[0x84];
    ActorSkeleton *skeleton;
} Actor;

extern char *Script__PopString(void *script, void *context, int *owned);
extern Actor *Script__PopActor(void *script, void *context, int null_if_zero);
extern int Skeleton__FindBoneByName(void *skeleton, void **bone, char *name);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(void *ptr);

void Actor__GetBone(void *script, void *context) {
    int owned;
    void *bone;
    char *name = Script__PopString(script, context, &owned);
    Actor *actor = Script__PopActor(script, context, 0);

    Skeleton__FindBoneByName(actor->skeleton->skeleton, &bone, name);
    Script__PushInt(script, context, (int)bone);
    if (owned && name != 0)
        fn_80184430(name);
}
