/* Avatar__ClearWeaponFlags @ 0x800263EC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ClearWeaponFlags @ 0x800263EC (0x4C). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern void Avatar__ClearWeaponFlagsImpl(void *weapon_data, int flags);

void Avatar__ClearWeaponFlags(void *script, void *context) {
	char *avatar = Script__PopInt(script, context);
	int flags = (int)Script__PopInt(script, context);
	Avatar__ClearWeaponFlagsImpl(avatar + 0x15A0, flags);
}
