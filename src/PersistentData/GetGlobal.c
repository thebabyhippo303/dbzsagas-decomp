/* PersistentData__GetGlobal @ 0x800301C0 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__GetGlobal @ 0x800301C0 (0x74). ProDG -O2. */
extern char *lbl_803D8008;
extern char *Script__PopString(void *script, void *context, int *owned);
extern int PersistentData__GetGlobalImpl(void *data, char *name);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(void *ptr);

void PersistentData__GetGlobal(void *script, void *context) {
    int owned;
    char *name = Script__PopString(script, context, &owned);
    int value = PersistentData__GetGlobalImpl(lbl_803D8008 + 300, name);

    Script__PushInt(script, context, value);
    if (owned && name != 0)
        fn_80184430(name);
}
