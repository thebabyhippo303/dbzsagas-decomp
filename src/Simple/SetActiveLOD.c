/* Simple__SetActiveLOD @ 0x802AF470 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__SetActiveLOD @ 0x802AF470 (0x48). ProDG -O2. */
typedef struct {
    char pad[0x3F8];
    int activeLod;
} ActorLod;

extern ActorLod *Script__PopActor(void *script, void *context, int kind);
extern int Script__PopInt(void *script, void *context);

void Simple__SetActiveLOD(void *script, void *context) {
    ActorLod *actor = Script__PopActor(script, context, 0);
    actor->activeLod = Script__PopInt(script, context);
}
