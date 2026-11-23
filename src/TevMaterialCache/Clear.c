/* TevMaterialCache__Clear @ 0x8024CD44 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void TevMaterial__Bind(void *, s32);
void Mem__Delete(void *);

typedef struct TNode {
    char pad[0x400];
    struct TNode *next;
    struct TNode *prev;
    char pad2[0x704];
    s32 flag;
} TNode;

typedef struct {
    TNode *head;
    TNode *tail;
    s32 owned;
    s32 count;
} TCache;

void TevMaterialCache__Clear(TCache *self) {
    TNode *node;

    TevMaterial__Bind(self, 15);
    node = self->head;
    while (node != NULL) {
        if (node->flag != 0) {
            node = node->next;
        } else {
            TNode *victim = node;
            node = victim->next;
            if (self->head == victim) {
                self->head = victim->next;
            } else {
                victim->prev->next = victim->next;
            }
            if (self->tail == victim) {
                self->tail = victim->prev;
            } else {
                victim->next->prev = victim->prev;
            }
            if (self->owned != 0) {
                Mem__Delete(victim);
            } else {
                victim->prev = NULL;
                victim->next = NULL;
            }
            self->count--;
        }
    }
}
