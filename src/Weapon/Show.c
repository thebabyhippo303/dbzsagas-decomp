/* Weapon__Show @ 0x800DD894 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct WeaponObj {
    char pad[44];
    float src;
    float dst;
} WeaponObj;

typedef struct Weapon {
    WeaponObj *obj;
    char pad[68];
    unsigned short *flags;
    char pad2[4];
    void *emitter;
    char pad3[12];
    int shown;
} Weapon;

extern void Emitter__Activate(void *emitter);

void Weapon__Show(Weapon *self) {
    unsigned short *flags;
    void *emitter;

    self->obj->dst = self->obj->src;
    flags = self->flags;
    flags[1] &= (unsigned short)~1u;
    emitter = self->emitter;
    if (emitter != 0) {
        Emitter__Activate(emitter);
    }
    self->shown = 1;
}
