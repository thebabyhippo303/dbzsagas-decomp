/* Sound__PlayVoiceOverFlags @ 0x8002C1B8 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *Script__PopString(void *script, void *context, int *outFlag);
extern int Script__PopInt(void *script, void *context);
extern void *lbl_803DC3C0;
extern void fn_800225B8(void *cfg, void *text, int id);
extern void fn_80184430(void *text);

void Sound__PlayVoiceOverFlags(void *script, void *context) {
    int flag;
    void *text;
    int id;

    text = Script__PopString(script, context, &flag);
    id = Script__PopInt(script, context);
    fn_800225B8(lbl_803DC3C0, text, id);
    if (flag != 0 && text != 0)
        fn_80184430(text);
}
