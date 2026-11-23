/* MemBlock__AlignMask @ 0x80185DC0 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemBlock__AlignMask @ 0x80185DC0 (0x18). ProDG -O2. */
typedef struct {
    unsigned int header;
} MemBlock;

unsigned int MemBlock__AlignMask(MemBlock *block) {
    return ~(0xFFFFFFFFu << (block->header >> 27));
}
