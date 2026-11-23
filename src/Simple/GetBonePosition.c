/* Simple__GetBonePosition @ 0x8002D874 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__GetBonePosition @ 0x8002D874 (0xA8). ProDG -O2. */
typedef struct SimpleScript {
	char pad[0xC8];
	void *simple;
} SimpleScript;

typedef struct BonePositionLocals {
	unsigned char bone_id;
	char pad0[7];
	float position[3];
	char pad1[4];
} BonePositionLocals;

extern char *Script__PopString(void *script, void *context, int *owned);
extern int Actor__FindBoneIdByName(void *actor, char *name, unsigned char *bone_id);
extern void fn_801DD1FC(float *position, void *actor, int bone_id);
extern void Script__PushFloat(void *script, void *context, float value);
extern void fn_80184430(char *text);

void Simple__GetBonePosition(void *script, void *context) {
	SimpleScript *self;
	void *actor;
	char *name;
	int owned;
	BonePositionLocals locals;

	self = (SimpleScript *)script;
	actor = self->simple;
	name = Script__PopString(script, context, &owned);
	Actor__FindBoneIdByName(actor, name, &locals.bone_id);
	fn_801DD1FC(locals.position, actor, locals.bone_id);
	Script__PushFloat(script, context, locals.position[0]);
	Script__PushFloat(script, context, locals.position[1]);
	Script__PushFloat(script, context, locals.position[2]);
	if (owned != 0 && name != 0) {
		fn_80184430(name);
	}
}
