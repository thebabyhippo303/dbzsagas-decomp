/* AvatarControls__StartCoopKnockoutAnimation @ 0x800B9250 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvatarControls__StartCoopKnockoutAnimation @ 0x800B9250 (0xA4). ProDG -O2. */
typedef struct {
    char pad[0x104];
    int flags;
} CoopAvatarState;

typedef struct {
    char pad[0x84];
    CoopAvatarState *state;
} CoopAvatar;

extern void Avatar__StopPrimaryAnimationIfId(void *avatar, int id);
extern int Avatar__StartAnimationImpl(void *avatar, unsigned short anim, int a, int b, int c, int d);
extern void Avatar__SetControlCallbackState(void *avatar, void *state);
extern void Avatar__SetCoopKnockoutFlag(void *avatar, int flag);

void AvatarControls__StartCoopKnockoutAnimation(void **arg0) {
    Avatar__StopPrimaryAnimationIfId(*arg0, -1);
    ((CoopAvatar *)*arg0)->state->flags = ((CoopAvatar *)*arg0)->state->flags | 0x1000;
    ((CoopAvatar *)*arg0)->state->flags = ((CoopAvatar *)*arg0)->state->flags | 0x4000;
    ((CoopAvatar *)*arg0)->state->flags = ((CoopAvatar *)*arg0)->state->flags | 0x8000;
    Avatar__StartAnimationImpl(*arg0, 0x101, 1, 0, 0, 1);
    Avatar__SetControlCallbackState(*arg0, 0);
    Avatar__SetCoopKnockoutFlag(*arg0, 1);
}
