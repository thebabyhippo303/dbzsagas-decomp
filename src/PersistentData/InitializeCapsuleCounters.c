/* PersistentData__InitializeCapsuleCounters @ 0x80127BD4 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC368;
extern char lbl_80327710[];
extern char lbl_80327720[];
extern int PersistentData__GetGlobalImpl(void *rec, char *key);
extern void PersistentData__SetGlobalImpl(void *rec, char *key, int value);

void PersistentData__InitializeCapsuleCounters(void) {
    int value;

    value = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_80327710);
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_80327710, value);
    value = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_80327720);
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_80327720, value);
}
