/* SpatialTree__CollectEntriesOverlappingBounds @ 0x80158704 (size: 0x1C8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32; typedef float f32;
typedef struct Array { char *data; s32 count; s32 cap; s32 grow; s32 zero; } Array;
typedef struct Node { char pad[0x14]; s32 item; char pad2[4]; struct Node *next; } Node;
typedef struct Tree { f32 b[4]; Node *head; s32 pad[3]; struct Tree *c[4]; } Tree;
char *Mem__NewArray(s32);
void Mem__Delete(void *);
void *memcpy(void *, const void *, unsigned int);
void *memmove(void *, void *, unsigned int);
void *memset(void *, int, u32);

void SpatialTree__CollectEntriesOverlappingBounds(Tree *t, Array *a, f32 *q) {
    Node *n;
    s32 *saved;
    s32 oldBytes;
    s32 idx;
    s32 newBytes;
    char *fresh;
    char *base;
    s32 off;
    s32 tail;
    char *slot;
    s32 ok;

    ok = 0;
    if (!(t->b[2] < q[0]) && !(t->b[0] > q[2]) && !(t->b[1] > q[3])) {
        ok = t->b[3] >= q[1];
    }
    if (ok != 0) {
        n = t->head;
        if (n != 0) {
            do {
                saved = &n->item;
                idx = a->count;
                if (idx == a->cap) {
                    oldBytes = idx * 4;
                    newBytes = (idx + a->grow) * 4;
                    fresh = Mem__NewArray(newBytes);
                    if (fresh == 0) {
                        goto next;
                    }
                    if (a->data != 0) {
                        memcpy(fresh, a->data, oldBytes);
                        if (a->data != 0) {
                            Mem__Delete(a->data);
                        }
                    }
                    a->data = fresh;
                    a->cap = a->cap + a->grow;
                    if (a->zero != 0) {
                        memset(fresh + oldBytes, 0, newBytes - oldBytes);
                    }
                }
                base = a->data;
                off = idx * 4;
                slot = base + off;
                tail = a->count - idx;
                if (tail != 0) {
                    memmove(slot + 4, slot, tail * 4);
                }
                *(s32 *)(base + off) = *saved;
                a->count = a->count + 1;
            next:
                n = n->next;
            } while (n != 0);
        }
        if (t->c[0] != 0) {
            SpatialTree__CollectEntriesOverlappingBounds(t->c[0], a, q);
        }
        if (t->c[1] != 0) {
            SpatialTree__CollectEntriesOverlappingBounds(t->c[1], a, q);
        }
        if (t->c[2] != 0) {
            SpatialTree__CollectEntriesOverlappingBounds(t->c[2], a, q);
        }
        if (t->c[3] != 0) {
            SpatialTree__CollectEntriesOverlappingBounds(t->c[3], a, q);
        }
    }
}
