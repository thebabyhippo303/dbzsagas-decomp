/* Fighter__SetWeaponPosWithBoneNameImpl @ 0x800F0260 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Fighter__SetWeaponPosWithBoneNameImpl @ 0x800F0260 (0x4C). ProDG -O2. */
extern void *WeaponInventory__GetSelected(void *inventory, int replenish);
extern char *strcpy(char *destination, const char *source);

void Fighter__SetWeaponPosWithBoneNameImpl(char *fighter, const char *bone_name) {
	char *weapon;
	*(int *)(fighter + 0x760) = 6;
	weapon = WeaponInventory__GetSelected(fighter + 0x5E8, 1);
	strcpy(weapon + 0x10, bone_name);
}
