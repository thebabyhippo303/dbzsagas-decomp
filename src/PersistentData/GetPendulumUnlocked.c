/* PersistentData__GetPendulumUnlocked @ 0x80127EB4 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__GetPendulumUnlocked @ 0x80127EB4 (0x40). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_80327740[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int PersistentData__GetPendulumUnlocked(void) {
    return PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_80327740) > 0;
}
