/* Simple__RotatingToAngle @ 0x802AF3FC (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x214];
    int rotate_x;
    int rotate_y;
    int rotate_z;
} ActorState;

typedef struct {
    char pad[0xC8];
    ActorState *actor;
} Simple;

extern void Script__PushInt(void *script, void *context, int value);

void Simple__RotatingToAngle(Simple *self, void *context) {
    ActorState *actor = self->actor;
    int rotating = actor->rotate_x != 0 || actor->rotate_y != 0 || actor->rotate_z != 0;
    Script__PushInt(self, context, rotating);
}
