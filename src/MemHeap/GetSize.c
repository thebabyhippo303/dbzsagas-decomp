/* MemHeap__GetSize @ 0x80181550 (size: 0x8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemHeap__GetSize @ 0x80181550 (0x8). ProDG -O2. */
typedef struct {
	char pad[0x14];
	unsigned int size;
} MemHeap;

unsigned int MemHeap__GetSize(MemHeap *heap) {
	return heap->size;
}
