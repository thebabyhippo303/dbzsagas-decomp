/* Table__EnsureInitialized @ 0x80151674 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Table__EnsureInitialized @ 0x80151674 (0x88). ProDG -O2. */
typedef struct {
    char pad[0x60];
    short adjustA;
    char padA[2];
    void (*fnA)(void *self);
    short adjustB;
    char padB[2];
    void (*fnB)(void *self);
} TableVtable;

typedef struct {
    TableVtable *vtable;
    char pad[0x18];
    int initialized;
} Table;

void Table__EnsureInitialized(Table *self) {
    if (self->initialized != 0) {
        self->vtable->fnA((char *)self + self->vtable->adjustA);
    } else {
        self->initialized = 1;
        self->vtable->fnA((char *)self + self->vtable->adjustA);
        self->vtable->fnB((char *)self + self->vtable->adjustB);
    }
}
