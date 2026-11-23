/* MemoryCard__Alloc @ 0x801D7184 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct VT {
    char pad[48];
    short adjust;
    short pad1;
    unsigned int (*bytesToBlocks)(void *self, unsigned int bytes);
} VT;

typedef struct Card {
    char pad[12];
    VT *vtable;
} Card;

extern void *MemHeap__Alloc(unsigned int size, unsigned int align);
extern void *MemHeap__SetCurrent(void *heap);
extern int OSDisableInterrupts(void);
extern void OSDisableScheduler(void);
extern void OSEnableScheduler(void);
extern void OSRestoreInterrupts(int level);
extern void *memset(void *, int, unsigned int);
extern void *lbl_80372A0C __attribute__((section(".data")));

void *MemoryCard__Alloc(Card *self, unsigned int bytes) {
    int level;
    unsigned int size;
    void *prev;
    char *mem;
    level = OSDisableInterrupts();
    OSDisableScheduler();
    OSRestoreInterrupts(level);
    prev = MemHeap__SetCurrent(lbl_80372A0C);
    bytes = ((bytes + 7) & ~7u) + 64;
    size = self->vtable->bytesToBlocks((char *)self + self->vtable->adjust, bytes) << 13;
    mem = MemHeap__Alloc(size, 8);
    MemHeap__SetCurrent(prev);
    if (mem == 0) {
        mem = MemHeap__Alloc(size, 8);
    }
    level = OSDisableInterrupts();
    OSEnableScheduler();
    OSRestoreInterrupts(level);
    memset(mem, 0, size);
    return mem + 32;
}
