/* Database__BeginLoadedIteration @ 0x80203F50 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__BeginLoadedIteration @ 0x80203F50 (0x30). ProDG -O2. */
typedef struct {
	char pad[0x10];
	void *head;
	char pad2[0x24];
	short type;
} LoadedDb;

extern LoadedDb lbl_803ADB5C;
extern void *Database__AdvanceLoadedIterator(void *entry);

void *Database__BeginLoadedIteration(int type) {
	lbl_803ADB5C.type = type;
	return Database__AdvanceLoadedIterator(lbl_803ADB5C.head);
}
