/* LoadContext__Destroy @ 0x80251880 (size: 0x364, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Mem__Delete(void *);
void Partition__Destroy(void *, s32);
void LoadContext__UnloadAll(void *);

typedef struct N { struct N *prev; struct N *next; } N;
typedef struct { N *head; N *tail; s32 own; s32 count; } L;

void LoadContext__Destroy(void *arg0, s32 arg1) {
    L *l0; L *l1; L *l2; L *l3; L *l4; L *l5; volatile N *n; N *t;

    l0 = (L *)((char *)arg0 + 0x168);
    LoadContext__UnloadAll(arg0);
    if (((L *)((char *)arg0 + 0x168))->head != 0) {
        do {
            n = l0->head;
            l0->head = n->next;
            if (l0->tail == n) { l0->tail = n->prev; } else { n->next->prev = n->prev; }
            t = (N *)l0->own;
            if (t != 0) { Mem__Delete(n); } else { n->next = t; n->prev = t; }
            l0->count--;
        } while (l0->head != 0);
    }
    l1 = (L *)((char *)arg0 + 0x168);
    l2 = (L *)((char *)arg0 + 0x144);
    l3 = (L *)((char *)arg0 + 0x134);
    l4 = (L *)((char *)arg0 + 0x124);
    l5 = (L *)((char *)arg0 + 0x114);
    if (l1->own != 0 && ((L *)((char *)arg0 + 0x168))->head != 0) {
        do {
            n = l1->head;
            l1->head = n->next;
            if (l1->tail == n) { l1->tail = n->prev; } else { n->next->prev = n->prev; }
            t = (N *)l1->own;
            if (t != 0) { Mem__Delete(n); } else { n->next = t; n->prev = t; }
            l1->count--;
        } while (l1->head != 0);
    }
    if (l2->own != 0 && ((L *)((char *)arg0 + 0x144))->head != 0) {
        do {
            n = l2->head;
            l2->head = n->next;
            if (l2->tail == n) { l2->tail = n->prev; } else { n->next->prev = n->prev; }
            t = (N *)l2->own;
            if (t != 0) { if (n != NULL) { Partition__Destroy(n, 3); } } else { n->next = t; n->prev = t; }
            l2->count--;
        } while (l2->head != 0);
    }
    if (l3->own != 0 && ((L *)((char *)arg0 + 0x134))->head != 0) {
        do {
            n = l3->head;
            l3->head = n->next;
            if (l3->tail == n) { l3->tail = n->prev; } else { n->next->prev = n->prev; }
            t = (N *)l3->own;
            if (t != 0) { if (n != NULL) { Partition__Destroy(n, 3); } } else { n->next = t; n->prev = t; }
            l3->count--;
        } while (l3->head != 0);
    }
    if (l4->own != 0 && ((L *)((char *)arg0 + 0x124))->head != 0) {
        do {
            n = l4->head;
            l4->head = n->next;
            if (l4->tail == n) { l4->tail = n->prev; } else { n->next->prev = n->prev; }
            t = (N *)l4->own;
            if (t != 0) { if (n != NULL) { Partition__Destroy(n, 3); } } else { n->next = t; n->prev = t; }
            l4->count--;
        } while (l4->head != 0);
    }
    if (l5->own != 0 && ((L *)((char *)arg0 + 0x114))->head != 0) {
        do {
            n = l5->head;
            l5->head = n->next;
            if (l5->tail == n) { l5->tail = n->prev; } else { n->next->prev = n->prev; }
            t = (N *)l5->own;
            if (t != 0) { if (n != NULL) { Partition__Destroy(n, 3); } } else { n->next = t; n->prev = t; }
            l5->count--;
        } while (l5->head != 0);
    }
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
