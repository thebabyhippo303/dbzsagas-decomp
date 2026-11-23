/* ProgressText__Display @ 0x8003C8F4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ProgressText__Display @ 0x8003C8F4 (0x50). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *ok);
extern void ProgressText__DisplayImpl(char *text);
extern void fn_80184430(char *text);

void ProgressText__Display(void *script, void *context) {
    int ok;
    char *text = Script__PopString(script, context, &ok);
    ProgressText__DisplayImpl(text);
    if (ok != 0 && text != 0)
        fn_80184430(text);
}
