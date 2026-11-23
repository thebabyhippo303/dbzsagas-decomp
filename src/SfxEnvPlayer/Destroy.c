/* SfxEnvPlayer__Destroy @ 0x8019A8BC (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vt { char pad[8]; short adjust; short unused; void (*fn)(void *, int); } Vt;
typedef struct Node { char pad[40]; Vt *vt; char pad2[52]; struct Node *prev; struct Node *next; } Node;
typedef struct List { Node *head; Node *tail; int own; int count; } List;
typedef struct Env { char pad[60]; char *vt; char pad2[500 - 64]; List list; } Env;
void SfxEnvPlayer__ClearEmitters(Env *);
void AmbientMixer__Destroy(void *, int);
void Sfx3DPlayer__Destroy(void *, int);
extern char lbl_8033FFD0[] __attribute__((section(".data")));

void SfxEnvPlayer__Destroy(Env *self, int flags) {
    List *l;
    self->vt = lbl_8033FFD0;
    SfxEnvPlayer__ClearEmitters(self);
    l = &self->list;
    if (l->own != 0 && self->list.head != 0) {
        do {
            Node *p = l->head;
            Node *next = p->next;
            l->head = next;
            if (l->tail == p) {
                l->tail = p->prev;
            } else {
                p->next->prev = p->prev;
            }
            if (l->own != 0) {
                if (p != 0) {
                    p->vt->fn((char *)p + p->vt->adjust, 3);
                }
            } else {
                p->prev = 0;
                p->next = 0;
            }
            l->count = l->count - 1;
        } while (l->head != 0);
    }
    AmbientMixer__Destroy((char *)self + 208, 2);
    Sfx3DPlayer__Destroy(self, flags);
}
