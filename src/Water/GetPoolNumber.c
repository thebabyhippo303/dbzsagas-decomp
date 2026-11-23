/* Water__GetPoolNumber @ 0x8002DA28 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Water__GetPoolNumber @ 0x8002DA28 (0x70). ProDG -O2. */
extern char *Script__PopString(void *self, void *ctx, int *owned);
extern void Script__PushInt(void *self, void *ctx, int value);
extern void *lbl_803DD650;
extern int Water__FindPoolIndexByName(void *pools, char *name);
extern void fn_80184430(char *text);

void Water__GetPoolNumber(void *self, void *ctx) {
    int owned;
    char *name;
    int index;

    name = Script__PopString(self, ctx, &owned);
    index = Water__FindPoolIndexByName(lbl_803DD650, name);
    Script__PushInt(self, ctx, index);
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
