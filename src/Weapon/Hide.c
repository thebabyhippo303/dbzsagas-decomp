/* Weapon__Hide @ 0x800DD858 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[2];
    unsigned short flags;
} WeaponFlags;

typedef struct {
    char pad[0x48];
    WeaponFlags *flags;
    char pad4[4];
    void *emitter;
} Weapon;

void Emitter__Deactivate(void *emitter);

void Weapon__Hide(Weapon *self) {
    self->flags->flags |= 1;
    if (self->emitter)
        Emitter__Deactivate(self->emitter);
}
