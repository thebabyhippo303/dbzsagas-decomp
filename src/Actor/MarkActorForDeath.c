/* Actor__MarkActorForDeath @ 0x802AE2A8 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__MarkActorForDeath @ 0x802AE2A8 (0x60). ProDG -O2. */
typedef struct {
    char pad[0x90];
    int field_90;
    int field_94;
} MarkedActor;

extern float lbl_80351D90 __attribute__((section(".data")));
extern MarkedActor *Script__PopActor(void *a, void *b, int c);
extern void Actor__MarkForDeath(MarkedActor *actor, float delay);

void Actor__MarkActorForDeath(void *a, void *b) {
    MarkedActor *actor;
    int skip;

    actor = Script__PopActor(a, b, 0);
    if (actor != 0) {
        skip = 0;
        if (actor->field_90 != 0 && actor->field_94 <= 0) {
            skip = 1;
        }
        if (skip == 0) {
            Actor__MarkForDeath(actor, lbl_80351D90);
        }
    }
}
