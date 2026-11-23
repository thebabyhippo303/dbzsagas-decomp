/* Avatar__ShowWeaponImpl @ 0x8009E05C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ShowWeaponImpl @ 0x8009E05C (0x80). ProDG -O2. */
typedef struct {
	char pad[16];
	short delta;
	short pad2;
	int (*fn)(void *arg);
} WeaponDesc;

typedef struct {
	char pad[0x54];
	WeaponDesc *desc;
} WeaponVtable;

typedef struct {
	char pad[2];
	unsigned short flags;
} WeaponInfo;

typedef struct {
	WeaponVtable *vt;
	char pad[0x44];
	WeaponInfo *info;
} WeaponObj;

extern WeaponObj *WeaponInventory__GetSelected(void *inv, int which);
extern void Weapon__Show(WeaponObj *weapon);

void Avatar__ShowWeaponImpl(char *avatar, int force) {
	WeaponObj *weapon = WeaponInventory__GetSelected(avatar + 80, 1);
	if (weapon != 0) {
		WeaponDesc *desc = weapon->vt->desc;
		if (desc->fn((char *)weapon->vt + desc->delta) != 0 || force != 0) {
			if (weapon->info->flags & 1)
				Weapon__Show(weapon);
		}
	}
}
