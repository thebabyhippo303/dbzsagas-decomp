/* Actor__SetBoneScale @ 0x802AE17C (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetBoneScale @ 0x802AE17C (0x9C). ProDG -O2. */
typedef struct {
    char pad[12];
    void *skeleton;
} AnimSkeleton;

typedef struct {
    char pad[132];
    AnimSkeleton *anim;
} ActorBones;

extern float Script__PopFloat(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern ActorBones *Script__PopActor(void *script, void *context, int zero);
extern int Skeleton__FindBoneByName(void *skeleton, void **bone, char *name);
extern void Bone__SetOpacity(void *bone, float opacity);
extern void fn_80184430(char *text);

void Actor__SetBoneScale(void *script, void *context) {
    int owned;
    void *bone;
    float scale = Script__PopFloat(script, context);
    char *name = Script__PopString(script, context, &owned);
    ActorBones *actor = Script__PopActor(script, context, 0);
    Skeleton__FindBoneByName(actor->anim->skeleton, &bone, name);
    Bone__SetOpacity(bone, scale);
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
