/* Pickup__SetDragonBallType @ 0x8002BFF8 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__SetDragonBallType @ 0x8002BFF8 (0x3C). */
typedef struct {
    char pad[0x5EC];
    int dragon_ball_type;
} PickupInstance;

typedef struct {
    char pad[0xC8];
    PickupInstance *instance;
} Pickup;

extern int Script__PopInt(void *self, void *context);

void Pickup__SetDragonBallType(Pickup *pickup, void *context) {
    PickupInstance *instance = pickup->instance;
    int type = Script__PopInt(pickup, context) + 1;
    if (instance != 0)
        instance->dragon_ball_type = type;
}
