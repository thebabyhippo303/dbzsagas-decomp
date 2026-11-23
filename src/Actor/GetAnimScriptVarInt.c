/* Actor__GetAnimScriptVarInt @ 0x802AFAC4 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__GetAnimScriptVarInt @ 0x802AFAC4 (0x88). ProDG -O2. */
typedef struct ActorAnim {
    char pad[200];
    struct {
        char pad[132];
        void *script;
    } *anim;
} ActorAnim;

extern int Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern int Script__GetIntVariable(void *script, int id, char *name);
extern void Script__PushInt(void *script, void *context, int value);
extern void fn_80184430(char *text);

void Actor__GetAnimScriptVarInt(ActorAnim *actor, void *context) {
    int id;
    int owned;
    char *name;

    id = Script__PopInt(actor, context);
    name = Script__PopString(actor, context, &owned);
    Script__PushInt(actor, context, Script__GetIntVariable(actor->anim->script, id, name));
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
