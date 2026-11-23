/* AIGetStreamSampleRate @ 0x8017C7B8 (size: 0x10, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
unsigned int AIGetStreamSampleRate(void) {
    volatile unsigned int *registers = (volatile unsigned int *)0xCC000000;
    register unsigned int value = registers[0x6C00 / 4];
    return (value >> 1) & 1;
}
