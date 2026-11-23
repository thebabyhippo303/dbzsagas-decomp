/* PersistentData__GetGreenCapsules @ 0x80127C78 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__GetGreenCapsules @ 0x80127C78 (0x30). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_80327720[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int PersistentData__GetGreenCapsules(void) {
	return PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_80327720);
}
