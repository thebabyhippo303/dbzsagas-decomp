/* Mem__New @ 0x801842C4 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

void *MemHeap__Alloc(u32, u32);
void *OSGetArenaLo(void);
void OSSetArenaLo(void *);
extern s32 lbl_80372A00 __attribute__((section(".data")));
extern u32 lbl_803DCBB0 __attribute__((section(".sdata")));

void *Mem__New(u32 size) {
    s32 heapActive = lbl_80372A00 != 0;
    void *result;
    if (heapActive != 0) {
        result = MemHeap__Alloc(size, lbl_803DCBB0);
        lbl_803DCBB0 = 8;
    } else {
        result = (void *)(((u32)OSGetArenaLo() + 0x1F) & 0xFFFFFFE0);
        size = (size + 0x1F) & 0xFFFFFFE0;
        OSSetArenaLo((char *)result + size);
    }
    return result;
}
