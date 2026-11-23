/* StreamQueue__Kill @ 0x801947C8 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
void Mem__Delete(void *);
void StreamQueue__StopCurrent(void *);
typedef struct Node { char pad[0x64]; struct Node *prev; struct Node *next; } Node;
typedef struct List { Node *head; Node *tail; void *keep; int count; } List;
typedef struct SQ { char pad0[0x50]; int state; char pad54[0x84 - 0x54]; int f84; char pad88[0x8C - 0x88]; int f8C; char pad90[0xA0 - 0x90]; List list; } SQ;
void StreamQueue__Kill(SQ *self) {
    List *l = &self->list;
    Node *n;
    StreamQueue__StopCurrent(self);
    if (l->head != 0) {
        do {
            n = l->head;
            l->head = n->next;
            if (l->tail == n) {
                l->tail = n->prev;
            } else {
                n->next->prev = n->prev;
            }
            if (l->keep != 0) {
                Mem__Delete(n);
            } else {
                n->prev = 0;
                n->next = 0;
            }
            l->count = l->count - 1;
        } while (l->head != 0);
    }
    self->f84 = 0;
    self->state = 2;
    self->f8C = 0;
}
