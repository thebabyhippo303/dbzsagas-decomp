/* Pickup__DisableImpl @ 0x800F2904 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__DisableImpl @ 0x800F2904 (0x9C). ProDG -O2. */
typedef struct {
    char pad[0x60];
    short adjust;
    char pad2[2];
    void (*setEnabled)(void *self, int flag);
} PickupVtable;

typedef struct {
    char pad[0x8C];
    float value;
} PickupSub;

typedef struct {
    char pad[0x34];
    PickupVtable *vtable;
    char pad2[0x84 - 0x38];
    PickupSub *sub;
    char pad3[0x604 - 0x88];
    void *emitter;
} Pickup;

extern float lbl_80324188 __attribute__((section(".data")));
extern int Emitter__Deactivate(void *emitter);
extern void Actor__ToNonProtagonistCastImpl(void *self);
extern void Instance__SetHolographic(void *instance, int flag);
extern void Simple__SetModelHidden(void *self, int flag);

void Pickup__DisableImpl(Pickup *self, float duration) {
    if (self->emitter != 0) {
        Emitter__Deactivate(self->emitter);
    }
    Actor__ToNonProtagonistCastImpl(self);
    Instance__SetHolographic(self->sub, 1);
    if (duration == lbl_80324188) {
        self->vtable->setEnabled((char *)self + self->vtable->adjust, 1);
        Simple__SetModelHidden(self, 1);
        return;
    }
    self->sub->value = duration;
}
