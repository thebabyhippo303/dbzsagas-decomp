/* Avatar__DestroyWeaponState @ 0x80159398 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;

typedef struct Arr {
    void **data;
    u32 count;
    s32 cap;
    s32 pad;
    s32 flag;
} Arr;

typedef struct Vt {
    char pad[0x38];
    s16 adj;
    char p[2];
    void (*fn)(void *self, s32 mode);
} Vt;

typedef struct Item {
    char pad[0x34];
    Vt *vt;
} Item;

typedef struct Pair {
    Arr *arr;
    s32 marker;
} Pair;

typedef struct AvatarW {
    char pad0[0x50];
    char inv[0x35C - 0x50];
    Pair weapons;
} AvatarW;

void WeaponInventory__Destroy(void *self, int flags);
void fn_801843CC(void *block);
void *memset(void *dst, int value, u32 size);

void Avatar__DestroyWeaponState(AvatarW *self, s32 flags) {
    Pair *pair;
    Arr *arr;
    u32 count;
    u32 i;
    void **slot;
    Item *item;
    Vt *vt;
    s32 idx;
    s32 n;

    pair = &self->weapons;
    if (pair->marker != 0) {
        count = pair->arr->count;
        i = 0;
        if (i < count) {
            do {
                Arr *a;
                s32 idx2;
                s32 n2;
                void **elem;
                Item *it;

                a = pair->arr;
                idx2 = (s32) i;
                if (idx2 < 0) {
                    idx2 = (s32) a->count - 1;
                }
                n2 = (s32) a->count;
                if ((idx2 >= n2) || (n2 == 0)) {
                    elem = 0;
                } else {
                    elem = a->data + idx2;
                }
                it = *elem;
                if (it != 0) {
                    vt = it->vt;
                    vt->fn((char *) it + vt->adj, 3);
                }
                i += 1;
            } while (i < count);
        }
    }
    arr = pair->arr;
    if ((arr->flag != 0) && (arr->data != 0)) {
        memset(arr->data, 0, (u32) arr->cap * 4);
    }
    arr->count = 0;
    arr = pair->arr;
    if (arr != 0) {
        if (arr->data != 0) {
            fn_801843CC(arr->data);
        }
        fn_801843CC(arr);
    }
    WeaponInventory__Destroy(&self->inv, 2);
    if (flags & 1) {
        fn_801843CC(self);
    }
}
