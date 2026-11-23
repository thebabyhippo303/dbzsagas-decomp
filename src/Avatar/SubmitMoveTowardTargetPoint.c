/* Avatar__SubmitMoveTowardTargetPoint @ 0x8008CB68 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef short s16; typedef float f32;

typedef struct { s32 x, y, z; } V3i;

typedef struct {
    V3i pos;
    s32 kind;
    f32 value;
} MoveCommand;

typedef struct MoveTarget MoveTarget;
typedef struct {
    char pad0[8];
    s16 adjust;
    char pad1[2];
    void (*submit)(void *, MoveCommand *);
} MoveTargetVtbl;
struct MoveTarget {
    char pad[4];
    MoveTargetVtbl *vtbl;
};

typedef struct {
    char pad[0x7D4];
    MoveTarget *target;
} MoveAvatar;

void Avatar__SubmitMoveTowardTargetPoint(MoveAvatar *self, V3i *point, f32 speed) {
    MoveCommand cmd;
    MoveTarget *t;
    cmd.pos = *point;
    cmd.kind = 3;
    cmd.value = speed;
    t = self->target;
    t->vtbl->submit((char *)t + t->vtbl->adjust, &cmd);
}
