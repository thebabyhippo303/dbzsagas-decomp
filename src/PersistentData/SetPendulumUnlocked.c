/* PersistentData__SetPendulumUnlocked @ 0x80127E40 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetPendulumUnlocked @ 0x80127E40 (0x34). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_80327740[];
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void PersistentData__SetPendulumUnlocked(void) {
    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_80327740, 0);
}
