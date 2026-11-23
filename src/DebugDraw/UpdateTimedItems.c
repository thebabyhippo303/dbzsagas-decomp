/* DebugDraw__UpdateTimedItems @ 0x8018657C (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Item {
    char pad[56];
    float timer;
    struct Item *next;
    struct Item *prev;
} Item;

typedef struct ItemList {
    Item *head;
    Item *tail;
    int f8;
    int count;
} ItemList;

extern ItemList lbl_803A2D84 __attribute__((section(".data")));
extern float lbl_803A35BC __attribute__((section(".data")));
extern float lbl_8033DF78 __attribute__((section(".data")));
extern void DebugDraw__DrawItem(Item *it);
extern void Mem__Delete(void *p);

void DebugDraw__UpdateTimedItems(void) {
    Item *it = lbl_803A2D84.head;
    float dt = lbl_803A35BC;
    if (it != 0) {
        float zero = lbl_8033DF78;
        while (it != 0) {
            Item *next;
            float t;
            next = it->next;
            DebugDraw__DrawItem(it);
            t = it->timer;
            if (t != zero) {
                t = t - dt;
                it->timer = t;
                if (!(t > zero)) {
                    ItemList *l = &lbl_803A2D84;
                    int z;
                    if (l->head == it) {
                        lbl_803A2D84.head = it->next;
                    } else {
                        it->prev->next = it->next;
                    }
                    if (l->tail == it) {
                        l->tail = it->prev;
                    } else {
                        it->next->prev = it->prev;
                    }
                    z = l->f8;
                    if (z != 0) {
                        Mem__Delete(it);
                    } else {
                        it->prev = (Item *)z;
                        it->next = (Item *)z;
                    }
                    l->count--;
                }
            }
            it = next;
        }
    }
}
