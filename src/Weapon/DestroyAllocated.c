/* Weapon__DestroyAllocated @ 0x800DD4B8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Weapon__DestroyAllocated @ 0x800DD4B8 (0x50). ProDG -O2. */
typedef struct WeaponDestroyOps {
	char pad[8];
	signed short offset;
	char padA[2];
	void (*destroy)(void *weapon, int delete_object);
} WeaponDestroyOps;

typedef struct WeaponAllocation {
	char pad[0x64];
	WeaponDestroyOps *ops;
} WeaponAllocation;

extern void fn_80182DBC(void *allocation);

void Weapon__DestroyAllocated(void *unused, WeaponAllocation *weapon) {
	if (weapon != 0) {
		WeaponDestroyOps *ops = weapon->ops;
		ops->destroy((char *)weapon + ops->offset, 2);
		fn_80182DBC(weapon);
	}
}
