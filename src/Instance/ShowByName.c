/* Instance__ShowByName @ 0x802B0770 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Instance__ShowByName @ 0x802B0770 (0x70). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *ok);
extern char lbl_803B1E84[];
extern void *Instance__FindByName(void *root, char *name, int a, int b);
extern void Instance__ShowImpl(void *instance);
extern void fn_80184430(char *text);

void Instance__ShowByName(void *script, void *context) {
    int ok;
    char *name = Script__PopString(script, context, &ok);
    void *instance = Instance__FindByName(lbl_803B1E84, name, 0, 0);
    if (instance != 0)
        Instance__ShowImpl(instance);
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
