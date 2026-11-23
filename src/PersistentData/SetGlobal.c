/* PersistentData__SetGlobal @ 0x8003014C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__SetGlobal @ 0x8003014C (0x74). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *owned);
extern int Script__PopInt(void *script, void *context);
extern char *lbl_803DC368;
extern int PersistentData__SetGlobalImpl(void *data, char *name, int value);
extern void Mem__DeleteArray(void *ptr);

void PersistentData__SetGlobal(void *script, void *context) {
    int owned;
    char *name = Script__PopString(script, context, &owned);
    int value = Script__PopInt(script, context);

    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, name, value);
    if (owned != 0 && name != 0)
        Mem__DeleteArray(name);
}
