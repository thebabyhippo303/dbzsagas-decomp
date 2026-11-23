/* Pickup__EnableImpl @ 0x800F29A0 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__EnableImpl @ 0x800F29A0 (0x84). ProDG -O2. */
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

extern float lbl_8032418C __attribute__((section(".data")));
extern void Emitter__Activate(void *emitter);
extern void Actor__ToProtagonistCastImpl(void *self);
extern void Instance__SetHolographic(void *instance, int flag);
extern void Simple__SetModelHidden(void *self, int flag);

void Pickup__EnableImpl(Pickup *self) {
    if (self->emitter != 0) {
        Emitter__Activate(self->emitter);
    }
    Actor__ToProtagonistCastImpl(self);
    Instance__SetHolographic(self->sub, 0);
    self->vtable->setEnabled((char *)self + self->vtable->adjust, 0);
    Simple__SetModelHidden(self, 0);
    self->sub->value = lbl_8032418C;
}
