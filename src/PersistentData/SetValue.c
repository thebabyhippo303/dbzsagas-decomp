/* PersistentData__SetValue @ 0x80126510 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetValue @ 0x80126510 (0x90). ProDG -O2. */
extern void *PersistentData__FindFirstRecord(
    void *data, void *scope, const char *name, int index, int type, int size);
extern void *PersistentData__CreateRecord(
    void *data, void *scope, const char *name, int index, int value);
extern void PersistentData__CheckThresholdTriggers(void *data, void *record);

void PersistentData__SetValue(
    void *data, void *scope, const char *name, int index, int value) {
    char *record = PersistentData__FindFirstRecord(data, scope, name, index, 0, 7);
    if (record == 0) {
        record = PersistentData__CreateRecord(data, scope, name, index, value);
        if (record != 0)
            PersistentData__CheckThresholdTriggers(data, record);
    } else if (*(int *)(record + 60) != value) {
        *(int *)(record + 60) = value;
        PersistentData__CheckThresholdTriggers(data, record);
    }
}
