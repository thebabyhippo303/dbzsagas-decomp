/* LevelObjectList__DestroyAll @ 0x8028F47C (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define NULL 0
typedef struct Vt { char pad[8]; short adjust; short unused; void (*fn)(void *, int); } Vt;
typedef struct Node { Vt *vt; char pad[0x7C - 4]; struct Node *next; struct Node *prev; } Node;
typedef struct List { Node *head; Node *tail; int own; int count; } List;
void Mem__DeleteArray(void *);
void Mem__Delete(void *);

void LevelObjectList__DestroyAll(void *arg0, s32 arg1) {
    void *arr = M2C_FIELD(arg0, void **, 4);

    if (arr != NULL) {
        Mem__DeleteArray(arr);
    }
    {
        List *l = (List *)((char *)arg0 + 0x40);
        if (l->own != 0 && M2C_FIELD(arg0, Node **, 0x40) != NULL) {
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
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
