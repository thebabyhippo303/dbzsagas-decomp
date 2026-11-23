/* MemHeap__SetCurrent @ 0x801817CC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemHeap__SetCurrent @ 0x801817CC (0x48). ProDG -O2. */
extern void *lbl_803DD4BC;
extern int MemHeap__IsRegistered(void *heap);

void *MemHeap__SetCurrent(void *heap) {
    void *old = lbl_803DD4BC;
    if (heap == 0 || MemHeap__IsRegistered(heap) != 0)
        lbl_803DD4BC = heap;
    return old;
}
