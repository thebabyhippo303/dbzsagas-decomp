/* Simple__AIScriptRun @ 0x802AF58C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__AIScriptRun @ 0x802AF58C (0x50). ProDG -O2. */
typedef struct SimpleAIOps {
    char pad[0x178];
    signed short offset;
    char pad2[2];
    void (*run)(void *actor);
} SimpleAIOps;

typedef struct SimpleActor {
    char pad[0x34];
    SimpleAIOps *ops;
    char mid[0x4C];
    void *field84;
} SimpleActor;

extern SimpleActor *Script__PopActor(void *script, void *context, int index);
extern void fn_802ABED0(void *field);

void Simple__AIScriptRun(void *script, void *context) {
    SimpleActor *actor = Script__PopActor(script, context, 0);
    SimpleAIOps *ops;
    fn_802ABED0(actor->field84);
    ops = actor->ops;
    ops->run((char *)actor + ops->offset);
}
