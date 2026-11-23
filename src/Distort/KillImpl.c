/* Distort__KillImpl @ 0x8009A400 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Distort__KillImpl @ 0x8009A400 (0x40). ProDG -O2. */
typedef struct {
    char pad[0x18];
    short adjust;
    char pad2[2];
    void (*terminate)(void *self);
} DistortVtable;

typedef struct {
    char pad[8];
    DistortVtable *vtable;
} Distort;

extern Distort *Distort__FindById(void *list, int id);

void Distort__KillImpl(void *list, int id) {
    Distort *distort = Distort__FindById(list, id);
    if (distort != 0) {
        distort->vtable->terminate((void *)((char *)distort + distort->vtable->adjust));
    }
}
