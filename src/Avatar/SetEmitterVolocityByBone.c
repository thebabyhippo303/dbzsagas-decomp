/* Avatar__SetEmitterVolocityByBone @ 0x8003A970 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetEmitterVolocityByBone @ 0x8003A970 (0x138). */
typedef struct Vec3f {
    float x;
    float y;
    float z;
} Vec3f;

typedef struct SetEmitterLocals {
    Vec3f vel;
    char pad0[4];
    Vec3f before;
    char pad1[4];
    Vec3f after;
    char pad2[4];
    unsigned char bone_id;
    char pad3[7];
    Vec3f v;
    char pad4[4];
    int owned;
} SetEmitterLocals;

extern void *Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern int Actor__FindBoneIdByName(void *actor, const char *name, unsigned char *bone_id);
extern void fn_801DD1FC(Vec3f *out, void *actor, int bone_id);
extern void fn_801DD1B4(Vec3f *out, void *actor, unsigned char bone_id);
extern void fn_802244AC(void *emitter, Vec3f *vel);
extern void fn_80184430(char *text);

void Avatar__SetEmitterVolocityByBone(void *script, void *context) {
    SetEmitterLocals l;
    char *name;
    void *emitter;
    void *actor;

    actor = Script__PopInt(script, context);
    emitter = Script__PopInt(script, context);
    name = Script__PopString(script, context, &l.owned);
    Actor__FindBoneIdByName(actor, name, &l.bone_id);
    fn_801DD1FC(&l.v, actor, l.bone_id);
    l.before = l.v;
    fn_801DD1B4(&l.v, actor, l.bone_id);
    l.after = l.v;
    l.v.x = l.after.x - l.before.x;
    l.v.y = l.after.y - l.before.y;
    l.v.z = l.after.z - l.before.z;
    l.vel = l.v;
    fn_802244AC(emitter, &l.vel);
    if (l.owned != 0 && name != 0) {
        fn_80184430(name);
    }
}
