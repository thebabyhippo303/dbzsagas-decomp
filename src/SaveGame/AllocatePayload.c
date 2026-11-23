/* SaveGame__AllocatePayload @ 0x8014EBCC (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__AllocatePayload @ 0x8014EBCC (0x84). ProDG -O2. */
typedef struct AllocVtable {
    char pad[0xA0];
    signed short this_adjust;
    void *(*alloc)(void *self, int size);
} AllocVtable;

typedef struct AllocHeap {
    char pad[12];
    AllocVtable *vtable;
} AllocHeap;

typedef struct PayloadHeader {
    char pad[4];
    int size;
} PayloadHeader;

typedef struct SaveGameAlloc {
    char pad[0x18];
    void *payload;
    void *copied;
    PayloadHeader *header;
    char pad2[0x34 - 0x24];
    void *field_34;
} SaveGameAlloc;

extern int SaveGame__GetRecordIndexForLevel(void *self, int level);
extern void *memset(void *dst, int value, unsigned int size);
extern int lbl_803946C8 __attribute__((section(".data")));
extern AllocHeap *lbl_803DCC70 __attribute__((section(".sdata")));

void SaveGame__AllocatePayload(SaveGameAlloc *self, int size) {
    void *payload;
    AllocHeap *heap;

    SaveGame__GetRecordIndexForLevel(self, lbl_803946C8);
    heap = lbl_803DCC70;
    payload = heap->vtable->alloc((char *)heap + heap->vtable->this_adjust, size);
    self->payload = payload;
    self->copied = self->field_34;
    if (size != 0) {
        self->header->size = size;
        memset(self->payload, 0, (unsigned int)size);
    }
}
