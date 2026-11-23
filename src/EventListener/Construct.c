/* EventListener__Construct @ 0x80251214 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void EventDispatcher__LinkListener(void *, void *);
extern char lbl_80348710[];
extern char lbl_803B1DDC[];

void *EventListener__Construct(void *arg0) {
    register int zero;
    void *self = arg0;

    zero = 0;
    *(void **)((char *)self + 24) = lbl_80348710;
    *(int *)self = zero;
    *(int *)((char *)self + 4) = zero;
    *(int *)((char *)self + 16) = zero;
    *(int *)((char *)self + 20) = zero;
    *(int *)((char *)self + 8) = zero;
    *(int *)((char *)self + 12) = zero;
    EventDispatcher__LinkListener(&lbl_803B1DDC, self);
    return self;
}
