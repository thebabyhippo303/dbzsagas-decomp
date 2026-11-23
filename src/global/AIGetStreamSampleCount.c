/* AIGetStreamSampleCount @ 0x8017C4E0 (size: 0x10, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
unsigned int AIGetStreamSampleCount(void) {
    volatile unsigned int *p = (volatile unsigned int *)0xCC006C00;
    return p[2];
}
