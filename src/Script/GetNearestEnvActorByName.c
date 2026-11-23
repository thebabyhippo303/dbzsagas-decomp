/* Script__GetNearestEnvActorByName @ 0x8002A1C0 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__FindNearestActorByNameFiltered @ 0x8002A1C0 (0x88). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *owned);
extern int Script__PopInt(void *script, void *context);
extern void *Actor__FindNearestByName(char *name, void *from, int filter, int flag);
extern void fn_80184430(char *text);
extern void Script__PushInt(void *script, void *context, int value);

typedef struct {
    char pad[200];
    void *actor;
} ScriptHost;

void Script__FindNearestActorByNameFiltered(void *script, void *context) {
    int owned;
    char *name;
    int filter;
    void *found;

    name = Script__PopString(script, context, &owned);
    filter = Script__PopInt(script, context);
    found = Actor__FindNearestByName(name, ((ScriptHost *)script)->actor, filter, 1);
    if (owned != 0 && name != 0) {
        fn_80184430(name);
    }
    Script__PushInt(script, context, (int)found);
}
