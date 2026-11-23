/* MemHeap__IsRegistered @ 0x80181CB4 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemHeap__IsRegistered @ 0x80181CB4 (0x30). ProDG -O2. */
typedef struct MemHeap MemHeap;
struct MemHeap {
	char pad[8];
	MemHeap *next;
};

extern MemHeap *g_mem_heap_region_list;

int MemHeap__IsRegistered(MemHeap *heap) {
	MemHeap *current = g_mem_heap_region_list;
	while (current != 0) {
		if (heap == current)
			return 1;
		current = current->next;
	}
	return 0;
}
