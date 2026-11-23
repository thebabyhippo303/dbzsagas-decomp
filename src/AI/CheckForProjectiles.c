/* AI__CheckForProjectiles @ 0x80045800 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Mask {
    int value;
    int mask;
} Mask;

typedef struct Node {
    struct Actor *actor;
    char pad[16];
    struct Node *next;
} Node;

typedef struct Sub {
    int flags;
    char pad[2020 - 4];
    int active;
} Sub;

typedef struct Actor {
    int flags;
    char pad[872];
    Sub *sub;
} Actor;

typedef struct List {
    char pad[44];
    Node *head;
} List;

extern void Script__PushInt(void *script, void *ctx, int v);
extern Mask lbl_80394624 __attribute__((section(".data")));
extern Mask lbl_803945E4 __attribute__((section(".data")));
extern List *lbl_803DCCB8;

void AI__CheckForProjectiles(void *script, void *ctx) {
    int found = 0;
    Node **headp = &lbl_803DCCB8->head;
    Node *n = *headp;
    if (n != 0) {
        do {
            Actor *a = n->actor;
            if ((a->flags & lbl_80394624.mask) == lbl_80394624.value) {
                Sub *s = a->sub;
                if ((s->flags & lbl_803945E4.mask) == lbl_803945E4.value && s->active != 0) {
                    found = 1;
                }
            }
            if (n != 0) {
                n = n->next;
            } else {
                n = *headp;
            }
        } while (n != 0);
    }
    Script__PushInt(script, ctx, found);
}
