/* Render__Destroy @ 0x80281468 (size: 0x13C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct Node1 {
    char pad[0x170];
    struct Node1 *prev;
    struct Node1 *next;
} Node1;
typedef struct Node2 {
    char pad[8];
    struct Node2 *prev;
    struct Node2 *next;
} Node2;
typedef struct List {
    void *head;
    void *tail;
    void *f8;
    s32 count;
} List;
typedef struct Self {
    List l0;
    List l1;
} Self;

void Render__DestroyAllObjects(Self *self);
void Mem__Delete(void *p);

void Render__Destroy(Self *self, s32 flag) {
    Self *s = self;
    s32 fl = flag;
    List *list = &s->l1;
    Node1 *nd;
    void *tail;
    void *next;
    Node2 *nd2;
    void *tail2;
    void *next2;

    Render__DestroyAllObjects(self);
    if ((list->f8 != NULL) && (list->head != NULL)) {
        do {
            nd = (Node1 *)list->head;
            tail = list->tail;
            next = nd->next;
            list->head = next;
            if (tail == nd) {
                list->tail = nd->prev;
            } else {
                nd->next->prev = nd->prev;
            }
            if (list->f8 != NULL) {
                Mem__Delete(nd);
            } else {
                nd->prev = NULL;
                nd->next = NULL;
            }
            list->count--;
        } while (list->head != NULL);
    }
    if ((s->l0.f8 != NULL) && (s->l0.head != NULL)) {
        do {
            nd2 = (Node2 *)s->l0.head;
            tail2 = s->l0.tail;
            next2 = nd2->next;
            s->l0.head = next2;
            if (tail2 == nd2) {
                s->l0.tail = nd2->prev;
            } else {
                nd2->next->prev = nd2->prev;
            }
            if (s->l0.f8 != NULL) {
                Mem__Delete(nd2);
            } else {
                nd2->prev = NULL;
                nd2->next = NULL;
            }
            s->l0.count--;
        } while (s->l0.head != NULL);
    }
    if ((fl & 1) != 0) {
        Mem__Delete(s);
    }
}
