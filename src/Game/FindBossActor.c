/* Game__FindBossActor @ 0x8006D2AC (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vt { char pad[96]; short adjust; short unused; int (*fn)(void *); } Vt;
typedef struct Ctl { char pad[1260]; int a; char pad2[1404 - 1264]; Vt *vt; } Ctl;
typedef struct Actor { unsigned flags; char pad[724 - 4]; int f724; char pad2[2956 - 728]; Ctl *ctl; } Actor;
typedef struct Node { Actor *actor; char pad[16]; struct Node *next; } Node;
typedef struct List { char pad[20]; Node *head; } List;
typedef struct Mask { unsigned value; unsigned mask; } Mask;
extern Mask lbl_803945E4 __attribute__((section(".data")));
extern List *lbl_803DCCB8;

Actor *Game__FindBossActor(void) {
    Node **hp = &lbl_803DCCB8->head;
    Node *n = *hp;
    while (n != 0) {
        Actor *a = n->actor;
        if ((a->flags & lbl_803945E4.mask) == lbl_803945E4.value && a->f724 != 0) {
            Ctl *c = a->ctl;
            if (c->a != 0) {
                if (c->vt->fn((char *)c + c->vt->adjust) == 0) {
                    return a;
                }
            }
        }
        if (n != 0) {
            n = n->next;
        } else {
            n = *hp;
        }
    }
    return 0;
}
