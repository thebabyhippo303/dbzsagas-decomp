/* Database__ResolveArrayReference @ 0x80206508 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__ResolveArrayReference @ 0x80206508 (0x54). ProDG -O2. */
typedef struct {
	char pad[2];
	unsigned short flags;
	int count;
} DatabaseArrayHeader;

extern void Database__FixupPointerArray(char *base);

int Database__ResolveArrayReference(void *array, DatabaseArrayHeader *header,
		void **out_array, int *out_count) {
	Database__FixupPointerArray(array);
	header->flags &= (unsigned short)~1u;
	*out_array = array;
	*out_count = header->count;
	return 1;
}
