/* WeaponInventory__AddById @ 0x800DEFE8 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct WeaponInventory { void *factory; void *slots[1]; } WeaponInventory;

void *WeaponInventory__CreateById(void *, s32);
s32 WeaponInventory__FindIndexById(WeaponInventory *, s32);
s32 WeaponInventory__FindEmptySlot(WeaponInventory *);
s32 WeaponInventory__RefillAmmoBySlot(WeaponInventory *, s32);

s32 WeaponInventory__AddById(WeaponInventory *inv, s32 id) {
    s32 idx = WeaponInventory__FindIndexById(inv, id);
    s32 slot;
    void *w;
    void **tbl;
    s32 off;
    s32 r;

    if (idx != 0x5C) {
        return WeaponInventory__RefillAmmoBySlot(inv, idx);
    }
    slot = WeaponInventory__FindEmptySlot(inv);
    r = 0;
    if (slot != 0) {
        w = WeaponInventory__CreateById(inv->factory, id);
        off = slot * 4;
        tbl = inv->slots;
        *(void **)((char *)tbl + off) = w;
        r = 1;
        if (w == 0) {
            r = 0;
        }
    }
    return r;
}
