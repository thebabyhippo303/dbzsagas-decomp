/* App__InitializeMemoryHeaps @ 0x8017FCDC (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: App__InitializeMemoryHeaps @ 0x8017FCDC (0x124). ProDG -O2. */
extern void *OSGetArenaLo(void);
extern void *OSGetArenaHi(void);
extern void OSSetArenaLo(void *p);
extern void MemHeap__InitializeSystem(void);
extern void *MemHeap__Create(void *lo, unsigned int size, int c, const char *name, int e, int f, int g);
extern void MemHeap__SetCurrent(void *heap);
extern void *VMAlloc(void *a, void *b);
extern unsigned int MemHeap__GetSize(void *heap);
extern void Debug__FormatMessage(const char *fmt, ...);
extern char lbl_8033D2E0[];
extern char lbl_8033D2E8[];
extern char lbl_8033D2F0[];
extern void *lbl_803DE5EC;
extern void *lbl_803DE5F0;

typedef struct {
    unsigned int size;
    int f4;
    void *arenaLo;
    void *mainHeap;
    int f16;
    int f20;
    void *virtHeap;
    int f28;
} HeapState;

extern HeapState lbl_803729F4;

int App__InitializeMemoryHeaps(void) {
    void *hi;
    void *va;
    void *vb;
    void *mainHeap;
    unsigned int lo;
    unsigned int size;
    unsigned int hiEnd;
    int handles;
    unsigned int avail;
    int heapExists = (lbl_803729F4.mainHeap != 0);

    if (heapExists)
        return 1;
    lbl_803729F4.arenaLo = OSGetArenaLo();
    hi = OSGetArenaHi();
    lbl_803729F4.size = (unsigned int)((char *)hi - (char *)lbl_803729F4.arenaLo);
    OSSetArenaLo(hi);
    MemHeap__InitializeSystem();
    mainHeap = MemHeap__Create(lbl_803729F4.arenaLo, lbl_803729F4.size, 0, lbl_8033D2E0, lbl_803729F4.f4, 0, lbl_803729F4.f20);
    lbl_803729F4.f16 = 1;
    lbl_803729F4.mainHeap = mainHeap;
    MemHeap__SetCurrent(lbl_803729F4.mainHeap);
    va = lbl_803DE5EC;
    vb = lbl_803DE5F0;
    VMAlloc(va, vb);
    lbl_803729F4.virtHeap = MemHeap__Create(va, vb, 0, lbl_8033D2E8, 3072, 1, lbl_803729F4.f28);
    lo = (unsigned int)lbl_803729F4.arenaLo;
    size = lbl_803729F4.size;
    hiEnd = lo + size - 1;
    handles = lbl_803729F4.f4;
    avail = MemHeap__GetSize(lbl_803729F4.mainHeap);
    Debug__FormatMessage(lbl_8033D2F0, lo, hiEnd, size, handles, avail);
    return 1;
}
