/* PersistentData__GetValue @ 0x801264D4 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__GetValue @ 0x801264D4 (0x3C). ProDG -O2. */
extern void *PersistentData__FindFirstRecord(
    void *data, void *context, const char *name, int index, int type, int size);

int PersistentData__GetValue(
    void *data, void *context, const char *name, int index) {
    void *record = PersistentData__FindFirstRecord(data, context, name, index, 0, 7);
    if (record == 0) {
        return 0;
    }
    return *(int *)((char *)record + 0x3C);
}
