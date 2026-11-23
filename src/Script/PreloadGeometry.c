/* Script__PreloadGeometry @ 0x8002D200 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__LoadDatabaseByName @ 0x8002D200 (0x64). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *ok);
extern void fn_80252768(void *db, char *name, int a, int b);
extern void fn_80184430(char *name);
extern char lbl_803B1E84[];

void Script__LoadDatabaseByName(void *script, void *context) {
    int ok;
    char *name = Script__PopString(script, context, &ok);
    fn_80252768(lbl_803B1E84, name, 0, 0);
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
