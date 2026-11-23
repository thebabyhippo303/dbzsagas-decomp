/* Simple__GetRadioSelection @ 0x8002E9F0 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__GetRadioSelection @ 0x8002E9F0 (0xE0). ProDG -O2. */
extern char lbl_803BEFC0[];
extern char *Script__PopString(void *script, void *context, int *owned);
extern void fn_802B2FB0(void *obj, void *arg, int flag);
extern void fn_802B2FB4(void *obj);
extern void fn_802B2FB8(void *obj, char *text);
extern char *fn_802B3010(void *obj, char *text, int flag);
extern int atoi(const char *text);
extern void fn_80184430(void *ptr);
extern void Script__PushInt(void *script, void *context, int value);

void Simple__GetRadioSelection(void *script, void *context) {
    int owned;
    char *first;
    char *second;
    void *inner;
    char *text;
    int value;

    first = Script__PopString(script, context, &owned);
    second = Script__PopString(script, context, &owned);
    inner = *(void **)((char *)script + 200);
    fn_802B2FB0(lbl_803BEFC0, *(void **)((char *)inner + 444), 0);
    fn_802B2FB4(lbl_803BEFC0);
    fn_802B2FB8(lbl_803BEFC0, first);
    text = fn_802B3010(lbl_803BEFC0, second, 0);
    if (text != 0) {
        value = atoi(text);
    } else {
        value = 0;
    }
    if (owned != 0) {
        if (first != 0) {
            fn_80184430(first);
        }
        if (second != 0) {
            fn_80184430(second);
        }
    }
    Script__PushInt(script, context, value);
}
