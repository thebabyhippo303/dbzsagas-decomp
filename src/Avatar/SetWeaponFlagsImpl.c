/* Avatar__SetWeaponFlagsImpl @ 0x8009E138 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetWeaponFlagsImpl @ 0x8009E138 (0x4C). ProDG -O2. */
typedef struct {
    char pad[0x44];
    unsigned flags;
} WeaponDef;

typedef struct {
    WeaponDef *def;
} SelectedWeapon;

typedef struct {
    char pad[0x50];
    int inventory;
} AvatarWeapons;

extern SelectedWeapon *WeaponInventory__GetSelected(void *inventory, int which);

void Avatar__SetWeaponFlagsImpl(AvatarWeapons *self, unsigned flags) {
    SelectedWeapon *weapon = WeaponInventory__GetSelected(&self->inventory, 1);
    if (weapon != 0)
        weapon->def->flags |= flags;
}
