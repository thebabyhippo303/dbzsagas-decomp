/* RADTimer__InsertTimer @ 0x802F7C58 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct Timer {
    void *f0;
    struct Timer *next;
    u32 key;
} Timer;

void RADTimer__InsertTimer(Timer **list, Timer *t) {
    Timer *head = *list;
    Timer *prev;
    Timer *curr;

    if (head == NULL) {
        t->next = head;
        *list = t;
        return;
    }
    if (t->key >= head->key) {
        t->next = head;
        *list = t;
        return;
    }
    prev = head;
    while (prev->next != 0) {
        curr = prev->next;
        if (t->key >= curr->key) {
            t->next = curr;
            prev->next = t;
            return;
        }
        prev = curr;
    }
    t->next = 0;
    prev->next = t;
}
