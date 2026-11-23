/* Pickup__SetStationaryImpl @ 0x800F16C0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__SetStationaryImpl @ 0x800F16C0 (0x64). ProDG -O2. */
typedef struct {
    char pad[0x104];
    unsigned flags;
} PickupInstance;

typedef struct {
    char pad0[0x84];
    PickupInstance *instance;
    char pad88[0x508 - 0x88];
    float saved;
    char pad50c[0x51C - 0x50C];
    int zero_when_moving;
    char pad520[0x550 - 0x520];
    float speed;
} PickupStationary;

extern char lbl_80320000[];
extern void Floater__SetStationaryImpl(void *self, int stationary);

void Pickup__SetStationaryImpl(PickupStationary *self, int stationary) {
    Floater__SetStationaryImpl(self, stationary);
    if (stationary) {
        self->speed = *(float *)(lbl_80320000 + 0x40EC);
    } else {
        self->zero_when_moving = stationary;
        self->speed = self->saved;
        self->instance->flags &= ~0x10000000u;
    }
}
