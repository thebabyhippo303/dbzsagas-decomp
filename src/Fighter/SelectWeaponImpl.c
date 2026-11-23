/* Fighter__SelectWeaponImpl @ 0x800F00FC (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__SelectWeaponImpl @ 0x800F00FC (0x24). */
typedef struct {
    char pad[0x5E8];
    char inventory[1];
} FighterWithInventory;

extern void WeaponInventory__SelectById(void *inventory, int id);

void Fighter__SelectWeaponImpl(FighterWithInventory *fighter, int id) {
    WeaponInventory__SelectById(fighter->inventory, id);
}
