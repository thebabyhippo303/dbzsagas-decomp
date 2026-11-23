/* MissileWeaponDefinition__Construct @ 0x800DB79C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissileWeaponDefinition__Construct @ 0x800DB79C (0x3C). ProDG -O2. */
typedef struct {
    char pad[0x54];
    void *vtbl;
} MissileWeaponDefinition;

extern void *WeaponDefinition__Construct(void *self);
extern char lbl_80333338[] __attribute__((section(".data")));

void *MissileWeaponDefinition__Construct(void *self) {
    MissileWeaponDefinition *def;
    WeaponDefinition__Construct(self);
    def = self;
    def->vtbl = lbl_80333338;
    return self;
}
