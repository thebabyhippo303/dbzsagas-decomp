/* PersistentData__FindFirstRecord @ 0x801266B4 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__FindFirstRecord @ 0x801266B4 (0x24). ProDG -O2. */
extern void *PersistentData__FindNextRecord(
    void *a, void *b, void *c, void *d, void *e, void *f, void *first);

void *PersistentData__FindFirstRecord(
    void *a, void *b, void *c, void *d, void *e, void *f) {
    return PersistentData__FindNextRecord(a, b, c, d, e, f, 0);
}
