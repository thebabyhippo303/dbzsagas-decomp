/* Avatar__SelectWeapon @ 0x800262A4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *Script__PopInt(void *script, void *context);
extern void WeaponInventory__SelectById(void *inventory, int id);
void Avatar__SelectWeapon(void *script, void *context) {
    char *avatar = Script__PopInt(script, context);
    void *id = Script__PopInt(script, context);
    register char *slot;
    if (*(int *)(*(char **)(avatar + 6616) + 12) == 53) return;
    slot = avatar + 5536;
    WeaponInventory__SelectById(avatar + 5616, (int)id);
    *(int *)(slot + 820) = 1;
}
