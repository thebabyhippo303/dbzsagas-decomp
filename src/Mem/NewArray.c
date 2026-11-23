/* Mem__NewArray @ 0x80184348 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;

extern void *MemHeap__Alloc(u32, u32);
extern u32 OSGetArenaLo(void);
extern void OSSetArenaLo(u32);
extern int lbl_80372A00 __attribute__((section(".data")));
extern u32 lbl_803DCBB0;

u32 Mem__NewArray(u32 size) {
    u32 result;
    int useHeap = 1;

    if (lbl_80372A00 == 0) {
        useHeap = 0;
    }
    if (useHeap != 0) {
        result = (u32)MemHeap__Alloc(size, lbl_803DCBB0);
        lbl_803DCBB0 = 8;
    } else {
        result = (OSGetArenaLo() + 0x1F) & ~0x1F;
        size = (size + 0x1F) & ~0x1F;
        OSSetArenaLo(result + size);
    }
    return result;
}
