/* PersistentData__AddGlobal @ 0x80030234 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__AddGlobal @ 0x80030234 (0x84). ProDG -O2. */
extern char *lbl_803D8008;
extern char *Script__PopString(void *script, void *context, int *owned);
extern int Script__PopInt(void *script, void *context);
extern int PersistentData__AddGlobalImpl(void *data, char *name, int value);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(void *ptr);

void PersistentData__AddGlobal(void *script, void *context) {
    int owned;
    char *name = Script__PopString(script, context, &owned);
    int amount = Script__PopInt(script, context);
    int result = PersistentData__AddGlobalImpl(lbl_803D8008 + 300, name,
                                                amount);

    Script__PushInt(script, context, result);
    if (owned && name != 0)
        fn_80184430(name);
}
