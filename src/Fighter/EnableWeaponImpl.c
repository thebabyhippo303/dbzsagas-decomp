/* Fighter__EnableWeaponImpl @ 0x800F0120 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x764];
    int enabled;
} Fighter;

extern void *WeaponInventory__GetSelected(void *inventory, int index);
extern void Weapon__Show(void *weapon);
extern void Weapon__Hide(void *weapon);

void Fighter__EnableWeaponImpl(Fighter *self, int enabled) {
    void *weapon;
    self->enabled = enabled;
    weapon = WeaponInventory__GetSelected((char *)self + 0x5E8, 1);
    if (weapon != 0) {
        if (enabled != 0)
            Weapon__Show(weapon);
        else
            Weapon__Hide(weapon);
    }
}
