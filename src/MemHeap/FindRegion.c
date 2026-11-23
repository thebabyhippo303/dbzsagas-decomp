/* MemHeap__FindRegion @ 0x80181C7C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemHeap__FindRegion @ 0x80181C7C (0x38). ProDG -O2. */
typedef struct MemHeap MemHeap;
struct MemHeap {
	char pad0[8];
	MemHeap *next;
	char pad1[4];
	void *start;
	unsigned int size;
};

MemHeap *MemHeap__FindRegion(MemHeap *region, const void *pointer) {
	unsigned int address = (unsigned int)pointer;
	while (region != 0) {
		unsigned int start = (unsigned int)region->start;
		if (address >= start && address < start + region->size)
			return region;
		region = region->next;
	}
	return 0;
}
