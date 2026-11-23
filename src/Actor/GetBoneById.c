/* Actor__GetBoneById @ 0x801DCDE8 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__GetBoneById @ 0x801DCDE8 (0x28). ProDG -O2. */
typedef struct {
    char pad[0x84];
    void *instance;
} ActorWithInstance;

typedef struct {
    char pad[0xC];
    void *skeleton;
} ActorInstance;

extern void *Skeleton__GetBoneById(void *skeleton, int id);

void *Actor__GetBoneById(ActorWithInstance *actor, int id) {
    ActorInstance *instance = actor->instance;
    return Skeleton__GetBoneById(instance->skeleton, id);
}
