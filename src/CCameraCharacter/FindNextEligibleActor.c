/* CCameraCharacter__FindNextEligibleActor @ 0x800BDB9C (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct EligibleList {
    int *items;
    int count;
    int cap;
    int cap2;
    int f10;
    int f14;
} EligibleList;

extern void *Mem__NewArray(int);
extern void Mem__Delete(void *);
extern void CCameraCharacter__CollectEligibleActors(void *, EligibleList *);

int CCameraCharacter__FindNextEligibleActor(void *self) {
    EligibleList list;
    EligibleList *l = &list;
    int zero = 0;
    int result;
    int i;
    int last;
    int cur;

    l->items = Mem__NewArray(0x20);
    result = 0;
    l->cap2 = 8;
    l->f14 = zero;
    l->count = zero;
    l->cap = 8;
    l->f10 = zero;
    CCameraCharacter__CollectEligibleActors(self, l);
    if (l->count > 0) {
        last = l->count - 1;
        i = 0;
        result = l->items[0];
        if (i < last) {
            cur = *(int *)((char *)self + 0x40);
            do {
                if (l->items[i] == cur) {
                    result = l->items[i + 1];
                }
                i++;
            } while (i < last);
        }
    }
    if (l->items != 0) {
        Mem__Delete(l->items);
    }
    return result;
}
