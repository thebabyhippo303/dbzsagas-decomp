/* Avatar__StartFlyingImpl @ 0x800A5CE8 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__StartFlyingImpl @ 0x800A5CE8 (0x1C). */
typedef struct {
    char pad[0x6C];
    float speed;
} FlightMovement;

typedef struct {
    FlightMovement *movement;
    char pad04[0x578];
    int flying;
    char pad580[0x0C];
    int state;
} StartFlyingAvatar;

void Avatar__StartFlyingImpl(StartFlyingAvatar *avatar, float speed) {
    avatar->flying = 1;
    avatar->movement->speed = speed;
    avatar->state = 0;
}
