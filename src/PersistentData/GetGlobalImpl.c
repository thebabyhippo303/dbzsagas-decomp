/* PersistentData__GetGlobalImpl @ 0x80126628 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__GetGlobalImpl @ 0x80126628 (0x2C). ProDG -O2. */
extern char lbl_8031D820[];
extern int PersistentData__GetValue(void *a, void *b, const char *name, int index);

int PersistentData__GetGlobalImpl(void *a, void *b) {
    return PersistentData__GetValue(a, b, lbl_8031D820, -1);
}
