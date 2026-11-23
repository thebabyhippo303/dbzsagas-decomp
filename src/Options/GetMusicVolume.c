/* Options__GetMusicVolume @ 0x801286B4 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Options__GetMusicVolume @ 0x801286B4 (0x30). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_8032784C[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int Options__GetMusicVolume(void) {
    return PersistentData__GetGlobalImpl(lbl_803D8008 + 300, lbl_8032784C);
}
