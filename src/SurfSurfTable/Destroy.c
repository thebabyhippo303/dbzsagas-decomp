/* SurfSurfTable__Destroy @ 0x801A8F9C (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Mem__Delete(void *p);
extern void Mem__DeleteArray(void *p);
extern char lbl_80340EB0[] __attribute__((section(".data")));

void SurfSurfTable__Destroy(char *self, int flags) {
    int i;
    int off;
    *(char **)self = lbl_80340EB0;
    Mem__Delete(*(void **)(self + 24));
    i = 0;
    if (i < *(int *)(self + 8)) {
        off = 0;
        do {
            i++;
            Mem__Delete(*(void **)(off + *(int *)(self + 16)));
            off += 4;
        } while (i < *(int *)(self + 8));
    }
    if (*(void **)(self + 16) != 0) {
        Mem__DeleteArray(*(void **)(self + 16));
    }
    *(int *)(self + 16) = 0;
    *(int *)(self + 8) = 0;
    i = 0;
    if (i < *(int *)(self + 12)) {
        off = 0;
        do {
            i++;
            Mem__Delete(*(void **)(off + *(int *)(self + 20)));
            off += 4;
        } while (i < *(int *)(self + 12));
    }
    if (*(void **)(self + 20) != 0) {
        Mem__DeleteArray(*(void **)(self + 20));
    }
    *(int *)(self + 20) = 0;
    *(int *)(self + 12) = 0;
    if (*(void **)(self + 4) != 0) {
        Mem__DeleteArray(*(void **)(self + 4));
        *(int *)(self + 4) = 0;
    }
    if (flags & 1) {
        Mem__Delete(self);
    }
}
