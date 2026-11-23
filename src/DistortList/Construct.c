/* DistortList__Construct @ 0x8009A0A0 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: DistortList__Construct @ 0x8009A0A0 (0x60). ProDG -O2. */
typedef struct {
    void *data;
    int field_14;
    int stride;
    int capacity;
    int count;
    int field_10;
    void *vtable;
} DistortList;

extern char lbl_80335290[];
extern void *fn_80184348(int size);

DistortList *DistortList__Construct(DistortList *self) {
    register int zero;

    zero = 0;
    self->vtable = lbl_80335290;
    self->data = fn_80184348(0x20);
    self->stride = 8;
    self->count = zero;
    self->capacity = 8;
    self->field_10 = zero;
    self->field_14 = zero;
    return self;
}
