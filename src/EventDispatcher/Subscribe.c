/* EventDispatcher__Subscribe @ 0x80251360 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
typedef struct Subscriber { struct Subscriber *next; struct Subscriber *prev; s32 w8; s32 w12; void *dispatcher; s32 mask; } Subscriber;
typedef struct Dispatcher { void *head; s32 w4; s32 filter; s32 minbit; s32 minidx; s32 maxidx; s32 w24; s32 bits28; s32 bits32; void *slots[32]; } Dispatcher;
void EventDispatcher__Subscribe(Dispatcher *disp, Subscriber *sub, s32 mask) {
    Subscriber *head;
    s32 m;
    s32 b32;
    s32 b28;
    s32 nb;
    s32 diff;
    s32 ctr;
    s32 bit;
    s32 idx;
    void **p;
    if (sub->dispatcher != NULL) {
        return;
    }
    m = disp->filter;
    sub->dispatcher = (void *)disp;
    mask &= m;
    sub->mask = mask;
    head = (Subscriber *)disp->head;
    if (head == NULL) {
        sub->prev = NULL;
        sub->next = NULL;
    } else {
        sub->next = NULL;
        sub->prev = head;
        head->next = sub;
    }
    b32 = disp->bits32;
    b28 = disp->bits28;
    b32 &= ~mask;
    disp->head = (void *)sub;
    nb = b28 | mask;
    disp->bits32 = b32;
    diff = b28 ^ nb;
    if (diff != 0) {
        ctr = 32;
        bit = 1;
        idx = 0;
        p = disp->slots;
        do {
            if ((diff & bit) != 0) {
                disp->bits32 |= bit;
                *p = (void *)sub;
                if (idx < disp->minidx) {
                    disp->minbit = bit;
                    disp->minidx = idx;
                }
                if (idx > disp->maxidx) {
                    disp->maxidx = idx;
                }
            }
            p++;
            idx++;
            bit <<= 1;
            ctr--;
        } while (ctr != 0);
    }
    disp->bits28 |= mask;
}
