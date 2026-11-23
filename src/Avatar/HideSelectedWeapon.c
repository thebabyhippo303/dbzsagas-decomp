/* Avatar__HideSelectedWeapon @ 0x8009E398 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__HideSelectedWeapon @ 0x8009E398 (0x24). */
extern void Avatar__HideWeaponImpl(void *avatar, int selected);

void Avatar__HideSelectedWeapon(void *avatar) {
    Avatar__HideWeaponImpl(avatar, 0);
}
