/* PersistentData__SetPendulumFlags @ 0x80127F28 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetPendulumFlags @ 0x80127F28 (0x58). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_80327730[];
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void PersistentData__SetPendulumFlags(void *self, int enabled) {
	if (enabled) {
		PersistentData__SetGlobalImpl(lbl_803D8008 + 300, lbl_80327730, 1);
	} else {
		PersistentData__SetGlobalImpl(lbl_803D8008 + 300, lbl_80327730, 0);
	}
}
