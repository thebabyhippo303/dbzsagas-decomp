/* MemHeap__NextPow2 @ 0x80181DD4 (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MemHeap__NextPow2 @ 0x80181DD4 (0x20). ProDG -O2. */
unsigned int MemHeap__NextPow2(unsigned int size) {
    unsigned int result = 8;
    while (result < size) {
        result <<= 1;
    }
    return result;
}
