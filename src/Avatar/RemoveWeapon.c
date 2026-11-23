/* Avatar__RemoveWeapon @ 0x80026438 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void Avatar__HideWeaponImpl(void *, s32);
void *Script__PopInt(void *, void *);
void WeaponInventory__SelectById(void *, s32);

void Avatar__RemoveWeapon(void *arg0, void *arg1) {
    char *base;
    char *avatar;
    s32 one;

    base = Script__PopInt(arg0, arg1);
    one = 1;
    avatar = base + 0x15A0;
    Avatar__HideWeaponImpl(avatar, 0);
    WeaponInventory__SelectById(base + 0x15F0, 0x5C);
    *(s32 *)(avatar + 0x334) = one;
}
