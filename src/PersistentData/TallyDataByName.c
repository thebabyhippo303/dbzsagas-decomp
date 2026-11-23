/* PersistentData__TallyDataByName @ 0x800302B8 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__TallyDataByName @ 0x800302B8 (0x74). ProDG -O2. */
extern char *Script__PopString(void *self, void *ctx, int *owned);
extern void Script__PushInt(void *self, void *ctx, int value);
extern char *lbl_803DC368;
extern int PersistentData__TallyDataByNameImpl(void *data, char *name);
extern void fn_80184430(char *text);

void PersistentData__TallyDataByName(void *self, void *ctx) {
    int owned;
    char *name;
    int total;

    name = Script__PopString(self, ctx, &owned);
    total = PersistentData__TallyDataByNameImpl(lbl_803DC368 + 300, name);
    Script__PushInt(self, ctx, total);
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
