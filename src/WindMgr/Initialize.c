/* WindMgr__Initialize @ 0x80217568 (size: 0x100, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    s8 b0;
    s8 b1;
    s16 h2;
    s32 w4;
    char pad[0x80];
} WindEntry;

typedef struct {
    char list0[12];
    char list1[12];
    WindEntry *entries;
    s32 f1C;
    s32 count;
    s32 f24;
    s16 f28;
    char pad2[2];
    void *f2C;
    char pad3[8];
} WindMgrState;

void SList__Init(void *, s32);
void SList__LinkArray(void *, s32, s32, s32);
void *MemHeap__Alloc(s32, s32);
void memset(void *, int, int);
extern WindMgrState lbl_803ADCB0 __attribute__((section(".data")));

s32 WindMgr__Initialize(s32 arg0) {
    s32 count = arg0;
    s32 size;
    WindEntry *e;
    s32 i;

    memset(&lbl_803ADCB0, 0, 0x38);
    lbl_803ADCB0.f28 = 0x9000;
    lbl_803ADCB0.f24 = 0;
    if (count == 0) {
        return 1;
    }
    size = count * 136;
    lbl_803ADCB0.count = count;
    lbl_803ADCB0.entries = MemHeap__Alloc(size, 8);
    SList__Init(&lbl_803ADCB0, 132);
    SList__LinkArray(&lbl_803ADCB0, lbl_803ADCB0.entries, lbl_803ADCB0.count, 136);
    SList__Init(lbl_803ADCB0.list1, 132);
    lbl_803ADCB0.f2C = MemHeap__Alloc(lbl_803ADCB0.count * 4, 8);
    e = lbl_803ADCB0.entries;
    for (i = 0; i < lbl_803ADCB0.count; i++, e++) {
        e->b0 = 2;
        e->b1 = 0;
        e->h2 = 0;
        e->w4 = 0;
    }
    return 1;
}
