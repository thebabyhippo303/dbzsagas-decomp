/* PersistentData__WarpToEntryPoint @ 0x8012642C (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__WarpToEntryPoint @ 0x8012642C (0x24). ProDG -O2. */
extern void PersistentData__WarpToLevel(void *self, const char *level,
                                        int entry_point, int use_entry_point);

void PersistentData__WarpToEntryPoint(void *self, const char *level,
                                      int entry_point) {
    PersistentData__WarpToLevel(self, level, entry_point, 1);
}
