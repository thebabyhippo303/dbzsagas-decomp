/* WeaponInventory__FindIndexById @ 0x800DF24C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: WeaponInventory__FindIndexById @ 0x800DF24C (0x48). ProDG -O2. */
typedef struct {
    int id;
} WeaponDef;

typedef struct {
    WeaponDef *def;
} WeaponSlot;

typedef struct {
    int pad;
    WeaponSlot *slots[92];
} WeaponInventory;

int WeaponInventory__FindIndexById(WeaponInventory *inv, int id) {
    int i;
    for (i = 0; i < 92; i++) {
        WeaponSlot *slot = inv->slots[i];
        if (slot != 0 && slot->def->id == id)
            return i;
    }
    return i;
}
