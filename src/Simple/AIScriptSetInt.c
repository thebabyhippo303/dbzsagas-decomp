/* Simple__AIScriptSetInt @ 0x802AF5DC (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__AIScriptSetInt @ 0x802AF5DC (0xAC). ProDG -O2. */
typedef struct {
    char pad[4];
    unsigned char flags;
} IntSub;

typedef struct {
    char pad[0xFC];
    IntSub *sub;
} IntState;

typedef struct {
    char pad[0x84];
    IntState *state;
} IntActor;

extern IntActor *Script__PopActor(void *script, void *context, int zero);
extern char *Script__PopString(void *script, void *context, int *owned);
extern int Script__PopInt(void *script, void *context);
extern void Script__SetIntVariable(void *state, int id, char *name, int value);
extern void fn_80184430(char *text);

void Simple__AIScriptSetInt(void *script, void *context) {
    IntActor *actor;
    char *name;
    int owned;
    int value;
    int saved;
    unsigned char keep;

    actor = Script__PopActor(script, context, 0);
    name = Script__PopString(script, context, &owned);
    value = Script__PopInt(script, context);
    saved = actor->state->sub->flags;
    actor->state->sub->flags = (unsigned char) (saved | 2);
    keep = (unsigned char) saved;
    Script__SetIntVariable(actor->state, 3, name, value);
    actor->state->sub->flags = keep;
    if (owned != 0 && name != 0) {
        fn_80184430(name);
    }
}
