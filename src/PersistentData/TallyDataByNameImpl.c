/* PersistentData__TallyDataByNameImpl @ 0x80126920 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__TallyDataByNameImpl @ 0x80126920 (0x88). ProDG -O2. */
typedef struct {
    char pad[0x3C];
    int value;
} TallyRecord;

extern TallyRecord *PersistentData__FindFirstRecord(
    void *data, char *name, const char *label, int index, int type, int flag);
extern TallyRecord *PersistentData__FindNextRecord(
    void *data, char *name, const char *label, int index, int type, int flag, TallyRecord *prev);
extern char lbl_8031D820[];

int PersistentData__TallyDataByNameImpl(void *data, char *name) {
    int total = 0;
    TallyRecord *record = PersistentData__FindFirstRecord(data, name, lbl_8031D820, 0, 0, 1);
    while (record != 0) {
        total += record->value;
        record = PersistentData__FindNextRecord(data, name, lbl_8031D820, 0, 0, 1, record);
    }
    return total;
}
