/* PersistentData__CreateRecord @ 0x80126454 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__CreateRecord @ 0x80126454 (0x80). ProDG -O2. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

void *PersistentData__CreateRecord(char *self, const char *name, const char *scope,
                                   int level, int value) {
    int count = *(int *)(self + 592);
    char *record;

    if (count > 319)
        return 0;
    record = self + 596 + (count << 6);
    *(int *)(self + 592) = count + 1;
    strncpy(record, name, 24);
    strncpy(record + 24, scope, 32);
    *(int *)(record + 56) = level;
    *(int *)(record + 60) = value;
    return record;
}
