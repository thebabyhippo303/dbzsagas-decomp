/* PersistentData__InitializeCurrentLevel @ 0x80127784 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__InitializeCurrentLevel @ 0x80127784 (0x68). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_803276E4[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void PersistentData__InitializeCurrentLevel(void) {
    int value = PersistentData__GetGlobalImpl(lbl_803D8008 + 300, lbl_803276E4);
    if (value == 0)
        PersistentData__SetGlobalImpl(lbl_803D8008 + 300, lbl_803276E4, 2);
    else
        PersistentData__SetGlobalImpl(lbl_803D8008 + 300, lbl_803276E4, value);
}
