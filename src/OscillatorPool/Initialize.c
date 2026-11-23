/* OscillatorPool__Initialize @ 0x80217208 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;

typedef struct {
    char l0[12];
    char l1[12];
    void *pool;
    void *pool2;
    char pad[4];
} OscPool;

extern OscPool lbl_803ADC8C __attribute__((section(".data")));
void memset(void *, int, u32);
void *MemHeap__Alloc(u32, u32);
void SList__Init(void *, s32);
void SList__LinkArray(void *, void *, s32, s32);

s32 OscillatorPool__Initialize(s32 count) {
    u8 *p;
    s32 i;
    void *pp;
    s32 cc;

    memset(&lbl_803ADC8C, 0, 36u);
    if (count == 0) {
        return 1;
    }
    lbl_803ADC8C.pool = MemHeap__Alloc((u32)(count * 44), 8u);
    SList__Init(&lbl_803ADC8C, 40);
    pp = &lbl_803ADC8C;
    cc = count;
    SList__LinkArray(pp, lbl_803ADC8C.pool, cc, 44);
    SList__Init(lbl_803ADC8C.l1, 40);
    lbl_803ADC8C.pool2 = MemHeap__Alloc((u32)(count * 4), 8u);
    p = (u8 *)lbl_803ADC8C.pool;
    for (i = 0; i < count; i++, p += 44) {
        p[0] = 8;
        p[1] = 0;
        *(u16 *)(p + 2) = 0;
    }
    return 1;
}
