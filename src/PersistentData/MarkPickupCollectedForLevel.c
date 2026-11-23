/* PersistentData__MarkPickupCollectedForLevel @ 0x80129128 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__MarkPickupCollectedForLevel @ 0x80129128 (0xBC). ProDG -O2. */
extern int sprintf(char *dst, const char *fmt, ...);
extern void PersistentData__SetGlobalImpl(void *data, char *name, int value);
extern void *lbl_803DC368;
extern char lbl_803278C8[];
extern char lbl_803278EC[];
extern char lbl_80327910[];

void PersistentData__MarkPickupCollectedForLevel(void *unused, int id, int type, int value) {
    char buffer[24];
    int index;

    index = id - 2;
    switch (type) {
    case 9:
        sprintf(buffer, lbl_80327910, index);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 0x12C, buffer, value);
        return;
    case 10:
        sprintf(buffer, lbl_803278EC, index);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 0x12C, buffer, value);
        return;
    case 8:
        sprintf(buffer, lbl_803278C8, index);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 0x12C, buffer, value);
        return;
    default:
        return;
    }
}
