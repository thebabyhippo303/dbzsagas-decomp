/* WeaponInventory__GetSelectedId @ 0x800DF120 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: WeaponInventory__GetSelectedId @ 0x800DF120 (0x3C). ProDG -O2. */
typedef struct {
    int id;
} WeaponId;

typedef struct {
    WeaponId *weapon;
} SelectedWeapon;

extern SelectedWeapon *WeaponInventory__GetSelected(void *inventory, int flag);

int WeaponInventory__GetSelectedId(void *inventory) {
    SelectedWeapon *selected = WeaponInventory__GetSelected(inventory, 1);
    if (!selected)
        return 0x5C;
    return selected->weapon->id;
}
