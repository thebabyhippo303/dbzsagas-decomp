/* BackgroundExp__DisableCharacter @ 0x8003D880 (size: 0x100, .text, ProDG 3.9.3 -O2) - MATCHED */
/* BackgroundExp__DisableCharacter @ 0x8003D880 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3f;

typedef struct {
    int x;
    int y;
    int z;
} Vec3i;

extern void *Script__PopInt(void *script, void *context);
extern void Actor__ToNonProtagonistCastImpl(void *actor);
extern void Avatar__SetAiPrefixedName(void *avatar, char *name);
extern void Avatar__StartFlyingImpl(void *ctrl, float speed);
extern int Avatar__StartAnimationImpl(void *avatar, unsigned short anim, int a, int b, int c, int d);
extern float lbl_80311B14 __attribute__((section(".data")));

void BackgroundExp__DisableCharacter(void *script, void *context) {
    void *actor;
    void *avatar;
    volatile Vec3f unused;
    Vec3i copy;
    Vec3i tmp;
    volatile Vec3f *up;
    Vec3i *src;
    float speed;
    char *name;

    actor = Script__PopInt(script, context);
    avatar = Script__PopInt(script, context);
    up = &unused;
    speed = lbl_80311B14;
    up->x = speed;
    up->z = speed;
    up->y = speed;
    src = *(Vec3i **)((char *)actor + 0x160);
    tmp = *src;
    copy = tmp;
    name = *(char **)(*(char **)((char *)actor + 0x84) + 0x94) + 32;
    Avatar__SetAiPrefixedName(avatar, name);
    Actor__ToNonProtagonistCastImpl(actor);
    *(Vec3i *)((char *)avatar + 56) = copy;
    if (*(int *)((char *)avatar + 0x71C) == 5) {
        Avatar__StartFlyingImpl(*(void **)((char *)avatar + 0x7FC), speed);
        Avatar__StartAnimationImpl(avatar, 0x500, 1, 1, 0, 1);
    }
}
