/* Avatar__GetActiveStateIndex @ 0x800B5AD8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetActiveStateIndex @ 0x800B5AD8 (0x50). ProDG -O2. */
typedef struct AvatarStates {
    char pad[0x144];
    void *current;
    char pad148[4];
    char state0;
    char pad14d[0x1B7];
    char state1;
    char pad305[0xA7];
    char state2;
    char pad3ad[0xCB];
    char state3;
} AvatarStates;

int Avatar__GetActiveStateIndex(AvatarStates *self) {
    void *current = self->current;
    if (current == &self->state0) {
        return 0;
    }
    if (current == &self->state1) {
        return 1;
    }
    if (current == &self->state2) {
        return 2;
    }
    if (current == &self->state3) {
        return 3;
    }
    return 0;
}
