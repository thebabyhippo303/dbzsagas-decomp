/* Avatar__SerializeActiveState @ 0x800B5BEC (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SerializeActiveState @ 0x800B5BEC (0x38). ProDG -O2. */
typedef struct {
    char pad[0xD0];
    short adjust;
    char pad2[2];
    void (*serialize)(void *self);
} StateVtbl;

typedef struct {
    char pad[4];
    StateVtbl *vt;
} ActiveState;

typedef struct {
    char pad[0x144];
    ActiveState *state;
} AvatarState;

void Avatar__SerializeActiveState(AvatarState *self) {
    ActiveState *state = self->state;
    StateVtbl *vt = state->vt;
    vt->serialize((char *)state + vt->adjust);
}
