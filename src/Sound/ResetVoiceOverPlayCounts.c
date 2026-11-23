/* Sound__ResetVoiceOverPlayCounts @ 0x80022838 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC368;
extern char lbl_803104F8[] __attribute__((section(".data")));
extern char lbl_8030FC60[] __attribute__((section(".data")));
extern void *PersistentData__FindFirstRecord(
    void *data, void *name, void *label, int index, int type, int flag);
extern void *PersistentData__FindNextRecord(
    void *data, void *name, void *label, int index, int type, int flag, void *prev);

typedef struct VoiceOverRecord {
    char pad[0x3C];
    int field;
} VoiceOverRecord;

void Sound__ResetVoiceOverPlayCounts(void *self, int id) {
    VoiceOverRecord *record;

    record = PersistentData__FindFirstRecord(
        lbl_803DC368 + 300, lbl_803104F8, lbl_8030FC60, -1, 0, 1);
    while (record != 0) {
        int masked = record->field & 0xFF00;
        if (masked == id) {
            record->field = masked;
        }
        record = PersistentData__FindNextRecord(
            lbl_803DC368 + 300, lbl_803104F8, lbl_8030FC60, -1, 0, 1, record);
    }
    *(int *)((char *)self + 0x213C) = 0;
}
