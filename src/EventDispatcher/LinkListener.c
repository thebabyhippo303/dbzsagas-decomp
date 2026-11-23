/* EventDispatcher__LinkListener @ 0x8025149C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct Listener { char pad[8]; struct Listener *prev; struct Listener *next; } Listener;
typedef struct Dispatcher { char pad[4]; Listener *head; } Dispatcher;
void EventDispatcher__LinkListener(Dispatcher *d, Listener *l) {
    l->prev = 0;
    l->next = d->head;
    if (d->head != 0) {
        d->head->prev = l;
    }
    d->head = l;
}
