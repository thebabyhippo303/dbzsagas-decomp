/* PersistentData__SetCoinsAvailable @ 0x80127A5C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetCoinsAvailable @ 0x80127A5C (0x50). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_803276F4[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

int PersistentData__SetCoinsAvailable(void *self, int value) {
	PersistentData__GetGlobalImpl(lbl_803D8008 + 300, lbl_803276F4);
	return PersistentData__SetGlobalImpl(lbl_803D8008 + 300, lbl_803276F4, value);
}
