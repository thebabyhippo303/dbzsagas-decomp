/* Fighter__AddWeaponImpl @ 0x800F00D8 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__AddWeaponImpl @ 0x800F00D8 (0x24). ProDG -O2. */
typedef struct {
    char pad[0x5E8];
    char inventory[1];
} FighterWithInventory;

extern void WeaponInventory__AddById(void *inventory, int id);

void Fighter__AddWeaponImpl(FighterWithInventory *fighter, int id) {
    WeaponInventory__AddById(fighter->inventory, id);
}
