/* Floater__SetPath @ 0x802AFF7C (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Floater__SetPath @ 0x802AFF7C (0x9C). ProDG -O2. */
typedef struct {
    char pad[0x60];
    short adjust;
    char pad2[2];
    void (*setPath)(void *self, void *path);
} PathVtable;

typedef struct {
    char pad[0x414];
    void *pathHolder;
    char pad2[0x4C8 - 0x418];
    PathVtable *vtable;
} PathFloater;

extern char *Script__PopString(void *script, void *context, int *ok);
extern PathFloater *Script__PopActor(void *script, void *context, int zero);
extern void *fn_801FCDB8(PathFloater *floater);
extern void *fn_801FD128(void *registry, char *name, int flag);
extern void fn_80184430(char *text);

void Floater__SetPath(void *script, void *context) {
    int ok;
    char *name = Script__PopString(script, context, &ok);
    PathFloater *floater = Script__PopActor(script, context, 0);
    void *path = fn_801FD128(fn_801FCDB8(floater), name, -1);
    char *holder = (char *)&floater->pathHolder;
    floater->vtable->setPath(holder + floater->vtable->adjust, path);
    floater->pathHolder = floater;
    if (ok != 0 && name != 0)
        fn_80184430(name);
}
