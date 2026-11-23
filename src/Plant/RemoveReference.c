/* Plant__RemoveReference @ 0x800F7014 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_801843CC(void *ptr);

void Plant__RemoveReference(void *self, int id) {
    void *node;
    void *prev;
    void *next;

    node = *(void **)((char *)self + 8);
    if (node == 0) {
        return;
    }
    for (;;) {
        if (*(int *)node == id) {
            if (node == *(void **)((char *)self + 8)) {
                *(void **)((char *)self + 8) = *(void **)((char *)node + 8);
            }
            prev = *(void **)((char *)node + 4);
            if (prev != 0) {
                *(void **)((char *)prev + 8) = *(void **)((char *)node + 8);
            }
            next = *(void **)((char *)node + 8);
            if (next != 0) {
                *(void **)((char *)next + 4) = *(void **)((char *)node + 4);
            }
            fn_801843CC(node);
            *(int *)((char *)self + 24) = *(int *)((char *)self + 24) - 1;
            return;
        }
        node = *(void **)((char *)node + 8);
        if (node == 0) {
            return;
        }
    }
}
