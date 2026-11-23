/* PersistentData__SetPlayerCount @ 0x80126C34 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetPlayerCount @ 0x80126C34 (0x34). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_803276D8[];
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

int PersistentData__SetPlayerCount(void *self, int count) {
    return PersistentData__SetGlobalImpl(lbl_803DC368 + 300, lbl_803276D8, count);
}
