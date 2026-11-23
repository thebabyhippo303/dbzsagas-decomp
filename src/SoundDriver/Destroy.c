/* SoundDriver__Destroy @ 0x80195744 (size: 0x254, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define NULL 0
#define F(e,t,o) (*(t)((char *)(e) + (o)))
s32 SoundDriver__ReleaseBuffer(void *);
void Mem__Delete(void *);
void SoundChannel__Destroy(void *, s32);
void SoundDriver__DestroyBase(void *, s32);
extern int lbl_80340480 __attribute__((section(".data")));
typedef struct N { struct N *a; struct N *b; } N;
typedef struct { N *head; N *tail; s32 own; s32 count; } L;

void SoundDriver__Destroy(void *arg0, s32 arg1) {
    L *l1; L *l2; L *l3; L *l4; N *n;
    F(arg0, int **, 0x60) = &lbl_80340480;
    SoundDriver__ReleaseBuffer(arg0);
    l1 = (L *)((char *)arg0 + 0x50C);
    if (l1->own != 0 && l1->head != 0) {
        do {
            n = l1->head;
            l1->head = n->b;
            if (l1->tail == n) { l1->tail = n->a; } else { n->b->a = n->a; }
            if (l1->own != 0) { Mem__Delete(n); } else { n->a = 0; n->b = 0; }
            l1->count = l1->count - 1;
        } while (l1->head != 0);
    }
    l2 = (L *)((char *)arg0 + 0x4FC);
    l3 = (L *)((char *)arg0 + 0x4EC);
    l4 = (L *)((char *)arg0 + 0x4DC);
    if (l2->own != 0 && l2->head != 0) {
        do {
            n = l2->head;
            l2->head = n->a;
            if (l2->tail == n) { l2->tail = n->b; } else { n->a->b = n->b; }
            if (l2->own != 0) { Mem__Delete(n); } else { n->b = 0; n->a = 0; }
            l2->count = l2->count - 1;
        } while (l2->head != 0);
    }
    if (l3->own != 0 && F(arg0, N **, 0x4EC) != 0) {
        do {
            n = l3->head;
            l3->head = n->a;
            if (l3->tail == n) { l3->tail = n->b; } else { n->a->b = n->b; }
            if (l3->own != 0) { Mem__Delete(n); } else { n->b = 0; n->a = 0; }
            l3->count = l3->count - 1;
        } while (l3->head != 0);
    }
    if (l4->own != 0 && F(arg0, N **, 0x4DC) != 0) {
        do {
            n = l4->head;
            l4->head = F(n, N **, 0x2C);
            if (l4->tail == n) { l4->tail = F(n, N **, 0x28); } else { F(F(n, N **, 0x2C), N **, 0x28) = F(n, N **, 0x28); }
            if (l4->own != 0) { if (n != 0) SoundChannel__Destroy(n, 3); } else { F(n, int *, 0x28) = 0; F(n, int *, 0x2C) = 0; }
            l4->count = l4->count - 1;
        } while (l4->head != 0);
    }
    SoundDriver__DestroyBase(arg0, arg1);
}
