/* Avatar__ReleaseThrownVictim @ 0x80041634 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct ThrownVtable {
    char pad[80];
    short delta;
    short pad2;
    void *(*fn)(void *self);
} ThrownVtable;

typedef struct ThrownActor {
    char pad[4];
    ThrownVtable *vtable;
} ThrownActor;

typedef struct ThrowHolder {
    char pad[0x7F8];
    ThrownActor *thrown;
} ThrowHolder;

typedef struct PoppedAvatar {
    char pad[716];
    ThrowHolder *holder;
} PoppedAvatar;

extern PoppedAvatar *Script__PopInt(void *script, void *context);
extern int Avatar__IsThrownVictim(ThrownActor *actor);
extern void Avatar__ReleaseThrownVictimImpl(void *actor);

void Avatar__ReleaseThrownVictim(void *script, void *context) {
    PoppedAvatar *popped;
    ThrowHolder *holder;
    ThrownActor *thrown;
    ThrownVtable *vtable;

    popped = Script__PopInt(script, context);
    holder = popped->holder;
    if (holder == 0)
        return;
    thrown = holder->thrown;
    if (Avatar__IsThrownVictim(thrown) != 1)
        return;
    vtable = thrown->vtable;
    Avatar__ReleaseThrownVictimImpl(vtable->fn((char *)thrown + vtable->delta));
}
