/* SaveGame__ReadPayloadBlock @ 0x8014FB94 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__ReadPayloadBlock @ 0x8014FB94 (0x12C). ProDG -O2. */
typedef struct {
    char pad[16];
    short adj_a;
    char pad_a[2];
    void (*fn_a)(void *self, int arg);
    short adj_b;
    char pad_b[2];
    void (*fn_b)(void *self, int arg);
    char pad1[64];
    short adj_c;
    char pad_c[2];
    int (*fn_c)(void *self, void *buf, int size, int flag);
    char pad2[48];
    short adj_d;
    char pad_d[2];
    int (*fn_d)(void *self, int arg);
} PayloadHeapVtable;

typedef struct {
    char pad[12];
    PayloadHeapVtable *vtable;
} PayloadHeap;

typedef struct {
    char pad[4];
    int size;
    char pad2[0x50];
    int extra;
} PayloadHeader;

typedef struct {
    char pad[0x14];
    int status;
    int field_18;
    int field_1C;
    PayloadHeader *header;
    char pad2[4];
    int field_28;
    char pad3[4];
    void *small_data;
    void *large_data;
    char pad4[8];
    void *block;
} SavePayload;

void SaveGame__AllocatePayload(void *self, int size);
int SaveGame__VerifySmallBlockHash(void *save, void *block, void *data);
int SaveGame__VerifyLargeBlockHash(void *save, void *block, void *data);
int fn_80255AE0(int a, int b);

extern PayloadHeap *lbl_803DCC70 __attribute__((section(".sdata")));

int SaveGame__ReadPayloadBlock(SavePayload *self) {
    PayloadHeap *heap;
    PayloadHeapVtable *vtable;
    int result;

    SaveGame__AllocatePayload(self, self->header->size);

    heap = lbl_803DCC70;
    vtable = heap->vtable;
    result = vtable->fn_d((char *)heap + vtable->adj_d, self->field_28);
    if (result != 0) {
        return result;
    }

    heap = lbl_803DCC70;
    vtable = heap->vtable;
    vtable->fn_a((char *)heap + vtable->adj_a, 0);

    heap = lbl_803DCC70;
    vtable = heap->vtable;
    vtable->fn_b((char *)heap + vtable->adj_b, 0);

    heap = lbl_803DCC70;
    vtable = heap->vtable;
    result = vtable->fn_c((char *)heap + vtable->adj_c, self->block, 9232, 1);
    if (result != 0) {
        return result;
    }

    if (SaveGame__VerifySmallBlockHash(self, self->block, self->small_data) == 0) {
        return 7;
    }
    if (SaveGame__VerifyLargeBlockHash(self, self->block, self->large_data) == 0) {
        return 7;
    }

    self->field_18 = fn_80255AE0(self->field_1C + self->header->extra, self->field_18);
    self->status = 4;
    return 0;
}
