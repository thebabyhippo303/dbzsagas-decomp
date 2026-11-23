/* PersistentData__SetBlueCapsules @ 0x80127CF8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetBlueCapsules @ 0x80127CF8 (0x50). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_80327710[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

int PersistentData__SetBlueCapsules(void *self, int value) {
    int current = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_80327710);
    return PersistentData__SetGlobalImpl(
        lbl_803DC368 + 300, lbl_80327710, current + value);
}
