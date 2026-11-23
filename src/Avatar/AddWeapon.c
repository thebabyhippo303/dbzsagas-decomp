/* Avatar__AddWeapon @ 0x80026248 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AddWeapon @ 0x80026248 (0x5C). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void WeaponInventory__AddById(void *inventory, int id);

void Avatar__AddWeapon(void *script, void *context) {
    char *avatar;
    int id;
    avatar = Script__PopInt(script, context);
    id = (int)Script__PopInt(script, context);
    if (*(int *)(*(void **)(avatar + 0x19D8) + 0xC) != 53) {
        WeaponInventory__AddById(avatar + 0x15F0, id);
    }
}
