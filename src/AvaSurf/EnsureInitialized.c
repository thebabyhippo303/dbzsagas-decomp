/* AvaSurf__EnsureInitialized @ 0x8015203C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AvaSurf__EnsureInitialized @ 0x8015203C (0x88). ProDG -O2. */
typedef struct AvaSurfVtable AvaSurfVtable;
typedef struct AvaSurf AvaSurf;

struct AvaSurfVtable {
    char pad[96];
    short adjust_ready;
    short unused_ready;
    void (*ready)(AvaSurf *self);
    short adjust_init;
    short unused_init;
    void (*init)(AvaSurf *self);
};

struct AvaSurf {
    AvaSurfVtable *vt;
    char pad[24];
    int initialized;
};

void AvaSurf__EnsureInitialized(AvaSurf *self) {
    if (self->initialized != 0) {
        self->vt->ready((AvaSurf *)((char *)self + self->vt->adjust_ready));
        return;
    }
    self->initialized = 1;
    self->vt->ready((AvaSurf *)((char *)self + self->vt->adjust_ready));
    self->vt->init((AvaSurf *)((char *)self + self->vt->adjust_init));
}
