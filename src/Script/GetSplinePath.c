/* Script__GetSplinePath @ 0x8002A2D0 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *ok);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(char *text);
extern void *fn_801FCDB8(void *arg);
extern void *fn_801FD128(void *registry, char *name, int flag);
extern int fn_801FCF50(void *registry, char *name);

void Script__GetSplinePath(void *script, void *context) {
    int ok;
    char *nameA;
    char *nameB;
    void *registry;
    void *path;

    nameA = Script__PopString(script, context, &ok);
    nameB = Script__PopString(script, context, &ok);
    registry = fn_801FCDB8((void *)Script__PopInt(script, context));
    path = fn_801FD128(registry, nameA, fn_801FCF50(fn_801FCDB8(registry), nameB));
    if (ok != 0) {
        if (nameA != 0) {
            fn_80184430(nameA);
        }
        if (nameB != 0) {
            fn_80184430(nameB);
        }
    }
    Script__PushInt(script, context, (int)path);
}
