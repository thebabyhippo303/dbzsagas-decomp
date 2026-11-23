/* WeaponDefinition__Construct @ 0x800DD324 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct WeaponDefinition {
    s32 a;
    s32 b;
    char pad[0x54 - 8];
    void *vtbl;
} WeaponDefinition;

extern char lbl_80335660[] __attribute__((section(".data")));

WeaponDefinition *WeaponDefinition__Construct(WeaponDefinition *self) {
    WeaponDefinition *p = self;
    p->vtbl = lbl_80335660;
    p->a = -1;
    p->b = 0;
    return self;
}
