/* PersistentData__AddGlobalImpl @ 0x80126684 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__AddGlobalImpl @ 0x80126684 (0x30). */
extern char lbl_8031D820[];
extern int PersistentData__AddValue(void *a, void *b, const char *name, int index, int value);

int PersistentData__AddGlobalImpl(void *a, void *b, int value) {
    return PersistentData__AddValue(a, b, lbl_8031D820, -1, value);
}
