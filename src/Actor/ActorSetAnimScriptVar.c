/* Actor__ActorSetAnimScriptVar @ 0x802AFB4C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__ActorSetAnimScriptVar @ 0x802AFB4C (0x98). ProDG -O2. */
typedef struct {
    char pad[132];
    void *script;
} AnimOwner;

extern void *Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern AnimOwner *Script__PopActor(void *script, void *context, int zero);
extern void Script__SetIntVariable(void *script, int id, char *name, int value);
extern void fn_80184430(char *text);

void Actor__ActorSetAnimScriptVar(void *script, void *context) {
    int owned;
    int id = (int) Script__PopInt(script, context);
    int value = (int) Script__PopInt(script, context);
    char *name = Script__PopString(script, context, &owned);
    AnimOwner *actor = Script__PopActor(script, context, 0);
    Script__SetIntVariable(actor->script, id, name, value);
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
