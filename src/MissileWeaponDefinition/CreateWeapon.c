/* MissileWeaponDefinition__CreateWeapon @ 0x800DB808 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;

extern void *MemHeap__Alloc(u32 size, u32 align);
extern void *MissileWeapon__Construct(void *self, void *arg);

void *WeaponDefinition__CreateWeapon(void *arg0) {
    void *p = MemHeap__Alloc(104, 8);
    if (p != 0) {
        p = MissileWeapon__Construct(p, arg0);
    }
    return p;
}
