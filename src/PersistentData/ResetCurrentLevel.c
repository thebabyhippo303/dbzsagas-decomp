/* PersistentData__ResetCurrentLevel @ 0x801278E0 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__ResetCurrentLevel @ 0x801278E0 (0x34). ProDG -O2. */
extern char *lbl_803D8008;
extern char lbl_803276E4[];
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void PersistentData__ResetCurrentLevel(void) {
    PersistentData__SetGlobalImpl(lbl_803D8008 + 300, lbl_803276E4, 2);
}
