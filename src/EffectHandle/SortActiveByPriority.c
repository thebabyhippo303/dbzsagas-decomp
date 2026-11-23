/* EffectHandle__SortActiveByPriority @ 0x8022F7B0 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned short u16;

typedef struct Effect {
    struct Effect *next;
    struct Effect *prev;
    unsigned int flags;
    char pad0C[8];
    u16 priority;
} Effect;

extern void IntrusiveList__Remove(void *, void *);
extern void IntrusiveList__PushFront(void *, void *);
extern void IntrusiveList__InsertBefore(void *, Effect *, Effect *);
extern Effect *lbl_803ADDA0 __attribute__((section(".data")));

void EffectHandle__SortActiveByPriority(void) {
    Effect *node;
    Effect *cur;
    Effect *other;

    node = lbl_803ADDA0;
    if (node != 0) {
        do {
            cur = node;
            node = cur->next;
            if (cur->flags & 0x40) {
                IntrusiveList__Remove(&lbl_803ADDA0, cur);
                IntrusiveList__PushFront(&lbl_803ADDA0, cur);
            } else {
                while (1) {
                    other = cur->prev;
                    if (other == 0 || (other->flags & 0x40) || cur->priority >= other->priority) {
                        break;
                    }
                    IntrusiveList__InsertBefore(&lbl_803ADDA0, other, cur);
                }
            }
        } while (node != 0);
    }
}
