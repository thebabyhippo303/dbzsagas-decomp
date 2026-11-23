/* Pickup__DisableBlowUp @ 0x8002BEDC (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match candidate: Pickup__DisableBlowUp @ 0x8002BEDC (0x18). ProDG -O2. */
typedef struct Sub {
    char pad[0x61c];
    int field_61c;
} Sub;
typedef struct Obj {
    char pad[0xc8];
    Sub *field_c8;
} Obj;

void Pickup__DisableBlowUp(Obj *self) {
    Sub *p = self->field_c8;
    if (p == 0)
        return;
    p->field_61c = 0;
}
