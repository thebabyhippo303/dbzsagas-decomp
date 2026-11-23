/* PersistentData__ClearCapsuleCounts @ 0x80127D48 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__ClearCapsuleCounts @ 0x80127D48 (0x4C). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_80327710[];
extern char lbl_80327720[];
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void PersistentData__ClearCapsuleCounts(void) {
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_80327710, 0);
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_80327720, 0);
}
