/* PersistentData__GetBlueCapsules @ 0x80127C48 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__GetBlueCapsules @ 0x80127C48 (0x30). ProDG -O2. */
extern char *lbl_803DC368;
extern char lbl_80327710[];
extern int PersistentData__GetGlobalImpl(void *data, char *name);

int PersistentData__GetBlueCapsules(void) {
    return PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_80327710);
}
