/* Avatar__SetWeaponFlags @ 0x800263A0 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetWeaponFlags @ 0x800263A0 (0x4C). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Avatar__SetWeaponFlagsImpl(void *weapon, int flags);

void Avatar__SetWeaponFlags(void *script, void *context) {
    char *avatar = (char *)Script__PopInt(script, context);
    int flags = Script__PopInt(script, context);
    Avatar__SetWeaponFlagsImpl(avatar + 0x15A0, flags);
}
