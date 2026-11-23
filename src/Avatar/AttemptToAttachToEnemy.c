/* Avatar__AttemptToAttachToEnemy @ 0x8003AC2C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Script__PopInt(void *script, void *context);
void Script__PushInt(void *script, void *context, s32 value);
void *Game__FindNearestEligibleAvatar(void *avatar);
s32 Avatar__StartAnimationImpl(void *avatar, u16 anim, s32 a, s32 b, s32 c, s32 d);

void Avatar__AttemptToAttachToEnemy(void *arg0, void *arg1) {
    s32 flag;
    s32 result;
    void *avatar;
    void *obj;
    void *vtbl;

    avatar = Script__PopInt(arg0, arg1);
    result = 0;
    obj = M2C_FIELD(avatar, void **, 0x7CC);
    vtbl = M2C_FIELD(obj, void **, 4);
    M2C_FIELD(vtbl, void (**)(void *, s32 *), 0x14)((char *)obj + M2C_FIELD(vtbl, s16 *, 0x10), &flag);
    if (flag != 0) {
        result = 1;
        Avatar__StartAnimationImpl(Game__FindNearestEligibleAvatar(avatar), 0x600, 1, 0, 0, 1);
    }
    Script__PushInt(arg0, arg1, result);
}
