/* PickupManager__ClearAllPickupLists @ 0x800E4F40 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PickupManager__ClearAllPickupLists @ 0x800E4F40 (0xDC). ProDG -O2. */
typedef struct { void **lists[3]; } PickupLists;
extern void PickupManager__FreePickupList(void *list);
extern void fn_801843CC(void *ptr);

void PickupManager__ClearAllPickupLists(PickupLists *self) {
    void **p;
    if (self->lists[0] != 0) {
        PickupManager__FreePickupList(self->lists[0]);
        p = self->lists[0];
        if (p != 0) {
            if (*p != 0)
                fn_801843CC(*p);
            fn_801843CC(p);
        }
    }
    self->lists[0] = 0;
    if (self->lists[1] != 0) {
        PickupManager__FreePickupList(self->lists[1]);
        p = self->lists[1];
        if (p != 0) {
            if (*p != 0)
                fn_801843CC(*p);
            fn_801843CC(p);
        }
    }
    self->lists[1] = 0;
    if (self->lists[2] != 0) {
        PickupManager__FreePickupList(self->lists[2]);
        p = self->lists[2];
        if (p != 0) {
            if (*p != 0)
                fn_801843CC(*p);
            fn_801843CC(p);
        }
    }
    self->lists[2] = 0;
}
