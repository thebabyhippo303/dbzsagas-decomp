/* Avatar__ForceShowSelectedWeapon @ 0x8009E3BC (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ForceShowSelectedWeapon @ 0x8009E3BC (0x24). */
extern void Avatar__ShowWeaponImpl(void *avatar, int selected);

void Avatar__ForceShowSelectedWeapon(void *avatar) {
    Avatar__ShowWeaponImpl(avatar, 1);
}
