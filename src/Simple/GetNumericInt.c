/* Simple__GetNumericInt @ 0x8002EBA4 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__GetNumericInt @ 0x8002EBA4 (0xCC). ProDG -O2. */
extern char lbl_803BEFC0[];
extern char *Script__PopString(void *script, void *context, int *owned);
extern void fn_802B2FB0(void *obj, void *arg, int flag);
extern void fn_802B2FB4(void *obj);
extern void fn_802B2FB8(void *obj, char *text);
extern int fn_802B2FBC(void *obj, char *text, int flag);
extern void fn_80184430(void *ptr);
extern void Script__PushInt(void *script, void *context, int value);

void Simple__GetNumericInt(void *script, void *context) {
    int owned;
    int *owned_ptr = &owned;
    char *first;
    char *second;
    void *inner;
    int value;

    first = Script__PopString(script, context, owned_ptr);
    second = Script__PopString(script, context, owned_ptr);
    inner = *(void **)((char *)script + 200);
    fn_802B2FB0(lbl_803BEFC0, *(void **)((char *)inner + 444), 0);
    fn_802B2FB4(lbl_803BEFC0);
    fn_802B2FB8(lbl_803BEFC0, first);
    value = fn_802B2FBC(lbl_803BEFC0, second, 0);
    if (owned != 0) {
        if (first != 0)
            fn_80184430(first);
        if (second != 0)
            fn_80184430(second);
    }
    Script__PushInt(script, context, value);
}
