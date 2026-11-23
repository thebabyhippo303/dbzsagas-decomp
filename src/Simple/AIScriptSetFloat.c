/* Simple__AIScriptSetFloat @ 0x802AF688 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__AIScriptSetFloat @ 0x802AF688 (0xA8). ProDG -O2. */
typedef struct {
    char pad[4];
    unsigned char flags;
} FloatSub;

typedef struct {
    char pad[0xFC];
    FloatSub *sub;
} FloatState;

typedef struct {
    char pad[0x84];
    FloatState *state;
} FloatActor;

extern FloatActor *Script__PopActor(void *script, void *context, int zero);
extern char *Script__PopString(void *script, void *context, int *owned);
extern float Script__PopFloat(void *script, void *context);
extern void Script__SetFloatVariable(void *state, int id, char *name);
extern void fn_80184430(char *text);

void Simple__AIScriptSetFloat(void *script, void *context) {
    FloatActor *actor;
    char *name;
    int owned;
    int saved;
    unsigned char keep;

    actor = Script__PopActor(script, context, 0);
    name = Script__PopString(script, context, &owned);
    Script__PopFloat(script, context);
    saved = actor->state->sub->flags;
    actor->state->sub->flags = (unsigned char) (saved | 2);
    keep = (unsigned char) saved;
    Script__SetFloatVariable(actor->state, 3, name);
    actor->state->sub->flags = keep;
    if (owned != 0 && name != 0) {
        fn_80184430(name);
    }
}
