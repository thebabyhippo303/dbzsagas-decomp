/* Actor__Holographic @ 0x802AF958 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__Holographic @ 0x802AF958 (0x5C). ProDG -O2. */
typedef struct {
    char pad[0x84];
    void *instance;
} Actor;

extern int Script__PopInt(void *script, void *context);
extern Actor *Script__PopActor(void *script, void *context, int flags);
extern void Instance__SetHolographic(void *instance, int enabled);

void Actor__Holographic(void *script, void *context) {
    int enabled = Script__PopInt(script, context) != 0;
    Actor *actor = Script__PopActor(script, context, 0);
    Instance__SetHolographic(actor->instance, enabled);
}
