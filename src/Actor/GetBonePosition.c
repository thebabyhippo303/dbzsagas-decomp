/* Actor__GetBonePosition @ 0x802AFDB4 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern char *Script__PopString(void *, void *, s32 *);
extern void *Script__PopActor(void *, void *, s32);
extern s32 Actor__FindBoneIdByName(void *, const char *, s8 *);
extern void fn_801DD1FC(f32 *, void *, s32);
extern void Script__PushFloat(void *, void *, f32);
extern void fn_80184430(char *);

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

void Actor__GetBonePosition(void *script, void *stack) {
    struct {
        s8 bone_id;
        char pad0[7];
        Vec3 position;
        char pad1[4];
        s32 owned;
    } locals;
    char *name;
    void *actor;

    name = Script__PopString(script, stack, &locals.owned);
    actor = Script__PopActor(script, stack, 0);
    Actor__FindBoneIdByName(actor, name, &locals.bone_id);
    fn_801DD1FC(&locals.position.x, actor, (u8)locals.bone_id);
    Script__PushFloat(script, stack, locals.position.x);
    Script__PushFloat(script, stack, locals.position.y);
    Script__PushFloat(script, stack, locals.position.z);
    if ((locals.owned != 0) && (name != 0)) {
        fn_80184430(name);
    }
}
