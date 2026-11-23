/* Options__GetSoundVolume @ 0x801285F8 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__GetSoundVolume @ 0x801285F8 (0x30). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_8032782C[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int Options__GetSoundVolume(void) {
	return PersistentData__GetGlobalImpl(lbl_803D8008 + 300, lbl_8032782C);
}
