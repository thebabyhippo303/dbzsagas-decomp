/* Render__CreateObjectFromDbl @ 0x80281718 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *MemHeap__Alloc(unsigned int, unsigned int);
void *LoadContext__LoadDbl(int, int, int, int);
typedef struct { int f0; int f1; } Pair8;
void *Render__CreateObjectFromDbl(void *arg0, int arg1, int arg2) {
    void *dbl;
    void *n;
    void *head;
    dbl = LoadContext__LoadDbl(arg1, arg2, 0, 0);
    n = 0;
    if (dbl == 0) {
        return n;
    }
    n = MemHeap__Alloc(16, 8);
    if (n == 0) {
        return 0;
    }
    *(Pair8 *)n = *(Pair8 *)dbl;
    head = *(void **)arg0;
    if (head == 0) {
        *(void **)((char *)arg0 + 4) = n;
        *(void **)arg0 = n;
        ((void **)n)[3] = head;
        ((void **)n)[2] = head;
    } else {
        ((void **)n)[3] = 0;
        ((void **)n)[2] = *(void **)((char *)arg0 + 4);
        ((void **)(*(void **)((char *)arg0 + 4)))[3] = n;
        *(void **)((char *)arg0 + 4) = n;
    }
    *(int *)((char *)arg0 + 12) += 1;
    return n;
}
