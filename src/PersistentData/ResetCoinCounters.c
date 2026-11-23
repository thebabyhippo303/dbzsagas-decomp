/* PersistentData__ResetCoinCounters @ 0x80127B74 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC348;
extern char lbl_803276F4[] __attribute__((section(".data")));
extern char lbl_80327704[] __attribute__((section(".data")));
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);

void PersistentData__ResetCoinCounters(int *arg0) {
    char *p = lbl_803DC348;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[0] = 0;
    PersistentData__SetGlobalImpl(p + 300, lbl_80327704, 0);
    p = lbl_803DC348;
    PersistentData__SetGlobalImpl(p + 300, lbl_803276F4, 0);
}
