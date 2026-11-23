/* Benson__Test @ 0x8003DC54 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Benson__Test @ 0x8003DC54 (0x54). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *ok);
extern void fn_8014D4E8(void *obj);
extern void fn_80184430(char *text);
extern void *lbl_803DC718;

void Benson__Test(void *script, void *context) {
    int ok;
    char *text = Script__PopString(script, context, &ok);
    fn_8014D4E8(lbl_803DC718);
    if (ok != 0 && text != 0)
        fn_80184430(text);
}
