/* PersistentData__SetGlobalImpl @ 0x80126654 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetGlobalImpl @ 0x80126654 (0x30). ProDG -O2. */
extern char lbl_8031D820[];
extern int PersistentData__SetValue(void *a, void *b, const char *name, int index, int value);

int PersistentData__SetGlobalImpl(void *a, void *b, int value) {
    return PersistentData__SetValue(a, b, lbl_8031D820, -1, value);
}
