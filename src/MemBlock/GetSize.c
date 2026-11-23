/* MemBlock__GetSize @ 0x80185D44 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemBlock__GetSize @ 0x80185D44 (0x18). ProDG -O2. */
typedef struct {
    unsigned int header;
} MemBlock;

unsigned int MemBlock__GetSize(MemBlock *block) {
    unsigned int header = block->header;
    unsigned int size = header & 0x07FFFFFFu;
    if (header & 0x04000000u) {
        size |= 0xF8000000u;
    }
    return size;
}
