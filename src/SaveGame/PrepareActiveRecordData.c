/* SaveGame__PrepareActiveRecordData @ 0x8014EA5C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__PrepareActiveRecordData @ 0x8014EA5C (0x88). ProDG -O2. */
typedef struct PrepVtable {
    char pad[40];
    short adjust;
    char pad2[2];
    void *(*getBuffer)(void *self);
} PrepVtable;

typedef struct PrepSource {
    PrepVtable *vtable;
} PrepSource;

typedef struct PrepState {
    char pad0[12];
    char *buffer;
    char pad1[12];
    int size;
    int zero;
    char pad2[20];
    char *end;
} PrepState;

typedef struct PrepSelf {
    char pad[32];
    PrepState *state;
} PrepSelf;

extern int lbl_803DC3C0;

int SaveGame__PrepareActiveRecordData(PrepSelf *self) {
    int zero = 0;
    PrepSource *source = (PrepSource *)lbl_803DC3C0;
    char *buffer;

    buffer = (char *)source->vtable->getBuffer((char *)source + source->vtable->adjust);
    self->state->buffer = buffer;
    self->state->zero = zero;
    self->state->size = 80;
    self->state->end = (char *)(self->state->zero + (int)self->state->buffer);
    return (int)(self->state->buffer + self->state->size);
}
