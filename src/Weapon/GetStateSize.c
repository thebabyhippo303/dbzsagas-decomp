/* Weapon__GetStateSize @ 0x800DD204 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Weapon__GetStateSize @ 0x800DD204 (0x3C). ProDG -O2. */
extern int Weapon__GetBaseStateSize(void);
extern int fn_801A6004(void *self);

int Weapon__GetStateSize(void *self) {
	int base = Weapon__GetBaseStateSize();
	return base + fn_801A6004(self);
}
