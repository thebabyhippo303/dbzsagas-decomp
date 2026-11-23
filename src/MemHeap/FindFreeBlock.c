/* MemHeap__FindFreeBlock @ 0x80181DA8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemHeap__FindFreeBlock @ 0x80181DA8 (0x2C). ProDG -O2. */
typedef struct FreeBlock {
    struct FreeBlock *prev;
    struct FreeBlock *next;
} FreeBlock;

FreeBlock *MemHeap__FindFreeBlock(FreeBlock **head, FreeBlock *target) {
    FreeBlock *block = *head;
    while (block != 0 && block != target) {
        block = block->next;
    }
    return block;
}
