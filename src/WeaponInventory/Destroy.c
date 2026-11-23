/* WeaponInventory__Destroy @ 0x800DEF88 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: WeaponInventory__Destroy @ 0x800DEF88 (0x60). ProDG -O2. */
extern void WeaponInventory__DestroySlot(void *owner, void **slot);
extern void fn_801843CC(void *self);

void WeaponInventory__Destroy(void **self, int flags) {
    unsigned i = 0;
    void **slot = self + 1;

    do {
        WeaponInventory__DestroySlot(*self, slot++);
        i++;
    } while (i < 92);
    if (flags & 1)
        fn_801843CC(self);
}
