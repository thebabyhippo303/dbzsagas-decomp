/* Render__DestroyAllObjects @ 0x802815AC (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Render__DestroyObject(void *, void *);
void memFree(void *);

typedef struct Node {
    char pad[8];
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    char pad[12 - 8];
    s32 count;
    void *w16;
} Self;

void Render__DestroyAllObjects(Self *self) {
    void *obj;
    Node *node;

    while ((obj = self->w16) != NULL) {
        Render__DestroyObject(self, obj);
    }
    node = self->head;
    if (node != NULL) {
        void *nil = NULL;
        do {
            if (self->head == node) {
                self->head = node->next;
            } else {
                node->prev->next = node->next;
            }
            if (self->tail == node) {
                self->tail = node->prev;
            } else {
                node->next->prev = node->prev;
            }
            node->prev = nil;
            node->next = nil;
            self->count--;
            memFree(node);
            node = self->head;
        } while (node != NULL);
    }
}
