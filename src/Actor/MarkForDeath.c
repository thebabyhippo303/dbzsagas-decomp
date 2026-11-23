/* Actor__MarkForDeath @ 0x801DC888 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_80343B54 __attribute__((section(".data")));
typedef struct {
    char pad[0x48];
    short this_adjust;
    short pad2;
    int (*mark)(void *self);
} ActorDeathVTable;
typedef struct {
    char pad[0x34];
    ActorDeathVTable *vtable;
    char pad2[0x90 - 0x38];
    int result;
    char pad3[0x118 - 0x94];
    float death_time;
} ActorDeath;

void Actor__MarkForDeath(ActorDeath *self, float time) {
    ActorDeathVTable *vtable;
    if (time <= lbl_80343B54) goto invoke;
    self->death_time = time;
    return;
invoke:
    vtable = self->vtable;
    self->result = vtable->mark((char *)self + vtable->this_adjust);
}
