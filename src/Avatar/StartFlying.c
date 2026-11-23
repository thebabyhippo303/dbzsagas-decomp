/* Avatar__StartFlying @ 0x800334E8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__StartFlying @ 0x800334E8 (0x54). ProDG -O2. */
typedef struct AvatarFly {
    char pad[0x71C];
    int state;
    char pad2[0x7FC - 0x720];
    void *ctrl;
} AvatarFly;

extern AvatarFly *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Avatar__StartFlyingImpl(void *ctrl, float speed);

void Avatar__StartFlying(void *script, void *context) {
    AvatarFly *avatar = Script__PopInt(script, context);
    float speed = Script__PopFloat(script, context);
    if (avatar->state == 5)
        Avatar__StartFlyingImpl(avatar->ctrl, speed);
}
