/* Actor__ActorGetAnimScriptVarInt @ 0x802AFD14 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__ActorGetAnimScriptVarInt @ 0x802AFD14 (0xA0). ProDG -O2. */
typedef struct {
    char pad[132];
    void *script;
} AnimOwner;

extern int Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern AnimOwner *Script__PopActor(void *script, void *context, int zero);
extern int Script__GetIntVariable(void *script, int id, char *name);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(char *text);

void Actor__ActorGetAnimScriptVarInt(void *script, void *context) {
    int owned;
    int id = Script__PopInt(script, context);
    char *name = Script__PopString(script, context, &owned);
    AnimOwner *actor = Script__PopActor(script, context, 0);
    int value = 0;
    if (actor != 0)
        value = Script__GetIntVariable(actor->script, id, name);
    Script__PushInt(script, context, value);
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
