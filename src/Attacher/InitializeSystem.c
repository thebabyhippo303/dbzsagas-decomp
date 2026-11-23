/* Attacher__InitializeSystem @ 0x80214A40 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
typedef struct {
    char l0[12];
    char l1[12];
    void *pool;
    s32 f28;
    s32 count;
    char pad[24];
} AttacherSys;
extern AttacherSys lbl_803ACF90 __attribute__((section(".data")));
void memset(void *, int, u32);
void *MemHeap__Alloc(u32, u32);
void SList__Init(void *, s32);
void SList__LinkArray(void *, void *, s32, s32);
s32 Attacher__InitializeSystem(s32 arg0) {
    s32 count = arg0;
    u8 *e;
    s32 i;

    memset(&lbl_803ACF90, 0, 60u);
    if (count == 0) {
        return 1;
    }
    lbl_803ACF90.count = count;
    lbl_803ACF90.pool = MemHeap__Alloc((u32)(count * 92), 8u);
    SList__Init(&lbl_803ACF90, 4);
    SList__LinkArray(&lbl_803ACF90, lbl_803ACF90.pool, lbl_803ACF90.count, 92);
    SList__Init(lbl_803ACF90.l1, 4);
    e = (u8 *)lbl_803ACF90.pool;
    for (i = 0; i < lbl_803ACF90.count; i++, e += 92) {
        *(u32 *)e = 0;
        *(u16 *)(e + 68) = 0;
    }
    return 1;
}
