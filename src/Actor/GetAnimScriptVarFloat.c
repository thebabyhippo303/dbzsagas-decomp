/* Actor__GetAnimScriptVarFloat @ 0x802AFA40 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__GetAnimScriptVarFloat @ 0x802AFA40 (0x84). ProDG -O2. */
typedef struct ActorAnim {
    char pad[200];
    struct {
        char pad[132];
        void *script;
    } *anim;
} ActorAnim;

extern int Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern float Script__GetFloatVariable(void *script, int id, char *name);
extern void Script__PushFloat(void *script, void *context, float value);
extern void fn_80184430(char *text);

void Actor__GetAnimScriptVarFloat(ActorAnim *actor, void *context) {
    int id;
    int owned;
    char *name;

    id = Script__PopInt(actor, context);
    name = Script__PopString(actor, context, &owned);
    Script__PushFloat(actor, context, Script__GetFloatVariable(actor->anim->script, id, name));
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
