/* Avatar__LockToClosestEnemy @ 0x8003A440 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
typedef struct { s32 x, y, z; } Vec3i;
typedef struct { f32 x, y, z; } Vec3f;
typedef struct { char pad[0x18]; f32 x, y, z; } VecOff;
extern void *Script__PopInt(void *script, void *context);
extern f32 Script__PopFloat(void *script, void *context);
extern void Script__PushInt(void *script, void *context, s32 value);
extern void Avatar__FindAndSetLockActor(void *self, Vec3i *pos, Vec3f *dir, f32 a, f32 b);
void Avatar__LockToClosestEnemy(void *script, void *context) {
    Vec3i pos;
    Vec3f dir;
    f32 second, range, x, y, z;
    void *avatar, *other;
    VecOff *off;
    avatar = Script__PopInt(script, context);
    range = Script__PopFloat(script, context);
    second = Script__PopFloat(script, context);
    other = *(void **)((char *)avatar + 0x2B8);
    if ((other == 0) || (*(s32 *)((char *)avatar + 0x7E4) == *(s32 *)((char *)other + 0x7E4))) {
        off = (VecOff *)((char *)avatar + 0x44);
        pos = *(Vec3i *)((char *)avatar + 0x38);
        x = off->x;
        y = off->y;
        z = off->z;
        dir.x = x;
        dir.y = y;
        dir.z = z;
        Avatar__FindAndSetLockActor(avatar, &pos, &dir, range, second);
    }
    Script__PushInt(script, context, (s32)*(void **)((char *)avatar + 0x2B8));
}
