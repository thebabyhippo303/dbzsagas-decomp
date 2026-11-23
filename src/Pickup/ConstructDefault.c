/* Pickup__ConstructDefault @ 0x800F0A3C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__ConstructDefault @ 0x800F0A3C (0x80). ProDG -O2. */
extern void Simple__ConstructDefault(void *self, void *type);
extern void Pickup__ResetImpl(void *self);

extern char lbl_803946B4[];
extern char lbl_803348C8[];
extern char lbl_803348A8[];
extern char lbl_803347D8[];
extern char lbl_80334970[];

void *Pickup__ConstructDefault(char *self) {
	Simple__ConstructDefault(self, lbl_803946B4);
	*(void **)(self + 0x198) = lbl_803348C8;
	*(void **)(self + 0x1B4) = lbl_803348A8;
	*(void **)(self + 0x4C8) = lbl_803347D8;
	*(void **)(self + 0x34) = lbl_80334970;
	*(int *)(self + 0x5EC) = 0;
	*(int *)(self + 0x5F0) = -1;
	Pickup__ResetImpl(self);
	return self;
}
