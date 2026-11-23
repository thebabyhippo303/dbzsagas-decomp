/* AIGetDSPSampleRate @ 0x8017C6D0 (size: 0x14, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
unsigned int AIGetDSPSampleRate(void) {
    volatile unsigned int *registers = (volatile unsigned int *)0xCC000000;
    unsigned int bit = (registers[0x6C00 / 4] >> 6) & 1;
    return bit ^ 1;
}
