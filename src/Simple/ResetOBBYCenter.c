/* Simple__ResetOBBYCenter @ 0x802AE98C (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__ResetOBBYCenter @ 0x802AE98C (0x10). ProDG -O2. */
typedef struct {
    char pad0[0x294];
    float center;
    char pad1[0x3a0 - 0x298];
    float saved;
} ObbyInner;

typedef struct {
    char pad[0xc8];
    ObbyInner *inner;
} ObbyObj;

void Simple__ResetOBBYCenter(ObbyObj *self) {
    ObbyInner *p = self->inner;
    p->center = p->saved;
}
