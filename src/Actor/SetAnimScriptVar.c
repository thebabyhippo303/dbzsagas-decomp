/* Actor__SetAnimScriptVar @ 0x802AF9B4 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetAnimScriptVar @ 0x802AF9B4 (0x8C). ProDG -O2. */
typedef struct ActorAnim {
    char pad[200];
    struct {
        char pad[132];
        void *script;
    } *anim;
} ActorAnim;

extern int Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *owned);
extern void Script__SetIntVariable(void *script, int id, char *name, int value);
extern void fn_80184430(char *text);

void Actor__SetAnimScriptVar(ActorAnim *actor, void *context) {
    int id;
    int value;
    int owned;
    char *name;

    id = Script__PopInt(actor, context);
    value = Script__PopInt(actor, context);
    name = Script__PopString(actor, context, &owned);
    Script__SetIntVariable(actor->anim->script, id, name, value);
    if (owned != 0 && name != 0)
        fn_80184430(name);
}
