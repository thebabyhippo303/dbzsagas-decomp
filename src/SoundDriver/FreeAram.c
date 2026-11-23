/* SoundDriver__FreeAram @ 0x80196378 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Node { struct Node *prev; struct Node *next; int addr; int size; } Node;
typedef struct List { Node *head; Node *tail; int own; int count; } List;
typedef struct Drv { char pad[120]; int top; char pad2[1292 - 124]; List list; } Drv;
void Mem__Delete(void *);

void SoundDriver__FreeAram(Drv *d, int addr) {
    Node *n;
    List *l;
    int a;
    for (n = d->list.head; n != 0; n = n->next) {
        if (n->addr == addr) {
            break;
        }
    }
    if (n != 0) {
        a = n->addr;
        if (n != 0) {
            if (a == d->top) {
                d->top = a + n->size;
            } else {
                n->prev->size = n->prev->size + n->size;
            }
            l = &d->list;
            if (d->list.head == n) {
                d->list.head = n->next;
            } else {
                n->prev->next = n->next;
            }
            if (l->tail == n) {
                l->tail = n->prev;
            } else {
                n->next->prev = n->prev;
            }
            if (l->own != 0) {
                Mem__Delete(n);
            } else {
                n->prev = 0;
                n->next = 0;
            }
            l->count = l->count - 1;
        }
    }
}
