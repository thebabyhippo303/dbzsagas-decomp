/* WeaponInventory__SelectById @ 0x800DF06C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: WeaponInventory__SelectById @ 0x800DF06C (0x50). ProDG -O2. */
typedef struct {
    int pad;
    void *slots[92];
    int selected;
} WeaponInventory;

extern int WeaponInventory__FindIndexById(WeaponInventory *self, int id);

void *WeaponInventory__SelectById(WeaponInventory *self, int id) {
    int index;

    index = WeaponInventory__FindIndexById(self, id);
    if (index == 92) {
        self->selected = index;
        return 0;
    }
    self->selected = index;
    return self->slots[index];
}
