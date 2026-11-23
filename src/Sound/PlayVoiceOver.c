/* Sound__PlayVoiceOver @ 0x8002C15C (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Sound__PlayVoiceOver @ 0x8002C15C (0x5C). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *ok);
extern void fn_800225B8(void *game, char *text, int mode);
extern void fn_80184430(char *text);
extern void *lbl_803DC3C0;

void Sound__PlayVoiceOver(void *script, void *context) {
    int ok;
    char *text = Script__PopString(script, context, &ok);
    fn_800225B8(lbl_803DC3C0, text, 0);
    if (ok != 0 && text != 0)
        fn_80184430(text);
}
