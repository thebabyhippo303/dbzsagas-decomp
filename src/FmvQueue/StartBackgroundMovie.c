/* FmvQueue__StartBackgroundMovie @ 0x801DA694 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Node { char pad[0x84]; struct Node *prev; struct Node *next; } Node;
typedef struct List { Node *head; Node *tail; s32 pad; s32 count; } List;
typedef struct Queue {
    char *path;
    List list;
    Node *cur;
} Queue;

s32 Fmv__BuildPathSwapped(char *, Node *);
void Mem__Delete(void *);
void fn_80306ABC(void *, s32);
extern char lbl_803A40A8[] __attribute__((section(".data")));

void FmvQueue__StartBackgroundMovie(Queue *q, s32 arg) {
    Node *n;
    List *l;
    char *base;
    s32 r;
    if (q->path != 0) {
        base = lbl_803A40A8;
        l = &q->list;
        *(s32 *)(base + 0x8358) = arg;
        *(char **)(base + 0x8354) = q->path;
        n = l->head;
        q->cur = n;
        if (n != 0) {
            l->head = n->next;
            if (l->tail == n) {
                l->tail = n->prev;
            } else {
                n->next->prev = n->prev;
            }
            n->prev = 0;
            n->next = 0;
            l->count = l->count - 1;
            r = Fmv__BuildPathSwapped(q->path, q->cur);
            if (r != 0) {
                fn_80306ABC(lbl_803A40A8, 4);
                return;
            }
            Mem__Delete(q->cur);
            q->cur = (Node *)r;
        }
    }
}
