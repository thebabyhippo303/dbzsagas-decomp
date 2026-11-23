/* MemBlock__SetSizeFromEnd @ 0x801821FC (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct { unsigned int header; } MemBlock;
typedef unsigned int u32;
MemBlock *MemBlock__SetSizeFromEnd(MemBlock *block, char *end) {
    u32 size = (u32)(end - (char *)block);
    block->header = (size - 4) & 0x07FFFFFF;
    return block;
}
