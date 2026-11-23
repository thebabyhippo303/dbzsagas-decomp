/* Actor__GetOBBYSize @ 0x802AE3A8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__GetOBBYSize @ 0x802AE3A8 (0x50). ProDG -O2. */
typedef struct {
	char pad0[0x64];
	float min_y;
	char pad1[8];
	float max_y;
} ActorSimple;

typedef struct {
	char pad[0x84];
	ActorSimple *simple;
} Actor;

extern void *Script__PopActor(void *script, void *context, int null_if_zero);
extern void Script__PushFloat(void *script, void *context, float value);

void Actor__GetOBBYSize(void *script, void *context) {
	Actor *actor = Script__PopActor(script, context, 0);
	float size = actor->simple->max_y - actor->simple->min_y;
	Script__PushFloat(script, context, size);
}
