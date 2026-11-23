/* Script__GetControlSurface @ 0x8002E200 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__CreateSimple @ 0x8002E200 (0x90). ProDG -O2. */
typedef struct {
    char pad[0xC];
    void *field_c;
} SimpleFactoryData;

typedef struct {
    char pad[0x84];
    SimpleFactoryData *factory;
} SimpleOwner;

typedef struct {
    char pad[0xC8];
    SimpleOwner *owner;
} SimpleScript;

extern char *Script__PopString(void *script, void *context, int *ok);
extern int Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, void *value);
extern void *fn_801842C4(int size);
extern void *fn_802B2D64(void *memory, char *name, void *data);
extern void fn_80184430(char *text);

void Script__CreateSimple(SimpleScript *script, void *context) {
    int ok;
    char *name = Script__PopString(script, context, &ok);
    SimpleOwner *owner;
    void *simple;
    Script__PopInt(script, context);
    owner = script->owner;
    simple = fn_802B2D64(fn_801842C4(68), name, owner->factory->field_c);
    if (ok != 0 && name != 0)
        fn_80184430(name);
    Script__PushInt(script, context, simple);
}
