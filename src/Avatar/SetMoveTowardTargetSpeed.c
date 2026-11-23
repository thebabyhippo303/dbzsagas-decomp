/* Avatar__SetMoveTowardTargetSpeed @ 0x80089B9C (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetMoveTowardTargetSpeed @ 0x80089B9C (0x14). ProDG -O2. */
typedef struct {
    char pad[0x564];
    volatile int state;
    volatile float speed;
} MoveTowardTarget;

typedef struct {
    char pad[0x7C];
    MoveTowardTarget *move_toward_target;
} AvatarMoveToward;

void Avatar__SetMoveTowardTargetSpeed(AvatarMoveToward *avatar, float speed) {
    MoveTowardTarget *move = avatar->move_toward_target;
    move->speed = speed;
    move->state = 0;
}
