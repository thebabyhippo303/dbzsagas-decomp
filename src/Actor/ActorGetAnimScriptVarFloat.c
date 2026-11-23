/* Actor__ActorGetAnimScriptVarFloat @ 0x802AFC84 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__ActorGetAnimScriptVarFloat @ 0x802AFC84 (0x90). ProDG -O2. */
typedef struct {
    char pad[132];
    void *script;
} ActorAnim;

typedef struct {
    char pad[132];
    void *script;
} AnimOwner;

extern int Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern AnimOwner *Script__PopActor(void *script, void *context, int zero);
extern float Script__GetFloatVariable(void *script, int id, char *name);
extern void Script__PushFloat(void *script, void *context, float value);
extern void fn_80184430(char *text);

void Actor__ActorGetAnimScriptVarFloat(void *script, void *context) {
    int id = Script__PopInt(script, context);
    int owned;
    char *name = Script__PopString(script, context, &owned);
    AnimOwner *actor = Script__PopActor(script, context, 0);
    Script__PushFloat(script, context, Script__GetFloatVariable(actor->script, id, name));
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
