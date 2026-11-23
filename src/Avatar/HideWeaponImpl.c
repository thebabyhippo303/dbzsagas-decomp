/* Avatar__HideWeaponImpl @ 0x8009E0DC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__HideWeaponImpl @ 0x8009E0DC (0x5C). ProDG -O2. */
typedef struct {
	char pad[16];
	short delta;
	short pad2;
	void (*fn)(void *arg);
} WeaponDesc;

typedef struct {
	void *vt;
} WeaponObj;

extern WeaponObj *WeaponInventory__GetSelected(void *inv, int which);
extern void Weapon__Hide(WeaponObj *weapon);

void Avatar__HideWeaponImpl(char *avatar, int ignored) {
	WeaponObj *weapon;
	WeaponDesc *desc;
	(void)ignored;
	weapon = WeaponInventory__GetSelected(avatar + 80, 1);
	if (weapon == 0)
		return;
	desc = *(WeaponDesc **)((char *)weapon->vt + 0x54);
	desc->fn((char *)weapon->vt + desc->delta);
	Weapon__Hide(weapon);
}
