/* CThrownMode__HandleReleaseEvent @ 0x800A0674 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct ThrownVictim {
    char pad[0x2A4];
    int active;
} ThrownVictim;

typedef struct CThrownMode {
    char pad[0x7C];
    ThrownVictim *victim;
} CThrownMode;

void Avatar__ReleaseThrownVictimImpl(CThrownMode *self);

void CThrownMode__HandleReleaseEvent(CThrownMode *self, int event) {
    if (event == 0x1002D && self->victim->active != 0) {
        Avatar__ReleaseThrownVictimImpl(self);
    }
}
