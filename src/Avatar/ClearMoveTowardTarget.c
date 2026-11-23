/* Avatar__ClearMoveTowardTarget @ 0x800347F0 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ClearMoveTowardTarget @ 0x800347F0 (0x4C). ProDG -O2. */
typedef struct {
    char pad0[0x71C];
    int mode;
    char pad1[0x7E4 - 0x720];
    int active;
} AvatarMoveTarget;

extern AvatarMoveTarget *Script__PopInt(void *script, void *context);
extern void Avatar__ResetMoveTowardTargetControl(void *target);
extern void Avatar__ResetMoveTowardTargetSpeed(void *target);

void Avatar__ClearMoveTowardTarget(void *script, void *context) {
    AvatarMoveTarget *avatar = Script__PopInt(script, context);
    if (avatar->mode != 5)
        return;
    if (avatar->active != 0)
        Avatar__ResetMoveTowardTargetControl((char *)avatar + 0x94C);
    else
        Avatar__ResetMoveTowardTargetSpeed((char *)avatar + 0xB04);
}
