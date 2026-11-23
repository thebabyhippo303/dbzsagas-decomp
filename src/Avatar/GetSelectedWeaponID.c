/* Avatar__GetSelectedWeaponID @ 0x80024FC4 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetSelectedWeaponID @ 0x80024FC4 (0x48). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern int WeaponInventory__GetSelectedId(void *inventory);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__GetSelectedWeaponID(void *script, void *context) {
    char *avatar = (char *)Script__PopInt(script, context);
    int id = WeaponInventory__GetSelectedId(avatar + 0x15F0);
    Script__PushInt(script, context, id);
}
