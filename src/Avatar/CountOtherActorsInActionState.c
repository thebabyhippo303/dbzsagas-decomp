/* Avatar__CountOtherActorsInActionState @ 0x80093DE0 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Inner { char pad[0xC8]; int state; int sub; } Inner;
typedef struct Actor { int flags; char pad4[0x84 - 4]; void *f84; char pad88[0x71C - 0x88]; int mode; char pad720[0x7E4 - 0x720]; int hidden; char pad7E8[0xB8C - 0x7E8]; Inner *inner; } Actor;
typedef struct Node { Actor *actor; char pad[0x14 - 4]; struct Node *next; } Node;
typedef struct Mask { int value; int mask; } Mask;
typedef struct World { char pad[0x2C]; Node *head; } World;
extern World *lbl_803DCCB8;
extern Mask lbl_803945E4 __attribute__((section(".data")));
extern void fn_8023A97C(void *, int);

int Avatar__CountOtherActorsInActionState(Actor *self, int state, int sub) {
    int count = 0;
    Node *n = lbl_803DCCB8->head;
    if (n != 0) {
        do {
            Actor *a = n->actor;
            fn_8023A97C(a->f84, 0);
            if ((a->flags & lbl_803945E4.mask) == lbl_803945E4.value && a != self && a->hidden == 0 && a->mode != 2) {
                Inner *in = a->inner;
                if (sub == -1) {
                    if (in->state == state) {
                        count++;
                    }
                } else if (in->state == state && in->sub == sub) {
                    count++;
                }
            }
            {
                World *w = lbl_803DCCB8;
                if (n != 0) {
                    n = n->next;
                } else {
                    n = w->head;
                }
            }
        } while (n != 0);
    }
    return count;
}
