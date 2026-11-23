/* PersistentData__SetDefaultGlobalIfMissing @ 0x800078EC (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetDefaultGlobalIfMissing @ 0x800078EC (0x64). ProDG -O2. */
extern void *PersistentData__FindFirstRecord(
    void *data, void *scope, const char *name, int index, int type, int size);
extern int PersistentData__SetGlobalImpl(void *data, void *scope, int value);
extern char lbl_8030853C[];

void PersistentData__SetDefaultGlobalIfMissing(char *self, void *scope, int value) {
    void *data = self + 300;
    if (PersistentData__FindFirstRecord(data, scope, lbl_8030853C, 0, 0, 1) == 0)
        PersistentData__SetGlobalImpl(data, scope, value);
}
