/* LeafSystem__Destroy @ 0x80287A40 (size: 0x1BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct { void *head; void *tail; s32 own; s32 count; } L;
void LeafSystem__Clear(void *);
void Mem__Delete(void *);
void LeafSystem__Destroy(void *arg0, s32 arg1) {
    void *self = arg0;
    void *n;
    void *t;
    L *l1;
    L *l2;
    l1 = (L *)((char *)self + 0x254);
    LeafSystem__Clear(self);
    if (l1->own != 0 && l1->head != 0) {
        do {
            n = l1->head;
            l1->head = M2C_FIELD(n, void **, 0x2C);
            if (l1->tail == n) {
                l1->tail = M2C_FIELD(n, void **, 0x28);
            } else {
                M2C_FIELD(M2C_FIELD(n, void **, 0x2C), void **, 0x28) = M2C_FIELD(n, void **, 0x28);
            }
            t = M2C_FIELD(l1, void **, 8);
            if (t != NULL) {
                Mem__Delete(n);
            } else {
                M2C_FIELD(n, void **, 0x28) = t;
                M2C_FIELD(n, void **, 0x2C) = t;
            }
            l1->count = l1->count - 1;
        } while (l1->head != 0);
    }
    l2 = (L *)((char *)self + 0x238);
    if (l2->own != 0 && l2->head != 0) {
        do {
            n = l2->head;
            l2->head = M2C_FIELD(n, void **, 0x6C);
            if (l2->tail == n) {
                l2->tail = M2C_FIELD(n, void **, 0x68);
            } else {
                M2C_FIELD(M2C_FIELD(n, void **, 0x6C), void **, 0x68) = M2C_FIELD(n, void **, 0x68);
            }
            t = M2C_FIELD(l2, void **, 8);
            if (t != NULL) {
                Mem__Delete(n);
            } else {
                M2C_FIELD(n, void **, 0x68) = t;
                M2C_FIELD(n, void **, 0x6C) = t;
            }
            l2->count = l2->count - 1;
        } while (l2->head != 0);
    }
    if (M2C_FIELD(self, s32 *, 8) != 0 && M2C_FIELD(self, void **, 0) != 0) {
        do {
            n = M2C_FIELD(self, void **, 0);
            M2C_FIELD(self, void **, 0) = M2C_FIELD(n, void **, 0x80);
            if (M2C_FIELD(self, void **, 4) == n) {
                M2C_FIELD(self, void **, 4) = M2C_FIELD(n, void **, 0x7C);
            } else {
                M2C_FIELD(M2C_FIELD(n, void **, 0x80), void **, 0x7C) = M2C_FIELD(n, void **, 0x7C);
            }
            t = M2C_FIELD(self, void **, 8);
            if (t != NULL) {
                Mem__Delete(n);
            } else {
                M2C_FIELD(n, void **, 0x7C) = t;
                M2C_FIELD(n, void **, 0x80) = t;
            }
            M2C_FIELD(self, s32 *, 0xC) = M2C_FIELD(self, s32 *, 0xC) - 1;
        } while (M2C_FIELD(self, void **, 0) != 0);
    }
    if (arg1 & 1) {
        Mem__Delete(self);
    }
}