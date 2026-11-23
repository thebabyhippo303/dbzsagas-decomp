/* MemHeap__InitializeSystem @ 0x801813E0 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemHeap__InitializeSystem @ 0x801813E0 (0xA0). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct HeapEntry HeapEntry;
struct HeapEntry {
    s32 f0;
    s32 f4;
    HeapEntry *next;
    s32 fC;
    char pad[8];
    s32 f18;
    char pad2[12];
};
void OSInitMutex(void *);
extern char lbl_803A1AE0 __attribute__((section(".data")));
extern HeapEntry lbl_803A1A40[4] __attribute__((section(".data")));
extern s32 lbl_803DD4BC __attribute__((section(".sdata")));
extern HeapEntry *lbl_803DD4C0 __attribute__((section(".sdata")));
extern s32 lbl_803DD4C4 __attribute__((section(".sdata")));
void MemHeap__InitializeSystem(void) {
    s32 i;
    OSInitMutex(&lbl_803A1AE0);
    for (i = 0; i < 4; i++) {
        lbl_803A1A40[i].fC = 0;
        lbl_803A1A40[i].f18 = 0;
        lbl_803A1A40[i].f0 = 0;
        lbl_803A1A40[i].f4 = 0;
        if (i == 3) {
            lbl_803A1A40[i].next = 0;
        } else {
            lbl_803A1A40[i].next = &lbl_803A1A40[i + 1];
        }
    }
    lbl_803DD4C4 = 0;
    lbl_803DD4C0 = lbl_803A1A40;
    lbl_803DD4BC = 0;
}
