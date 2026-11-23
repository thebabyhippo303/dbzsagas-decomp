/* MissileWeapon__Construct @ 0x800DC1B0 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* MissileWeapon__Construct @ 0x800DC1B0 */

typedef struct MissileWeaponDef {
    char pad[0x44];
    unsigned flags;
    char pad2[0xA8 - 0x48];
    void *asset;
} MissileWeaponDef;

typedef struct MissileWeapon {
    MissileWeaponDef *def;
    char pad[0x48 - 4];
    char *attach;
    char pad2[0x50 - 0x4C];
    void *emitter;
    char pad3[0x64 - 0x54];
    void *info;
} MissileWeapon;

extern char lbl_80333300[] __attribute__((section(".data")));
extern void Weapon__Construct(void *self);
extern void *Emitter__CreateFromAsset(void *asset, void *a, void *b, int c, int d, int e, int f, int g, int h);
extern int Emitter__Deactivate(unsigned int handle);

MissileWeapon *MissileWeapon__Construct(MissileWeapon *self) {
    MissileWeaponDef *def;
    void *asset;
    void *emitter;

    Weapon__Construct(self);
    self->info = lbl_80333300;
    def = self->def;
    asset = def->asset;
    if (asset != 0 && (def->flags & 0x800) != 0) {
        emitter = Emitter__CreateFromAsset(asset, self->attach + 64, 0, 0, 0, 0, 0, 0, -1);
        self->emitter = emitter;
        if (emitter != 0) {
            Emitter__Deactivate((unsigned int)emitter);
        }
    }
    return self;
}
