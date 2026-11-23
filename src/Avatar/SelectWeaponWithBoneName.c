/* Avatar__SelectWeaponWithBoneName @ 0x8002630C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SelectWeaponWithBoneName @ 0x8002630C (0x94). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern void Avatar__SelectWeaponWithBoneNameImpl(void *self, int id, const char *bone);
extern void fn_80184430(void *memory);

void Avatar__SelectWeaponWithBoneName(void *script, void *context) {
	char *avatar = Script__PopInt(script, context);
	int id = (int)Script__PopInt(script, context);
	int owned;
	char *bone = Script__PopString(script, context, &owned);
	char *state = *(char **)(avatar + 6616);

	if (*(int *)(state + 12) != 53)
		Avatar__SelectWeaponWithBoneNameImpl(avatar + 5536, id, bone);
	if (owned && bone)
		fn_80184430(bone);
}
