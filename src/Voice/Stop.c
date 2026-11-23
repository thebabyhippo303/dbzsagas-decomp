/* Voice__Stop @ 0x802B0DDC (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Voice__Stop @ 0x802B0DDC (0x3C). ProDG -O2. */
typedef struct {
    char pad[0x50];
    short this_adjustment;
    void (*stop)(void *self);
} VoiceVtable;

typedef struct {
    char pad[0xC];
    VoiceVtable *vtable;
} VoiceInner;

typedef struct {
    char pad[0xAC];
    VoiceInner *inner;
} VoiceState;

typedef struct {
    char pad[0xC8];
    VoiceState *state;
} VoiceObject;

void Voice__Stop(VoiceObject *self) {
    VoiceState *state = self->state;
    VoiceInner *inner = state->inner;
    VoiceVtable *vtable = inner->vtable;
    vtable->stop((char *)inner + vtable->this_adjustment);
}
