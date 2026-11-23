/* Breakable__StreamingEmittersSetup @ 0x8003B408 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Breakable__StreamingEmittersSetup @ 0x8003B408 (0x80). ProDG -O2. */
extern void *Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *ok);
extern char *strcpy(char *dst, const char *src);
extern void fn_80184430(char *text);

void Breakable__StreamingEmittersSetup(void *script, void *context) {
    char *breakable = Script__PopInt(script, context);
    int ok;
    char *name = Script__PopString(script, context, &ok);
    if (breakable != 0 && name != 0)
        strcpy(breakable + 0x54C, name);
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
