/* Actor__FindBoneIdByName @ 0x801DCD70 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__FindBoneIdByName @ 0x801DCD70 (0x44). ProDG -O2. */
typedef struct {
	char pad[0x0C];
	void *skeleton;
} ActorSkeleton;

typedef struct {
	char pad[0x84];
	ActorSkeleton *skeleton;
} Actor;

extern int Skeleton__FindBoneIdByName(void *skeleton, const char *name,
	unsigned char *bone_id);

int Actor__FindBoneIdByName(Actor *actor, unsigned char *bone_id,
	const char *name) {
	return Skeleton__FindBoneIdByName(actor->skeleton->skeleton, name,
		bone_id) != 0;
}
