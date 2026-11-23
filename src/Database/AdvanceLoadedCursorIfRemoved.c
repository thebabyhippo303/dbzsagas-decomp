/* Database__AdvanceLoadedCursorIfRemoved @ 0x80203EA4 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__AdvanceLoadedCursorIfRemoved @ 0x80203EA4 (0x20). ProDG -O2. */
typedef struct {
    char pad[0x34];
    void *cursor;
} LoadedDb;

extern LoadedDb lbl_803ADB5C;

void Database__AdvanceLoadedCursorIfRemoved(void *removed) {
    void *cursor = lbl_803ADB5C.cursor;
    if (cursor != removed)
        return;
    lbl_803ADB5C.cursor = *(void **)cursor;
}
