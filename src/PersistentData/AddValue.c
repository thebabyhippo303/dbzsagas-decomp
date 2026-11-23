/* PersistentData__AddValue @ 0x801265A0 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__AddValue @ 0x801265A0 (0x88). ProDG -O2. */
extern void *PersistentData__FindFirstRecord(
    void *data, void *scope, const char *name, int index, int type, int size);
extern void *PersistentData__CreateRecord(
    void *data, const char *name, const char *scope, int level, int value);
extern void PersistentData__CheckThresholdTriggers(void *data, void *record);

int PersistentData__AddValue(
    void *data, void *scope, const char *name, int index, int value) {
    char *record = PersistentData__FindFirstRecord(
        data, scope, name, index, 0, 7);
    if (record == 0) {
        record = PersistentData__CreateRecord(data, scope, name, index, value);
    } else {
        *(int *)(record + 60) += value;
    }
    PersistentData__CheckThresholdTriggers(data, record);
    return *(int *)(record + 60);
}
