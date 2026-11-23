/* EffectHandle__InitializeSystem @ 0x8022E5EC (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    s32 count;
    void *entries;
    char list1[12];
    s32 f20;
    char list2[12];
    s32 f36;
    s32 f40;
    s32 f44;
    s32 f48;
    void *a52;
    void *a56;
    void *a60;
    char pad[16];
    s32 arr[40];
    s32 f240;
} EffectState;

void memset(void *dst, int value, unsigned int n);
void *MemHeap__Alloc(s32 size, s32 align);
void IntrusiveList__Initialize(void *, s32, s32);
void IntrusiveList__InitializeArray(void *, s32, s32, s32);
extern EffectState lbl_803ADD88 __attribute__((section(".data")));
extern s32 lbl_803ADE78 __attribute__((section(".data")));

void EffectHandle__InitializeSystem(s32 arg0) {
    void *node;
    s32 *q;
    s32 n;

    memset(&lbl_803ADD88, 0, 244);
    lbl_803ADD88.f44 = 0;
    lbl_803ADD88.count = arg0;
    lbl_803ADD88.entries = MemHeap__Alloc(arg0 * 148, 8);
    IntrusiveList__Initialize(lbl_803ADD88.list1, 0, 4);
    IntrusiveList__InitializeArray(lbl_803ADD88.list1, (s32) lbl_803ADD88.entries, lbl_803ADD88.count, 148);
    IntrusiveList__Initialize(lbl_803ADD88.list2, 0, 4);
    node = M2C_FIELD(&lbl_803ADD88, void **, 8);
    if (node != NULL) {
        do {
            M2C_FIELD(node, s32 *, 24) = 0;
            node = M2C_FIELD(node, void **, 0);
        } while (node != NULL);
    }
    lbl_803ADD88.a52 = MemHeap__Alloc(lbl_803ADD88.count * 96, 8);
    lbl_803ADD88.a56 = MemHeap__Alloc(lbl_803ADD88.count * 64, 8);
    lbl_803ADD88.a60 = MemHeap__Alloc(lbl_803ADD88.count * 32, 8);
    q = &lbl_803ADD88.arr[39];
    n = 40;
    do {
        *q = 0;
        q--;
        n--;
    } while (n != 0);
    lbl_803ADE78 = 0;
}
