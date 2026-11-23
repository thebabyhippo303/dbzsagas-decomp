/* MemHeap__FreeSpan @ 0x80182134 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemHeap__FreeSpan @ 0x80182134 (0x38). ProDG -O2. */
typedef struct MemHeap MemHeap;

void MemHeap__Free(MemHeap *heap, void *span, int flags, int mode);

void MemHeap__FreeSpan(MemHeap *heap, void *span, unsigned int size) {
    *(unsigned int *)span = (size - 4) & 0x07FFFFFFu;
    MemHeap__Free(heap, span, 0, 0);
}
