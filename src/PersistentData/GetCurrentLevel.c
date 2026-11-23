/* PersistentData__GetCurrentLevel @ 0x801278B0 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__GetCurrentLevel @ 0x801278B0 (0x30). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_803276E4[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int PersistentData__GetCurrentLevel(void) {
	return PersistentData__GetGlobalImpl(lbl_803D8008 + 300, lbl_803276E4);
}
