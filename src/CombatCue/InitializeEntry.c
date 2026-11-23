/* CombatCue__InitializeEntry @ 0x80133684 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CombatCue__InitializeEntry @ 0x80133684 (0x54). ProDG -O2. */
typedef struct {
    int field_0;
    int field_4;
    int field_8;
    char name[4];
} CombatCueEntry;

extern char *strcpy(char *dst, const char *src);
extern const char *lbl_8036CB3C[] __attribute__((section(".data")));

void CombatCue__InitializeEntry(CombatCueEntry *table, int index, int value) {
    char *field4 = (char *)table + 4;
    char *field8 = (char *)table + 8;
    char *field0 = (char *)table;
    int byte = index * 16;

    *(int *)(field4 + byte) = 0;
    *(int *)(field8 + byte) = value;
    *(int *)(field0 + byte) = value;
    strcpy(field0 + byte + 12, lbl_8036CB3C[index]);
}
