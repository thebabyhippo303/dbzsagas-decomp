/* Avatar__SelectWeaponWithBoneNameImpl @ 0x8009D618 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SelectWeaponWithBoneNameImpl @ 0x8009D618 (0x6C). ProDG -O2. */
extern void WeaponInventory__SelectById(void *inventory, int id);
extern void *WeaponInventory__GetSelected(void *inventory, int which);
extern char *strcpy(char *dst, const char *src);

void Avatar__SelectWeaponWithBoneNameImpl(void *self, int id, const char *bone) {
    void *inventory = (char *)self + 80;
    void *selected;
    WeaponInventory__SelectById(inventory, id);
    *(int *)((char *)self + 820) = 6;
    selected = WeaponInventory__GetSelected(inventory, 1);
    if (selected != 0)
        strcpy((char *)selected + 16, bone);
    else
        *(int *)((char *)self + 820) = 8;
}
