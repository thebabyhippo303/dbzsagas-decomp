/* DistortList__Destroy @ 0x8009A100 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: DistortList__Destroy @ 0x8009A100 (0x9C). ProDG -O2.
   The three clears are volatile so ProDG keeps them in address order. */
typedef struct {
    void **data;
    int count;
    int stride;
    int capacity;
    int field_10;
    int field_14;
    void *vtable;
} DistortList;

extern char lbl_80335290[];
extern void fn_801843CC(void *block);

void DistortList__Destroy(DistortList *self, int flags) {
    int index;
    int count;
    char *vt;
    int offset;
    void *block;

    index = 0;
    count = self->count;
    vt = lbl_80335290;
    self->vtable = vt;
    if (index < count) {
        offset = 0;
        do {
            index += 1;
            block = *(void **)((char *)self->data + offset);
            offset += 4;
            fn_801843CC(block);
        } while (index < self->count);
    }
    block = self->data;
    if (block != 0) {
        fn_801843CC(block);
    }
    {
        volatile int *word = (volatile int *)self;

        word[0] = 0;
        word[1] = 0;
        word[2] = 0;
    }
    if (flags & 1) {
        fn_801843CC(self);
    }
}
