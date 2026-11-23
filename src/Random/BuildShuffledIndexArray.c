/* Random__BuildShuffledIndexArray @ 0x80159180 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int count;
    int *order;
} IndexOrder;

extern void fn_80184430(void *);
extern void *fn_80184348(int);
extern int Rand__RangeInt(void *, int, int);
extern int lbl_803DD634;

void Rand__BuildRandomIndexOrder(IndexOrder *self) {
    int i;
    int j;
    int tmp;
    int n;

    if (self->order != 0) {
        fn_80184430(self->order);
    }
    i = 0;
    self->order = fn_80184348(self->count * 4);
    if (i < self->count) {
        int off = 0;
        do {
            *(int *)((char *)(off + (int)self->order)) = i;
            i++;
            off += 4;
        } while (i < self->count);
    }
    n = self->count;
    i = 0;
    if (i < n) {
        int off = 0;
        do {
            i++;
            j = Rand__RangeInt(&lbl_803DD634, 0, n - 1) * 4;
            tmp = *(int *)((char *)(off + (int)self->order));
            *(int *)((char *)(off + (int)self->order)) = *(int *)((char *)(j + (int)self->order));
            off += 4;
            *(int *)((char *)(j + (int)self->order)) = tmp;
            n = self->count;
        } while (i < n);
    }
}
