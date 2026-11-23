/* Game__NamedPointExists @ 0x80035964 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__NamedPointExists @ 0x80035964 (0x94). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *ok);
extern void Script__PushInt(void *script, void *context, int value);
extern void *NamedPoint__FindByName(void *registry, char *name, int flag);
extern void fn_80184430(char *text);
extern char lbl_803B1E84[];

void Game__NamedPointExists(void *script, void *context) {
    int ok;
    char *name = Script__PopString(script, context, &ok);
    if (NamedPoint__FindByName(lbl_803B1E84, name, 0) == 0)
        Script__PushInt(script, context, 0);
    else
        Script__PushInt(script, context, 1);
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
