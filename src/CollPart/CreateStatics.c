/* CollPart__CreateStatics @ 0x80280BC0 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *Mem__New(unsigned int size);
extern void *Mem__NewArray(unsigned int size);
extern char lbl_80350500[];

void *CollPart__CreateStatics(char *self) {
    register int zero;
    void *buf;
    register int eight;
    register int one;
    char *sub;
    void *items;

    *(void **)self = lbl_80350500;
    zero = 0;
    buf = Mem__New(24);
    eight = 8;
    one = 1;
    sub = self + 4;
    items = Mem__NewArray(32);
    *(void **)buf = items;
    *(void **)(self + 4) = buf;
    *(int *)((char *)buf + 4) = zero;
    *(int *)((char *)buf + 8) = eight;
    *(int *)((char *)buf + 16) = zero;
    *(int *)((char *)buf + 20) = zero;
    *(int *)((char *)buf + 12) = eight;
    *(int *)(sub + 4) = one;
    *(int *)(*(char **)(self + 4) + 20) = one;
    return self;
}
