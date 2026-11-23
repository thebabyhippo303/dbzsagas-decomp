/* WeaponInventory__FindDefinitionById @ 0x800DF6B8 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef struct Def { u32 id; } Def;
typedef struct Array { Def **data; s32 count; } Array;
typedef struct Holder { Array *arr; } Holder;

static inline Def **ArrayGet(Array *a, s32 i) {
    s32 idx = i;
    if (i < 0) {
        idx = a->count - 1;
    }
    if (idx >= a->count || a->count == 0) {
        return 0;
    }
    return &a->data[idx];
}

Def *WeaponInventory__FindDefinitionById(Holder *h, u32 id) {
    Array *a = h->arr;
    s32 lo = 0;
    s32 hi = a->count - 1;
    s32 mid;
    Def *d;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        d = *ArrayGet(a, mid);
        if (id < d->id) {
            hi = mid - 1;
        } else if (id > d->id) {
            lo = mid + 1;
        } else {
            return d;
        }
    }
    return 0;
}
