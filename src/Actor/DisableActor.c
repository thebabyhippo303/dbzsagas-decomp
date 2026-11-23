/* Actor__DisableActor @ 0x802ACA88 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__DisableActor @ 0x802ACA88 (0x54). ProDG -O2. */
typedef struct {
	char pad[0x60];
	short this_adjust;
	char pad2[2];
	void (*set_enabled)(void *self, int enabled);
} ActorVtable;

typedef struct {
	char pad[0x34];
	ActorVtable *vtable;
} Actor;

extern Actor *Script__PopActor(void *script, void *context, int null_if_zero);
extern void Actor__ToNonProtagonistCastImpl(void *actor);

void Actor__DisableActor(void *script, void *context) {
	Actor *actor = Script__PopActor(script, context, 0);
	actor->vtable->set_enabled((void *)((char *)actor + actor->vtable->this_adjust), 1);
	Actor__ToNonProtagonistCastImpl(actor);
}
