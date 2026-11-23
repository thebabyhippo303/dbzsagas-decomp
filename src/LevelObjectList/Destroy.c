/* LevelObjectList__Destroy @ 0x8028F0EC (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define NULL 0
typedef struct Vt { char pad[8]; short adjust; short unused; void (*fn)(void *, int); } Vt;
typedef struct Node { struct Node *prev; struct Node *next; Vt *vt; } Node;
typedef struct List { Node *head; Node *tail; int own; int count; } List;
typedef struct LOL { List list; } LOL;
void Mem__Delete(void *);
void LevelObjectList__Destroy(LOL *self, int flags) {
    List *l = &self->list;
    if (l->own != 0 && l->head != 0) {
        do {
            Node *p = l->head;
            l->head = p->next;
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
    if (flags & 1) {
        Mem__Delete(self);
    }
}
